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
#include "function.h"
#include "emit-rtl.h"
#include "explow.h"

/* Macros to create an enumeration identifier for a function prototype.  */
#define RISCV_FTYPE_NAME0(A) RISCV_##A##_FTYPE
#define RISCV_FTYPE_NAME1(A, B) RISCV_##A##_FTYPE_##B
#define RISCV_FTYPE_NAME2(A, B, C) RISCV_##A##_FTYPE_##B##_##C
#define RISCV_FTYPE_NAME3(A, B, C, D) RISCV_##A##_FTYPE_##B##_##C##_##D
#define RISCV_FTYPE_NAME4(A, B, C, D, E) \
  RISCV_##A##_FTYPE_##B##_##C##_##D##_##E
#define RISCV_FTYPE_NAME5(A, B, C, D, E, F) \
  RISCV_##A##_FTYPE_##B##_##C##_##D##_##E##_##F
#define RISCV_FTYPE_NAME6(A, B, C, D, E, F, G) \
  RISCV_##A##_FTYPE_##B##_##C##_##D##_##E##_##F##_##G
#define RISCV_FTYPE_NAME7(A, B, C, D, E, F, G, H) \
  RISCV_##A##_FTYPE_##B##_##C##_##D##_##E##_##F##_##G##_##H

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

AVAIL (crypto_zknd32, TARGET_ZKND && !TARGET_64BIT)
AVAIL (crypto_zknd64, TARGET_ZKND && TARGET_64BIT)
AVAIL (crypto_zkne32, TARGET_ZKNE && !TARGET_64BIT)
AVAIL (crypto_zkne64, TARGET_ZKNE && TARGET_64BIT)
AVAIL (crypto_zknh32, TARGET_ZKNH && !TARGET_64BIT)
AVAIL (crypto_zknh64, TARGET_ZKNH && TARGET_64BIT)

AVAIL (crypto_zksh32, TARGET_ZKSH && !TARGET_64BIT)
AVAIL (crypto_zksh64, TARGET_ZKSH && TARGET_64BIT)
AVAIL (crypto_zksed32, TARGET_ZKSED && !TARGET_64BIT)
AVAIL (crypto_zksed64, TARGET_ZKSED && TARGET_64BIT)

AVAIL (crypto_zkr32, TARGET_ZKR && !TARGET_64BIT)
AVAIL (crypto_zkr64, TARGET_ZKR && TARGET_64BIT)

/* p ext */
AVAIL (zpn, TARGET_ZPN)
AVAIL (zpn64, TARGET_ZPN && TARGET_64BIT)
AVAIL (zpn32, TARGET_ZPN && !TARGET_64BIT)

AVAIL (zpsf, TARGET_ZPSF)
AVAIL (zpsf32, TARGET_ZPSF && !TARGET_64BIT)
AVAIL (zpsf64, TARGET_ZPSF && TARGET_64BIT)

AVAIL (zbpbo, TARGET_ZBPBO)
AVAIL (zbpbo32, TARGET_ZBPBO && !TARGET_64BIT)
AVAIL (zbpbo64, TARGET_ZBPBO && TARGET_64BIT)

/* Construct a riscv_builtin_description from the given arguments.

   INSN is the name of the associated instruction pattern, without the
   leading CODE_FOR_riscv_.

   NAME is the name of the function itself, without the leading
   "__builtin_riscv_".

   BUILTIN_TYPE and FUNCTION_TYPE are riscv_builtin_description fields.

   AVAIL is the name of the availability predicate, without the leading
   riscv_builtin_avail_.  */
#define RISCV_BUILTIN(INSN, NAME, BUILTIN_TYPE,	FUNCTION_TYPE, AVAIL)	\
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

/* Define __builtin_riscv_<NAME>, which is a RISCV_BUILTIN_DIRECT function
   mapped to instruction CODE_FOR_<INSN>,  FUNCTION_TYPE and AVAIL
   are as for RISCV_BUILTIN.  */
#define DIRECT_BUILTIN_NO_PREFIX(INSN, NAME, FUNCTION_TYPE, AVAIL)			\
  { CODE_FOR_ ## INSN, "__builtin_riscv_" # NAME,			\
    RISCV_BUILTIN_DIRECT, FUNCTION_TYPE, riscv_builtin_avail_ ## AVAIL }

/* Define __builtin_riscv_<NAME>, which is a RISCV_BUILTIN_DIRECT_NO_TARGET function
   mapped to instruction CODE_FOR_<INSN>,  FUNCTION_TYPE and AVAIL
   are as for RISCV_BUILTIN.  */
#define DIRECT_NO_TARGET_BUILTIN_NO_PREFIX(INSN, NAME, FUNCTION_TYPE, AVAIL)			\
  { CODE_FOR_ ## INSN, "__builtin_riscv_" # NAME,			\
    RISCV_BUILTIN_DIRECT_NO_TARGET, FUNCTION_TYPE, riscv_builtin_avail_ ## AVAIL }

/* type nodes for target-specific width support (xlen_t) */
tree uint_xlen_node;
tree int_xlen_node;

/* Argument types.  */
#define RISCV_ATYPE_VOID void_type_node
#define RISCV_ATYPE_USI unsigned_intSI_type_node
#define RISCV_ATYPE_SI intSI_type_node
#define RISCV_ATYPE_DI intDI_type_node
#define RISCV_ATYPE_UDI unsigned_intDI_type_node
#define RISCV_ATYPE_V4QI build_vector_type (intQI_type_node, 4)
#define RISCV_ATYPE_UV4QI build_vector_type (unsigned_intQI_type_node, 4)
#define RISCV_ATYPE_V8QI build_vector_type (intQI_type_node, 8)
#define RISCV_ATYPE_UV8QI build_vector_type (unsigned_intQI_type_node, 8)
#define RISCV_ATYPE_V2HI build_vector_type (intHI_type_node, 2)
#define RISCV_ATYPE_UV2HI build_vector_type (unsigned_intHI_type_node, 2)
#define RISCV_ATYPE_V4HI build_vector_type (intHI_type_node, 4)
#define RISCV_ATYPE_UV4HI build_vector_type (unsigned_intHI_type_node, 4)
#define RISCV_ATYPE_V2SI build_vector_type (intSI_type_node, 2)
#define RISCV_ATYPE_UV2SI build_vector_type (unsigned_intSI_type_node, 2)
#define RISCV_ATYPE_V8HI build_vector_type (intHI_type_node, 8)
#define RISCV_ATYPE_UV8HI build_vector_type (unsigned_intHI_type_node, 8)

#define RISCV_ATYPE_IXLEN  int_xlen_node
#define RISCV_ATYPE_UIXLEN uint_xlen_node

/* RISCV_FTYPE_ATYPESN takes N RISCV_FTYPES-like type codes and lists
   their associated RISCV_ATYPEs.  */
#define RISCV_FTYPE_ATYPES0(A) \
  RISCV_ATYPE_##A
#define RISCV_FTYPE_ATYPES1(A, B) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B
#define RISCV_FTYPE_ATYPES2(A, B, C) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C
#define RISCV_FTYPE_ATYPES3(A, B, C, D) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D
#define RISCV_FTYPE_ATYPES4(A, B, C, D, E) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D, \
  RISCV_ATYPE_##E
#define RISCV_FTYPE_ATYPES5(A, B, C, D, E, F) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D, \
  RISCV_ATYPE_##E, RISCV_ATYPE_##F
#define RISCV_FTYPE_ATYPES6(A, B, C, D, E, F, G) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D, \
  RISCV_ATYPE_##E, RISCV_ATYPE_##F, RISCV_ATYPE_##G
#define RISCV_FTYPE_ATYPES7(A, B, C, D, E, F, G, H) \
  RISCV_ATYPE_##A, RISCV_ATYPE_##B, RISCV_ATYPE_##C, RISCV_ATYPE_##D, \
  RISCV_ATYPE_##E, RISCV_ATYPE_##F, RISCV_ATYPE_##G, RISCV_ATYPE_##H

static const struct riscv_builtin_description riscv_builtins[] = {
  #include "riscv-builtins-crypto.def"
  #include "riscv-builtins-rvp.def"

  DIRECT_BUILTIN (frflags, RISCV_USI_FTYPE, hard_float),
  DIRECT_NO_TARGET_BUILTIN (fsflags, RISCV_VOID_FTYPE_USI, hard_float)
};

/* Index I is the function declaration for riscv_builtins[I], or null if the
   function isn't defined on this target.  */
static GTY(()) tree riscv_builtin_decls[ARRAY_SIZE (riscv_builtins)];

/* Get the index I of the function declaration for riscv_builtin_decls[I]
   using the instruction code or return null if not defined for the target.  */
static GTY(()) int riscv_builtin_decl_index[NUM_INSN_CODES];

#define GET_BUILTIN_DECL(CODE) \
  riscv_builtin_decls[riscv_builtin_decl_index[(CODE)]]

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

/* Implement TARGET_INIT_BUILTINS.  */

void
riscv_init_builtins (void)
{
  if (TARGET_64BIT)
    {
      int_xlen_node  = intDI_type_node;
      uint_xlen_node = unsigned_intDI_type_node;
    }
  else
    {
      int_xlen_node  = intSI_type_node;
      uint_xlen_node = unsigned_intSI_type_node;
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
riscv_prepare_builtin_arg (struct expand_operand *op, tree exp, unsigned argno,
			   enum insn_code icode, bool has_target_p)
{
  rtx arg_rtx = expand_normal (CALL_EXPR_ARG (exp, argno));
  enum machine_mode mode = insn_data[icode].operand[argno + has_target_p].mode;

  if (!(*insn_data[icode].operand[argno + has_target_p].predicate) (arg_rtx, mode))
    {
      rtx tmp_rtx = gen_reg_rtx (mode);
      if (GET_MODE_SIZE (mode) < GET_MODE_SIZE (GET_MODE (arg_rtx)))
	{
	  tmp_rtx = simplify_gen_subreg (mode, arg_rtx, GET_MODE (arg_rtx), 0);
	  arg_rtx = tmp_rtx;
	}
      else if (VECTOR_MODE_P (mode) && CONST_INT_P (arg_rtx))
	{
	  /* Handle CONST_INT covert to CONST_VECTOR.  */
	  int nunits = GET_MODE_NUNITS (mode);
	  int i, shift = 0;
	  rtvec v = rtvec_alloc (nunits);
	  HOST_WIDE_INT val = INTVAL (arg_rtx);
	  enum machine_mode val_mode = GET_MODE_INNER (mode);
	  int shift_acc = GET_MODE_BITSIZE (val_mode);
	  unsigned HOST_WIDE_INT mask = GET_MODE_MASK (val_mode);
	  HOST_WIDE_INT tmp_val = val;
	  for (i = 0; i < nunits; i++)
	    {
	      tmp_val = (val >> shift) & mask;
	      RTVEC_ELT (v, i) = gen_int_mode (tmp_val, val_mode);
	      shift += shift_acc;
	    }

	  arg_rtx = copy_to_mode_reg (mode, gen_rtx_CONST_VECTOR (mode, v));
	}
      else
	{
	  convert_move (tmp_rtx, arg_rtx, false);
	  arg_rtx = tmp_rtx;
	}
    }
  create_input_operand (op, arg_rtx, mode);
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
  enum machine_mode insn_return_mode = insn_data[icode].operand[opno].mode;
  enum machine_mode mode = TYPE_MODE (TREE_TYPE (exp));

  if (has_target_p)
    {
      /* p extension vector and scalar mode convension */
      if ((!target
	  || GET_MODE (target) != insn_return_mode
	  || ! (*insn_data[icode].operand[opno].predicate) (target, insn_return_mode)))
	{
	  mode = insn_return_mode;
	  target = gen_reg_rtx (mode);
	}

      create_output_operand (&ops[opno++], target, mode);
    }

  /* Map the arguments to the other operands.  */
  gcc_assert (opno + call_expr_nargs (exp)
	      == insn_data[icode].n_generator_args);
  for (int argno = 0; argno < call_expr_nargs (exp); argno++)
    riscv_prepare_builtin_arg (&ops[opno++], exp, argno, icode, has_target_p);

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
