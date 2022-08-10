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

/*  This pass is to insert vsetvli instructions for RVV instructions that depend
   on vtype or vl. Because Clang+LLVM compiler has the mature pass to insert
   vsetvli instructions and works well, algorithm follows the Clang+LLVM
   compiler Pass.

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

/* Helper functions. */

static unsigned int
get_policy_offset (rtx_insn *insn)
{
  unsigned int offset = 2;
  if (GET_CODE (PATTERN (insn)) == PARALLEL)
    {
      if (get_attr_type (insn) == TYPE_VCMP && recog_data.n_operands == 9)
	offset = 3;
    }
  return offset;
}

static unsigned int
get_vl_offset (rtx_insn *insn)
{
  extract_insn_cached (insn);
  unsigned int offset = 3;
  if (GET_CODE (PATTERN (insn)) == PARALLEL)
    {
      if (get_attr_type (insn) == TYPE_VCMP && recog_data.n_operands == 9)
	offset = 4;
    }
  return offset;
}

static bool
vector_config_instr_p (rtx_insn *insn)
{
  return insn && NONDEBUG_INSN_P (insn) && recog_memoized (insn) >= 0
	 && get_attr_type (insn) == TYPE_VSETVL;
}

/// Return true if this is 'vsetvli x0, x0, vtype' which preserves
/// VL and only sets VTYPE.
static bool
vl_preserving_config_p (rtx_insn *insn)
{
  if (vector_config_instr_p (insn))
    {
      extract_insn_cached (insn);
      return recog_data.n_operands == 2 && GET_CODE (PATTERN (insn)) == SET;
    }
  return false;
}

static bool
scalar_move_insn_p (rtx_insn *insn)
{
  return insn && NONDEBUG_INSN_P (insn) && recog_memoized (insn) >= 0
	 && (get_attr_type (insn) == TYPE_VMV_S_X
	     || get_attr_type (insn) == TYPE_VFMV_S_F);
}

static bool
store_insn_p (rtx_insn *insn)
{
  return insn && NONDEBUG_INSN_P (insn) && recog_memoized (insn) >= 0
	 && (get_attr_type (insn) == TYPE_VSE
	     || get_attr_type (insn) == TYPE_VSSE
	     || get_attr_type (insn) == TYPE_VSUXEI
	     || get_attr_type (insn) == TYPE_VSOXEI
	     || get_attr_type (insn) == TYPE_VSSEG
	     || get_attr_type (insn) == TYPE_VSSSEG
	     || get_attr_type (insn) == TYPE_VSUXSEGEI
	     || get_attr_type (insn) == TYPE_VSOXSEGEI);
}

static bool
can_skip_load_store_insn_p (rtx_insn *insn)
{
  return insn && NONDEBUG_INSN_P (insn) && recog_memoized (insn) >= 0
	 && (get_attr_type (insn) == TYPE_VSE
	     || get_attr_type (insn) == TYPE_VSSE
	     || get_attr_type (insn) == TYPE_VLE
	     || get_attr_type (insn) == TYPE_VLSE);
}

static bool
vector_insn_p (rtx_insn *insn)
{
  if (!insn)
    return false;

  if (!NONDEBUG_INSN_P (insn))
    return false;

  if (recog_memoized (insn) < 0)
    return false;

  if (!riscv_vector_mode_p (riscv_translate_attr_mode (insn)))
    return false;

  return true;
}

static bool
use_vl_p (rtx_insn *insn)
{
  if (!vector_insn_p (insn))
    return false;

  if (GET_CODE (SET_SRC (single_set (insn))) != UNSPEC)
    return false;

  if (XINT (SET_SRC (single_set (insn)), 1) != UNSPEC_RVV)
    return false;

  rtx pat = SET_SRC (single_set (insn));
  if (XVECLEN (pat, 0) > 1
      && rtx_equal_p (XVECEXP (pat, 0, XVECLEN (pat, 0) - 2),
		      gen_rtx_REG (SImode, VL_REGNUM)))
    return true;

  return false;
}

static bool
use_vtype_p (rtx_insn *insn)
{
  if (!vector_insn_p (insn))
    return false;

  if (GET_CODE (SET_SRC (single_set (insn))) != UNSPEC)
    return false;

  if (XINT (SET_SRC (single_set (insn)), 1) != UNSPEC_RVV)
    return false;

  rtx pat = SET_SRC (single_set (insn));
  if (rtx_equal_p (XVECEXP (pat, 0, XVECLEN (pat, 0) - 1),
		   gen_rtx_REG (SImode, VTYPE_REGNUM)))
    return true;

  return false;
}

static bool
use_vlmax_p (rtx_insn *insn)
{
  if (!vector_insn_p (insn))
    return false;
  if (!use_vl_p (insn))
    return false;
  extract_insn_cached (insn);
  unsigned int offset = get_vl_offset (insn);
  return rtx_equal_p (recog_data.operand[recog_data.n_operands - offset],
		      gen_rtx_REG (Pmode, X0_REGNUM));
}

static bool
need_vsetvli_p (rtx_insn *insn)
{
  if (!vector_insn_p (insn))
    return false;
  return true;
}

static void
replace_op (rtx_insn *insn, rtx x, unsigned int replace)
{
  extract_insn_cached (insn);
  if (replace == REPLACE_VTYPE)
    validate_change (insn,
		     recog_data.operand_loc[vl_preserving_config_p (insn)
					      ? 0
					      : recog_data.n_operands - 1],
		     x, false);

  if (replace == REPLACE_VL && use_vl_p (insn))
    {
      unsigned int offset = get_vl_offset (insn);
      if (reload_completed)
	validate_change (insn,
			 recog_data.operand_loc[recog_data.n_operands - offset],
			 x, false);
      else
	validate_change (insn,
			 recog_data.operand_loc[recog_data.n_operands - 1], x,
			 false);
    }
}

static bool
asm_insn_p (rtx_insn *insn)
{
  if (!insn)
    return false;

  if (!NONDEBUG_INSN_P (insn))
    return false;

  rtx pat = PATTERN (insn);

  if (!pat)
    return false;

  return GET_CODE (PATTERN (insn)) == ASM_INPUT
	 || GET_CODE (PATTERN (insn)) == ASM_OPERANDS
	 || asm_noperands (PATTERN (insn)) >= 0;
}

static bool
fault_first_load_p (rtx_insn *insn)
{
  if (!insn)
    return false;

  if (!NONDEBUG_INSN_P (insn))
    return false;

  if (recog_memoized (insn) < 0)
    return false;

  return get_attr_type (insn) == TYPE_VLEFF
	 || get_attr_type (insn) == TYPE_VLSEGFF;
}

static bool
readvl_p (rtx_insn *insn)
{
  if (!insn)
    return false;

  if (!NONDEBUG_INSN_P (insn))
    return false;

  if (recog_memoized (insn) < 0)
    return false;

  return get_attr_type (insn) == TYPE_READVL;
}

static bool
update_vl_vtype_p (rtx_insn *insn)
{
  if (fault_first_load_p (insn))
    return true;

  if (CALL_P (insn))
    return true;

  if (asm_insn_p (insn))
    return true;

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
	  resource_info resource = full_register (REGNO (avl));
	  def_lookup dl = crtl->ssa->find_def (resource, insn);
	  def_info *def = dl.last_def_of_prev_group ();

	  if (!def)
	    return NULL_RTX;

	  if (!is_a<set_info *> (def))
	    return NULL_RTX;

	  insn_info *def_insn = def->insn ();

	  if (!def_insn)
	    return NULL_RTX;
	  rtx_insn *def_rtl = def_insn->rtl ();

	  if (!def_rtl)
	    {
	      if (def_insn->is_phi ())
		{
		  // There is an existing phi.
		  phi_info *phi = as_a<phi_info *> (def);
		  avl_source = NULL_RTX;
		  for (unsigned int i = 0; i < phi->num_inputs (); i++)
		    {
		      def_info *phi_def = phi->input_value (i);
		      if (!phi_def)
			break;
		      insn_info *phi_def_insn = phi_def->insn ();
		      rtx_insn *phi_def_rtl = phi_def_insn->rtl ();
		      if (!phi_def_rtl)
			break;
		      if (!NONDEBUG_INSN_P (phi_def_rtl))
			break;

		      // So far we only check single set.
		      // Maybe optimize in the future ?????
		      if (single_set (phi_def_rtl))
			{
			  if (!avl_source)
			    avl_source = SET_SRC (single_set (phi_def_rtl));
			  else
			    {
			      if (!rtx_equal_p (avl_source,
						SET_SRC (
						  single_set (phi_def_rtl))))
				{
				  avl_source = NULL_RTX;
				  break;
				}
			    }
			}
		    }

		  if (avl_source)
		    return avl_source;
		}

	      return NULL_RTX;
	    }

	  if (NONDEBUG_INSN_P (def_rtl) && single_set (def_rtl))
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

static unsigned
get_sew_lmul_ratio (unsigned int vsew_arg, unsigned int vlmul_arg)
{
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

/// Return true if this is an operation on mask registers.  Note that
/// this includes both arithmetic/logical ops and load/store (vlm/vsm).
static bool
mask_reg_op_p (rtx_insn *insn)
{
  if (!insn)
    return false;

  if (!NONDEBUG_INSN_P (insn))
    return false;

  if (recog_memoized (insn) < 0)
    return false;

  machine_mode mode = riscv_translate_attr_mode (insn);
  return riscv_vector_mask_mode_p (mode);
}

/// Which subfields of vl or VTYPE have values we need to preserve?
struct demanded_fields
{
  bool vl = false;
  bool sew = false;
  bool lmul = false;
  bool sew_lmul_ratio = false;
  bool tail_policy = false;
  bool mask_policy = false;

  // Return true if any part of VTYPE was used
  bool used_vtype ()
  {
    return sew || lmul || sew_lmul_ratio || tail_policy || mask_policy;
  }

  // Mark all VTYPE subfields and properties as demanded
  void demand_vtype ()
  {
    sew = true;
    lmul = true;
    sew_lmul_ratio = true;
    tail_policy = true;
    mask_policy = true;
  }
};

static void
do_union (demanded_fields &a, demanded_fields b)
{
  a.vl |= b.vl;
  a.sew |= b.sew;
  a.lmul |= b.lmul;
  a.sew_lmul_ratio |= b.sew_lmul_ratio;
  a.tail_policy |= b.tail_policy;
  a.mask_policy |= b.mask_policy;
}

// Return which fields are demanded by the given instruction.
static demanded_fields
get_demanded (rtx_insn *insn)
{
  // Warning: This function has to work on both the lowered (i.e. post
  // emitVSETVLIs) and pre-lowering forms.  The main implication of this is
  // that it can't use the value of a SEW, VL, or Policy operand as they might
  // be stale after lowering.

  // Most instructions don't use any of these subfeilds.
  demanded_fields res;
  // Start conservative if registers are used
  if (CALL_P (insn) || asm_insn_p (insn) || use_vtype_p (insn))
    res.vl = true;
  if (CALL_P (insn) || asm_insn_p (insn) || use_vl_p (insn))
    res.demand_vtype ();

  // Start conservative on the unlowered form too
  if (use_vtype_p (insn))
    {
      res.demand_vtype ();
      if (use_vl_p (insn))
	res.vl = true;
    }

  // Loads and stores with implicit EEW do not demand SEW or LMUL directly.
  // They instead demand the ratio of the two which is used in computing
  // EMUL, but which allows us the flexibility to change SEW and LMUL
  // provided we don't change the ratio.
  // Note: We assume that the instructions initial SEW is the EEW encoded
  // in the opcode.  This is asserted when constructing the VSETVLIInfo.
  if (can_skip_load_store_insn_p (insn))
    {
      res.sew = false;
      res.lmul = false;
    }

  // Store instructions don't use the policy fields.
  if (store_insn_p (insn))
    {
      res.tail_policy = false;
      res.mask_policy = false;
    }

  // If this is a mask reg operation, it only cares about VLMAX.
  // TODO: Possible extensions to this logic
  // * Probably ok if available VLMax is larger than demanded
  // * The policy bits can probably be ignored..
  if (mask_reg_op_p (insn))
    {
      res.sew = false;
      res.lmul = false;
    }

  return res;
}

static bool
are_compatible_vtypes (uint64_t vtype1, uint64_t vtype2,
		       const demanded_fields &used, bool relax_p = false)
{
  unsigned int prior_vsew = riscv_parse_vsew_field (vtype1);
  unsigned int prior_vlmul = riscv_parse_vlmul_field (vtype1);
  unsigned int vsew = riscv_parse_vsew_field (vtype2);
  unsigned int vlmul = riscv_parse_vlmul_field (vtype2);
  if (used.sew && vsew != prior_vsew)
    return false;

  if (used.lmul && vlmul != prior_vlmul)
    return false;

  if (used.sew_lmul_ratio)
    {
      auto prior_ratio = get_sew_lmul_ratio (prior_vsew, prior_vlmul);
      auto ratio = get_sew_lmul_ratio (vsew, vlmul);
      if (prior_ratio != ratio)
	return false;
    }

  if (used.tail_policy
      && riscv_parse_vta_field (vtype2) != riscv_parse_vta_field (vtype1))
    {
      if (relax_p)
	{
	  if (((vtype1 >> 30) & 0x1) == 0)
	    return false;
	}
      else
	return false;
    }
  if (used.mask_policy
      && riscv_parse_vma_field (vtype2) != riscv_parse_vma_field (vtype1))
    {
      if (relax_p)
	{
	  if (((vtype1 >> 31) & 0x1) == 0)
	    return false;
	}
      else
	return false;
    }
  return true;
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
  uint8_t sew_lmul_ratio_only_p : 1;
  rtx avl;
  rtx avl_source;
  uint8_t vma_mutate_p : 1;
  uint8_t vta_mutate_p : 1;

public:
  vinfo ()
    : state (STATE_UNINITIALIZED), vma (false), vta (false), vsew (0),
      vlmul (0), sew_lmul_ratio_only_p (false), avl (NULL_RTX),
      avl_source (NULL_RTX), vma_mutate_p (false), vta_mutate_p (false)
  {}

  ~vinfo () {}

  static vinfo get_unknown ()
  {
    vinfo info;
    info.set_unknown ();
    return info;
  }

  bool valid_p () const { return state != STATE_UNINITIALIZED; }
  void set_unknown () { state = STATE_UNKNOWN; }
  bool unknown_p () const { return state == STATE_UNKNOWN; }

  bool known_p () const { return state == STATE_KNOWN; }

  void set_avl (rtx op)
  {
    avl = op;
    state = STATE_KNOWN;
  }

  void set_avl_source (rtx op) { avl_source = op; }

  bool avl_const_p () const
  {
    return get_avl () && CONST_SCALAR_INT_P (get_avl ());
  }

  bool avl_reg_p () const { return get_avl () && REG_P (get_avl ()); }

  rtx get_avl () const
  {
    gcc_assert (known_p ());
    return avl;
  }

  bool has_nonzero_avl () const
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

  rtx get_avl_source () const
  {
    gcc_assert (known_p ());
    return avl_source;
  }

  unsigned int get_vsew () const { return vsew; }

  unsigned int get_sew () const
  {
    machine_mode inner = vsew_to_int_mode (vsew);
    return GET_MODE_BITSIZE (as_a<scalar_mode> (inner));
  };

  enum vlmul_field_enum get_vlmul () const
  {
    return (enum vlmul_field_enum) vlmul;
  }

  unsigned int get_vta () const { return vta; }

  unsigned int get_vma () const { return vma; }

  bool compare_vl (const vinfo &info) const
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
	machine_mode mode
	  = riscv_vector::vector_builtin_mode (as_a<scalar_mode> (inner),
					       info.get_vlmul ());
	if (CONST_SCALAR_INT_P (info.get_avl ()))
	  {
	    if (GET_MODE_NUNITS (mode).is_constant ()
		&& INTVAL (info.get_avl ())
		     == GET_MODE_NUNITS (mode).to_constant ())
	      return true;
	  }

	if (REG_P (info.get_avl ()))
	  {
	    if (info.get_avl_source ())
	      {
		if (CONST_SCALAR_INT_P (info.get_avl_source ())
		    && GET_MODE_NUNITS (mode).is_constant ()
		    && INTVAL (info.get_avl_source ())
			 == GET_MODE_NUNITS (mode).to_constant ())
		  return true;
		if (CONST_POLY_INT_P (info.get_avl_source ())
		    && !GET_MODE_NUNITS (mode).is_constant ()
		    && known_eq (rtx_to_poly_int64 (info.get_avl_source ()),
				 GET_MODE_NUNITS (mode)))
		  return true;
	      }
	  }
      }

    return false;
  }

  bool avl_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p ()
		&& "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p ()
		&& "Can't compare AVL in unknown state.");

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

    if (other.get_avl_source ()
	&& rtx_equal_p (other.get_avl_source (), get_avl ()))
      return true;

    return rtx_equal_p (get_avl_source (), other.get_avl_source ());
  }

  void set_vtype (unsigned int vtype)
  {
    gcc_assert (valid_p () && !unknown_p ()
		&& "Can't set VTYPE for uninitialized or unknown.");
    vma = riscv_parse_vma_field (vtype);
    vta = riscv_parse_vta_field (vtype);
    vsew = riscv_parse_vsew_field (vtype);
    vlmul = riscv_parse_vlmul_field (vtype);
    vma_mutate_p = (vtype >> 31) & 0x1;
    vta_mutate_p = (vtype >> 30) & 0x1;
  }

  void set_vtype (unsigned vl, unsigned vs, bool vt, bool vm, bool vt_m_p,
		  bool vm_m_p)
  {
    gcc_assert (valid_p () && !unknown_p ()
		&& "Can't set VTYPE for uninitialized or unknown.");
    vma = vm;
    vta = vt;
    vsew = vs;
    vlmul = vl;
    vma_mutate_p = vm_m_p;
    vta_mutate_p = vt_m_p;
  }

  // Encode VTYPE into the binary format used by the the VSETVLI instruction
  // which is used by our MC layer representation.
  //
  // Bits | Name                | Description
  // -----+---------------------+------------------------------------------------
  // 7    | vma_mutate_p        | Vector mask agnostic
  // 6    | vta_mutate_p        | Vector tail agnostic
  // 7    | vma                 | Vector mask agnostic
  // 6    | vta                 | Vector tail agnostic
  // 5:3  | vsew[2:0]           | Standard element width(SEW) setting
  // 2:0  | vlmul[2:0]          | Vector register group multiplier(LMUL) setting
  unsigned encode_vtype () const
  {
    gcc_assert (valid_p () && !unknown_p () && !sew_lmul_ratio_only_p
		&& "Can't set VTYPE for uninitialized or unknown.");
    gcc_assert (vsew >= 0 && vsew <= 7 && "Invalid SEW.");
    unsigned vtype = (vsew << 3) | (vlmul & 0x7);
    if (vta)
      vtype |= 0x40;
    if (vma)
      vtype |= 0x80;
    if (vta_mutate_p)
      vtype |= 0x40000000;
    if (vma_mutate_p)
      vtype |= 0x80000000;
    return vtype;
  }

  bool get_sew_lmul_ratio_only_p () const { return sew_lmul_ratio_only_p; }

  bool sew_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p ()
		&& "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p ()
		&& "Can't compare VTYPE in unknown state.");
    gcc_assert (!sew_lmul_ratio_only_p && !other.sew_lmul_ratio_only_p
		&& "Can't compare when only LMUL/SEW ratio is valid.");
    return vsew == other.vsew;
  }

  bool vtype_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p ()
		&& "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p ()
		&& "Can't compare VTYPE in unknown state.");
    gcc_assert (!sew_lmul_ratio_only_p && !other.sew_lmul_ratio_only_p
		&& "Can't compare when only LMUL/SEW ratio is valid.");
    return std::tie (vma, vta, vsew, vlmul)
	   == std::tie (other.vma, other.vta, other.vsew, other.vlmul);
  }

  bool policy_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p ()
		&& "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p ()
		&& "Can't compare VTYPE in unknown state.");

    return vta == other.vta && vma == other.vma;
  }

  unsigned calc_sew_lmul_ratio () const
  {
    gcc_assert (valid_p () && !unknown_p ()
		&& "Can't use VTYPE for uninitialized or unknown.");
    return get_sew_lmul_ratio (vsew, vlmul);
  }

  // Check if the VTYPE for these two VSETVLI Infos produce the same VLMAX.
  // Note that having the same VLMAX ensures that both share the same
  // function from AVL to VL; that is, they must produce the same VL value
  // for any given AVL value.
  bool vlmax_equal_p (const vinfo &other) const
  {
    gcc_assert (valid_p () && other.valid_p ()
		&& "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!unknown_p () && !other.unknown_p ()
		&& "Can't compare AVL in unknown state.");
    return calc_sew_lmul_ratio () == other.calc_sew_lmul_ratio ();
  }

  bool compatible_vtype_p (rtx_insn *insn, const vinfo &require) const
  {
    demanded_fields used = get_demanded (insn);
    return are_compatible_vtypes (encode_vtype (), require.encode_vtype (),
				  used);
  }

  // Determine whether the vector instructions requirements represented by
  // InstrInfo are compatible with the previous vsetvli instruction represented
  // by this. insn is the instruction whose requirements we're considering.
  bool compatible_p (rtx_insn *insn, const vinfo &require) const
  {
    gcc_assert (valid_p () && require.valid_p ()
		&& "Can't compare invalid VSETVLI Infos.");
    gcc_assert (!require.sew_lmul_ratio_only_p
		&& "Expected a valid VTYPE for instruction.");

    // Nothing is compatible with Unknown.
    if (unknown_p () || require.unknown_p ())
      return false;

    // If only our VLMAX ratio is valid, then this isn't compatible.
    if (sew_lmul_ratio_only_p)
      return false;

    // Anything else is not compatible.
    return avl_equal_p (require) && compatible_vtype_p (insn, require);
  }

  bool operator== (const vinfo &other) const
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

    if (get_avl () && !other.get_avl ())
      return false;

    if (!get_avl () && other.get_avl ())
      return false;

    if (get_avl () && other.get_avl ()
	&& !rtx_equal_p (get_avl (), other.get_avl ()))
      return false;

    if (get_avl_source () && !other.get_avl_source ())
      return false;

    if (!get_avl_source () && other.get_avl_source ())
      return false;

    if (get_avl_source () && other.get_avl_source ()
	&& !rtx_equal_p (get_avl_source (), other.get_avl_source ()))
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

  bool operator!= (const vinfo &Other) const { return !(*this == Other); }

  vinfo &operator= (const vinfo &other)
  {
    state = other.state;
    vma = other.vma;
    vta = other.vta;
    vsew = other.vsew;
    vlmul = other.vlmul;
    sew_lmul_ratio_only_p = other.sew_lmul_ratio_only_p;
    avl = other.avl;
    avl_source = other.avl_source;
    vma_mutate_p = other.vma_mutate_p;
    vta_mutate_p = other.vta_mutate_p;
    return *this;
  }

  // Calculate the vinfo visible to a block assuming this and other are
  // both predecessors.
  vinfo intersect (const vinfo &other) const
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
  void print () const
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
    fprintf (dump_file, "  Vsew=%d\n", (unsigned int) vsew);
    fprintf (dump_file, "  Vlmul=%d\n", (unsigned int) vlmul);
    fprintf (dump_file, "  TailAgnostic=%d\n", (unsigned int) vta);
    fprintf (dump_file, "  MaskAgnostic=%d\n", (unsigned int) vma);
    fprintf (dump_file, "  Sew_lmul_ratio_only_p=%d\n",
	     (unsigned int) sew_lmul_ratio_only_p);
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
	  def_info *def = dl.last_def_of_prev_group ();

	  if (!def)
	    return NULL;

	  if (!is_a<set_info *> (def))
	    return NULL;

	  insn_info *def_insn = def->insn ();
	  rtx_insn *def_rtl = def_insn->rtl ();

	  if (!def_rtl)
	    return NULL;
	  if (!NONDEBUG_INSN_P (def_rtl))
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
      fprintf (dump_file, "insert vsetvli before insn %d\n\n", INSN_UID (insn));
      print_rtl_single (dump_file, insn);
    }

  rtx pat = rtx_equal_p (op0, gen_rtx_REG (Pmode, X0_REGNUM))
	      ? gen_vsetvl_zero (Pmode, op1, op2)
	      : gen_vsetvl (Pmode, op0, op1, op2);
  emit_insn_before (pat, insn);
  if (dump_file)
    {
      fprintf (dump_file, "the vsetvli insn pattern\n\n");
      print_rtl_single (dump_file, pat);
    }
}

static vinfo
compute_info_for_instr (rtx_insn *, vinfo);

// Return a vinfo representing the changes made by this VSETVLI or
// VSETIVLI instruction.
static vinfo
get_info_for_vsetvli (rtx_insn *insn)
{
  vinfo new_info;
  extract_insn_cached (insn);
  if (vl_preserving_config_p (insn))
    {
      if (optimize < 2)
	return vinfo::get_unknown ();
      gcc_assert (CONST_INT_P (recog_data.operand[0])
		  && "Invalid vtype in vsetvli instruction.");
      new_info.set_avl (recog_data.operand[1]);
      new_info.set_avl_source (get_avl_source (recog_data.operand[1], insn));
      new_info.set_vtype (INTVAL (recog_data.operand[0]));
      return new_info;
    }

  if (recog_data.n_operands == 2)
    {
      gcc_assert (CONST_INT_P (recog_data.operand[1])
		  && "Invalid vtype in vsetvli instruction.");
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

  if (use_vlmax_p (insn))
    return 1;
  unsigned int offset = get_policy_offset (insn);
  extract_insn_cached (insn);
  vector_policy vma = riscv_vector::get_vma (
    INTVAL (recog_data.operand[recog_data.n_operands - offset]));
  vector_policy vta = riscv_vector::get_vta (
    INTVAL (recog_data.operand[recog_data.n_operands - offset]));
  unsigned int vma_p = 0;
  unsigned int vta_p = 0;
  unsigned int mutate_p = 0;
  if (vma == vector_policy::any)
    mutate_p |= 0x80000000;
  if (vta == vector_policy::any)
    mutate_p |= 0x40000000;
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

  /* Field:      31     |     30      | ......... |   1  |   0  |
		 vma_mutate_p | vta_muate_p | ......... |  vma |  vta |
  */
  return (vma_p << 1) | vta_p | mutate_p;
}

static vinfo
compute_info_for_instr (rtx_insn *insn, vinfo curr_info)
{
  vinfo info;

  extract_insn_cached (insn);
  if (use_vl_p (insn))
    {
      if (use_vlmax_p (insn))
	info.set_avl (gen_rtx_REG (Pmode, X0_REGNUM));
      else
	{
	  unsigned int offset = get_vl_offset (insn);
	  info.set_avl (recog_data.operand[recog_data.n_operands - offset]);
	  info.set_avl_source (
	    get_avl_source (recog_data.operand[recog_data.n_operands - offset],
			    insn));
	}
    }
  else
    info.set_avl (NULL_RTX);

  machine_mode mode = riscv_translate_attr_mode (insn);

  unsigned int vma_vta = analyze_vma_vta (insn, curr_info);
  unsigned int vta = vma_vta & 0x1;
  unsigned int vma = (vma_vta >> 1) & 0x1;
  info.set_vtype (riscv_classify_vlmul_field (mode),
		  riscv_classify_vsew_field (mode),
		  /*TailAgnostic*/ vta, /*MaskAgnostic*/ vma,
		  /*TailAgnostic can muate*/ false,
		  /*MaskAgnostic can muate*/ false);

  return info;
}

/// Return true if a VSETVLI is required to transition from CurInfo to Require
/// before MI.
static bool
needvsetvli (rtx_insn *insn, const vinfo &require, const vinfo &curr_info)
{
  if (!need_vsetvli_p (insn))
    return false;

  gcc_assert (require == compute_info_for_instr (insn, curr_info));

  if (curr_info.valid_p () && require.valid_p () && curr_info.known_p ()
      && require.known_p () && require.get_avl () == NULL_RTX
      && curr_info.vtype_equal_p (require))
    return false;

  if (curr_info.compatible_p (insn, require))
    return false;

  if (!curr_info.valid_p () || curr_info.unknown_p ()
      || curr_info.get_sew_lmul_ratio_only_p ())
    return true;

  // For vmv.s.x and vfmv.s.f, there is only two behaviors, VL = 0 and VL > 0.
  // VL=0 is uninteresting (as it should have been deleted already), so it is
  // compatible if we can prove both are non-zero.  Additionally, if writing
  // to an implicit_def operand, we don't need to preserve any other bits and
  // are thus compatible with any larger etype, and can disregard policy bits.
  if (scalar_move_insn_p (insn) && curr_info.has_nonzero_avl ()
      && require.has_nonzero_avl ())
    {
      extract_insn_cached (insn);
      if (rtx_equal_p (recog_data.operand[1],
		       CONST0_RTX (GET_MODE (recog_data.operand[1])))
	  && curr_info.get_sew () >= require.get_sew ())
	return false;
      if (curr_info.sew_equal_p (require) && curr_info.policy_equal_p (require))
	return false;
    }

  // We didn't find a compatible value. If our AVL is a virtual register,
  // it might be defined by a VSET(I)VLI. If it has the same VTYPE we need
  // and the last VL/VTYPE we observed is the same, we don't need a
  // VSETVLI here.
  if (require.avl_reg_p ()
      && ((!reload_completed
	   && !HARD_REGISTER_NUM_P (REGNO (require.get_avl ())))
	  || reload_completed)
      && curr_info.compatible_vtype_p (insn, require))
    {
      rtx_insn *def_rtl = fetch_def_insn (insn, require);
      if (def_rtl != NULL)
	{
	  if (vector_config_instr_p (def_rtl))
	    {
	      vinfo def_info = get_info_for_vsetvli (def_rtl);
	      if (def_info.avl_equal_p (curr_info)
		  && def_info.vlmax_equal_p (curr_info))
		return false;
	    }
	}
    }

  return true;
}

// If we weren't able to prove a vsetvli was directly unneeded, it might still
// be unneeded if the AVL is a phi node where all incoming values are VL
// outputs from the last VSETVLI in their respective basic blocks.
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

  if (!(!new_info.unknown_p () && new_info.get_avl ()
	&& GET_CODE (new_info.get_avl ()) == REG))
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
	  def_info *set = dl.last_def_of_prev_group ();

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
	      if (!NONDEBUG_INSN_P (def_rtl))
		return true;
	      extract_insn_cached (def_rtl);
	      if (recog_data.n_operands > 0
		  && rtx_equal_p (recog_data.operand[0], avl))
		{
		  // We need the PHI input to the be the output of a VSET(I)VLI.
		  if (get_attr_type (def_rtl)
		      && get_attr_type (def_rtl) == TYPE_VSETVL)
		    {
		      basic_block def_bb = BLOCK_FOR_INSN (def_rtl);
		      bb_vinfo info = bb_vinfo_map.at (def_bb->index);
		      // If the exit from the predecessor has the VTYPE we are
		      // looking for we might be able to avoid a VSETVLI.
		      if (info.exit.unknown_p ()
			  || !info.exit.vtype_equal_p (new_info))
			return true;
		      // We found a VSET(I)VLI make sure it matches the
		      // output of the predecessor block.
		      vinfo curr_info;
		      vinfo avl_def_info = get_info_for_vsetvli (def_rtl);
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

// Given an incoming state reaching MI, modifies that state so that it is
// minimally compatible with MI.  The resulting state is guaranteed to be
// semantically legal for MI, but may not be the state requested by MI.
void
transfer_before (vinfo &info, rtx_insn *insn)
{
  if (!use_vtype_p (insn))
    return;

  vinfo new_info = compute_info_for_instr (insn, info);
  if (info.valid_p () && !needvsetvli (insn, new_info, info))
    return;

  const vinfo prev_info = info;
  info = new_info;

  if (!use_vl_p (insn))
    return;

  // For vmv.s.x and vfmv.s.f, there are only two behaviors, VL = 0 and
  // VL > 0. We can discard the user requested AVL and just use the last
  // one if we can prove it equally zero.  This removes a vsetvli entirely
  // if the types match or allows use of cheaper avl preserving variant
  // if VLMAX doesn't change.  If VLMAX might change, we couldn't use
  // the 'vsetvli x0, x0, vtype" variant, so we avoid the transform to
  // prevent extending live range of an avl register operand.
  // TODO: We can probably relax this for immediates.
  if (scalar_move_insn_p (insn) && prev_info.valid_p ()
      && prev_info.has_nonzero_avl () && info.has_nonzero_avl ()
      && info.vlmax_equal_p (prev_info))
    {
      info.set_avl (prev_info.get_avl ());
      return;
    }

  // If AVL is defined by a vsetvli with the same VLMAX, we can
  // replace the AVL operand with the AVL of the defining vsetvli.
  // We avoid general register AVLs to avoid extending live ranges
  // without being sure we can kill the original source reg entirely.
  if (!info.avl_reg_p ()
      || (!reload_completed && HARD_REGISTER_NUM_P (REGNO (info.get_avl ()))))
    return;
  rtx_insn *def_insn = fetch_def_insn (insn, info);
  if (!def_insn || !vector_config_instr_p (def_insn))
    return;

  vinfo def_info = get_info_for_vsetvli (def_insn);
  if (def_info.vlmax_equal_p (info)
      && (def_info.avl_const_p ()
	  || (def_info.avl_reg_p ()
	      && rtx_equal_p (def_info.get_avl (),
			      gen_rtx_REG (Pmode, X0_REGNUM)))))
    {
      info.set_avl (def_info.get_avl ());
      return;
    }
}

// Given a state with which we evaluated insn (see transferBefore above for why
// this might be different that the state insn requested), modify the state to
// reflect the changes insn might make.
void
transfer_after (vinfo &info, rtx_insn *insn)
{
  if (vector_config_instr_p (insn))
    {
      info = get_info_for_vsetvli (insn);
      return;
    }

  if (fault_first_load_p (insn))
    {
      // Update AVL to vl-output of the fault first load.
      rtx_insn *next_insn = NEXT_INSN (insn);
      rtx new_vl = NULL_RTX;
      extract_insn_cached (insn);
      rtx dest = recog_data.operand[0];
      basic_block bb = BLOCK_FOR_INSN (insn);
      for (; next_insn && next_insn != NEXT_INSN (BB_END (bb));
	   next_insn = NEXT_INSN (next_insn))
	{
	  if (readvl_p (next_insn))
	    {
	      extract_insn_cached (next_insn);
	      rtx source = recog_data.operand[1];
	      if (rtx_equal_p (source, dest))
		{
		  new_vl = recog_data.operand[0];
		  break;
		}
	    }
	}
      if (new_vl)
	info.set_avl (new_vl);
      return;
    }

  // If this is something that updates VL/VTYPE that we don't know about, set
  // the state to unknown.
  if (update_vl_vtype_p (insn))
    info = vinfo::get_unknown ();
}

static bool
compute_vl_vtype_changes (basic_block bb)
{
  bool vector_p = false;

  bb_vinfo &info = bb_vinfo_map[bb->index];
  info.change = info.pred;
  rtx_insn *insn = NULL;

  FOR_BB_INSNS (bb, insn)
    {
      transfer_before (info.change, insn);
      /*  According to vector.md, each instruction pattern parallel.
	  It should have at least 2 side effects.
	  The last 2 side effects are use vl && use vtype  */

      if (vector_config_instr_p (insn) || use_vtype_p (insn))
	vector_p = true;

      transfer_after (info.change, insn);
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
	  vinfo ancestor_info = bb_vinfo_map.at (ancestor->index).exit;
	  in_info = in_info.intersect (ancestor_info);
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
      bb_vinfo_map[bb->index].pred.print ();
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
      bb_vinfo_map[bb->index].exit.print ();
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

  // Use X0, X0 form if the AVL is the same and the SEW+LMUL gives the same
  // VLMAX
  if (prev_info.valid_p () && !prev_info.unknown_p ()
      && curr_info.avl_equal_p (prev_info)
      && curr_info.vlmax_equal_p (prev_info))
    {
      if (curr_info.get_avl () != NULL_RTX)
	emit_insn_before (gen_vsetvl_zero_zero (Pmode, vtype,
						curr_info.get_avl ()),
			  insn);
      else
	emit_vsetvl_insn (zero, GEN_INT (0), vtype, insn);
      return;
    }

  if (curr_info.get_avl () == NULL_RTX)
    {
      if (prev_info.valid_p () && !prev_info.unknown_p ()
	  && curr_info.vlmax_equal_p (prev_info))
	emit_insn_before (gen_vsetvl_zero_zero (Pmode, vtype,
						prev_info.get_avl ()),
			  insn);
      // Otherwise use an AVL of 0 to avoid depending on previous vl.
      emit_vsetvl_insn (zero, GEN_INT (0), vtype, insn);
      return;
    }

  if (rtx_equal_p (curr_info.get_avl (), zero))
    {
      if (reload_completed)
	{
	  /* If ratio is the same, it's safe to use vsetvli x0,x0. */
	  if (prev_info.valid_p () && !prev_info.unknown_p ()
	      && curr_info.avl_equal_p (prev_info)
	      && curr_info.vlmax_equal_p (prev_info))
	    emit_insn_before (gen_vsetvl_zero_zero (Pmode, vtype, const0_rtx),
			      insn);
	  else
	    {
	      avl = recog_data.operand[recog_data.n_operands - 1];
	      PUT_MODE (avl, Pmode);
	      gcc_assert (
		HARD_REGISTER_P (avl)
		&& !rtx_equal_p (avl, gen_rtx_REG (Pmode, X0_REGNUM)));
	    }
	}
      else
	avl = gen_reg_rtx (Pmode);
      emit_vsetvl_insn (avl, zero, vtype, insn);
      return;
    }

  emit_vsetvl_insn (zero, avl, vtype, insn);
}

static void
emit_vsetvlis (const basic_block bb)
{
  vinfo curr_info = bb_vinfo_map[bb->index].pred;
  // Track whether the prefix of the block we've scanned is transparent
  // (meaning has not yet changed the abstract state).
  bool prefix_transparent = true;
  rtx_insn *insn = NULL;

  FOR_BB_INSNS (bb, insn)
    {
      const vinfo prev_info = curr_info;
      transfer_before (curr_info, insn);

      // If this is an explicit VSETVLI or VSETIVLI, update our state.
      if (vector_config_instr_p (insn))
	prefix_transparent = false;

      if (use_vtype_p (insn))
	{
	  if (prev_info != curr_info)
	    {
	      // If this is the first implicit state change, and the state
	      // change requested can be proven to produce the same register
	      // contents, we can skip emitting the actual state change and
	      // continue as if we had since we know the GPR result of the
	      // implicit state change wouldn't be used and VL/VTYPE registers
	      // are correct.  Note that we *do* need to model the state as if
	      // it changed as while the register contents are unchanged, the
	      // abstract model can change.
	      if ((!prefix_transparent || need_vsetvli_phi (curr_info, insn)))
		insert_vsetvli (insn, curr_info, prev_info);
	      prefix_transparent = false;
	    }
	}
      // If this is something updates VL/VTYPE that we don't know about, set
      // the state to unknown.
      if (update_vl_vtype_p (insn))
	prefix_transparent = false;

      transfer_after (curr_info, insn);

      // If we reach the end of the block and our current info doesn't match the
      // expected info, insert a vsetvli to correct.
      if (!reload_completed && insn == BB_END (bb))
	{
	  const vinfo exit_info = bb_vinfo_map.at (bb->index).exit;
	  if (curr_info.valid_p () && exit_info.valid_p ()
	      && !exit_info.unknown_p () && curr_info != exit_info)
	    {
	      insert_vsetvli (insn, exit_info, curr_info);
	      curr_info = exit_info;
	    }
	}
    }
}

// Return true if we can mutate PrevMI's VTYPE to match MI's
// without changing any the fields which have been used.
// TODO: Restructure code to allow code reuse between this and isCompatible
// above.
static bool
can_mutate_prior_config (rtx_insn *prev_insn, rtx_insn *insn,
			 const demanded_fields &used)
{
  bool preserve_insn_p = vl_preserving_config_p (insn);
  bool preserve_prev_insn_p = vl_preserving_config_p (prev_insn);
  // TODO: Extend this to handle cases where VL does change, but VL
  // has not been used.  (e.g. over a vmv.x.s)
  if (!preserve_insn_p)
    // Note: `vsetvli x0, x0, vtype' is the canonical instruction
    // for this case.  If you find yourself wanting to add other forms
    // to this "unused VTYPE" case, we're probably missing a
    // canonicalization earlier.
    return false;

  extract_insn_cached (prev_insn);
  auto prior_vtype = preserve_prev_insn_p
		       ? recog_data.operand[0]
		       : recog_data.operand[recog_data.n_operands - 1];
  extract_insn_cached (insn);
  auto vtype = preserve_insn_p ? recog_data.operand[0]
			       : recog_data.operand[recog_data.n_operands - 1];

  if (!CONST_INT_P (prior_vtype) || !CONST_INT_P (vtype))
    return false;

  return are_compatible_vtypes (INTVAL (prior_vtype), INTVAL (vtype), used,
				true);
}

static void
dolocalpostpass (const basic_block bb)
{
  rtx_insn *prev_insn = nullptr;
  rtx_insn *insn = nullptr;
  demanded_fields used;
  std::vector<rtx_insn *> to_delete;
  FOR_BB_INSNS (bb, insn)
    {
      // Note: Must be *before* vsetvli handling to account for config cases
      // which only change some subfields.
      do_union (used, get_demanded (insn));

      if (!vector_config_instr_p (insn))
	continue;

      extract_insn_cached (insn);
      if (prev_insn)
	{
	  if (!used.vl && !used.used_vtype ()
	      && !(vl_preserving_config_p (insn)
		   && !vl_preserving_config_p (prev_insn)))
	    {
	      to_delete.push_back (prev_insn);
	      // fallthrough
	    }
	  else if (can_mutate_prior_config (prev_insn, insn, used))
	    {
	      rtx new_vtype = vl_preserving_config_p (insn)
				? recog_data.operand[0]
				: recog_data.operand[recog_data.n_operands - 1];
	      replace_op (prev_insn, new_vtype, REPLACE_VTYPE);
	      to_delete.push_back (insn);
	      // Leave prev_insn unchanged
	      continue;
	    }
	}
      prev_insn = insn;
      used = get_demanded (insn);
      rtx vdef = recog_data.operand[0];
      if (!rtx_equal_p (vdef, gen_rtx_REG (Pmode, X0_REGNUM))
	  && !find_reg_note (insn, REG_UNUSED, vdef))
	used.vl = true;
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
    // TODO: Could extend to other registers by looking at the associated vreg
    // def placement.
    return rtx_equal_p (info.get_avl (), gen_rtx_REG (Pmode, X0_REGNUM));

  unsigned int avl = INTVAL (info.get_avl ());
  unsigned int vsew = info.get_vsew ();
  machine_mode inner = vsew_to_int_mode (vsew);
  unsigned int sew = GET_MODE_BITSIZE (as_a<scalar_mode> (inner));
  unsigned avl_in_bits = avl * sew;
  machine_mode mode
    = riscv_vector::vector_builtin_mode (as_a<scalar_mode> (inner),
					 info.get_vlmul ());

  if (!BYTES_PER_RISCV_VECTOR.is_constant ())
    return GET_MODE_BITSIZE (mode).to_constant () >= 128;

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
  if (reload_completed)
    return;

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

  // Unreachable, single pred, or full redundancy. Note that FRE is handled by
  // phase 3.
  if (!unavailable_pred || !available_info.valid_p ())
    return;

  // Critical edge - TODO: consider splitting?
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
      if (vector_config_instr_p (insn))
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
      fprintf (dump_file, "PRE VSETVLI from bb %d changed to bb %d\n",
	       bb->index, unavailable_pred->index);
      available_info.print ();
    }
  bb_vinfo_map[unavailable_pred->index].exit = available_info;
  bb_vinfo_map[bb->index].pred = available_info;

  // Note there's an implicit assumption here that terminators never use
  // or modify VL or VTYPE.  Also, fallthrough will return end().
  auto insert_pt = BB_END (unavailable_pred);
  insert_vsetvli (insert_pt, available_info, old_info);
}

/* Combine subreg instruction move. */
static void
combine_subreg (insn_info *insn)
{
  if (insn->is_artificial ())
    return;

  rtx_insn *rtl = insn->rtl ();

  if (!vector_insn_p (rtl))
    return;

  if (GET_CODE (PATTERN (rtl)) != PARALLEL)
    return;

  if (insn->defs ().size () > 2)
    return;

  set_info *set = is_a<set_info *> (insn->defs ()[0])
		    ? as_a<set_info *> (insn->defs ()[0])
		    : as_a<set_info *> (insn->defs ()[1]);

  int num = 0;
  use_info *use;
  for (use_info *u : set->all_uses ())
    {
      if (u->is_live_out_use ())
	return;
      if (!u->is_reg ())
	return;
      if (!u->is_in_any_insn ())
	return;
      if (u->insn ()->is_artificial ())
	return;
      if (!vector_insn_p (u->insn ()->rtl ()))
	return;
      use = u;
      num++;
    }

  if (num != 1)
    return;
  extract_insn_cached (use->insn ()->rtl ());
  if (recog_data.n_operands != 2)
    return;
  rtx pat = PATTERN (use->insn ()->rtl ());
  if (GET_CODE (pat) != SET)
    return;
  rtx dest = SET_DEST (pat);
  rtx src = SET_SRC (pat);
  if (!rtx_equal_p (dest, recog_data.operand[0]))
    return;
  if (!rtx_equal_p (src, recog_data.operand[1]))
    return;
  if (!SUBREG_P (recog_data.operand[0]))
    return;
  if (!REG_P (SUBREG_REG (recog_data.operand[0])))
    return;
  if (set->regno () != REGNO (recog_data.operand[1]))
    return;

  unsigned int regno = REGNO (SUBREG_REG (recog_data.operand[0]));
  auto attempt = crtl->ssa->new_change_attempt ();
  insn_change change (insn);
  // The instruction initially defines just two registers.  recog can add
  // extra clobbers if necessary.
  auto_vec<access_info *> new_defs;
  auto_vec<access_info *> new_uses;
  for (def_info *d : insn->defs ())
    if (!is_a<set_info *> (d))
      new_defs.safe_push (d);
  for (use_info *u : use->insn ()->uses ())
    if (u->regno () == regno)
      new_uses.safe_push (u);
  new_defs.safe_push (use->insn ()->defs ()[0]);
  sort_accesses (new_defs);
  change.new_defs = def_array (access_array (new_defs));
  change.new_uses = merge_access_arrays (
    attempt,
    remove_note_accesses (attempt, use_array (access_array (new_uses))),
    remove_note_accesses (attempt, insn->uses ()));
  change.move_range = insn->ebb ()->insn_range ();
  if (!change.new_defs.is_valid ())
    return;
  if (!change.new_uses.is_valid ())
    return;
  auto other_change = insn_change::delete_insn (use->insn ());
  insn_change *changes[] = {&other_change, &change};
  if (!restrict_movement_ignoring (change, insn_is_changing (changes)))
    return;

  insn_change_watermark watermark;
  if (dump_file)
    {
      fprintf (dump_file, "Change\n\n");
      print_rtl_single (dump_file, PATTERN (rtl));
    }
  rtx replacement = recog_data.operand[0];
  extract_insn (rtl);
  validate_change (rtl, recog_data.operand_loc[0], replacement, true);
  if (dump_file)
    {
      fprintf (dump_file, "into\n\n");
      print_rtl_single (dump_file, rtl);
    }
  if (!recog (attempt, change) || !change_is_worthwhile (change))
    return;

  remove_reg_equal_equiv_notes (rtl);
  confirm_change_group ();
  crtl->ssa->change_insns (changes);
}

/* Because RVV patterns contain a clobber value which makes
   combine fails in the combine pass. This function combine
   rvv instructions for optimization. */
static void
combine_instructions (void)
{
  if (dump_file)
    fprintf (dump_file, "\nEntering Combine RVV instructions for %s\n\n",
	     current_function_name ());

  insn_info *next;
  for (insn_info *insn = crtl->ssa->first_insn (); insn; insn = next)
    {
      next = insn->next_any_insn ();
      if (insn->can_be_optimized ())
	combine_subreg (insn);
    }
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

  if (!reload_completed && optimize >= 2)
    combine_instructions ();

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
    dolocalpostpass (bb);

  // Once we're fully done rewriting all the instructions, do a final pass
  // through to check for VSETVLIs which write to an unused destination.
  // For the non X0, X0 variant, we can replace the destination register
  // with X0 to reduce register pressure.  This is really a generic
  // optimization which can be applied to any dead def (TODO: generalize).
  FOR_ALL_BB_FN (bb, fn)
    {
      rtx_insn *insn = NULL;
      vinfo curr_info;
      rtx x = reload_completed ? const0_rtx : gen_reg_rtx (Pmode);
      FOR_BB_INSNS (bb, insn)
	{
	  if (vector_config_instr_p (insn))
	    {
	      extract_insn_cached (insn);
	      vinfo new_info = get_info_for_vsetvli (insn);
	      if (curr_info == new_info && recog_data.n_operands != 3)
		{
		  rtx_insn *next_insn = NEXT_INSN (insn);
		  remove_insn (insn);
		  insn = next_insn;
		}
	      else
		{
		  curr_info = new_info;
		  if (reload_completed && recog_data.n_operands == 2
		      && GET_CODE (PATTERN (insn)) == SET)
		    validate_change (insn, recog_data.operand_loc[1],
				     CONST0_RTX (Pmode), false);
		  if (recog_data.n_operands == 3
		      && !rtx_equal_p (recog_data.operand[0],
				       gen_rtx_REG (Pmode, X0_REGNUM))
		      && !rtx_equal_p (recog_data.operand[1],
				       gen_rtx_REG (Pmode, X0_REGNUM))
		      && find_reg_note (insn, REG_UNUSED,
					recog_data.operand[0]))
		    {
		      rtx pat = gen_vsetvl_zero (Pmode, recog_data.operand[1],
						 recog_data.operand[2]);
		      validate_change (insn, &PATTERN (insn), pat, false);
		    }
		}
	      continue;
	    }
	  // If this is something that updates VL/VTYPE that we don't know
	  // about, set the state to unknown.
	  if (update_vl_vtype_p (insn))
	    curr_info = vinfo::get_unknown ();
	  if (use_vtype_p (insn))
	    replace_op (insn, x, REPLACE_VL);
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
  RTL_PASS,	    /* type */
  "insert_vsetvli", /* name */
  OPTGROUP_NONE,    /* optinfo_flags */
  TV_NONE,	    /* tv_id */
  0,		    /* properties_required */
  0,		    /* properties_provided */
  0,		    /* properties_destroyed */
  0,		    /* todo_flags_start */
  0,		    /* todo_flags_finish */
};

class pass_insert_vsetvli : public rtl_opt_pass
{
public:
  pass_insert_vsetvli (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_insert_vsetvli, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *) { return TARGET_VECTOR; }
  virtual unsigned int execute (function *fn)
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
  RTL_PASS,	     /* type */
  "insert_vsetvli2", /* name */
  OPTGROUP_NONE,     /* optinfo_flags */
  TV_NONE,	     /* tv_id */
  0,		     /* properties_required */
  0,		     /* properties_provided */
  0,		     /* properties_destroyed */
  0,		     /* todo_flags_start */
  0,		     /* todo_flags_finish */
};

class pass_insert_vsetvli2 : public rtl_opt_pass
{
public:
  pass_insert_vsetvli2 (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_insert_vsetvli2, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *) { return TARGET_VECTOR && reload_completed; }
  virtual unsigned int execute (function *fn)
  {
    compute_bb_for_insn ();
    split_all_insns ();
    return rest_of_handle_insert_vsetvli (fn);
  }

}; // class pass_insert_vsetvli2

rtl_opt_pass *
make_pass_insert_vsetvli2 (gcc::context *ctxt)
{
  return new pass_insert_vsetvli2 (ctxt);
}