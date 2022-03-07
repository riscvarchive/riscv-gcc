/* Insert vsetvli pass for RISC-V.
   Copyright(C) 2018-2021 Free Software Foundation, Inc.

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

using namespace riscv_vector;

using namespace rtl_ssa;

/*  This pass is to insert vsetvli instructions for RVV instructions that depend on vtype && vl.
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

#define VSETVLI_INSN_P(INSN) \
  INSN && INSN_P(INSN) \
  && recog_memoized (INSN) >= 0 \
  && get_attr_type (INSN) == TYPE_VSETVL

/* if the insn use vtype reg should always be the last
   of a parallel. */
#define USE_VTYPE_P(INSN) \
  use_vtype_p (INSN)

/* if the insn use vl reg should always be the second
   of a parallel. */
#define USE_VL_P(INSN) \
  use_vl_p (INSN)

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

static bool
rvv_insn_p (rtx_insn *insn, rtx *src)
{
  *src = NULL_RTX;
  if (!(insn && INSN_P (insn)
    && recog_memoized (insn) >= 0))
    return false;

  if ((get_attr_type (insn) == TYPE_VCMP
    || get_attr_type (insn) == TYPE_VLEFF
    || get_attr_type (insn) == TYPE_VLSEGFF
    || ((get_attr_type (insn) == TYPE_VLE
     || get_attr_type (insn) == TYPE_VSE)
     && riscv_tuple_mode_p (riscv_translate_attr_mode (insn))))
    && GET_CODE (PATTERN (insn)) == PARALLEL)
    {
      *src = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return true;
    }

  if (GET_CODE (PATTERN (insn)) == SET)
    *src = SET_SRC (PATTERN (insn));

  if (!*src)
    return false;

  if (GET_CODE (*src) != UNSPEC)
    return false;

  if (XINT (*src, 1) != UNSPEC_RVV)
    return false;

  return riscv_vector_mode_p (riscv_translate_attr_mode (insn));
}

static bool
use_vl_p (rtx_insn *insn)
{
  rtx src = NULL_RTX;
  if (!rvv_insn_p (insn, &src))
    return false;

  if (rtx_equal_p (XVECEXP (src, 0,
    XVECLEN (src, 0) - 1),
    gen_rtx_REG (SImode, VL_REGNUM)))
    return true;

  if (XVECLEN (src, 0) > 1
    && rtx_equal_p (XVECEXP (src, 0,
       XVECLEN (src, 0) - 2),
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

  if (rtx_equal_p (XVECEXP (src, 0,
    XVECLEN (src, 0) - 1),
    gen_rtx_REG (SImode, VTYPE_REGNUM)))
    return true;

  return false;
}

static bool
use_vlmax_p (rtx_insn *insn)
{
  rtx src = SET_SRC (PATTERN (insn));
  unsigned int length = 0;
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
needvsetvli_p (rtx_insn *insn)
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
    validate_change (insn, recog_data.operand_loc [2], x, false);

  if (replace == REPLACE_VL && !use_vlmax_p (insn))
	  {
			unsigned int offset = 2;
      if (GET_CODE (PATTERN (insn)) == PARALLEL)
        {
          if (get_attr_type (insn) == TYPE_VCMP)
            offset = 3;
        }
			validate_change (insn, recog_data.operand_loc [recog_data.n_operands - offset], x, false);
		}
}

static bool
update_vlvtyp_p (rtx_insn *insn)
{
  if (insn && INSN_P (insn))
    {
      if (recog_memoized (insn) >= 0
        && (get_attr_type (insn) == TYPE_VLEFF
	|| get_attr_type (insn) == TYPE_VLSEGFF))
        {
          extract_insn_cached (insn);
          if (INTVAL (recog_data.operand [recog_data.n_operands - 1])
	      == DO_NOT_UPDATE_VL_VTYPE)
            return false;
	  return true;
        }
      if (GET_CODE (PATTERN (insn)) == SET &&
          (REGNO (SET_DEST (PATTERN (insn))) == VTYPE_REGNUM
	  || REGNO (SET_DEST (PATTERN (insn))) == VL_REGNUM))
        return true;

      if (GET_CODE (PATTERN (insn)) == PARALLEL)
        {
          /* For noinline calling function, we don't know whether
             it updates the vl and vtype, for the safety, we consider
             it's unknown. */
          if (GET_CODE (XVECEXP (PATTERN (insn), 0, 0)) == CALL)
            return true;

					if (GET_CODE (XVECEXP (PATTERN (insn), 0, 0)) == SET
					  && GET_CODE (SET_SRC (XVECEXP (PATTERN (insn), 0, 0))) == CALL)
            return true;
        }

      if (GET_CODE (PATTERN (insn)) == ASM_INPUT)
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
  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->rtl () == rtl)
        {
	  resource_info resource { GET_MODE (avl), REGNO (avl) };
	  def_lookup dl = crtl->ssa->find_def (resource, insn);
	  def_info *def = dl.prev_def ();

	  if (!def)
            return NULL_RTX;

          if (!is_a <set_info *> (def))
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

class vinfo
{
private:
  state_enum state;
  // Fields from VTYPE.
  unsigned int vma : 1;
  unsigned int vta : 1;
  unsigned int vsew : 3;
  unsigned int vlmul : 3;

  bool all_maskop_p : 1;
  bool sew_lmul_ratio_only_p : 1;
  rtx avl;
  rtx avl_source;

public:
  vinfo ()
    : state (STATE_UNINITIALIZED), vma (false), vta (false), vsew (0),
      vlmul (0), all_maskop_p (false), sew_lmul_ratio_only_p (false),
      avl (NULL_RTX), avl_source (NULL_RTX)
  {
  }

  ~vinfo () {}

  bool
  valid_p () const
  {
    return state != STATE_UNINITIALIZED;
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
  setunknown ()
  {
    state = STATE_UNKNOWN;
  }

  void
  setavl (rtx op)
  {
    avl = op;
    state = STATE_KNOWN;
  }

  void
  setavl_source (rtx op)
  {
    avl_source = op;
  }

  static vinfo
  getunknown ()
  {
    vinfo info;
    info.setunknown ();
    return info;
  }

  rtx
  getavl () const
  {
    gcc_assert (known_p ());
    return avl;
  }

  rtx
  getavl_source () const
  {
    gcc_assert (known_p ());
    return avl_source;
  }

  vector_policy
  getvma () const
  {
    return vma ? vector_policy::agnostic
    	: vector_policy::undisturbed;
  }

  vector_policy
  getvta () const
  {
    return vta ? vector_policy::agnostic
    	: vector_policy::undisturbed;
  }

  bool
  avl_equal_p (const vinfo &other) const
  {
    if (!valid_p () && !other.valid_p ())
      {
	if (dump_file)
	  fprintf (dump_file, "-------- Can't compare invalid VSETVLI Infos --------\n\n");
	gcc_unreachable ();
      }
    if (unknown_p () || other.unknown_p ())
      {
	if (dump_file)
	  fprintf (dump_file, "-------- Can't compare AVL in unknown state --------\n\n");
	gcc_unreachable ();
      }

    if (rtx_equal_p (getavl (), other.getavl ()))
      return true;

    if (!getavl_source () && !other.getavl_source ())
      return false;

    if (getavl_source ()
    	&& rtx_equal_p (getavl_source (), other.getavl ()))
      return true;

    if (other.getavl_source ()
    	&& rtx_equal_p (other.getavl_source (), getavl ()))
      return true;

    return rtx_equal_p (getavl_source (), other.getavl_source ());
  }

  void
  setvtype (unsigned int vtype)
  {
    if (!valid_p () || unknown_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't set VTYPE for uninitialized or unknown --------\n\n");
	gcc_unreachable ();
      }
    vma = riscv_parse_vma_field (vtype);
    vta = riscv_parse_vta_field (vtype);
    vsew = riscv_parse_vsew_field (vtype);
    vlmul = riscv_parse_vlmul_field (vtype);
  }

  void
  setvtype (unsigned vl, unsigned vs, bool vt, bool vm, bool m_p)
  {
    if (!valid_p () || unknown_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't set VTYPE for uninitialized or unknown --------\n\n");
	gcc_unreachable ();
      }
    vma = vm;
    vta = vt;
    vsew = vs;
    vlmul = vl;
    all_maskop_p = m_p;
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
  encodevtype () const
  {
    if (!valid_p () || unknown_p () || sew_lmul_ratio_only_p)
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't set VTYPE for uninitialized or unknown --------\n\n");
	gcc_unreachable ();
      }
    if (!(vsew >= 0 && vsew <= 7))
      {
	if (dump_file)
          fprintf (dump_file, "-------- Invalid SEW --------\n\n");
	gcc_unreachable ();
      }
    unsigned vtype = (vsew << 3) | (vlmul & 0x7);
    if (vta)
      vtype |= 0x40;
    if (vma)
      vtype |= 0x80;

    return vtype;
  }

  bool
  getsew_lmul_ratio_only_p () const
  {
    return sew_lmul_ratio_only_p;
  }

  bool
  vtype_equal_p (const vinfo &other) const
  {
    if (!valid_p () || !other.valid_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare invalid VSETVLI Infos --------\n\n");
	gcc_unreachable ();
      }
    if (unknown_p () || other.unknown_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare VTYPE in unknown state --------\n\n");
	gcc_unreachable ();
      }
    if (sew_lmul_ratio_only_p || other.sew_lmul_ratio_only_p)
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare when only LMUL/SEW ratio is valid --------\n\n");
	gcc_unreachable ();
      }
    return std::tie (vma, vta, vsew, vlmul)
	   == std::tie (other.vma, other.vta, other.vsew, other.vlmul);
  }

  unsigned
  calcsew_lmul_ratio (unsigned int vsew_arg, unsigned int vlmul_arg) const
  {
    if (!valid_p () || unknown_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't use VTYPE for uninitialized or unknown --------\n\n");
	gcc_unreachable ();
      }

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

    if (sew < 8)
      {
	if (dump_file)
          fprintf (dump_file, "-------- Unexpected SEW value --------\n\n");
	gcc_unreachable ();
      }
    unsigned int sew_mul_ratio = fractional ? sew * lmul : sew / lmul;

    return sew_mul_ratio;
  }

  unsigned
  calcsew_lmul_ratio () const
  {
    return calcsew_lmul_ratio (vsew, vlmul);
  }

  // Check if the VTYPE for these two VSETVLI Infos produce the same VLMAX.
  bool
  vlmax_equal_p (const vinfo &other) const
  {
    if (!valid_p () || !other.valid_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare invalid VSETVLI Infos --------\n\n");
	gcc_unreachable ();
      }
    if (unknown_p () || other.unknown_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare VTYPE in unknown state --------\n\n");
	gcc_unreachable ();
      }
    return calcsew_lmul_ratio () == other.calcsew_lmul_ratio ();
  }

  // Determine whether the vector instructions requirements represented by
  // InstrInfo are compatible with the previous vsetvli instruction represented
  // by this.
  bool
  compatible_p (const vinfo &info) const
  {
    if (!valid_p () || !info.valid_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare invalid vinfos --------\n\n");
	gcc_unreachable ();
      }
    if (info.sew_lmul_ratio_only_p)
      {
	if (dump_file)
          fprintf (dump_file, "-------- Expected a valid VTYPE for instruction --------\n\n");
	gcc_unreachable ();
      }

    // Nothing is compatible with Unknown.
    if (unknown_p () || info.unknown_p ())
      return false;

    // If only our VLMAX ratio is valid, then this isn't compatible.
    if (sew_lmul_ratio_only_p)
      return false;

    // If the instruction doesn't need an AVLReg and the SEW matches, consider
    // it compatible.
    if (info.known_p () && info.avl == NULL_RTX)
      {
	if (vsew == info.vsew)
	  return true;
      }

    // VTypes must match unless the instruction is a mask reg operation, then
    // it only care about VLMAX.
    if (!vtype_equal_p (info)
	&& !(info.all_maskop_p && vlmax_equal_p (info) && vta == info.vta
	     && vma == info.vma))
      return false;

    return avl_equal_p (info);
  }

  bool
  load_store_compatible_p (unsigned vsew_arg, const vinfo &info, bool check_p,
			   bool stride_p) const
  {
    if (!valid_p () || !info.valid_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can't compare invalid vinfos --------\n\n");
	gcc_unreachable ();
      }
    if (info.sew_lmul_ratio_only_p)
      {
	if (dump_file)
          fprintf (dump_file, "-------- Expected a valid VTYPE for instruction --------\n\n");
	gcc_unreachable ();
      }
    if (vsew_arg != info.vsew)
      {
	if (dump_file)
          fprintf (dump_file, "-------- Mismatched EEW/SEW for store --------\n\n");
	gcc_unreachable ();
      }

    if (unknown_p () || getsew_lmul_ratio_only_p ())
      return false;

    if (!avl_equal_p (info))
      return false;

    // This check isn't required for stores. But we should ignore for all
    // stores not just unit-stride and strided so leaving it for now.
    if (check_p && (vta != info.vta || vma != info.vma))
      return false;

    if (!stride_p)
      return (vsew == info.vsew) && (vlmul == info.vlmul)
	     && (calcsew_lmul_ratio ()
		 == calcsew_lmul_ratio (vsew_arg, info.vlmul));

    return calcsew_lmul_ratio () == calcsew_lmul_ratio (vsew_arg, info.vlmul);
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

  bool operator!=(const vinfo &Other) const
  {
    return !(*this == Other);
  }

  void
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
      return vinfo::getunknown ();

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
    return vinfo::getunknown ();
  }

  // Calculate the vinfo visible at the end of the block assuming this
  // is the predecessor value, and other is change for this block.
  vinfo
  merge (const vinfo &other) const
  {
    if (!valid_p ())
      {
	if (dump_file)
          fprintf (dump_file, "-------- Can only merge with a valid VSETVLInfo --------\n\n");
	gcc_unreachable ();
      }

    // Nothing changed from the predecessor, keep it.
    if (!other.valid_p ())
      return *this;

    // If the change is compatible with the input, we won't create a VSETVLI
    // and should keep the predecessor.
    if (compatible_p (other))
      return *this;

    // otherwise just use whatever is in this block.
    return other;
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

std::map<unsigned int, bb_vinfo> m_bb_vinfo_map;
std::queue<basic_block> m_bb_queue;

static void
emit_vsetvl_insn (rtx op0, rtx op1, rtx op2, rtx_insn *insn)
{
	if (dump_file)
    fprintf (dump_file, "-------- replace insn %d  --------\n\n", INSN_UID (insn));
  emit_insn_before (gen_vsetvl (Pmode, op0, op1, op2), insn);
}

// Return a vinfo representing the changes made by this VSETVLI or
// VSETIVLI instruction.
static vinfo
getinfoforvsetvli (rtx_insn *insn, vinfo curr_info)
{
  vinfo new_info;
  extract_insn_cached (insn);

  if (recog_data.n_operands == 1)
    {
      if (!curr_info.valid_p () || curr_info.unknown_p ())
        return new_info;
      new_info.setavl (curr_info.getavl ());
      new_info.setvtype (INTVAL (recog_data.operand[0]));
      return new_info;
    }

  rtx vl = recog_data.operand[1];
  rtx vtype = recog_data.operand[2];
  if (!CONSTANT_P (vtype))
      {
	if (dump_file)
	  fprintf (dump_file, "-------- Invalid vtype in vsetvli instruction --------\n\n");
	gcc_unreachable ();
      }
  new_info.setavl (vl);
  if (!reload_completed)
    new_info.setavl_source (get_avl_source (vl, insn));
  new_info.setvtype (INTVAL (vtype));
  return new_info;
}

static unsigned int
analyze_vma_vta (rtx_insn *insn, vinfo curr_info)
{
  vector_policy vma_default = vector_policy::undisturbed;
  vector_policy vta_default = vector_policy::agnostic;
  if (use_vlmax_p (insn) || !USE_VL_P (insn))
    return get_vma_vta (vma_default, vta_default);
  unsigned int offset = 1;
  if (GET_CODE (PATTERN (insn)) == PARALLEL)
    {
      if (get_attr_type (insn) == TYPE_VCMP)
        offset = 2;
    }
  extract_insn_cached (insn);
  vector_policy vma = get_vma (INTVAL (recog_data.operand[recog_data.n_operands - offset]));
  vector_policy vta = get_vta (INTVAL (recog_data.operand[recog_data.n_operands - offset]));
  if (vma == vector_policy::any)
    {
      /* For N/A vma we remain the last vma if it valid. */
      if (curr_info.valid_p () && !curr_info.unknown_p ())
        vma = curr_info.getvma ();
      else
      	vma = vma_default;
    }
  if (vta == vector_policy::any)
    {
      /* For N/A vta we remain the last vta if it valid. */
      if (curr_info.valid_p () && !curr_info.unknown_p ())
        vta = curr_info.getvta ();
      else
      	vta = vta_default;
    }
  return get_vma_vta (vma, vta);
}

static vinfo
computeinfoforinstr (rtx_insn *insn, vinfo curr_info)
{
  vinfo info;

  unsigned int vma_vta = analyze_vma_vta (insn, curr_info);

  extract_insn_cached (insn);

  if (USE_VL_P (insn))
    {
      if (use_vlmax_p (insn))
        info.setavl (gen_rtx_REG (Pmode, X0_REGNUM));
      else
        {
	  unsigned int offset = 2;
	  if (GET_CODE (PATTERN (insn)) == PARALLEL)
	    {
	      if (get_attr_type (insn) == TYPE_VCMP)
	        offset = 3;
	    }
	  if (!reload_completed)
	    info.setavl_source (get_avl_source (recog_data.operand[recog_data.n_operands - offset], insn));
	  info.setavl (recog_data.operand[recog_data.n_operands - offset]);
        }
    }
  else
    info.setavl (NULL_RTX);

  machine_mode mode = riscv_translate_attr_mode (insn);

  unsigned int vta = get_vta (vma_vta)
  	== vector_policy::agnostic ? 1 : 0;
  unsigned int vma = get_vma (vma_vta)
  	== vector_policy::agnostic ? 1 : 0;
  info.setvtype (
    riscv_classify_vlmul_field (mode), riscv_classify_vsew_field (mode),
    /*TailAgnostic*/ vta, /*MaskAgnostic*/ vma, riscv_vector_mask_mode_p (mode));

  return info;
}

static bool
canskipvsetvliforloadstore (rtx_insn *insn, vinfo &new_info, vinfo &curr_info)
{
  gcc_assert (recog_memoized (insn) >= 0);
  machine_mode mode = riscv_translate_attr_mode (insn);
  unsigned vsew = riscv_classify_vsew_field (mode);
  bool check_p;
  bool stride_p;

  if (get_attr_type (insn))
    {
      if (get_attr_type (insn) == TYPE_VLE
	  || get_attr_type (insn) == TYPE_VLSE)
	{
	  check_p = true;
	  stride_p = true;
	}
      else if (get_attr_type (insn) == TYPE_VSE
	       || get_attr_type (insn) == TYPE_VSSE)
	{
	  check_p = false;
	  stride_p = true;
	}
      else if (get_attr_type (insn) == TYPE_VSUXEI
	       || get_attr_type (insn) == TYPE_VSOXEI
	       || get_attr_type (insn) == TYPE_VSSEG
	       || get_attr_type (insn) == TYPE_VSSSEG
	       || get_attr_type (insn) == TYPE_VSUXSEGEI
	       || get_attr_type (insn) == TYPE_VSOXSEGEI)
	{
	  check_p = false;
	  stride_p = false;
	}
      else
	return false;
    }
  else
    return false;

  return curr_info.load_store_compatible_p (vsew, new_info, check_p, stride_p);
}

static bool
needvsetvli (rtx_insn *insn, vinfo &new_info, vinfo &curr_info)
{
  if (curr_info.compatible_p (new_info))
    return false;

  if (!needvsetvli_p (insn))
    return false;

  return true;
}

static bool
needvsetvliphi (vinfo &new_info, rtx_insn *rtl)
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
     optimization to large or equal than 2. */
  if (optimize < 2)
    return true;

  if (!(!new_info.unknown_p () && new_info.getavl ()
	&& GET_CODE (new_info.getavl ()) == REG))
    return true;

  rtx avl = new_info.getavl ();

  insn_info *next;
  /* fetch phi_node.  */
  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->rtl () == rtl)
	{
	  bb_info *bb = insn->bb ();
	  ebb_info *ebb = bb->ebb ();
	  resource_info resource{ GET_MODE (avl), REGNO (avl) };
	  insn_info *phi_insn = ebb->phi_insn ();
	  phi_info *phi;
	  def_lookup dl = crtl->ssa->find_def (resource, phi_insn);
	  def_info *set = dl.prev_def ();

	  if (!set)
	    return true;

	  if (!is_a <phi_info *> (set))
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
	      if (recog_data.n_operands > 0
		  && rtx_equal_p (recog_data.operand[0], avl))
		{
		  if (get_attr_type (def_rtl)
		      && get_attr_type (def_rtl) == TYPE_VSETVL)
		    {
		      basic_block def_bb = BLOCK_FOR_INSN (def_rtl);
		      bb_vinfo &info = m_bb_vinfo_map[def_bb->index];
		      // If the exit from the predecessor has the VTYPE
		      // we are looking for we might be able to avoid a
		      // VSETVLI.
		      if (info.exit.unknown_p ()
			  || !info.exit.vtype_equal_p (new_info))
			return true;
		      // We found a VSET(I)VLI make sure it matches the
		      // output of the predecessor block.
		      vinfo curr_info;
		      vinfo avl_def_info = getinfoforvsetvli (def_rtl, curr_info);
		      if (!avl_def_info.vtype_equal_p (info.exit)
			  || !avl_def_info.avl_equal_p (info.exit))
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
compare_avl_from_source (vinfo &new_info, rtx_insn *vsetvl, rtx_insn *rtl)
{
  /* void __attribute__ ((noinline))

  correlation_vec(size_t n, short* a, short* c){

    size_t vl_max = vsetvlmax_e16m1();

    vint16m1_t v3 = vmv_v_x_i16m1(3, vl_max);

    size_t vl;

    for (int i = 0; i < n; i += vl) {

        vl = vsetvl_e16m1(n - i);

        vint16m1_t va = vle16_v_i16m1(a, vl);

        vint16m1_t vc = vadd_vv_i16m1(va, v3, vl);

        vse16_v_i16m1(c, vc, vl);

    }

}*/
  /* We need use rtl ssa phi to optimize which needs
     optimization to large or equal than 2. */
  if (optimize < 2)
    return false;

  if (!(new_info.known_p () && new_info.getavl ()))
    return false;

  rtx avl = new_info.getavl ();

  insn_info *next;
  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->rtl () == rtl)
	{
	  resource_info resource{ GET_MODE (avl), REGNO (avl) };
	  def_lookup dl = crtl->ssa->find_def (resource, insn);
	  def_info *def = dl.prev_def ();

	  if (!def)
	    return false;

	  if (!is_a <set_info *> (def))
	    return false;

	  insn_info *def_insn = def->insn ();
	  rtx_insn *def_rtl = def_insn->rtl ();

	  if (!def_rtl)
	    return false;
	  if (!INSN_P (def_rtl))
	    return false;
	  if (def_rtl == vsetvl)
	    return true;
	}
    }

  return false;
}

static bool
computevlvtypechanges (basic_block bb)
{
  bool vector_p = false;

  bb_vinfo &info = m_bb_vinfo_map[bb->index];
  rtx_insn *insn = NULL;
  vinfo curr_info;

  FOR_BB_INSNS (bb, insn)
  {
    // If this is an explicit VSETVLI or VSETIVLI, update our state.
    if (VSETVLI_INSN_P (insn))
      {
	vector_p = true;
	info.change = getinfoforvsetvli (insn, curr_info);
	curr_info = info.change;
	continue;
      }
    /*  According to vector.md, each instruction pattern parallel.
	It should have at least 2 side effects.
	The last 2 side effects are use vl && use vtype  */
    if (USE_VTYPE_P (insn))
      {
	vector_p = true;

	vinfo new_info = computeinfoforinstr (insn, curr_info);
        curr_info = new_info;
	if (!info.change.valid_p ())
	  {
	    info.change = new_info;
	  }
	else
	  {
	    // If this instruction isn't compatible with the previous VL/VTYPE
	    // we need to insert a VSETVLI.
	    // If this is a unit-stride or strided load/store, we may be able
	    // to use the EMUL=(EEW/SEW)*LMUL relationship to avoid changing
	    // vtype. NOTE: We only do this if the vtype we're comparing
	    // against was created in this block. We need the first and third
	    // phase to treat the store the same way.
	    if (!canskipvsetvliforloadstore (insn, new_info, info.change)
		&& needvsetvli (insn, new_info, info.change))
	      info.change = new_info;
	  }
      }
    // If this is something that updates VL/VTYPE that we don't know about, set
    // the state to unknown.
    if (update_vlvtyp_p (insn))
      info.change = vinfo::getunknown ();
  }

  // Initial exit state is whatever change we found in the block.
  info.exit = info.change;

  return vector_p;
}

static void
computeincomingvlvtype (const basic_block bb)
{
  bb_vinfo &info = m_bb_vinfo_map[bb->index];
  info.inqueue = false;

  vinfo in_info;
  if (EDGE_COUNT (bb->preds) == 0)
    {
      in_info.setunknown ();
    }
  else
    {
      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->preds)
      {
	basic_block ancestor = e->src;
	in_info = in_info.intersect (m_bb_vinfo_map[ancestor->index].exit);
      }
    }

  // If we don't have any valid predecessor value, wait until we do.
  if (!in_info.valid_p ())
    return;

  info.pred = in_info;

  vinfo merge_info = info.pred.merge (info.change);

  // If the new exit value matches the old exit value, we don't need to revisit
  // any blocks.
  if (info.exit == merge_info)
    return;

  info.exit = merge_info;

  // Add the successors to the work list so we can propagate the changed exit
  // status.
  edge e;
  edge_iterator ei;
  FOR_EACH_EDGE (e, ei, bb->succs)
  {
    basic_block succ = e->dest;
    if (!m_bb_vinfo_map[succ->index].inqueue)
      m_bb_queue.push (succ);
  }
}

static void
insertvsetvli (rtx_insn *insn, const vinfo &curr_info, const vinfo &prev_info)
{
  extract_insn_cached (insn);
  rtx avl = curr_info.getavl ();
  rtx vtype = GEN_INT (curr_info.encodevtype ());
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);

  // Use X0, X0 form if the AVL is the same and the SEW+LMUL gives the same
  // VLMAX
  if (prev_info.valid_p () && !prev_info.unknown_p ()
      && curr_info.avl_equal_p (prev_info)
      && curr_info.vlmax_equal_p (prev_info))
    {
      emit_vsetvl_insn (zero, zero, vtype, insn);
      return;
    }

  if (curr_info.getavl () == NULL_RTX)
    {
      if (prev_info.valid_p () && !prev_info.unknown_p ()
	  && curr_info.vlmax_equal_p (prev_info))
	{
	  emit_vsetvl_insn (zero, zero, vtype, insn);
	  return;
	}
      // Otherwise use an AVL of 0 to avoid depending on previous vl.
      emit_vsetvl_insn (zero, GEN_INT (0), vtype, insn);
      return;
    }

  if (rtx_equal_p (curr_info.getavl (), gen_rtx_REG (Pmode, X0_REGNUM)))
    {
      avl = gen_reg_rtx (Pmode);
      emit_vsetvl_insn (avl, gen_rtx_REG (Pmode, X0_REGNUM), vtype, insn);
      return;
    }

  emit_vsetvl_insn (zero, avl, vtype, insn);
}

static void
emitvsetvlis (const basic_block bb)
{
  vinfo curr_info;
  // Only be set if current vinfo is from an explicit VSET(I)VLI.
  rtx_insn *prev_insn = NULL;
  rtx_insn *insn = NULL;

  FOR_BB_INSNS (bb, insn)
  {
    // If this is an explicit VSETVLI or VSETIVLI, update our state.
    if (VSETVLI_INSN_P (insn))
      {
	curr_info = getinfoforvsetvli (insn, curr_info);
	prev_insn = insn;
	continue;
      }
    if (USE_VTYPE_P (insn))
      {
	vinfo new_info = computeinfoforinstr (insn, curr_info);

	if (!curr_info.valid_p ())
	  {
	    // We haven't found any vector instructions or VL/VTYPE changes
	    // yet, use the predecessor information.
	    if (!m_bb_vinfo_map[bb->index].pred.valid_p ())
	      {
		if (dump_file)
		   fprintf (dump_file, "-------- Expected a valid predecessor state --------\n\n");
		gcc_unreachable ();
	      }
	    if (needvsetvli (insn, new_info, m_bb_vinfo_map[bb->index].pred)
		&& needvsetvliphi (new_info, insn))
	      {
		insertvsetvli (insn, new_info, m_bb_vinfo_map[bb->index].pred);
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
	    if (!canskipvsetvliforloadstore (insn, new_info, curr_info)
		&& needvsetvli (insn, new_info, curr_info))
	      {
		// If the previous VL/VTYPE is set by VSETVLI and do not use,
		// Merge it with current VL/VTYPE.
		bool need_insert_vsetvli_p = true;
		if (prev_insn)
		  {
		    extract_insn_cached (prev_insn);
		    bool sameavl_p
		      = curr_info.avl_equal_p (new_info)
			|| (new_info.unknown_p () && new_info.getavl ()
			    && rtx_equal_p (new_info.getavl (), recog_data.operand[0]));
		    if (!sameavl_p)
	              sameavl_p = compare_avl_from_source (new_info, prev_insn, insn);
		    // If these two VSETVLI have the same AVL and the same
		    // VLMAX, we could merge these two VSETVLI.
		    if (sameavl_p
			&& curr_info.calcsew_lmul_ratio ()
			== new_info.calcsew_lmul_ratio ())
		      {
			extract_insn_cached (prev_insn);
			replace_op (prev_insn,
				    GEN_INT (new_info.encodevtype ()),
				    REPLACE_VTYPE);
			need_insert_vsetvli_p = false;
		      }
		  }

		if (need_insert_vsetvli_p)
		  insertvsetvli (insn, new_info, curr_info);
		curr_info = new_info;
	      }
	  }
	prev_insn = NULL;
      }
    // If this is something updates VL/VTYPE that we don't know about, set
    // the state to unknown.
    if (update_vlvtyp_p (insn))
      {
	curr_info = vinfo::getunknown ();
	prev_insn = NULL;
      }

    // If we reach the end of the block and our current info doesn't match the
    // expected info, insert a vsetvli to correct.
    if (insn == BB_END (bb))
      {
        const vinfo &exit_info = m_bb_vinfo_map[bb->index].exit;
        if (curr_info.valid_p () && exit_info.valid_p () && !exit_info.unknown_p() &&
            curr_info != exit_info)
	  {
	    insertvsetvli (insn, exit_info, curr_info);
            curr_info = exit_info;
          }
      }
  }
}

const pass_data pass_data_insert_vsetvli =
{
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
  virtual unsigned int execute (function *);

}; // class pass_insert_vsetvli

unsigned int
pass_insert_vsetvli::execute (function *fn)
{
  bool vector_p = false;
  basic_block bb;

  if (n_basic_blocks_for_fn (fn) <= 0)
    return 0;

  if (!m_bb_vinfo_map.empty ())
    {
      if (dump_file)
        fprintf (dump_file, "-------- Expect empty block infos --------\n\n");
      gcc_unreachable ();
    }

  if (optimize >= 2)
    {
      // Initialization.
      calculate_dominance_info (CDI_DOMINATORS);
      df_analyze ();
      crtl->ssa = new rtl_ssa::function_info (cfun);
    }

  if (dump_file)
    fprintf (dump_file, "-------- Initialize Basic Block Map --------\n\n");

  /* Initialize Basic Block Map */
  FOR_ALL_BB_FN (bb, fn)
  {
    bb_vinfo bb_init;
    m_bb_vinfo_map.insert (std::pair<uint8_t, bb_vinfo> (bb->index, bb_init));
  }

  if (dump_file)
    fprintf (dump_file, "-------- Phase 1 determine how VL/VTYPE are affected by the each block --------\n\n");

  // Phase 1 - determine how VL/VTYPE are affected by the each block.
  FOR_ALL_BB_FN (bb, fn)
    vector_p |= computevlvtypechanges (bb);

  if (vector_p)
    {
      if (dump_file)
        fprintf (dump_file, "-------- Phase 2 determine the exit VL/VTYPE from each block --------\n\n");
      // Phase 2 - determine the exit VL/VTYPE from each block. We add all
      // blocks to the list here, but will also add any that need to be
      // revisited during Phase 2 processing.
      FOR_ALL_BB_FN (bb, fn)
      {
	m_bb_queue.push (bb);
	m_bb_vinfo_map[bb->index].inqueue = true;
      }
      while (!m_bb_queue.empty ())
	{
	  bb = m_bb_queue.front ();
	  m_bb_queue.pop ();
	  computeincomingvlvtype (bb);
	}

      if (dump_file)
        fprintf (dump_file, "-------- Phase 3 add any vsetvli instructions needed in the block. --------\n\n");
      // Phase 3 - add any vsetvli instructions needed in the block. Use the
      // Phase 2 information to avoid adding vsetvlis before the first vector
      // instruction in the block if the VL/VTYPE is satisfied by its
      // predecessors.
      FOR_ALL_BB_FN (bb, fn)
      {
	emitvsetvlis (bb);
      }
    }

  m_bb_vinfo_map.clear ();

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

rtl_opt_pass *
make_pass_insert_vsetvli (gcc::context *ctxt)
{
  return new pass_insert_vsetvli (ctxt);
}

/* Insert vsetvli Pass after reload. This pass handles the vsetvli that can not be handled
   by insert_vsetvli which is insert before combine pass.
   Because we have some cases that GCC will generate some register spilling after reload
   when the registers are used up. This kind of register spilling needs to insert vsetvli
   to gurantee the result. */
const pass_data pass_data_insert_vsetvli2 =
{
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
  virtual unsigned int execute (function *);

}; // class pass_insert_vsetvli2

static bool
recog_need_insert_vsetvli_after_reload_p (rtx_insn *insn, rtx *clobber)
{
  /*
   [(set (match_operand 0 "reg_or_mem_operand" "=vr,m,vr")
         (match_operand 1 "reg_or_mem_operand" "m,vr,vr"))
         (clobber (match_scratch:SI 2 "=&r,&r,X"))] */

  if (!(insn && INSN_P(insn)
    && recog_memoized (insn) >= 0
    && (get_attr_type (insn) == TYPE_VLE
    || get_attr_type (insn) == TYPE_VSE)))
    return false;

  rtx pat = PATTERN (insn);
  if (!(GET_CODE (pat) == PARALLEL
    && (XVECLEN (pat, 0) == 2)))
    return false;

  if (GET_CODE (XVECEXP (pat, 0, 1)) != CLOBBER)
    return false;

  if (GET_MODE (XEXP (XVECEXP (pat, 0, 1), 0)) != SImode)
    return false;

  if (GET_CODE (XVECEXP (pat, 0, 0)) != SET)
    return false;

  rtx set = XVECEXP (pat, 0, 0);

  if (REG_P (SET_SRC (set)) && REG_P (SET_DEST (set)))
    return false;

  *clobber = XEXP (XVECEXP (pat, 0, 1), 0);
  PUT_MODE (*clobber, Pmode);
  return true;
}

unsigned int
pass_insert_vsetvli2::execute (function *fn)
{
  basic_block bb;

  if (n_basic_blocks_for_fn (fn) <= 0)
    return 0;

  if (dump_file)
    fprintf (dump_file, "-------- Start of Insert vsetvli instructions --------\n\n");

  bool changed_p = false;
  /* Initialize Basic Block Map */
  FOR_ALL_BB_FN (bb, fn)
  {
    rtx_insn *insn = NULL;
    vinfo curr_info;
    FOR_BB_INSNS (bb, insn)
    {
      if (VSETVLI_INSN_P (insn))
        curr_info = getinfoforvsetvli (insn, curr_info);

      rtx clobber;
      if (recog_need_insert_vsetvli_after_reload_p (insn, &clobber))
        {
	        machine_mode mode = riscv_translate_attr_mode (insn);
	        unsigned int vtype = get_vtype_for_mode (mode);
                vinfo new_info;
	        new_info.setavl (gen_rtx_REG (Pmode, X0_REGNUM));
          new_info.setvtype (vtype);

	        if (!curr_info.valid_p () || curr_info.unknown_p ()
	          || !curr_info.load_store_compatible_p (riscv_parse_vsew_field (vtype),
	          new_info, false, true) || REGNO (new_info.getavl ()) != REGNO (curr_info.getavl ()))
	          {
	            changed_p = true;
              curr_info.setavl (gen_rtx_REG (Pmode, X0_REGNUM));
              curr_info.setvtype (vtype);
							emit_vsetvl_insn (clobber, gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (vtype), insn);
	          }

	        else
	          changed_p = false;

	        rtx pat;
	        extract_insn_cached (insn);
	        if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
	          {
	            if (get_attr_type (insn) == TYPE_VLE)
		            pat = gen_vlm (mode, recog_data.operand[0],
		              XEXP (recog_data.operand[1], 0), const0_rtx, const0_rtx);
	            else
		            pat = gen_vsm (mode, XEXP (recog_data.operand[0], 0),
		              recog_data.operand[1], const0_rtx, const0_rtx);
		        }
	        else
	          {
		          if (get_attr_type (insn) == TYPE_VLE)
		            pat = gen_vle (mode, recog_data.operand[0], const0_rtx, const0_rtx,
		              XEXP (recog_data.operand[1], 0), const0_rtx, const0_rtx);
		          else
		            pat = gen_vse (mode, const0_rtx, XEXP (recog_data.operand[0], 0),
		              recog_data.operand[1], const0_rtx, const0_rtx);
	          }

          validate_change (insn, &PATTERN (insn), pat, false);
	        continue;
	      }
      if (USE_VTYPE_P (insn))
        {
	        vinfo new_info = computeinfoforinstr (insn, curr_info);
	        if (changed_p && needvsetvli (insn, new_info, curr_info))
	          {
							emit_vsetvl_insn (gen_rtx_REG (Pmode, X0_REGNUM), new_info.getavl (), GEN_INT (new_info.encodevtype ()), insn);
	            curr_info = new_info;
	          }
	        changed_p = false;
	        replace_op (insn, const0_rtx, REPLACE_VL);
					continue;
	      }

		// If this is something updates VL/VTYPE that we don't know about, set
    // the state to unknown.
    if (update_vlvtyp_p (insn))
	    curr_info = vinfo::getunknown ();
    }
  }
  if (dump_file)
    fprintf (dump_file, "-------- End of Insert vsetvli instructions --------\n\n");

  return 0;
}

rtl_opt_pass *
make_pass_insert_vsetvli2 (gcc::context *ctxt)
{
  return new pass_insert_vsetvli2 (ctxt);
}
