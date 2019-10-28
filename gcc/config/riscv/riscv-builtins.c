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

/* We don't want the PTR definition from ansi-decl.h.  */
#undef PTR

/* Macros to create an enumeration identifier for a function prototype.  */
#define RISCV_FTYPE_NAME0(A) RISCV_##A##_FTYPE
#define RISCV_FTYPE_NAME1(A, B) RISCV_##A##_FTYPE_##B
#define RISCV_FTYPE_NAME2(A, B, C) RISCV_##A##_FTYPE_##B##_##C
#define RISCV_FTYPE_NAME3(A, B, C, D) RISCV_##A##_FTYPE_##B##_##C##_##D
#define RISCV_FTYPE_NAME4(A, B, C, D, E) RISCV_##A##_FTYPE_##B##_##C##_##D##_##E

/* Classifies the prototype of a built-in function.  */
enum riscv_function_type {
#define DEF_RISCV_FTYPE(NARGS, LIST) RISCV_FTYPE_NAME##NARGS LIST,
#include "config/riscv/riscv-ftypes.def"
#undef DEF_RISCV_FTYPE
  RISCV_MAX_FTYPE_MAX
};

/* Specifies how a built-in function should be converted into rtl.  */
enum riscv_builtin_type {
  /* The function corresponds directly to an .md pattern.  */
  RISCV_BUILTIN_DIRECT,

  /* Likewise, but with return type VOID.  */
  RISCV_BUILTIN_DIRECT_NO_TARGET
};

/* Declare an availability predicate for built-in functions.  */
#define AVAIL(NAME, COND)		\
 static unsigned int			\
 riscv_builtin_avail_##NAME (void)	\
 {					\
   return (COND);			\
 }

/* This structure describes a single built-in function.  */
struct riscv_builtin_description {
  /* The code of the main .md file instruction.  See riscv_builtin_type
     for more information.  */
  enum insn_code icode;

  /* The name of the built-in function.  */
  const char *name;

  /* Specifies how the function should be expanded.  */
  enum riscv_builtin_type builtin_type;

  /* The function's prototype.  */
  enum riscv_function_type prototype;

  /* Whether the function is available.  */
  unsigned int (*avail) (void);
};

AVAIL (hard_float, TARGET_HARD_FLOAT)
AVAIL (vector, TARGET_VECTOR)

/* Construct a riscv_builtin_description from the given arguments.

   INSN is the name of the associated instruction pattern, without the
   leading CODE_FOR_riscv_.

   NAME is the name of the function itself, without the leading
   "__builtin_riscv_".

   BUILTIN_TYPE and FUNCTION_TYPE are riscv_builtin_description fields.

   AVAIL is the name of the availability predicate, without the leading
   riscv_builtin_avail_.  */
#define RISCV_BUILTIN(INSN, NAME, BUILTIN_TYPE, FUNCTION_TYPE, AVAIL)	\
  { CODE_FOR_riscv_ ## INSN, "__builtin_riscv_" NAME,			\
    BUILTIN_TYPE, FUNCTION_TYPE, riscv_builtin_avail_ ## AVAIL }

/* Define __builtin_riscv_<INSN>, which is a RISCV_BUILTIN_DIRECT function
   mapped to instruction CODE_FOR_riscv_<INSN>,  FUNCTION_TYPE and AVAIL
   are as for RISCV_BUILTIN.  */
#define DIRECT_BUILTIN(INSN, FUNCTION_TYPE, AVAIL)			\
  RISCV_BUILTIN (INSN, #INSN, RISCV_BUILTIN_DIRECT, FUNCTION_TYPE, AVAIL)

/* Define __builtin_riscv_<INSN>, which is a RISCV_BUILTIN_DIRECT_NO_TARGET
   function mapped to instruction CODE_FOR_riscv_<INSN>,  FUNCTION_TYPE
   and AVAIL are as for RISCV_BUILTIN.  */
#define DIRECT_NO_TARGET_BUILTIN(INSN, FUNCTION_TYPE, AVAIL)		\
  RISCV_BUILTIN (INSN, #INSN, RISCV_BUILTIN_DIRECT_NO_TARGET,		\
		 FUNCTION_TYPE, AVAIL)

/* Same as above, but for using named patterns in the md file.  It drops the
   riscv after CODE_FOR_, but it is otherwise the same.  */
#define RISCV_NAMED(INSN, NAME, BUILTIN_TYPE, FUNCTION_TYPE, AVAIL)	\
  { CODE_FOR_ ## INSN, "__builtin_riscv_" NAME,			\
    BUILTIN_TYPE, FUNCTION_TYPE, riscv_builtin_avail_ ## AVAIL }

/* This has an extra NAME argument, as the builtin name and the pattern name
   are constructed differently.  */
#define DIRECT_NAMED(INSN, NAME, FUNCTION_TYPE, AVAIL)			\
  RISCV_NAMED (INSN, #NAME, RISCV_BUILTIN_DIRECT, FUNCTION_TYPE, AVAIL)

/* Argument types.  */
#define RISCV_ATYPE_VOID void_type_node
#define RISCV_ATYPE_USI unsigned_intSI_type_node
#define RISCV_ATYPE_QI intQI_type_node
#define RISCV_ATYPE_HI intHI_type_node
#define RISCV_ATYPE_SI intSI_type_node
#define RISCV_ATYPE_DI intDI_type_node
#define RISCV_ATYPE_C_F_PTR const_float_ptr_type_node
#define RISCV_ATYPE_F_PTR float_ptr_type_node
#define RISCV_ATYPE_VF32M8 rvvfloat32m8_t_node
#define RISCV_ATYPE_C_HF_PTR const_float16_ptr_type_node
#define RISCV_ATYPE_HF_PTR float16_ptr_type_node
#define RISCV_ATYPE_VF16M4 rvvfloat16m4_t_node
#define RISCV_ATYPE_C_HF const_float16_type_node
#define RISCV_ATYPE_V32SIM8 rvvint32m8_t_node
#define RISCV_ATYPE_V4BI rvvbool4_t_node

#define RISCV_ATYPE_VI8M1 rvvint8m1_t_node
#define RISCV_ATYPE_VI8M2 rvvint8m2_t_node
#define RISCV_ATYPE_VI8M4 rvvint8m4_t_node
#define RISCV_ATYPE_VI8M8 rvvint8m8_t_node
#define RISCV_ATYPE_VI16M1 rvvint16m1_t_node
#define RISCV_ATYPE_VI16M2 rvvint16m2_t_node
#define RISCV_ATYPE_VI16M4 rvvint16m4_t_node
#define RISCV_ATYPE_VI16M8 rvvint16m8_t_node
#define RISCV_ATYPE_VI32M1 rvvint32m1_t_node
#define RISCV_ATYPE_VI32M2 rvvint32m2_t_node
#define RISCV_ATYPE_VI32M4 rvvint32m4_t_node
#define RISCV_ATYPE_VI32M8 rvvint32m8_t_node
#define RISCV_ATYPE_VI64M1 rvvint64m1_t_node
#define RISCV_ATYPE_VI64M2 rvvint64m2_t_node
#define RISCV_ATYPE_VI64M4 rvvint64m4_t_node
#define RISCV_ATYPE_VI64M8 rvvint64m8_t_node

/* Helper type nodes for vector support.  */
tree const_float_ptr_type_node;
tree float16_ptr_type_node;
tree const_float16_type_node;
tree const_float16_ptr_type_node;

/* Vector type nodes.  */
tree rvvint8m1_t_node;
tree rvvint8m2_t_node;
tree rvvint8m4_t_node;
tree rvvint8m8_t_node;
tree rvvint16m1_t_node;
tree rvvint16m2_t_node;
tree rvvint16m4_t_node;
tree rvvint16m8_t_node;
tree rvvint32m1_t_node;
tree rvvint32m2_t_node;
tree rvvint32m4_t_node;
tree rvvint32m8_t_node;
tree rvvint64m1_t_node;
tree rvvint64m2_t_node;
tree rvvint64m4_t_node;
tree rvvint64m8_t_node;

tree rvvuint8m1_t_node;
tree rvvuint8m2_t_node;
tree rvvuint8m4_t_node;
tree rvvuint8m8_t_node;
tree rvvuint16m1_t_node;
tree rvvuint16m2_t_node;
tree rvvuint16m4_t_node;
tree rvvuint16m8_t_node;
tree rvvuint32m1_t_node;
tree rvvuint32m2_t_node;
tree rvvuint32m4_t_node;
tree rvvuint32m8_t_node;
tree rvvuint64m1_t_node;
tree rvvuint64m2_t_node;
tree rvvuint64m4_t_node;
tree rvvuint64m8_t_node;

tree rvvfloat16m1_t_node;
tree rvvfloat16m2_t_node;
tree rvvfloat16m4_t_node;
tree rvvfloat16m8_t_node;
tree rvvfloat32m1_t_node;
tree rvvfloat32m2_t_node;
tree rvvfloat32m4_t_node;
tree rvvfloat32m8_t_node;
tree rvvfloat64m1_t_node;
tree rvvfloat64m2_t_node;
tree rvvfloat64m4_t_node;
tree rvvfloat64m8_t_node;

tree rvvbool1_t_node;
tree rvvbool2_t_node;
tree rvvbool4_t_node;
tree rvvbool8_t_node;
tree rvvbool16_t_node;
tree rvvbool32_t_node;
tree rvvbool64_t_node;

/* RISCV_FTYPE_ATYPESN takes N RISCV_FTYPES-like type codes and lists
   their associated RISCV_ATYPEs.  */
#define RISCV_FTYPE_ATYPES0(A) \
  RISCV_ATYPE_##A
#define RISCV_FTYPE_ATYPES1(A, B) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B
#define RISCV_FTYPE_ATYPES2(A, B, C) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C
#define RISCV_FTYPE_ATYPES3(A, B, C, D)	\
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D
#define RISCV_FTYPE_ATYPES4(A, B, C, D, E) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D, RISCV_ATYPE_##E

/* An iterator to call a macro with every supported E and M value, along
   with its corresponding vector and integer modes.  */
#define _RVV_INT_E_M_MODE(MACRO)	\
  MACRO (8, 1, vnx16qi, QI)		\
  MACRO (8, 2, vnx32qi, QI)		\
  MACRO (8, 4, vnx64qi, QI)		\
  MACRO (8, 8, vnx128qi, QI)		\
  MACRO (16, 1, vnx8hi, HI)		\
  MACRO (16, 2, vnx16hi, HI)		\
  MACRO (16, 4, vnx32hi, HI)		\
  MACRO (16, 8, vnx64hi, HI)		\
  MACRO (32, 1, vnx4si, SI)		\
  MACRO (32, 2, vnx8si, SI)		\
  MACRO (32, 4, vnx16si, SI)		\
  MACRO (32, 8, vnx32si, SI)		\
  MACRO (64, 1, vnx2di, DI)		\
  MACRO (64, 2, vnx4di, DI)		\
  MACRO (64, 4, vnx8di, DI)		\
  MACRO (64, 8, vnx16di, DI)

#define SETVL_BUILTINS(E, M, MODE, SUBMODE)				\
  DIRECT_BUILTIN (vsetvl##E##m##M##_si, RISCV_SI_FTYPE_SI, vector),	\
  DIRECT_BUILTIN (vsetvl##E##m##M##_di, RISCV_DI_FTYPE_DI, vector),

/* ??? Can't use M for LMUL because of M in RISCV_* type names.  */
#define VADD_BUILTINS(E, L, MODE, SUBMODE)				\
  DIRECT_NAMED (add##MODE##3, vaddint##E##m##L,				\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (add##MODE##3_scalar, vaddint##E##m##L##_scalar,		\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),

#define VSUB_BUILTINS(E, L, MODE, SUBMODE)				\
  DIRECT_NAMED (sub##MODE##3, vsubint##E##m##L,				\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (sub##MODE##3_scalar, vsubint##E##m##L##_scalar,		\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),

#define VRSUB_BUILTINS(E, L, MODE, SUBMODE)				\
  DIRECT_NAMED (sub##MODE##3_reverse, vrsubint##E##m##L,		\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_VI##E##M##L,	\
		vector),						\
  DIRECT_NAMED (sub##MODE##3_reverse_scalar, vrsubint##E##m##L##_scalar,\
		RISCV_VI##E##M##L##_FTYPE_VI##E##M##L##_##SUBMODE,	\
		vector),

static const struct riscv_builtin_description riscv_builtins[] = {
  DIRECT_BUILTIN (frflags, RISCV_USI_FTYPE, hard_float),
  DIRECT_NO_TARGET_BUILTIN (fsflags, RISCV_VOID_FTYPE_USI, hard_float)

  _RVV_INT_E_M_MODE (SETVL_BUILTINS)

  _RVV_INT_E_M_MODE (VADD_BUILTINS)
  _RVV_INT_E_M_MODE (VSUB_BUILTINS)
  _RVV_INT_E_M_MODE (VRSUB_BUILTINS)

  DIRECT_BUILTIN (vfwmulfloat16m4, RISCV_VF32M8_FTYPE_VF16M4_VF16M4, vector),
  DIRECT_BUILTIN (vfwmulfloat16m4_scalar, RISCV_VF32M8_FTYPE_VF16M4_C_HF,
		  vector),

  DIRECT_BUILTIN (vfwmaddfloat16m4, RISCV_VF32M8_FTYPE_VF16M4_VF16M4_VF32M8,
		  vector),
  DIRECT_BUILTIN (vfwmsubfloat16m4, RISCV_VF32M8_FTYPE_VF16M4_VF16M4_VF32M8,
		  vector),
  DIRECT_BUILTIN (vfwmaddfloat16m4_scalar, RISCV_VF32M8_FTYPE_VF16M4_C_HF_VF32M8,
		  vector),

  RISCV_BUILTIN(veccmpltvnx32si, "cmplt_int32m8",
		RISCV_BUILTIN_DIRECT, RISCV_V4BI_FTYPE_VI32M8_VI32M8, vector),
  RISCV_BUILTIN(addvnx32si3_mask, "add_vv_int32m8_mask", RISCV_BUILTIN_DIRECT,
		RISCV_VI32M8_FTYPE_V4BI_VI32M8_VI32M8_VI32M8, vector),
};

/* Index I is the function declaration for riscv_builtins[I], or null if the
   function isn't defined on this target.  */
static GTY(()) tree riscv_builtin_decls[ARRAY_SIZE (riscv_builtins)];

/* Get the index I of the function declaration for riscv_builtin_decls[I]
   using the instruction code or return null if not defined for the target.  */
static GTY(()) int riscv_builtin_decl_index[NUM_INSN_CODES];

#define GET_BUILTIN_DECL(CODE) \
  riscv_builtin_decls[riscv_builtin_decl_index[(CODE)]]

/* Type node for fp16.  */
tree fp16_type_node;

/* Return the function type associated with function prototype TYPE.  */

static tree
riscv_build_function_type (enum riscv_function_type type)
{
  static tree types[(int) RISCV_MAX_FTYPE_MAX];

  if (types[(int) type] == NULL_TREE)
    switch (type)
      {
#define DEF_RISCV_FTYPE(NUM, ARGS)					\
  case RISCV_FTYPE_NAME##NUM ARGS:					\
    types[(int) type]							\
      = build_function_type_list (RISCV_FTYPE_ATYPES##NUM ARGS,		\
				  NULL_TREE);				\
    break;
#include "config/riscv/riscv-ftypes.def"
#undef DEF_RISCV_FTYPE
      default:
	gcc_unreachable ();
      }

  return types[(int) type];
}

/* Create a builtin vector type with a name.  Taking care not to give
   the canonical type a name.  */

static tree
riscv_vector_type (const char *name, tree elt_type, enum machine_mode mode)
{
  tree result = build_vector_type_for_mode (elt_type, mode);

  /* Copy so we don't give the canonical type a name.  */
  result = build_variant_type_copy (result);

  add_builtin_type (name, result);

  return result;
}

/* Implement TARGET_INIT_BUILTINS.  */

/* ??? Use register_builtin_types hook instead of add_builtin_type?  */

void
riscv_init_builtins (void)
{
  /* _Float16 is C specific.  So we need a language independent type for
     half floats.  Use __fp16 same as the arm/aarch64 ports.  */
  fp16_type_node = make_node (REAL_TYPE);
  TYPE_PRECISION (fp16_type_node) = 16;
  layout_type (fp16_type_node);
  (*lang_hooks.types.register_builtin_type) (fp16_type_node, "__fp16");

  if (TARGET_VECTOR)
    {
      /* These types exist only for the ld/st intrinsics.  */
      const_float_ptr_type_node
	= build_pointer_type (build_type_variant (float_type_node, 1, 0));
      float16_ptr_type_node = build_pointer_type (float16_type_node);
      const_float16_type_node = build_type_variant (float16_type_node, 1, 0);
      const_float16_ptr_type_node
	= build_pointer_type (const_float16_type_node);

      /* _Float16 is C specific.  So we need a language independent type for
	 half floats.  Use __fp16 same as the arm/aarch64 ports.  */
      fp16_type_node = make_node (REAL_TYPE);
      TYPE_PRECISION (fp16_type_node) = 16;
      layout_type (fp16_type_node);
      add_builtin_type ("__fp16", fp16_type_node);

      rvvint8m1_t_node
	= riscv_vector_type ("rvvint8m1_t", intQI_type_node, VNx16QImode);
      rvvint8m2_t_node
	= riscv_vector_type ("rvvint8m2_t", intQI_type_node, VNx32QImode);
      rvvint8m4_t_node
	= riscv_vector_type ("rvvint8m4_t", intQI_type_node, VNx64QImode);
      rvvint8m8_t_node
	= riscv_vector_type ("rvvint8m8_t", intQI_type_node, VNx128QImode);

      rvvint16m1_t_node
	= riscv_vector_type ("rvvint16m1_t", intHI_type_node, VNx8HImode);
      rvvint16m2_t_node
	= riscv_vector_type ("rvvint16m2_t", intHI_type_node, VNx16HImode);
      rvvint16m4_t_node
	= riscv_vector_type ("rvvint16m4_t", intHI_type_node, VNx32HImode);
      rvvint16m8_t_node
	= riscv_vector_type ("rvvint16m8_t", intHI_type_node, VNx64HImode);

      rvvint32m1_t_node
	= riscv_vector_type ("rvvint32m1_t", intSI_type_node, VNx4SImode);
      rvvint32m2_t_node
	= riscv_vector_type ("rvvint32m2_t", intSI_type_node, VNx8SImode);
      rvvint32m4_t_node
	= riscv_vector_type ("rvvint32m4_t", intSI_type_node, VNx16SImode);
      rvvint32m8_t_node
	= riscv_vector_type ("rvvint32m8_t", intSI_type_node, VNx32SImode);

      rvvint64m1_t_node
	= riscv_vector_type ("rvvint64m1_t", intDI_type_node, VNx2DImode);
      rvvint64m2_t_node
	= riscv_vector_type ("rvvint64m2_t", intDI_type_node, VNx4DImode);
      rvvint64m4_t_node
	= riscv_vector_type ("rvvint64m4_t", intDI_type_node, VNx8DImode);
      rvvint64m8_t_node
	= riscv_vector_type ("rvvint64m8_t", intDI_type_node, VNx16DImode);

      rvvuint8m1_t_node
	= riscv_vector_type ("rvvuint8m1_t", unsigned_intQI_type_node,
			     VNx16QImode);
      rvvuint8m2_t_node
	= riscv_vector_type ("rvvuint8m2_t", unsigned_intQI_type_node,
			     VNx32QImode);
      rvvuint8m4_t_node
	= riscv_vector_type ("rvvuint8m4_t", unsigned_intQI_type_node,
			     VNx64QImode);
      rvvuint8m8_t_node
	= riscv_vector_type ("rvvuint8m8_t", unsigned_intQI_type_node,
			     VNx128QImode);

      rvvuint16m1_t_node
	= riscv_vector_type ("rvvuint16m1_t", unsigned_intHI_type_node,
			     VNx8HImode);
      rvvuint16m2_t_node
	= riscv_vector_type ("rvvuint16m2_t", unsigned_intHI_type_node,
			     VNx16HImode);
      rvvuint16m4_t_node
	= riscv_vector_type ("rvvuint16m4_t", unsigned_intHI_type_node,
			     VNx32HImode);
      rvvuint16m8_t_node
	= riscv_vector_type ("rvvuint16m8_t", unsigned_intHI_type_node,
			     VNx64HImode);

      rvvuint32m1_t_node
	= riscv_vector_type ("rvvuint32m1_t", unsigned_intSI_type_node,
			     VNx4SImode);
      rvvuint32m2_t_node
	= riscv_vector_type ("rvvuint32m2_t", unsigned_intSI_type_node,
			     VNx8SImode);
      rvvuint32m4_t_node
	= riscv_vector_type ("rvvuint32m4_t", unsigned_intSI_type_node,
			     VNx16SImode);
      rvvuint32m8_t_node
	= riscv_vector_type ("rvvuint32m8_t", unsigned_intSI_type_node,
			     VNx32SImode);

      rvvuint64m1_t_node
	= riscv_vector_type ("rvvuint64m1_t", unsigned_intDI_type_node,
			     VNx2DImode);
      rvvuint64m2_t_node
	= riscv_vector_type ("rvvuint64m2_t", unsigned_intDI_type_node,
			     VNx4DImode);
      rvvuint64m4_t_node
	= riscv_vector_type ("rvvuint64m4_t", unsigned_intDI_type_node,
			     VNx8DImode);
      rvvuint64m8_t_node
	= riscv_vector_type ("rvvuint64m8_t", unsigned_intDI_type_node,
			     VNx16DImode);

      rvvfloat16m1_t_node
	= riscv_vector_type ("rvvfloat16m1_t", float16_type_node, VNx8HFmode);
      rvvfloat16m2_t_node
	= riscv_vector_type ("rvvfloat16m2_t", float16_type_node, VNx16HFmode);
      rvvfloat16m4_t_node
	= riscv_vector_type ("rvvfloat16m4_t", float16_type_node, VNx32HFmode);
      rvvfloat16m8_t_node
	= riscv_vector_type ("rvvfloat16m8_t", float16_type_node, VNx64HFmode);

      rvvfloat32m1_t_node
	= riscv_vector_type ("rvvfloat32m1_t", float_type_node, VNx4SFmode);
      rvvfloat32m2_t_node
	= riscv_vector_type ("rvvfloat32m2_t", float_type_node, VNx8SFmode);
      rvvfloat32m4_t_node
	= riscv_vector_type ("rvvfloat32m4_t", float_type_node, VNx16SFmode);
      rvvfloat32m8_t_node
	= riscv_vector_type ("rvvfloat32m8_t", float_type_node, VNx32SFmode);

      rvvfloat64m1_t_node
	= riscv_vector_type ("rvvfloat64m1_t", double_type_node, VNx2DFmode);
      rvvfloat64m2_t_node
	= riscv_vector_type ("rvvfloat64m2_t", double_type_node, VNx4DFmode);
      rvvfloat64m4_t_node
	= riscv_vector_type ("rvvfloat64m4_t", double_type_node, VNx8DFmode);
      rvvfloat64m8_t_node
	= riscv_vector_type ("rvvfloat64m8_t", double_type_node, VNx16DFmode);

      rvvbool1_t_node
	= riscv_vector_type ("rvvbool1_t", boolean_type_node, VNx128BImode);
      rvvbool2_t_node
	= riscv_vector_type ("rvvbool2_t", boolean_type_node, VNx64BImode);
      rvvbool4_t_node
	= riscv_vector_type ("rvvbool4_t", boolean_type_node, VNx32BImode);
      rvvbool8_t_node
	= riscv_vector_type ("rvvbool8_t", boolean_type_node, VNx16BImode);
      rvvbool16_t_node
	= riscv_vector_type ("rvvbool16_t", boolean_type_node, VNx8BImode);
      rvvbool32_t_node
	= riscv_vector_type ("rvvbool32_t", boolean_type_node, VNx4BImode);
      rvvbool64_t_node
	= riscv_vector_type ("rvvbool64_t", boolean_type_node, VNx2BImode);

    }

  for (size_t i = 0; i < ARRAY_SIZE (riscv_builtins); i++)
    {
      const struct riscv_builtin_description *d = &riscv_builtins[i];
      if (d->avail ())
	{
	  tree type = riscv_build_function_type (d->prototype);
	  riscv_builtin_decls[i]
	    = add_builtin_function (d->name, type, i, BUILT_IN_MD, NULL, NULL);
	  riscv_builtin_decl_index[d->icode] = i;
	}
    }
}

/* Implement TARGET_BUILTIN_DECL.  */

tree
riscv_builtin_decl (unsigned int code, bool initialize_p ATTRIBUTE_UNUSED)
{
  if (code >= ARRAY_SIZE (riscv_builtins))
    return error_mark_node;
  return riscv_builtin_decls[code];
}

/* Take argument ARGNO from EXP's argument list and convert it into
   an expand operand.  Store the operand in *OP.  */

static void
riscv_prepare_builtin_arg (struct expand_operand *op, tree exp, unsigned argno)
{
  tree arg = CALL_EXPR_ARG (exp, argno);
  create_input_operand (op, expand_normal (arg), TYPE_MODE (TREE_TYPE (arg)));
}

/* Expand instruction ICODE as part of a built-in function sequence.
   Use the first NOPS elements of OPS as the instruction's operands.
   HAS_TARGET_P is true if operand 0 is a target; it is false if the
   instruction has no target.

   Return the target rtx if HAS_TARGET_P, otherwise return const0_rtx.  */

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

/* Expand a RISCV_BUILTIN_DIRECT or RISCV_BUILTIN_DIRECT_NO_TARGET function;
   HAS_TARGET_P says which.  EXP is the CALL_EXPR that calls the function
   and ICODE is the code of the associated .md pattern.  TARGET, if nonnull,
   suggests a good place to put the result.  */

static rtx
riscv_expand_builtin_direct (enum insn_code icode, rtx target, tree exp,
			     bool has_target_p)
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];

  /* Map any target to operand 0.  */
  int opno = 0;
  if (has_target_p)
    create_output_operand (&ops[opno++], target, TYPE_MODE (TREE_TYPE (exp)));

  /* Map the arguments to the other operands.  */
  gcc_assert (opno + call_expr_nargs (exp)
	      == insn_data[icode].n_generator_args);
  for (int argno = 0; argno < call_expr_nargs (exp); argno++)
    riscv_prepare_builtin_arg (&ops[opno++], exp, argno);

  return riscv_expand_builtin_insn (icode, opno, ops, has_target_p);
}

/* Implement TARGET_EXPAND_BUILTIN.  */

rtx
riscv_expand_builtin (tree exp, rtx target, rtx subtarget ATTRIBUTE_UNUSED,
		      machine_mode mode ATTRIBUTE_UNUSED,
		      int ignore ATTRIBUTE_UNUSED)
{
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  unsigned int fcode = DECL_MD_FUNCTION_CODE (fndecl);
  const struct riscv_builtin_description *d = &riscv_builtins[fcode];

  switch (d->builtin_type)
    {
    case RISCV_BUILTIN_DIRECT:
      return riscv_expand_builtin_direct (d->icode, target, exp, true);

    case RISCV_BUILTIN_DIRECT_NO_TARGET:
      return riscv_expand_builtin_direct (d->icode, target, exp, false);
    }

  gcc_unreachable ();
}

/* Implement TARGET_ATOMIC_ASSIGN_EXPAND_FENV.  */

void
riscv_atomic_assign_expand_fenv (tree *hold, tree *clear, tree *update)
{
  if (!TARGET_HARD_FLOAT)
    return;

  tree frflags = GET_BUILTIN_DECL (CODE_FOR_riscv_frflags);
  tree fsflags = GET_BUILTIN_DECL (CODE_FOR_riscv_fsflags);
  tree old_flags = create_tmp_var_raw (RISCV_ATYPE_USI);

  *hold = build4 (TARGET_EXPR, RISCV_ATYPE_USI, old_flags,
		  build_call_expr (frflags, 0), NULL_TREE, NULL_TREE);
  *clear = build_call_expr (fsflags, 1, old_flags);
  *update = NULL_TREE;
}
