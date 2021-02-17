/* Subroutines used for expanding RISC-V builtins.
   Copyright (C) 2011-2020 Free Software Foundation, Inc.
   Contributed by Andrew Waterman (andrew@sifive.com).

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#include <string>

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "gimple-expr.h"
#include "memmodel.h"
#include "expmed.h"
#include "profile-count.h"
#include "optabs.h"
#include "recog.h"
#include "diagnostic-core.h"
#include "stor-layout.h"
#include "expr.h"
#include "langhooks.h"
#include "stringpool.h"
#include "attribs.h"
#include "riscv-vector-iterator.h"
#include "riscv-vector-builtins.h"

/* Declare vector type nodes.  */
#define VECTOR_TYPE_NODES(SEW, LMUL, MODE, SMODE, MMODE, TYPE) \
  tree rvvtypes_##TYPE##SEW##m##LMUL##_t_node;
_RVV_INT_TYPE_ITERATOR_ARG(VECTOR_TYPE_NODES, int)
_RVV_INT_TYPE_ITERATOR_ARG(VECTOR_TYPE_NODES, uint)
_RVV_FLOAT_TYPE_ITERATOR_ARG(VECTOR_TYPE_NODES, float)

tree rvvbool1_t_node;
tree rvvbool2_t_node;
tree rvvbool4_t_node;
tree rvvbool8_t_node;
tree rvvbool16_t_node;
tree rvvbool32_t_node;
tree rvvbool64_t_node;

enum VECTOR_OP_TYPE
{
  INT_OP_TYPE   = 1 << 0,
  FLOAT_OP_TYPE = 1 << 1,
  MASK_OP_TYPE  = 1 << 2
};


enum VECTOR_FUNC_TYPE
{
  VV_FUNC_TYPE = 1 << 0,
  /* We don't need VI_FUNC_TYPE here, .vi vairant didn't have it own
     intrinsic funciton. */
  VX_FUNC_TYPE = 1 << 1,
  MAX_VECTOR_FUNC_TYPE = 2
};

enum VECTOR_MASK_TYPE
{
  NO_MASK_TYPE,
  MASK_TYPE,
  NO_MASKOFF_TYPE,
  MAX_VECTOR_MASK_TYPE
};

static tree func_proto_types[NUM_MACHINE_MODES][2][MAX_VECTOR_FUNC_TYPE];

static VecctorTypeInfo *all_vector_types[NUM_MACHINE_MODES][2];

static VecctorTypeInfo integerTypes[] =
{
#define VECTOR_TYPEINFO_INIT(SEW, LMUL, MODE, SMODE, MMODE,		\
			     TYPE, SMODE_PREFIX)			\
  {#SMODE_PREFIX #SEW "m" #LMUL, E_##MODE##mode, NULL_TREE, "v" #TYPE #SEW "m" #LMUL "_t",\
   E_##SMODE##mode, NULL_TREE, #TYPE #SEW "_t", },

  _RVV_INT_TYPE_ITERATOR_ARG(VECTOR_TYPEINFO_INIT, int, i)
  _RVV_INT_TYPE_ITERATOR_ARG(VECTOR_TYPEINFO_INIT, uint, u)
  {NULL, E_VOIDmode, NULL_TREE, NULL, E_VOIDmode, NULL_TREE, NULL}
};

/* Create a builtin vector type with a name.  Taking care not to give
   the canonical type a name.  */

static tree
riscv_vector_type (const char *name, tree elt_type, enum machine_mode mode)
{
  tree result = build_vector_type_for_mode (elt_type, mode);

  /* Copy so we don't give the canonical type a name.  */
  result = build_distinct_type_copy (result);

  (*lang_hooks.types.register_builtin_type) (result, name);

  return result;
}


static
int mode2lmul (machine_mode mode)
{
    switch (mode)
      {
#define VECTOR_LMUL(SEW, LMUL, MODE, SMODE, MMODE) \
      case E_##MODE##mode: return LMUL;
_RVV_INT_TYPE_ITERATOR(VECTOR_LMUL)
      }
    gcc_unreachable ();
    return 0;
}



static
int mode2sew (machine_mode mode)
{
    switch (mode)
      {
#define VECTOR_SEW(SEW, LMUL, MODE, SMODE, MMODE) \
      case E_##MODE##mode: return SEW;
_RVV_INT_TYPE_ITERATOR(VECTOR_SEW)
      }
    gcc_unreachable ();
    return 0;
}

static
machine_mode mode2mask_mode (machine_mode mode)
{
    switch (mode)
      {
#define VECTOR_MASK_MODES(SEW, LMUL, MODE, SMODE, MMODE) \
      case E_##MODE##mode: return E_##MMODE##mode;
_RVV_INT_TYPE_ITERATOR(VECTOR_MASK_MODES)
      }
    gcc_unreachable ();
    return E_VOIDmode;
}

/* Init vector type nodes.  */

void riscv_register_vector_types (tree fp16_type_node)
{
  tree floatHF_type_node = fp16_type_node;
  tree floatSF_type_node = float_type_node;
  tree floatDF_type_node = double_type_node;
  /* Init for all_vector_types.  */
  for (VecctorTypeInfo *type = &integerTypes[0]; type->vector_type_name; type++)
    {
      int unsignedp_idx = type->vector_type_name[0] == 'u';
      all_vector_types[type->vector_mode][unsignedp_idx] = type;
    }

    /* FIXME: mask type not setup yet.  */
    /* FIXME: mask type isn't right.  */
#define VECTOR_TYPE_INIT(SEW, LMUL, MODE, SMODE, MMODE,			\
			 TYPE, SMODE_PREFIX, UNSIGNED_P_INX)		\
      rvvtypes_##TYPE##SEW##m##LMUL##_t_node =				\
	riscv_vector_type ("__v" #TYPE #SEW "m" #LMUL "_t",		\
			   SMODE_PREFIX##SMODE##_type_node, MODE##mode);\
      all_vector_types[MODE##mode][UNSIGNED_P_INX]->vector_type_tree =	\
	rvvtypes_##TYPE##SEW##m##LMUL##_t_node;				\
      all_vector_types[MODE##mode][UNSIGNED_P_INX]->scalar_type_tree =	\
	SMODE_PREFIX##SMODE##_type_node;

      _RVV_INT_TYPE_ITERATOR_ARG(VECTOR_TYPE_INIT, int, int, 0)
      _RVV_INT_TYPE_ITERATOR_ARG(VECTOR_TYPE_INIT, uint, unsigned_int, 1)
//      _RVV_FLOAT_TYPE_ITERATOR_ARG(VECTOR_TYPE_INIT, float, float)
}

VecotrAddIntrinsic vadd;

const char *STRPOOL[] = {"vadd"};
const int STR_INX_VADD = 0;

template <unsigned BASENAME_IDX, int FUNCTION_TYPE, int OP_TYPES, int MASK_TYPE>
class VecotrIntrinsic{
public:
  static void init (int code_offset);
  static void expand ();
  static int function_count ();
};

static tree
riscv_build_vector_function_type (
  const VecctorTypeInfo &base_type,
  enum VECTOR_FUNC_TYPE func_type,
  bool unsignedp)
{
  enum machine_mode vmode = base_type.vector_mode;
  int unsignedp_idx = unsignedp ? 1: 0;
  tree type = func_proto_types[vmode][func_type][unsignedp_idx];

  if (type)
    return type;

  tree v = base_type.vector_type_tree;
  tree s = base_type.scalar_type_tree;
  switch (func_type)
    {
    case VV_FUNC_TYPE:
      type = build_function_type_list (v, v, v, size_type_node, NULL_TREE);
      break;
    case VX_FUNC_TYPE:
      type = build_function_type_list (v, v, s, size_type_node, NULL_TREE);
      break;
    default:
      gcc_unreachable ();
    }

  func_proto_types[base_type.vector_mode][unsignedp_idx][func_type] = type;

  return type;
}

template <unsigned BASENAME_IDX, int FUNCTION_TYPE, int OP_TYPES, int MASK_TYPE>
int
VecotrIntrinsic<BASENAME_IDX, FUNCTION_TYPE, OP_TYPES, MASK_TYPE>
::function_count ()
{
  int count = 0;
  if (OP_TYPES & INT_OP_TYPE)
    {
      if (FUNCTION_TYPE & VV_FUNC_TYPE)
	count += ARRAY_SIZE (integerTypes) - 1;
      if (FUNCTION_TYPE & VX_FUNC_TYPE)
	count += ARRAY_SIZE (integerTypes) - 1;
    }

  return count;
}

/* Add attribute NAME to ATTRS.  */
static tree
add_attribute (const char *name, tree attrs)
{
  return tree_cons (get_identifier (name), NULL_TREE, attrs);
}



template <unsigned BASENAME_IDX, int FUNCTION_TYPE, int OP_TYPES, int MASK_TYPE>
void
VecotrIntrinsic<BASENAME_IDX, FUNCTION_TYPE, OP_TYPES, MASK_TYPE>
::init(int code_offset)
{
  /* build up */
  std::string func_name;
  std::string prefix = STRPOOL[BASENAME_IDX];
  int code = code_offset;
  tree attrs = NULL_TREE;
  attrs = add_attribute ("const", attrs);
  attrs = add_attribute ("nothrow", attrs);
  attrs = add_attribute ("leaf", attrs);


  tree func_type;
  if (OP_TYPES & INT_OP_TYPE)
    for (auto type : integerTypes)
      {
	if (!type.vector_type_name) break;
	bool unsignedp = type.vector_type_name[0] == 'u';
	if (FUNCTION_TYPE & VV_FUNC_TYPE)
	  {
	    /* vv form. */
	    func_name = prefix + "_vv_" + type.vector_type_name;
            func_type = riscv_build_vector_function_type (type, VV_FUNC_TYPE, unsignedp);
#if 0
 return add_builtin_function (name, type, code, BUILT_IN_MD,
                               NULL, NULL_TREE);
#endif
	    simulate_builtin_function_decl (
	      input_location,
	      func_name.c_str(),
	      func_type,
	      code++,
	      NULL,
	      attrs);
	  }
	if (FUNCTION_TYPE & VX_FUNC_TYPE)
	  {
	    /* vx form. */
	    func_name = prefix + "_vx_" + type.vector_type_name;
	    func_type = riscv_build_vector_function_type (type, VX_FUNC_TYPE, unsignedp);
	    simulate_builtin_function_decl (input_location, func_name.c_str(), func_type, code++, NULL, attrs);
	  }
      }
}

void riscv_register_vector_intrinsics ()
{
  VecotrIntrinsic<
    STR_INX_VADD,
    VV_FUNC_TYPE | VX_FUNC_TYPE,
    INT_OP_TYPE,
    MASK_TYPE>::init(FIRST_VECTOR_INTRINSIC_CODE);
}

int
VecotrAddIntrinsic::init (int icode)
{
  /* build up */
  std::string func_name;
  std::string prefix = "vadd_";

#if 0
          tree type = riscv_build_function_type (d->prototype);
          riscv_builtin_decls[i]
            = add_builtin_function (d->name, type, i, BUILT_IN_MD, NULL, NULL);
          riscv_builtin_decl_index[d->icode] = i;
#endif
#if 0
  tree func_type;
  for (auto type : integerTypes)
    {
      if (!type.vector_type_name) break;
      bool unsignedp = type.vector_type_name[0] == 'u';
      /* vv form. */
      func_name = prefix + "vv_" + type.vector_type_name;
      func_type = riscv_build_vector_function_type (E_VNx4SImode, VV_FUNC_TYPE, unsignedp);
      /* vx form. */
      func_name = prefix + "vx_" + type.vector_type_name;
      func_type = riscv_build_vector_function_type (E_VNx4SImode, VX_FUNC_TYPE, unsignedp);
    }
#endif
  return icode;
}

#if 0
rtx
riscv_expand_builtin (tree exp, rtx target, rtx subtarget ATTRIBUTE_UNUSED,
		      machine_mode mode ATTRIBUTE_UNUSED,
		      int ignore ATTRIBUTE_UNUSED)
{
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  unsigned int fcode = DECL_MD_FUNCTION_CODE (fndecl);
  const struct riscv_builtin_description *d = &riscv_builtins[fcode];

  if (fcode >= FIRST_VECTOR_INTRINSIC_CODE)
    return riscv_expand_vector_builtin (exp, target);
#endif
#if 0
  static rtx
riscv_expand_builtin_direct (enum insn_code icode, rtx target, tree exp,
			     bool has_target_p)
{
  /* Map the arguments to the other operands.  */
  gcc_assert (opno + call_expr_nargs (exp)
	      == insn_data[icode].n_generator_args);
  for (int argno = 0; argno < call_expr_nargs (exp); argno++)
    riscv_prepare_builtin_arg (&ops[opno++], exp, argno);

  return riscv_expand_builtin_insn (icode, opno, ops, has_target_p);
}
#endif
/* Take argument ARGNO from EXP's argument list and convert it into
   an expand operand.  Store the operand in *OP.  */

static void
riscv_prepare_builtin_arg (struct expand_operand *op, tree exp, unsigned argno)
{
  tree arg = CALL_EXPR_ARG (exp, argno);
  create_input_operand (op, expand_normal (arg), TYPE_MODE (TREE_TYPE (arg)));
}


static rtx
riscv_expand_builtin_insn (enum insn_code icode, unsigned int n_ops,
			   struct expand_operand *ops, bool has_target_p)
{
  if (!maybe_expand_insn (icode, n_ops, ops))
    {
      error ("invalid argument to built-in function");
      return has_target_p ? gen_reg_rtx (ops[0].mode) : const0_rtx;
    }

  return has_target_p ? ops[0].value : const0_rtx;
}

rtx
riscv_expand_vector_builtin (tree exp, rtx target)
{
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  unsigned int fcode = DECL_MD_FUNCTION_CODE (fndecl);
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  struct expand_operand vl_ops[4];

  bool vl_arg = true;

  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));

  /* Map any target to operand 0.  */
  int opno = 0;
  create_output_operand (&ops[opno++], target, TYPE_MODE (TREE_TYPE (exp)));

  for (int argno = 0; argno < call_expr_nargs (exp); argno++)
    riscv_prepare_builtin_arg (&ops[opno++], exp, argno);

  if (vl_arg)
    {
      machine_mode mask_mode = mode2mask_mode (mode);
      int lmul = mode2lmul (mode);
      int sew = mode2sew (mode);
      rtx vl_reg = gen_reg_rtx (mask_mode);
      create_output_operand (&vl_ops[0], vl_reg, mask_mode);
      vl_ops[1] = ops[opno - 1];
      insn_code icode_vsetvl = code_for_rvv_vsetvl (mask_mode, sew, lmul);
      rtx vl_val = riscv_expand_builtin_insn (icode_vsetvl, 2, vl_ops, true);
      ops[opno - 1] = vl_ops[0];
    }

  insn_code icode = maybe_code_for_rvv (PLUS, mode);
  emit_clobber (ops[0].value);
  return riscv_expand_builtin_insn (icode, opno, ops, true);;
}

void riscv_handle_riscv_vector_h()
{
  
}
