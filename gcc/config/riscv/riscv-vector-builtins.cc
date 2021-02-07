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
#include "riscv-vector-iterator.h"
#include "riscv-vector-builtins.h"

/* Declare vector type nodes.  */
#define VECTOR_TYPE_NODES(SEW, LMUL, MODE, SMODE, TYPE) \
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

enum VECTOR_FUNC_TYPE
{
  VV_FUNC_TYPE,
  VX_FUNC_TYPE,
  MAX_VECTOR_FUNC_TYPE
};

static tree func_proto_types[NUM_MACHINE_MODES][2][MAX_VECTOR_FUNC_TYPE];


static VecctorTypeInfo *all_vector_types[NUM_MACHINE_MODES][2];

static VecctorTypeInfo integerTypes[] =
{
#define VECTOR_TYPEINFO_INIT(SEW, LMUL, MODE, SMODE,			\
			     TYPE, SMODE_PREFIX)			\
  {#SMODE_PREFIX #SEW, E_##MODE##mode, NULL_TREE, "v" #TYPE #SEW "m" #LMUL "_t",\
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

/* Init vector type nodes.  */

void riscv_register_vector_types (tree fp16_type_node)
{
  tree floatHF_type_node = fp16_type_node;
  tree floatSF_type_node = float_type_node;
  tree floatDF_type_node = double_type_node;
  /* Init for all_vector_types.  */
  for (auto type : integerTypes)
    {
      if (!type.vector_type_name) break;
      int unsignedp_idx = type.vector_type_name[0] == 'u';
      all_vector_types[type.vector_mode][unsignedp_idx] = &type;
    }

    /* FIXME: mask type isn't right.  */
#define VECTOR_TYPE_INIT(SEW, LMUL, MODE, SMODE,			\
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

void riscv_register_vector_intrinsics ()
{
  vadd.init (0);
}

tree
riscv_build_vector_function_type (
  machine_mode base_type,
  enum VECTOR_FUNC_TYPE func_type,
  bool unsignedp)
{
  int unsignedp_idx = unsignedp? 1: 0;
  tree type = func_proto_types[base_type][func_type][unsignedp_idx];

  if (type)
    return type;

  tree v = all_vector_types[base_type][unsignedp]->vector_type_tree;
  tree s = all_vector_types[base_type][unsignedp]->scalar_type_tree;
  switch (func_type)
    {
    case VV_FUNC_TYPE:
      type = build_function_type_list (v, v, size_type_node, NULL_TREE);
      break;
    case VX_FUNC_TYPE:
      type = build_function_type_list (v, s, size_type_node, NULL_TREE);
      break;
    default:
      gcc_unreachable ();
    }

  func_proto_types[base_type][unsignedp_idx][func_type] = type;

  return type;
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
  return icode;
}
