/* Insert-vsetvli pass for RISC-V 'V' Extension for GNU compiler.
   Copyright(C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or(at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#define IN_TARGET_CODE 1
#define INCLUDE_ALGORITHM 1
#define INCLUDE_FUNCTIONAL 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "backend.h"
#include "regs.h"
#include "target.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "df.h"
#include "rtl-ssa.h"
#include "predict.h"
#include "insn-config.h"
#include "insn-attr.h"
#include "recog.h"
#include "cfgrtl.h"
#include "tree.h"
#include "gimple.h"
#include "tree-pass.h"
#include "ssa.h"
#include "gimple-iterator.h"
#include "gimple-walk.h"
#include "langhooks.h"
#include "tree-iterator.h"
#include "gimplify.h"
#include "explow.h"
#include "cfgcleanup.h"

#include <map>
#include <vector>
#include <queue>
#include <set>
#include <tuple>

#include "riscv-protos.h"
#include "riscv-vector-builtins-functions.h"
#include "riscv-vector-builtins.h"

using namespace riscv_vector;
using namespace rtl_ssa;

/*  This pass is to insert vsetvli instructions for RVV instructions that depend on vtype or vl.
    Because Clang+LLVM compiler has the mature pass to insert vsetvli instructions and works well,
    algorithm follows the Clang+LLVM compiler Pass.

    This pass consists of 3 phases:

    Phase 1 collects how each basic block affects VL/VTYPE.

    Phase 2 uses the information from phase 1 to do a data flow analysis to
    propagate the VL/VTYPE changes through the function. This gives us the
    VL/VTYPE at the start of each basic block.

    Phase 3 inserts vsetvli instructions in each basic block. Information from
    phase 2 is used to prevent inserting a vsetvli before the first vector
    instruction in the block if possible.  */

enum state_enum
{
  STATE_UNINITIALIZED,
  STATE_KNOWN,
  STATE_UNKNOWN
};

enum replace_enum
{
  REPLACE_VL,
  REPLACE_VTYPE
};

enum clobber_pat_enum
{
  MOV_CLOBBER_MEM_REG,
  MOV_CLOBBER_REG_MEM,
  MOV_CLOBBER_REG_REG,
  MOV_CLOBBER_REG_CONST,
  OTHERS
};

/* Helper functions. */

static unsigned int
get_policy_offset (rtx_insn *insn)
{
  unsigned int offset = 1;
  if (GET_CODE (PATTERN (insn)) == PARALLEL)
    {
      if (get_attr_type (insn) == TYPE_VCMP)
        offset = 2;
    }
  return offset;
}

static unsigned int
get_vl_offset (rtx_insn *insn)
{
  unsigned int offset = 2;
  if (GET_CODE (PATTERN (insn)) == PARALLEL)
    {
      if (get_attr_type (insn) == TYPE_VCMP)
        offset = 3;
    }
  return offset;
}

static enum clobber_pat_enum
recog_clobber_vl_vtype (rtx_insn *insn)
{
  /*
   [(set (match_operand 0 "reg_or_mem_operand" "=vr,m,vr")
         (match_operand 1 "reg_or_mem_operand" "m,vr,vr"))
         (clobber (match_scratch:SI 2 "=&r,&r,X"))
         (clobber (reg:SI VL_REGNUM))
         (clobber (reg:SI VTYPE_REGNUM))]
  */
  rtx pat = PATTERN (insn);
  if (GET_CODE (pat) != PARALLEL)
    return OTHERS;

  unsigned int len = XVECLEN (pat, 0);
  if (len < 3)
    return OTHERS;

  if (!rtx_equal_p (
          XVECEXP (pat, 0, len - 1),
          gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (SImode, VTYPE_REGNUM))))
    return OTHERS;

  if (!rtx_equal_p (XVECEXP (pat, 0, len - 2),
                    gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (SImode, VL_REGNUM))))
    return OTHERS;

  extract_insn_cached (insn);
  rtx mov_pat = gen_rtx_SET (recog_data.operand[0], recog_data.operand[1]);
  if (!rtx_equal_p (XVECEXP (pat, 0, 0), mov_pat))
    return OTHERS;
  
  if (MEM_P (recog_data.operand[0]))
    return MOV_CLOBBER_MEM_REG;
 
  if (MEM_P (recog_data.operand[1]))
    return MOV_CLOBBER_REG_MEM;
  
  if (REG_P (recog_data.operand[1]))
    return MOV_CLOBBER_REG_REG;
  
  if (CONST_VECTOR_P (recog_data.operand[1]))
    return MOV_CLOBBER_REG_CONST;
      
  return OTHERS;
}

static bool
is_vector_config_instr (rtx_insn *insn)
{
  return insn && INSN_P (insn) && recog_memoized (insn) >= 0 &&
         get_attr_type (insn) == TYPE_VSETVL;
}

/// Return true if this is 'vsetvli x0, x0, vtype' which preserves
/// VL and only sets VTYPE.
static bool
is_vl_preserving_config (rtx_insn *insn)
{
  if (is_vector_config_instr (insn))
    {
      extract_insn_cached (insn);
      return recog_data.n_operands == 1;
    }
  return false;
}

static bool
rvv_insn_p (rtx_insn *insn, rtx *src)
{
  *src = NULL_RTX;
  if (!insn)
    return false;
  
  if (!INSN_P (insn))
    return false;
  
  if (recog_memoized (insn) < 0)
    return false;
  
  if (!riscv_vector_mode_p (riscv_translate_attr_mode (insn)))
    return false;
  
  if (recog_clobber_vl_vtype (insn) != OTHERS)
    {
      if (reload_completed)
        {
          *src = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
          return true;
        }
      else
        return false;
    }
  
  if (GET_CODE (PATTERN (insn)) == PARALLEL)
    *src = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));

  if (GET_CODE (PATTERN (insn)) == SET)
    *src = SET_SRC (PATTERN (insn));

  if (!*src)
    return false;

  if (GET_CODE (*src) != UNSPEC)
    return false;

  if (XINT (*src, 1) != UNSPEC_RVV)
    return false;

  return true;
}

static bool
use_vl_p (rtx_insn *insn)
{
  rtx src = NULL_RTX;
  if (!rvv_insn_p (insn, &src))
    return false;
  
  if (recog_clobber_vl_vtype (insn) != OTHERS)
    return true;

  if (rtx_equal_p (XVECEXP (src, 0, XVECLEN (src, 0) - 1),
                   gen_rtx_REG (SImode, VL_REGNUM)))
    return true;

  if (XVECLEN (src, 0) > 1 &&
      rtx_equal_p (XVECEXP (src, 0, XVECLEN (src, 0) - 2),
                   gen_rtx_REG (SImode, VL_REGNUM)))
    return true;

  return false;
}

static bool
use_vtype_p (rtx_insn *insn)
{ 
  rtx src = NULL_RTX;
  if (!rvv_insn_p (insn, &src))
    return false;
  
  if (recog_clobber_vl_vtype (insn) != OTHERS)
    return true;
    
  if (rtx_equal_p (XVECEXP (src, 0, XVECLEN (src, 0) - 1),
                   gen_rtx_REG (SImode, VTYPE_REGNUM)))
    return true;

  return false;
}

static bool
use_vlmax_p (rtx_insn *insn)
{
  rtx src = NULL_RTX;
  unsigned int length = 0;
  
  if (recog_clobber_vl_vtype (insn) != OTHERS)
    return true;
    
  if (rvv_insn_p (insn, &src))
    length = XVECLEN (src, 0);
  
  if (length < 2)
    return false;

  if (rtx_equal_p (XVECEXP (src, 0, length - 1),
                   gen_rtx_REG (SImode, VL_REGNUM)))
    return rtx_equal_p (XVECEXP (src, 0, length - 2),
                        gen_rtx_REG (Pmode, X0_REGNUM));

  if (length < 3)
    return false;

  return rtx_equal_p (XVECEXP (src, 0, length - 3),
                      gen_rtx_REG (Pmode, X0_REGNUM));
}

static bool
need_vsetvli_p (rtx_insn *insn)
{
  rtx src = NULL_RTX;
  if (!rvv_insn_p (insn, &src))
    return false;
  return true;
}

static void
replace_op (rtx_insn *insn, rtx x, unsigned int replace)
{
  extract_insn_cached (insn);
  if (replace == REPLACE_VTYPE)
    validate_change (insn, recog_data.operand_loc[recog_data.n_operands - 1], x, false);

  if (replace == REPLACE_VL && !use_vlmax_p (insn))
    {
      unsigned int offset = get_vl_offset (insn);
      validate_change (insn,
                       recog_data.operand_loc[recog_data.n_operands - offset],
                       x, false);
    }
}

static bool
update_vl_vtype_p (rtx_insn *insn)
{
  if (insn && NONDEBUG_INSN_P (insn))
    {
      if (recog_memoized (insn) >= 0 &&
          (get_attr_type (insn) == TYPE_VLEFF ||
           get_attr_type (insn) == TYPE_VLSEGFF))
        {
          extract_insn_cached (insn);
          if (INTVAL (recog_data.operand[recog_data.n_operands - 1]) ==
              DO_NOT_UPDATE_VL_VTYPE)
            return false;
          return true;
        }
      if (CALL_P (insn))
        return true;
      if (PATTERN (insn) && (GET_CODE (PATTERN (insn)) == ASM_INPUT ||
                             GET_CODE (PATTERN (insn)) == ASM_OPERANDS ||
                             asm_noperands (PATTERN (insn)) >= 0))
        return true;
    }
  return false;
}

static rtx
get_avl_source (rtx avl, rtx_insn *rtl)
{
  if (!rtl || !avl)
    return NULL_RTX;

  if (optimize < 2)
    return NULL_RTX;

  insn_info *next;
  rtx avl_source = NULL_RTX;

  if (!REG_P (avl))
    return NULL_RTX;

  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->rtl () == rtl)
        {
          resource_info resource{GET_MODE (avl), REGNO (avl)};
          def_lookup dl = crtl->ssa->find_def (resource, insn);
          def_info *def = dl.prev_def (insn);

          if (!def)
            return NULL_RTX;

          if (!is_a<set_info *> (def))
            return NULL_RTX;

          insn_info *def_insn = def->insn ();

          if (!def_insn)
            return NULL_RTX;
          rtx_insn *def_rtl = def_insn->rtl ();

          if (!def_rtl)
            return NULL_RTX;

          if (INSN_P (def_rtl) && single_set (def_rtl))
            {
              avl_source = SET_SRC (single_set (def_rtl));
              break;
            }
        }
    }

  return avl_source;
}

static machine_mode
vsew_to_int_mode (unsigned vsew)
{
  return vsew == 0 ? QImode : vsew == 1 ? HImode : vsew == 2 ? SImode : DImode;
}

class vinfo
{
private:
  state_enum state;
  // Fields from VTYPE.
  uint8_t vma : 1;
  uint8_t vta : 1;
  uint8_t vsew : 3;
  uint8_t vlmul : 3;
  uint8_t all_maskop_p : 1;
  uint8_t store_p : 1;
  uint8_t sew_lmul_ratio_only_p : 1;
  uint8_t scalar_move_p : 1;
  rtx avl;
  rtx avl_source;

public:
  vinfo ()
      : state (STATE_UNINITIALIZED), vma (false), vta (false), vsew (0),
        vlmul (0), all_maskop_p (false), store_p (false), sew_lmul_ratio_only_p (false),
        scalar_move_p (false), avl (NULL_RTX), avl_source (NULL_RTX)
  {
  }

  ~vinfo () {}
  
  static vinfo
  get_unknown ()
  {
    vinfo info;
    info.set_unknown ();
    return info;
  }

  bool
  valid_p () const
  {
    return state != STATE_UNINITIALIZED;
  }
  void
  set_unknown ()
  {
    state = STATE_UNKNOWN;
  }
  bool
  unknown_p () const
  {
    return state == STATE_UNKNOWN;
  }

  bool
  known_p () const
  {
    return state == STATE_KNOWN;
  }

  void
  set_avl (rtx op)
  {
    avl = op;
    state = STATE_KNOWN;
  }

  void
  set_avl_source (rtx op)
  {
    avl_source = op;
  }

  bool
  avl_const_p () const
  {
    return get_avl () && CONST_SCALAR_INT_P (get_avl ());
  }
  
  bool
  avl_reg_p () const
  {
    return get_avl () && REG_P (get_avl ());
  }

  rtx
  get_avl () const
  {
    gcc_assert (known_p ());
    return avl;
  }

  bool
  has_zero_avl () const
  {
    if (!known_p ())
      return false;
    if (get_avl () == NULL_RTX)
      return false;
    if (avl_const_p ())
      return INTVAL (get_avl ()) == 0; 
    return false;
  }

  bool
  has_nonzero_avl () const
  {
    if (!known_p ())
      return false;
    if (get_avl () == NULL_RTX)
      return false;
    if (avl_const_p ())
      return INTVAL (get_avl ()) > 0; 
    if (avl_reg_p ())
      return rtx_equal_p (get_avl (), gen_rtx_REG (Pmode, X0_REGNUM));
    return false;
  }

  rtx
  get_avl_source () const
  {
    gcc_assert (known_p ());
    return avl_source;
  }

  unsigned int
  get_vsew () const
  {
    return vsew;
  }
  
  enum vlmul_field_enum
  get_vlmul () const
  {
    return (enum vlmul_field_enum) vlmul;
  }
  
  unsigned int
  get_vta () const
  {
    return vta;
  }
  
  unsigned int
  get_vma () const
  {
    return vma;
  }

  uint8_t
  get_store_p () const
  {
    return store_p;
  }
  
  bool
  compare_vl (const vinfo &info) const
  {
    /* Optimize the code as follows:
       if RVV is a fixed vector-length = 128bit.
       vsetvli a5, 16, e8, m1......
       .........
       vsetvli a5, zero, e8, m1.....(no need)
    */
    if (!get_avl () || !info.get_avl ())
      return false;

    if (REG_P (get_avl ()) && REGNO (get_avl ()) == X0_REGNUM)
      {
        unsigned int vsew = info.get_vsew ();
        machine_mode inner = vsew_to_int_mode (vsew);
        machine_mode mode = riscv_vector::vector_builtin_mode (
            as_a<scalar_mode> (inner), info.get_vlmul ());
        if (CONST_SCALAR_INT_P (info.get_avl ()))
          {
            if (GET_MODE_NUNITS (mode).is_constant () &&
                INTVAL (info.get_avl ()) ==
                    GET_MODE_NUNITS (mode).to_constant ())
              return true;
          }

        if (REG_P (info.get_avl ()))
          {
            if (info.get_avl_source ())
              {
                if (CONST_SCALAR_INT_P (info.get_avl_source ()) &&
                    GET_MODE_NUNITS (mode).is_constant () &&
                    INTVAL (info.get_avl_source ()) ==
                        GET_MODE_NUNITS (mode).to_constant ())
                  return true;
                if (CONST_POLY_INT_P (info.get_avl_source ()) &&
                    !GET_MODE_NUNITS (mode).is_constant () &&
                    known_eq (rtx_to_poly_int64 (info.get_avl_source ()),
                              GET_MODE_NUNITS (mode)))
                  return true;
              }
          }
      }

    return false;
  }

  bool
  avl_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p () &&
                "Can't compare AVL in unknown state.");

    if (compare_vl (other))
      return true;
      
    if (other.compare_vl (*this))
      return true;
    
    if (rtx_equal_p (get_avl (), other.get_avl ()))
      return true;

    if (!get_avl_source () && !other.get_avl_source ())
      return false;

    if (get_avl_source () && rtx_equal_p (get_avl_source (), other.get_avl ()))
      return true;

    if (other.get_avl_source () &&
        rtx_equal_p (other.get_avl_source (), get_avl ()))
      return true;

    return rtx_equal_p (get_avl_source (), other.get_avl_source ());
  }
  
  void
  set_vma (unsigned int vma)
  {
    gcc_assert (valid_p () && !unknown_p () &&
                "Can't set VTYPE for uninitialized or unknown.");
    vma = vma;
  }
  
  void
  set_vta (unsigned int vta)
  {
    gcc_assert (valid_p () && !unknown_p () &&
                "Can't set VTYPE for uninitialized or unknown.");
    vta = vta;
  }
  
  void
  set_vtype (unsigned int vtype)
  {
    gcc_assert (valid_p () && !unknown_p () &&
                "Can't set VTYPE for uninitialized or unknown.");
    vma = riscv_parse_vma_field (vtype);
    vta = riscv_parse_vta_field (vtype);
    vsew = riscv_parse_vsew_field (vtype);
    vlmul = riscv_parse_vlmul_field (vtype);
  }

  void
  set_vtype (unsigned vl, unsigned vs, bool vt, bool vm, bool m_p,
             bool st_p, bool is_scalar_move_op)
  {
    gcc_assert (valid_p () && !unknown_p () &&
                "Can't set VTYPE for uninitialized or unknown.");
    vma = vm;
    vta = vt;
    vsew = vs;
    vlmul = vl;
    all_maskop_p = m_p;
    store_p = st_p;
    scalar_move_p = is_scalar_move_op;
  }

  // Encode VTYPE into the binary format used by the the VSETVLI instruction
  // which is used by our MC layer representation.
  //
  // Bits | Name       | Description
  // -----+------------+------------------------------------------------
  // 7    | vma        | Vector mask agnostic
  // 6    | vta        | Vector tail agnostic
  // 5:3  | vsew[2:0]  | Standard element width(SEW) setting
  // 2:0  | vlmul[2:0] | Vector register group multiplier(LMUL) setting
  unsigned
  encode_vtype () const
  {
    gcc_assert (valid_p () && !unknown_p () && !sew_lmul_ratio_only_p &&
                "Can't set VTYPE for uninitialized or unknown.");
    gcc_assert (vsew >= 0 && vsew <= 7 && "Invalid SEW.");
    unsigned vtype = (vsew << 3) | (vlmul & 0x7);
    if (vta)
      vtype |= 0x40;
    if (vma)
      vtype |= 0x80;

    return vtype;
  }

  bool
  get_sew_lmul_ratio_only_p () const
  {
    return sew_lmul_ratio_only_p;
  }

  bool
  sew_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p () &&
                "Can't compare VTYPE in unknown state.");
    gcc_assert (!sew_lmul_ratio_only_p && !other.sew_lmul_ratio_only_p &&
                "Can't compare when only LMUL/SEW ratio is valid.");
    return vsew == other.vsew;
  }

  bool
  vtype_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p () &&
                "Can't compare VTYPE in unknown state.");
    gcc_assert (!sew_lmul_ratio_only_p && !other.sew_lmul_ratio_only_p &&
                "Can't compare when only LMUL/SEW ratio is valid.");
    return std::tie (vma, vta, vsew, vlmul) ==
           std::tie (other.vma, other.vta, other.vsew, other.vlmul);
  }

  bool
  policy_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p () &&
                "Can't compare VTYPE in unknown state.");
    
    return vta == other.vta && vma == other.vma;
  }

  unsigned
  calc_sew_lmul_ratio (unsigned int vsew_arg, unsigned int vlmul_arg) const
  {
    gcc_assert (valid_p () && !unknown_p () &&
                "Can't use VTYPE for uninitialized or unknown.");

    unsigned lmul;
    unsigned sew;
    bool fractional;

    switch (vsew_arg)
      {
      default:
        gcc_unreachable ();
      case 0:
        sew = 8;
        break;
      case 1:
        sew = 16;
        break;
      case 2:
        sew = 32;
        break;
      case 3:
        sew = 64;
        break;
      case 4:
        sew = 128;
        break;
      case 5:
        sew = 256;
        break;
      case 6:
        sew = 512;
        break;
      case 7:
        sew = 1024;
        break;
      }

    switch (vlmul_arg)
      {
      default:
        gcc_unreachable ();
      case 0:
        lmul = 1;
        fractional = false;
        break;
      case 1:
        lmul = 2;
        fractional = false;
        break;
      case 2:
        lmul = 4;
        fractional = false;
        break;
      case 3:
        lmul = 8;
        fractional = false;
        break;
      case 5:
        lmul = 8;
        fractional = true;
        break;
      case 6:
        lmul = 4;
        fractional = true;
        break;
      case 7:
        lmul = 2;
        fractional = true;
        break;
      }

    gcc_assert (sew >= 8 && "Unexpected SEW value.");
    unsigned int sew_mul_ratio = fractional ? sew * lmul : sew / lmul;

    return sew_mul_ratio;
  }

  unsigned
  calc_sew_lmul_ratio () const
  {
    return calc_sew_lmul_ratio (vsew, vlmul);
  }

  // Check if the VTYPE for these two VSETVLI Infos produce the same VLMAX.
  bool
  vlmax_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p () &&
                "Can't compare AVL in unknown state.");
    return calc_sew_lmul_ratio () == other.calc_sew_lmul_ratio ();
  }

  bool
  compatible_vtype_p (const vinfo &info) const
  {
    // Simple case, see if full VTYPE matches.
    if (vtype_equal_p (info))
      return true;

    // If this is a mask reg operation, it only cares about VLMAX.
    // FIXME: Mask reg operations are probably ok if "this" VLMAX is larger
    // than "InstrInfo".
    // FIXME: The policy bits can probably be ignored for mask reg operations.
    if (info.all_maskop_p && vlmax_equal_p (info) && vta == info.vta &&
        vma == info.vma)
      return true;

    return false;
  }

  // Determine whether the vector instructions requirements represented by
  // InstrInfo are compatible with the previous vsetvli instruction represented
  // by this.
  bool
  compatible_p (const vinfo &require) const
  {
    gcc_assert (valid_p () && require.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!require.sew_lmul_ratio_only_p &&
                "Expected a valid VTYPE for instruction.");

    // Nothing is compatible with Unknown.
    if (unknown_p () || require.unknown_p ())
      return false;

    // If only our VLMAX ratio is valid, then this isn't compatible.
    if (sew_lmul_ratio_only_p)
      return false;

    // If the instruction doesn't need an AVLReg and the SEW matches, consider
    // it compatible.
    if (require.known_p () && require.avl == NULL_RTX
      && vsew == require.vsew)
      return true;
    
    // For vmv.s.x and vfmv.s.f, there is only two behaviors, VL = 0 and VL > 0.
    // So it's compatible when we could make sure that both VL be the same
    // situation.
    if (require.scalar_move_p && require.get_avl () &&
        CONST_SCALAR_INT_P (require.get_avl ()) &&
        ((has_nonzero_avl () && require.has_nonzero_avl ()) ||
         (has_zero_avl () && require.has_zero_avl ())) &&
        sew_equal_p (require) && policy_equal_p (require))
      return true;
    
    // The AVL must match.
    if (!avl_equal_p (require))
      return false;
    
    if (compatible_vtype_p (require))
      return true;
      
    // Store instructions don't use the policy fields.
    // TODO: Move into hasCompatibleVTYPE?
    if (require.store_p && vlmul == require.vlmul && vsew == require.vsew)
      return true;
      
    // Anything else is not compatible.
    return false;
  }

  bool
  load_store_compatible_p (unsigned vsew_arg, const vinfo &info) const
  {
    gcc_assert (valid_p () && info.valid_p () &&
                "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!info.sew_lmul_ratio_only_p &&
                "Expected a valid VTYPE for instruction.");
    gcc_assert (vsew_arg == info.vsew && "Mismatched EEW/SEW for store.");
    
    if (unknown_p () || get_sew_lmul_ratio_only_p ())
      return false;

    if (!avl_equal_p (info))
      return false;

    // Stores can ignore the tail and mask policies.
    if (!info.store_p && (vta != info.vta || vma != info.vma))
      return false;

    return calc_sew_lmul_ratio () == calc_sew_lmul_ratio (vsew_arg, info.vlmul);
  }

  bool
  operator== (const vinfo &other) const
  {
    // Uninitialized is only equal to another Uninitialized.
    if (!valid_p ())
      return !other.valid_p ();

    if (!other.valid_p ())
      return !valid_p ();

    // Unknown is only equal to another Unknown.
    if (unknown_p ())
      return other.unknown_p ();

    if (other.unknown_p ())
      return unknown_p ();

    if (!avl_equal_p (other))
      return false;

    // If only the VLMAX is valid, check that it is the same.
    if (sew_lmul_ratio_only_p && other.sew_lmul_ratio_only_p)
      return vlmax_equal_p (other);

    // If the full VTYPE is valid, check that it is the same.
    if (!sew_lmul_ratio_only_p && !other.sew_lmul_ratio_only_p)
      return vtype_equal_p (other);

    // If the sew_lmul_ratio_only bits are different, then they aren't equal.
    return false;
  }

  bool
  operator!= (const vinfo &Other) const
  {
    return !(*this == Other);
  }

  vinfo &
  operator= (const vinfo &other)
  {
    state = other.state;
    vma = other.vma;
    vta = other.vta;
    vsew = other.vsew;
    vlmul = other.vlmul;
    all_maskop_p = other.all_maskop_p;
    sew_lmul_ratio_only_p = other.sew_lmul_ratio_only_p;
    avl = other.avl;
    avl_source = other.avl_source;
    return *this;
  }

  // Calculate the vinfo visible to a block assuming this and other are
  // both predecessors.
  vinfo
  intersect (const vinfo &other) const
  {
    // If the new value isn't valid, ignore it.
    if (!other.valid_p ())
      return *this;

    // If this value isn't valid, this must be the first predecessor, use it.
    if (!valid_p ())
      return other;

    // If either is unknown, the result is unknown.
    if (unknown_p () || other.unknown_p ())
      return vinfo::get_unknown ();

    // If we have an exact, match return this.
    if (*this == other)
      return *this;

    // Not an exact match, but maybe the AVL and VLMAX are the same. If so,
    // return an SEW/LMUL ratio only value.
    if (avl_equal_p (other) && vlmax_equal_p (other))
      {
        vinfo merge_info = *this;
        merge_info.sew_lmul_ratio_only_p = true;
        return merge_info;
      }

    // otherwise the result is unknown.
    return vinfo::get_unknown ();
  }
  
  // Print debug info into rtl dump file. */
  void
  print () const
  {
    fprintf (dump_file, "{\n");
    if (known_p ())
      fprintf (dump_file, "  Known\n");
    else if (unknown_p ())
      fprintf (dump_file, "  Unknown\n");
    else
      fprintf (dump_file, "  Uninitialized\n");
    
    if (known_p () && get_avl ())
      {
        fprintf (dump_file, "  Avl=");
        print_rtl_single (dump_file, get_avl ());
        if (get_avl_source ())
          {
            fprintf (dump_file, "  Avl Source=");
            print_rtl_single (dump_file, get_avl_source ());
          }
        else
          fprintf (dump_file, "  Avl Source=(nil)\n");
      }
    else
      fprintf (dump_file, "  Avl=(nil)\n  Avl Source=(nil)\n");
    fprintf (dump_file, "  Vsew=%d\n", (unsigned int)vsew);
    fprintf (dump_file, "  Vlmul=%d\n", (unsigned int)vlmul);
    fprintf (dump_file, "  TailAgnostic=%d\n", (unsigned int)vta);
    fprintf (dump_file, "  MaskAgnostic=%d\n", (unsigned int)vma);
    fprintf (dump_file, "  MaskOp=%d\n", (unsigned int)all_maskop_p);
    fprintf (dump_file, "  Store_p=%d\n", (unsigned int)store_p);
    fprintf (dump_file, "  Scalar_move_p=%d\n", (unsigned int)scalar_move_p);
    fprintf (dump_file, "  Sew_lmul_ratio_only_p=%d\n", (unsigned int)sew_lmul_ratio_only_p);
    fprintf (dump_file, "}\n");
  }
};

struct bb_vinfo
{
  // The vinfo that represents the net changes to the VL/VTYPE registers
  // made by this block. Calculated in Phase 1.
  vinfo change;

  // The vinfo that represents the VL/VTYPE settings on exit from this
  // block. Calculated in Phase 2.
  vinfo exit;

  // The vinfo that represents the VL/VTYPE settings from all predecessor
  // blocks. Calculated in Phase 2, and used by Phase 3.
  vinfo pred;

  // Keeps track of whether the block is already in the queue.
  bool inqueue = false;

  bb_vinfo () {}
};

static std::map<unsigned int, bb_vinfo> bb_vinfo_map;
static std::deque<basic_block> bb_queue;

static rtx_insn *
fetch_def_insn (rtx_insn *rtl, const vinfo info)
{
  /* We need use rtl ssa def_info to optimize which needs
     optimization to large than or equal to 2. */
  if (optimize < 2)
    return NULL;
  
  // We didn't find a compatible value. If our AVL is a virtual register,
  // it might be defined by a VSET(I)VLI. If it has the same VTYPE we need
  // and the last VL/VTYPE we observed is the same, we don't need a
  // VSETVLI here.
  if (!info.known_p ())
    return NULL;
  if (!info.get_avl ())
    return NULL;

  rtx avl = info.get_avl ();

  if (!REG_P (avl))
    return NULL;

  insn_info *next;
  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->rtl () == rtl)
        {
          resource_info resource{GET_MODE (avl), REGNO (avl)};
          def_lookup dl = crtl->ssa->find_def (resource, insn);
          def_info *def = dl.prev_def (insn);

          if (!def)
            return NULL;

          if (!is_a<set_info *> (def))
            return NULL;

          insn_info *def_insn = def->insn ();
          rtx_insn *def_rtl = def_insn->rtl ();

          if (!def_rtl)
            return NULL;
          if (!INSN_P (def_rtl))
            return NULL;
            
          return def_rtl;
        }
    }

  return NULL;
}

static void
emit_vsetvl_insn (rtx op0, rtx op1, rtx op2, rtx_insn *insn)
{
  if (dump_file)
    {
      fprintf (dump_file, "insert vsetvli for insn %d\n\n", INSN_UID (insn));
      print_rtl_single (dump_file, insn);
    }

  if (rtx_equal_p (op0, gen_rtx_REG (Pmode, X0_REGNUM)) &&
      rtx_equal_p (op1, gen_rtx_REG (Pmode, X0_REGNUM)))
    emit_insn_before (gen_vsetvl_zero_zero (op2), insn);
  else if (rtx_equal_p (op0, gen_rtx_REG (Pmode, X0_REGNUM)))
    emit_insn_before (gen_vsetvl_zero (Pmode, op1, op2), insn);
  else
    emit_insn_before (gen_vsetvl (Pmode, op0, op1, op2), insn);
}

static vinfo 
compute_info_for_instr (rtx_insn *, vinfo);

// Return a vinfo representing the changes made by this VSETVLI or
// VSETIVLI instruction.
static vinfo
get_info_for_vsetvli (rtx_insn *insn, vinfo curr_info)
{
  vinfo new_info;
  extract_insn_cached (insn);

  if (recog_data.n_operands == 1)
    {
      gcc_assert (CONST_INT_P (recog_data.operand[0]) &&
                  "Invalid vtype in vsetvli instruction.");
      if (curr_info.valid_p () && !curr_info.unknown_p ())
        {
          new_info.set_avl (curr_info.get_avl ());
          new_info.set_avl_source (curr_info.get_avl_source ());
          new_info.set_vtype (INTVAL (recog_data.operand[0]));
          /* if this X0, X0 vsetvli is redundant,
             remove it. */
          if (curr_info.compatible_vtype_p (new_info))
            remove_insn (insn);
        }
      else
        {
          /* vsetvli X0, X0 means that the following instruction
             use the same vl as before. */
          basic_block bb = BLOCK_FOR_INSN (insn);
          rtx_insn *next_insn;
          bool find_vl_p = false;
          for (next_insn = NEXT_INSN (insn); insn != NEXT_INSN (BB_END (bb));
               next_insn = NEXT_INSN (next_insn))
            {
              if (use_vtype_p (next_insn))
                {
                  vinfo next_info = compute_info_for_instr (next_insn, curr_info);
                  new_info.set_avl (next_info.get_avl ());
                  new_info.set_avl_source (next_info.get_avl_source ());
                  extract_insn_cached (insn);
                  new_info.set_vtype (INTVAL (recog_data.operand[0]));
                  
                  if (recog_clobber_vl_vtype (next_insn) != MOV_CLOBBER_REG_REG &&
                      recog_clobber_vl_vtype (next_insn) != OTHERS)
                    new_info = vinfo::get_unknown ();
                    
                  find_vl_p = true;
                  break;
                }
            }
          gcc_assert (find_vl_p);
        }
      return new_info;
    }
  if (recog_data.n_operands == 2)
    {
      gcc_assert (CONST_INT_P (recog_data.operand[1]) &&
                  "Invalid vtype in vsetvli instruction.");
      new_info.set_avl (recog_data.operand[0]);
      new_info.set_avl_source (get_avl_source (recog_data.operand[0], insn));
      new_info.set_vtype (INTVAL (recog_data.operand[1]));
      return new_info;
    }
  
  gcc_assert (recog_data.n_operands == 3);
  rtx vl = recog_data.operand[1];
  rtx vtype = recog_data.operand[2];
  gcc_assert (CONST_INT_P (vtype) && "Invalid vtype in vsetvli instruction.");
  new_info.set_avl (vl);
  new_info.set_avl_source (get_avl_source (vl, insn));
  new_info.set_vtype (INTVAL (vtype));
  return new_info;
}

static unsigned int
analyze_vma_vta (rtx_insn *insn, vinfo curr_info)
{
  if (!use_vl_p (insn))
    return 1;
  
  if (recog_clobber_vl_vtype (insn) != OTHERS)
    return 1;
    
  if (use_vlmax_p (insn))
    return 1;
  unsigned int offset = get_policy_offset (insn);
  extract_insn_cached (insn);
  vector_policy vma =
      riscv_vector::get_vma (INTVAL (recog_data.operand[recog_data.n_operands - offset]));
  vector_policy vta =
      riscv_vector::get_vta (INTVAL (recog_data.operand[recog_data.n_operands - offset]));
  unsigned int vma_p = 0;
  unsigned int vta_p = 0;
  if (vma == vector_policy::agnostic)
    vma_p = 1;
  else if (vma == vector_policy::undisturbed)
    vma_p = 0;
  else
    {
      /* For N/A vma we remain the last vma if it valid. */
      if (curr_info.valid_p () && !curr_info.unknown_p ())
        vma_p = curr_info.get_vma ();
      else
        vma_p = 0;
    }
  
  if (vta == vector_policy::agnostic)
    vta_p = 1;
  else if (vta == vector_policy::undisturbed)
    vta_p = 0;
  else
    {
      /* For N/A vta we remain the last vta if it valid. */
      if (curr_info.valid_p () && !curr_info.unknown_p ())
        vta_p = curr_info.get_vta ();
      else
        vta_p = 1;
    }
  return (vma_p << 1) | vta_p;
}

static bool
scalar_move_insn_p (rtx_insn *insn)
{
  return insn && INSN_P (insn) && recog_memoized (insn) >= 0 &&
         (get_attr_type (insn) == TYPE_VMV_S_X ||
          get_attr_type (insn) == TYPE_VFMV_S_F);
}

static bool
store_insn_p (rtx_insn *insn)
{
  return insn && INSN_P (insn) && recog_memoized (insn) >= 0 &&
         (get_attr_type (insn) == TYPE_VSE ||
          get_attr_type (insn) == TYPE_VSSE ||
          get_attr_type (insn) == TYPE_VSUXEI ||
          get_attr_type (insn) == TYPE_VSOXEI ||
          get_attr_type (insn) == TYPE_VSSEG ||
          get_attr_type (insn) == TYPE_VSSSEG ||
          get_attr_type (insn) == TYPE_VSUXSEGEI ||
          get_attr_type (insn) == TYPE_VSOXSEGEI);
}

static bool
can_skip_load_store_insn_p (rtx_insn *insn)
{
  return insn && INSN_P (insn) && recog_memoized (insn) >= 0 &&
         (get_attr_type (insn) == TYPE_VSE ||
          get_attr_type (insn) == TYPE_VSSE ||
          get_attr_type (insn) == TYPE_VLE ||
          get_attr_type (insn) == TYPE_VLSE);
}

static vinfo
compute_info_for_instr (rtx_insn *insn, vinfo curr_info)
{
  vinfo info;

  extract_insn_cached (insn);
  
  if (use_vl_p (insn))
    {
      if (recog_clobber_vl_vtype (insn) != OTHERS)
        info.set_avl (gen_rtx_REG (Pmode, X0_REGNUM));
      else if (use_vlmax_p (insn))
        info.set_avl (gen_rtx_REG (Pmode, X0_REGNUM));
      else
        {
          unsigned int offset = get_vl_offset (insn);
          info.set_avl_source (get_avl_source (
              recog_data.operand[recog_data.n_operands - offset], insn));
          info.set_avl (recog_data.operand[recog_data.n_operands - offset]);
        }
    }
  else
    info.set_avl (NULL_RTX);

  machine_mode mode = riscv_translate_attr_mode (insn);
  bool st_p = store_insn_p (insn);
  bool scalar_move_p = scalar_move_insn_p (insn);

  unsigned int vma_vta = analyze_vma_vta (insn, curr_info);
  unsigned int vta = vma_vta & 0x1;
  unsigned int vma = (vma_vta >> 1) & 0x1;
  info.set_vtype (riscv_classify_vlmul_field (mode),
                  riscv_classify_vsew_field (mode),
                  /*TailAgnostic*/ vta, /*MaskAgnostic*/ vma,
                  riscv_vector_mask_mode_p (mode), st_p, scalar_move_p);
  
  return info;
}

static bool
can_skip_vsetvli_for_load_store_p (rtx_insn *insn, const vinfo &new_info, const vinfo &curr_info)
{
  gcc_assert (recog_memoized (insn) >= 0);
  if (!can_skip_load_store_insn_p (insn))
    return false;
  machine_mode mode = riscv_translate_attr_mode (insn);
  unsigned vsew = riscv_classify_vsew_field (mode);
  gcc_assert (store_insn_p (insn) == new_info.get_store_p ());
  return curr_info.load_store_compatible_p (vsew, new_info);
}

static bool
need_vsetvli (rtx_insn *insn, const vinfo &require, const vinfo &curr_info)
{
  if (!need_vsetvli_p (insn))
    return false;
    
  if (curr_info.compatible_p (require))
    return false;

  // We didn't find a compatible value. If our AVL is a virtual register,
  // it might be defined by a VSET(I)VLI. If it has the same VTYPE we need
  // and the last VL/VTYPE we observed is the same, we don't need a
  // VSETVLI here.
  if (!curr_info.unknown_p () && require.avl_reg_p () &&
      REGNO (require.get_avl ()) >= FIRST_PSEUDO_REGISTER && 
      !curr_info.get_sew_lmul_ratio_only_p () &&
      curr_info.compatible_vtype_p (require))
    {
      rtx_insn *def_rtl = fetch_def_insn (insn, require);
      if (def_rtl != NULL)
        {
          if (is_vector_config_instr (def_rtl))
            {
              vinfo def_info = get_info_for_vsetvli (def_rtl, curr_info);
              if (def_info.avl_equal_p (curr_info) &&
                  def_info.vlmax_equal_p (curr_info))
                return false;
            }
        }
    }

  return true;
}

static bool
need_vsetvli_phi (const vinfo &new_info, rtx_insn *rtl)
{
  /* Optimize the case as follows:
  void foo (int8_t *base, int8_t* out, size_t vl, unsigned int m)
  {
    vint8mf8_t v0;
    size_t avl;
    if (m > 1000)
      avl = vsetvl_e8mf8 (vl);
    else
      avl = vsetvl_e8mf8 (vl << 2);
    for (int i = 0; i < m; i++)
      {
        v0 = vle8_v_i8mf8 (base + i * 32,avl);
        v0 = vadd_vv_i8mf8 (v0,v0,avl);
      }
    *(vint8mf8_t*)out = v0;
  } */

  /* We need use rtl ssa phi to optimize which needs
     optimization to large than or equal to 2. */
  if (optimize < 2)
    return true;

  if (!(!new_info.unknown_p () && new_info.get_avl () &&
        GET_CODE (new_info.get_avl ()) == REG))
    return true;

  rtx avl = new_info.get_avl ();

  insn_info *next;
  /* fetch phi_node.  */
  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->rtl () == rtl)
        {
          bb_info *bb = insn->bb ();
          ebb_info *ebb = bb->ebb ();
          resource_info resource{GET_MODE (avl), REGNO (avl)};
          insn_info *phi_insn = ebb->phi_insn ();
          phi_info *phi;
          def_lookup dl = crtl->ssa->find_def (resource, phi_insn);
          def_info *set = dl.prev_def (phi_insn);

          if (!set)
            return true;

          if (!is_a<phi_info *> (set))
            return true;

          // There is an existing phi.
          phi = as_a<phi_info *> (set);
          for (unsigned int i = 0; i < phi->num_inputs (); i++)
            {
              def_info *def = phi->input_value (i);
              if (!def)
                return true;
              insn_info *def_insn = def->insn ();
              rtx_insn *def_rtl = def_insn->rtl ();

              if (!def_rtl)
                return true;
              if (!INSN_P (def_rtl))
                return true;
              extract_insn_cached (def_rtl);
              if (recog_data.n_operands > 0 &&
                  rtx_equal_p (recog_data.operand[0], avl))
                {
                  if (get_attr_type (def_rtl) &&
                      get_attr_type (def_rtl) == TYPE_VSETVL)
                    {
                      basic_block def_bb = BLOCK_FOR_INSN (def_rtl);
                      bb_vinfo info = bb_vinfo_map.at(def_bb->index);
                      // If the exit from the predecessor has the VTYPE
                      // we are looking for we might be able to avoid a
                      // VSETVLI.
                      if (info.exit.unknown_p () ||
                          !info.exit.vtype_equal_p (new_info))
                        return true;
                      // We found a VSET(I)VLI make sure it matches the
                      // output of the predecessor block.
                      vinfo curr_info;
                      vinfo avl_def_info =
                          get_info_for_vsetvli (def_rtl, curr_info);
                      if (!avl_def_info.vtype_equal_p (info.exit) ||
                          !avl_def_info.avl_equal_p (info.exit))
                        return true;
                    }
                  else
                    return true;
                }
            }
        }
    }

  // If all the incoming values to the PHI checked out, we don't need
  // to insert a VSETVLI.
  return false;
}

static bool
compute_vl_vtype_changes (basic_block bb)
{
  bool vector_p = false;

  bb_vinfo &info = bb_vinfo_map[bb->index];
  info.change = info.pred;
  rtx_insn *insn = NULL;
  vinfo curr_info;

  FOR_BB_INSNS (bb, insn)
  {
    // If this is an explicit VSETVLI or VSETIVLI, update our state.
    if (is_vector_config_instr (insn))
      {
        vector_p = true;
        info.change = get_info_for_vsetvli (insn, curr_info);
        curr_info = info.change;
        continue;
      }
    
    /*  According to vector.md, each instruction pattern parallel.
        It should have at least 2 side effects.
        The last 2 side effects are use vl && use vtype  */
    if (use_vtype_p (insn))
      {
        vector_p = true;

        vinfo new_info = compute_info_for_instr (insn, curr_info);
        curr_info = new_info;
        if (!info.change.valid_p ())
          info.change = new_info;
        else
          {
            // If this instruction isn't compatible with the previous VL/VTYPE
            // we need to insert a VSETVLI.
            // If this is a unit-stride or strided load/store, we may be able
            // to use the EMUL=(EEW/SEW)*LMUL relationship to avoid changing
            // vtype. NOTE: We only do this if the vtype we're comparing
            // against was created in this block. We need the first and third
            // phase to treat the store the same way.
            if (!can_skip_vsetvli_for_load_store_p (insn, new_info, info.change) &&
                need_vsetvli (insn, new_info, info.change))
              info.change = new_info;
          }
      }
    // If this is something that updates VL/VTYPE that we don't know about, set
    // the state to unknown.
    if (update_vl_vtype_p (insn))
      {
        curr_info = vinfo::get_unknown ();
        info.change = vinfo::get_unknown ();
      }
  }

  return vector_p;
}

static void
compute_incoming_vl_vtype (const basic_block bb)
{
  bb_vinfo &info = bb_vinfo_map[bb->index];
  info.inqueue = false;

  vinfo in_info;
  if (EDGE_COUNT (bb->preds) == 0)
    {
      // There are no predecessors, so use the default starting status.
      in_info.set_unknown ();
    }
  else
    {
      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->preds)
      {
        basic_block ancestor = e->src;
        in_info = in_info.intersect (bb_vinfo_map.at(ancestor->index).exit);
      }
    }

  // If we don't have any valid predecessor value, wait until we do.
  if (!in_info.valid_p ())
    return;
  
  // If no change, no need to rerun block
  if (in_info == info.pred)
    return;

  info.pred = in_info;
  if (dump_file)
    {
      fprintf (dump_file, "Entry state of bb %d changed to\n", bb->index);
      info.pred.print ();
    }
  
  // Note: It's tempting to cache the state changes here, but due to the
  // compatibility checks performed a blocks output state can change based on
  // the input state.  To cache, we'd have to add logic for finding
  // never-compatible state changes.
  compute_vl_vtype_changes (bb);
  vinfo tmpstatus = info.change;

  // If the new exit value matches the old exit value, we don't need to revisit
  // any blocks.
  if (info.exit == tmpstatus)
    return;

  info.exit = tmpstatus;
  
  if (dump_file)
    {
      fprintf (dump_file, "Exit state of bb %d changed to\n", bb->index);
      info.exit.print ();
    }
  // Add the successors to the work list so we can propagate the changed exit
  // status.
  edge e;
  edge_iterator ei;
  FOR_EACH_EDGE (e, ei, bb->succs)
  {
    basic_block succ = e->dest;
    if (!bb_vinfo_map[succ->index].inqueue)
      bb_queue.push_back (succ);
  }
}

static void
insert_vsetvli (rtx_insn *insn, const vinfo &curr_info, const vinfo &prev_info)
{
  extract_insn_cached (insn);
  rtx avl = curr_info.get_avl ();
  rtx vtype = GEN_INT (curr_info.encode_vtype ());
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);

  if (recog_clobber_vl_vtype (insn) == MOV_CLOBBER_REG_MEM
    || recog_clobber_vl_vtype (insn) == MOV_CLOBBER_MEM_REG)
    {
      gcc_assert (
          reload_completed &&
          rtx_equal_p (curr_info.get_avl (), gen_rtx_REG (Pmode, X0_REGNUM)));
      avl = recog_data.operand[2];
      PUT_MODE (avl, Pmode);
      emit_vsetvl_insn (avl, gen_rtx_REG (Pmode, X0_REGNUM), vtype, insn);
      return;
    }

  // Use X0, X0 form if the AVL is the same and the SEW+LMUL gives the same
  // VLMAX
  if (prev_info.valid_p () && !prev_info.unknown_p () &&
      curr_info.avl_equal_p (prev_info) && curr_info.vlmax_equal_p (prev_info))
    {
      emit_vsetvl_insn (zero, zero, vtype, insn);
      return;
    }

  if (curr_info.get_avl () == NULL_RTX)
    {
      if (prev_info.valid_p () && !prev_info.unknown_p () &&
          curr_info.vlmax_equal_p (prev_info))
        {
          emit_vsetvl_insn (zero, zero, vtype, insn);
          return;
        }
      // Otherwise use an AVL of 0 to avoid depending on previous vl.
      emit_vsetvl_insn (zero, GEN_INT (0), vtype, insn);
      return;
    }

  if (rtx_equal_p (curr_info.get_avl (), gen_rtx_REG (Pmode, X0_REGNUM)))
    {
      if (reload_completed)
        avl = gen_rtx_REG (Pmode, X0_REGNUM);
      else
        avl = gen_reg_rtx (Pmode);
      emit_vsetvl_insn (avl, gen_rtx_REG (Pmode, X0_REGNUM), vtype, insn);
      return;
    }

  emit_vsetvl_insn (zero, avl, vtype, insn);
}

static void
cleanup_insn_op (rtx_insn *insn)
{
  if (!reload_completed)
    return;

  /* 1.Remove the vl operand for every rvv instruction.
     2.Replace every reload register spilling rvv instruction. */
  rtx pat;
  extract_insn_cached (insn);
  machine_mode mode = riscv_translate_attr_mode (insn);
  if (recog_clobber_vl_vtype (insn) == MOV_CLOBBER_REG_MEM)
    {
      if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
        pat =
              gen_vlm (mode, recog_data.operand[0],
                       XEXP (recog_data.operand[1], 0), const0_rtx, const0_rtx);
      else
        pat = gen_vle (mode, recog_data.operand[0], const0_rtx, const0_rtx,
                       XEXP (recog_data.operand[1], 0), const0_rtx, const0_rtx);

      validate_change (insn, &PATTERN (insn), pat, false);
    }
  else if (recog_clobber_vl_vtype (insn) == MOV_CLOBBER_MEM_REG)
    {
      if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
        pat = gen_vsm (mode, XEXP (recog_data.operand[0], 0),
                       recog_data.operand[1], const0_rtx, const0_rtx);
      else
        pat = gen_vse (mode, const0_rtx, XEXP (recog_data.operand[0], 0),
                       recog_data.operand[1], const0_rtx, const0_rtx);

      validate_change (insn, &PATTERN (insn), pat, false);
    }
  else
    replace_op (insn, const0_rtx, REPLACE_VL);
}

static void
emit_vsetvlis (const basic_block bb)
{
  vinfo curr_info;
  rtx_insn *insn = NULL;

  FOR_BB_INSNS (bb, insn)
  {
    // If this is an explicit VSETVLI or VSETIVLI, update our state.
    if (is_vector_config_instr (insn))
      {
        curr_info = get_info_for_vsetvli (insn, curr_info);
        continue;
      }

    if (use_vtype_p (insn))
      {
        vinfo new_info = compute_info_for_instr (insn, curr_info);
        
        if (!curr_info.valid_p ())
          {
            // We haven't found any vector instructions or VL/VTYPE changes
            // yet, use the predecessor information.
            curr_info = bb_vinfo_map[bb->index].pred;
            gcc_assert (curr_info.valid_p () &&
                        "Expected a valid predecessor state.");
            if (need_vsetvli (insn, new_info, curr_info))
              {
                // If this is the first implicit state change, and the state change
                // requested can be proven to produce the same register contents, we
                // can skip emitting the actual state change and continue as if we
                // had since we know the GPR result of the implicit state change
                // wouldn't be used and VL/VTYPE registers are correct.  Note that
                // we *do* need to model the state as if it changed as while the
                // register contents are unchanged, the abstract model can change.
                if (need_vsetvli_phi (new_info, insn))
                  insert_vsetvli (insn, new_info, curr_info);
                curr_info = new_info;
              }
          }
        else
          {
            // If this instruction isn't compatible with the previous VL/VTYPE
            // we need to insert a VSETVLI.
            // If this is a unit-stride or strided load/store, we may be able
            // to use the EMUL=(EEW/SEW)*LMUL relationship to avoid changing
            // vtype. NOTE: We can't use predecessor information for the store.
            // We must treat it the same as the first phase so that we produce
            // the correct vl/vtype for succesor blocks.
            if (!can_skip_vsetvli_for_load_store_p (insn, new_info,
                                                    curr_info) &&
                need_vsetvli (insn, new_info, curr_info))
              {
                insert_vsetvli (insn, new_info, curr_info);
                curr_info = new_info;
              }
          }
        cleanup_insn_op (insn);
      }
    // If this is something updates VL/VTYPE that we don't know about, set
    // the state to unknown.
    if (update_vl_vtype_p (insn))
      curr_info = vinfo::get_unknown ();

    // If we reach the end of the block and our current info doesn't match the
    // expected info, insert a vsetvli to correct.
    if (insn == BB_END (bb))
      {
        const vinfo exit_info = bb_vinfo_map.at(bb->index).exit;
        if (curr_info.valid_p () && exit_info.valid_p () &&
            !exit_info.unknown_p () && curr_info != exit_info)
          {
            insert_vsetvli (insn, exit_info, curr_info);
            curr_info = exit_info;
          }
      }
  }
}

static void
dolocalprepass (const basic_block bb)
{
  rtx_insn *insn = NULL;
  vinfo curr_info = vinfo::get_unknown ();
  FOR_BB_INSNS (bb, insn)
  {
    // If this is an explicit VSETVLI or VSETIVLI, update our state.
    if (is_vector_config_instr (insn))
      {
        curr_info = get_info_for_vsetvli (insn, curr_info);
        continue;
      }

    if (scalar_move_insn_p (insn))
      {
        gcc_assert (use_vtype_p (insn) && use_vl_p (insn));
        const vinfo new_info = compute_info_for_instr (insn, curr_info);

        // For vmv.s.x and vfmv.s.f, there are only two behaviors, VL = 0 and
        // VL > 0. We can discard the user requested AVL and just use the last
        // one if we can prove it equally zero.  This removes a vsetvli entirely
        // if the types match or allows use of cheaper avl preserving variant
        // if VLMAX doesn't change.  If VLMAX might change, we couldn't use
        // the 'vsetvli x0, x0, vtype" variant, so we avoid the transform to
        // prevent extending live range of an avl register operand.
        // TODO: We can probably relax this for immediates.
        if (((curr_info.has_nonzero_avl () && new_info.has_nonzero_avl ()) ||
             (curr_info.has_zero_avl () && new_info.has_zero_avl ())) &&
            new_info.vlmax_equal_p (curr_info))
          {
            replace_op (insn, curr_info.get_avl (), REPLACE_VL);
            curr_info = compute_info_for_instr (insn, curr_info);
            continue;
          }
      }

    if (use_vtype_p (insn))
      {
        if (use_vl_p (insn))
          {
            const auto require = compute_info_for_instr (insn, curr_info);
            // If the AVL is the result of a previous vsetvli which has the
            // same AVL and VLMAX as our current state, we can reuse the AVL
            // from the current state for the new one.  This allows us to
            // generate 'vsetvli x0, x0, vtype" or possible skip the transition
            // entirely.
            if (!curr_info.unknown_p () && require.get_avl () &&
                REG_P (require.get_avl ()) &&
                REGNO (require.get_avl ()) >= FIRST_PSEUDO_REGISTER)
              {
                rtx_insn *def_rtl = fetch_def_insn (insn, require);
                
                if (def_rtl != NULL)
                  {
                    if (is_vector_config_instr (def_rtl))
                      {
                        vinfo def_info = get_info_for_vsetvli (def_rtl, curr_info);
                        if (def_info.avl_equal_p (curr_info) &&
                            def_info.vlmax_equal_p (curr_info))
                          {
                            replace_op (insn, curr_info.get_avl (), REPLACE_VL);
                            curr_info = compute_info_for_instr (insn, curr_info);
                            continue;
                          }
                      }
                  }
              }

            // If AVL is defined by a vsetvli with the same vtype, we can
            // replace the AVL operand with the AVL of the defining vsetvli.
            // We avoid general register AVLs to avoid extending live ranges
            // without being sure we can kill the original source reg entirely.
            // TODO: We can ignore policy bits here, we only need VL to be the
            // same.
            if (!curr_info.unknown_p () && require.get_avl () &&
                REG_P (require.get_avl ()) &&
                REGNO (require.get_avl ()) >= FIRST_PSEUDO_REGISTER)
              {
                rtx_insn *def_rtl = fetch_def_insn (insn, require);
                if (def_rtl != NULL)
                  {
                    if (is_vector_config_instr (def_rtl))
                      {
                        vinfo def_info = get_info_for_vsetvli (def_rtl, curr_info);
                        if (def_info.vtype_equal_p (require) &&
                            (def_info.avl_const_p () ||
                            (def_info.avl_reg_p () &&
                            rtx_equal_p (def_info.get_avl (), gen_rtx_REG (Pmode, X0_REGNUM)))))
                          {
                            replace_op (insn, def_info.get_avl (), REPLACE_VL);
                            curr_info = compute_info_for_instr (insn, curr_info);
                            continue;
                          }
                      }
                  }
              }
          }
        curr_info = compute_info_for_instr (insn, curr_info);
        continue;
      }

    // If this is something that updates VL/VTYPE that we don't know about,
    // set the state to unknown.
    if (update_vl_vtype_p (insn))
      curr_info = vinfo::get_unknown ();
  }
}

static void
dolocalpostpass (const basic_block bb)
{
  rtx_insn *prev_insn = nullptr;
  rtx_insn *insn = nullptr;
  bool used_vl = false, used_vtype = false;
  std::vector<rtx_insn *> to_delete;
  FOR_BB_INSNS (bb, insn)
  {
    // Note: Must be *before* vsetvli handling to account for config cases
    // which only change some subfields.
    if (update_vl_vtype_p (insn) || use_vl_p (insn))
      used_vl = true;
    if (update_vl_vtype_p (insn) || use_vtype_p (insn))
      used_vtype = true;

    if (!is_vector_config_instr (insn))
      continue;
    
    extract_insn_cached (insn);
    if (prev_insn)
      {
        if (!used_vl && !used_vtype)
          {
            to_delete.push_back (prev_insn);
            // fallthrough
          }
        else if (!used_vtype && is_vl_preserving_config (insn))
          {
            // Note: `vsetvli x0, x0, vtype' is the canonical instruction
            // for this case.  If you find yourself wanting to add other forms
            // to this "unused VTYPE" case, we're probably missing a
            // canonicalization earlier.
            // Note: We don't need to explicitly check vtype compatibility
            // here because this form is only legal (per ISA) when not
            // changing VL.
            rtx new_vtype = recog_data.operand[recog_data.n_operands - 1];
            replace_op (prev_insn, new_vtype, REPLACE_VTYPE);
            to_delete.push_back (insn);
            // Leave prev_insn unchanged
            continue;
          }
      }
    prev_insn = insn;
    used_vl = false;
    used_vtype = false;
    
    rtx vdef = recog_data.operand[0];
    if (!rtx_equal_p (vdef, gen_rtx_REG (Pmode, X0_REGNUM)) &&
        !(REGNO (vdef) >= FIRST_PSEUDO_REGISTER &&
          (find_reg_note (insn, REG_UNUSED, vdef) ||
           find_reg_note (insn, REG_DEAD, vdef))))
      used_vl = true;
  }

  for (auto *to_remove : to_delete)
    remove_insn (to_remove);
}

/// Return true if the VL value configured must be equal to the requested one.
static bool
has_fixed_result (const vinfo &info)
{
  if (!info.avl_const_p ())
    // VLMAX is always the same value.
    // TODO: Could extend to other registers by looking at the associated
    // vreg def placement.
    return rtx_equal_p (info.get_avl (), gen_rtx_REG (Pmode, X0_REGNUM));

  if (VLMUL_FIELD_000 != info.get_vlmul ())
    // TODO: Generalize the code below to account for LMUL
    return false;
  
  if (!BYTES_PER_RISCV_VECTOR.is_constant ())
    return false;
    
  unsigned int avl = INTVAL (info.get_avl ());
  unsigned int vsew = info.get_vsew ();
  machine_mode inner = vsew_to_int_mode (vsew);
  unsigned int sew = GET_MODE_BITSIZE (as_a<scalar_mode> (inner));
  unsigned avl_in_bits = avl * sew;
  machine_mode mode = riscv_vector::vector_builtin_mode (
            as_a<scalar_mode> (inner), info.get_vlmul ());
  return GET_MODE_BITSIZE (mode).to_constant () >= avl_in_bits;
}

/// Perform simple partial redundancy elimination of the VSETVLI instructions
/// we're about to insert by looking for cases where we can PRE from the
/// beginning of one block to the end of one of its predecessors.  Specifically,
/// this is geared to catch the common case of a fixed length vsetvl in a single
/// block loop when it could execute once in the preheader instead.
static void
dopre (const basic_block bb)
{
  if (!bb_vinfo_map[bb->index].pred.unknown_p ())
    return;

  basic_block unavailable_pred = nullptr;
  vinfo available_info;
  
  edge e;
  edge_iterator ei;
  FOR_EACH_EDGE (e, ei, bb->preds)
  {
    basic_block predecessor = e->src;
    const vinfo &pred_info = bb_vinfo_map[predecessor->index].exit;
    if (pred_info.unknown_p ())
      {
        if (unavailable_pred)
          return;
        unavailable_pred = predecessor;
      }
    else if (!available_info.valid_p ())
      available_info = pred_info;
    else if (available_info != pred_info)
      return;
  }
      
  // unreachable, single pred, or full redundancy.  Note that FRE
  // is handled by phase 3.
  if (!unavailable_pred || !available_info.valid_p ())
    return;

  // critical edge - TODO: consider splitting?
  if (EDGE_COUNT (unavailable_pred->succs) != 1)
    return;

  // If VL can be less than AVL, then we can't reduce the frequency of exec.
  if (!has_fixed_result (available_info))
    return;

  // Does it actually let us remove an implicit transition in MBB?
  bool found = false;
  rtx_insn *insn;
  vinfo curr_info;
  FOR_BB_INSNS (bb, insn)
  {
    if (is_vector_config_instr (insn))
      return;
    
    if (use_vtype_p (insn))
      {
        if (available_info != compute_info_for_instr (insn, curr_info))
            return;
          found = true;
          break;
      }
  }
      
  if (!found)
    return;

  // Finally, update both data flow state and insert the actual vsetvli.
  // Doing both keeps the code in sync with the dataflow results, which
  // is critical for correctness of phase 3.
  auto old_info = bb_vinfo_map[unavailable_pred->index].exit;
  if (dump_file)
    {
      fprintf (dump_file, "PRE VSETVLI from bb %d changed to bb %d\n", bb->index, unavailable_pred->index);
      available_info.print ();
    }
  bb_vinfo_map[unavailable_pred->index].exit = available_info;
  bb_vinfo_map[bb->index].pred = available_info;

  // Note there's an implicit assumption here that terminators never use
  // or modify VL or VTYPE.  Also, fallthrough will return end().
  auto insert_pt = BB_END (unavailable_pred);
  insert_vsetvli (insert_pt, available_info, old_info);
}

static unsigned int
rest_of_handle_insert_vsetvli (function *fn)
{
  basic_block bb;

  if (n_basic_blocks_for_fn (fn) <= 0)
    return 0;

  gcc_assert (bb_vinfo_map.empty () && "Expect empty block infos.");

  if (optimize >= 2)
    {
      // Initialization.
      calculate_dominance_info (CDI_DOMINATORS);
      df_analyze ();
      crtl->ssa = new rtl_ssa::function_info (cfun);
    }

  if (dump_file)
    fprintf (dump_file, "\nEntering InsertVSETVLI for %s\n\n",
             current_function_name ());

  /* Initialize Basic Block Map */
  FOR_ALL_BB_FN (bb, fn)
  {
    bb_vinfo bb_init;
    bb_vinfo_map.insert (std::pair<uint8_t, bb_vinfo> (bb->index, bb_init));
  }

  // Scan the block locally for cases where we can mutate the operands
  // of the instructions to reduce state transitions.  Critically, this
  // must be done before we start propagating data flow states as these
  // transforms are allowed to change the contents of VTYPE and VL so
  // long as the semantics of the program stays the same.
  FOR_ALL_BB_FN (bb, fn)
    dolocalprepass (bb);

  bool vector_p = false;

  if (dump_file)
    fprintf (
        dump_file,
        "Phase 1 determine how VL/VTYPE are affected by the each block:\n");

  // Phase 1 - determine how VL/VTYPE are affected by the each block.
  FOR_ALL_BB_FN (bb, fn)
  {
    vector_p |= compute_vl_vtype_changes (bb);
    bb_vinfo &info = bb_vinfo_map[bb->index];
    info.exit = info.change;
    if (dump_file)
      {
        fprintf (dump_file, "Initial exit state of bb %d\n", bb->index);
        info.exit.print ();
      }
  }

  if (!vector_p)
    {
      bb_vinfo_map.clear ();
      bb_queue.clear ();
      return 0;
    }

  if (dump_file)
    fprintf (dump_file,
             "Phase 2 determine the exit VL/VTYPE from each block:\n");
  // Phase 2 - determine the exit VL/VTYPE from each block. We add all
  // blocks to the list here, but will also add any that need to be
  // revisited during Phase 2 processing.
  FOR_ALL_BB_FN (bb, fn)
  {
    bb_queue.push_back (bb);
    bb_vinfo_map[bb->index].inqueue = true;
  }
  while (!bb_queue.empty ())
    {
      bb = bb_queue.front ();
      bb_queue.pop_front ();
      compute_incoming_vl_vtype (bb);
    }
   
  // Perform partial redundancy elimination of vsetvli transitions.
  FOR_ALL_BB_FN (bb, fn)
    dopre (bb);
    
  if (dump_file)
    fprintf (dump_file,
             "Phase 3 add any vsetvli instructions needed in the block:\n");
  // Phase 3 - add any vsetvli instructions needed in the block. Use the
  // Phase 2 information to avoid adding vsetvlis before the first vector
  // instruction in the block if the VL/VTYPE is satisfied by its
  // predecessors.
  FOR_ALL_BB_FN (bb, fn) 
    emit_vsetvlis (bb); 
  
  // Now that all vsetvlis are explicit, go through and do block local
  // DSE and peephole based demanded fields based transforms.  Note that
  // this *must* be done outside the main dataflow so long as we allow
  // any cross block analysis within the dataflow.  We can't have both
  // demanded fields based mutation and non-local analysis in the
  // dataflow at the same time without introducing inconsistencies.
  FOR_ALL_BB_FN (bb, fn)
    dolocalpostpass(bb);

  // Once we're fully done rewriting all the instructions, do a final pass
  // through to check for VSETVLIs which write to an unused destination.
  // For the non X0, X0 variant, we can replace the destination register
  // with X0 to reduce register pressure.  This is really a generic
  // optimization which can be applied to any dead def (TODO: generalize).
  if (!reload_completed)
    {
      FOR_ALL_BB_FN (bb, fn)
      {
        rtx_insn *insn = NULL;
        FOR_BB_INSNS (bb, insn)
        {
          if (is_vector_config_instr (insn))
            {
              extract_insn_cached (insn);
              if (recog_data.n_operands == 3 &&
                  !rtx_equal_p (recog_data.operand[0],
                                gen_rtx_REG (Pmode, X0_REGNUM)) &&
                  !rtx_equal_p (recog_data.operand[1],
                                gen_rtx_REG (Pmode, X0_REGNUM)) &&
                  (find_reg_note (insn, REG_UNUSED, recog_data.operand[0]) ||
                   find_reg_note (insn, REG_DEAD, recog_data.operand[0])))
                {
                  rtx pat = gen_vsetvl_zero (Pmode, recog_data.operand[1],
                                             recog_data.operand[2]);
                  validate_change (insn, &PATTERN (insn), pat, false);
                }
            }
        }
      }
    }

  bb_vinfo_map.clear ();
  bb_queue.clear ();

  if (optimize >= 2)
    {
      // Finalization.
      free_dominance_info (CDI_DOMINATORS);
      if (crtl->ssa->perform_pending_updates ())
        cleanup_cfg (0);

      delete crtl->ssa;
      crtl->ssa = nullptr;
    }

  return 0;
}

const pass_data pass_data_insert_vsetvli = {
    RTL_PASS,         /* type */
    "insert_vsetvli", /* name */
    OPTGROUP_NONE,    /* optinfo_flags */
    TV_NONE,          /* tv_id */
    0,                /* properties_required */
    0,                /* properties_provided */
    0,                /* properties_destroyed */
    0,                /* todo_flags_start */
    0,                /* todo_flags_finish */
};

class pass_insert_vsetvli : public rtl_opt_pass
{
public:
  pass_insert_vsetvli (gcc::context *ctxt)
      : rtl_opt_pass (pass_data_insert_vsetvli, ctxt)
  {
  }

  /* opt_pass methods: */
  virtual bool
  gate (function *)
  {
    return TARGET_VECTOR;
  }
  virtual unsigned int
  execute (function *fn)
  {
    return rest_of_handle_insert_vsetvli (fn);
  }

}; // class pass_insert_vsetvli

rtl_opt_pass *
make_pass_insert_vsetvli (gcc::context *ctxt)
{
  return new pass_insert_vsetvli (ctxt);
}

const pass_data pass_data_insert_vsetvli2 = {
    RTL_PASS,         /* type */
    "insert_vsetvli2", /* name */
    OPTGROUP_NONE,    /* optinfo_flags */
    TV_NONE,          /* tv_id */
    0,                /* properties_required */
    0,                /* properties_provided */
    0,                /* properties_destroyed */
    0,                /* todo_flags_start */
    0,                /* todo_flags_finish */
};

class pass_insert_vsetvli2 : public rtl_opt_pass
{
public:
  pass_insert_vsetvli2 (gcc::context *ctxt)
      : rtl_opt_pass (pass_data_insert_vsetvli2, ctxt)
  {
  }

  /* opt_pass methods: */
  virtual bool
  gate (function *)
  {
    return TARGET_VECTOR;
  }
  virtual unsigned int
  execute (function *fn)
  {
    return rest_of_handle_insert_vsetvli (fn);
  }

}; // class pass_insert_vsetvli2

rtl_opt_pass *
make_pass_insert_vsetvli2 (gcc::context *ctxt)
{
  return new pass_insert_vsetvli2 (ctxt);
}