/* RISC-V Vector extension instructions include file.

   Copyright (C) 2019 Free Software Foundation, Inc.
   Contributed by SiFive.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _GCC_RISCV_VECTOR_H
#error "DO NOT include this file directly, this file will be REMOVED in " \
       "future, please include riscv_vector.h"
#else

#ifndef _GCC_RISCV_VECTOR_ASM_H
#define _GCC_RISCV_VECTOR_ASM_H 1

/* INLINE ASM VERSION OF INTRINSIC FUNCTION.  */

/* Uitl type for easier expand floating point functions.  */
#define _RVV_F16_TYPE float16_t
#define _RVV_F32_TYPE float
#define _RVV_F64_TYPE double

/* Predicate function for signed immediate value.  */
#define _RVV_ASM_INT_SIMM_CHK(SEW, IMM) \
  (__builtin_constant_p (b) &&		\
   (((int##SEW##_t)IMM) < 15) && (((int##SEW##_t)IMM) >= -16))
/* Predicate function for unsigned immediate value.  */
#define _RVV_ASM_INT_UIMM_CHK(SEW, IMM) \
  (__builtin_constant_p (b) && (((IMM) >= 0) && ((IMM) <= 31)))

/* Unmasked inline asm template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_BIN_OP_ASM_TEMPLATE(SEW, LMUL, ASM_OP,			\
				     OP0_CONSTRANT,			\
				     OP1_CONSTRANT,			\
				     OP2_CONSTRANT)			\
    asm volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		  ASM_OP " %0, %1, %2"					\
		  : OP0_CONSTRANT (rv)					\
		  : OP1_CONSTRANT (a), OP2_CONSTRANT (b)		\
		  : "vtype")

/* Masked inline asm template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_BIN_OP_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
					    OP0_CONSTRANT,		\
					    OP1_CONSTRANT,		\
					    OP2_CONSTRANT)		\
    asm volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		  ASM_OP " %0, %1, %2, %3.t"				\
		  : OP0_CONSTRANT (rv)					\
		  : OP1_CONSTRANT (a), OP2_CONSTRANT (b),		\
		    "vm" (mask), "0" (maskedoff)			\
		  : "vtype")

/* Binary intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP2_TYPE: Type of operand 2.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_BIN_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				 MASK_TYPE,				\
				 OP0_TYPE, OP1_TYPE, OP2_TYPE, 		\
				 OP0_CONSTRANT,				\
				 OP1_CONSTRANT,				\
				 OP2_CONSTRANT)				\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a, OP2_TYPE b)					\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_BIN_OP_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff,			\
		  OP1_TYPE a, OP2_TYPE b)				\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_BIN_OP_MASKED_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}

/* Binary intrinsic function template, but support immediate version.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   IMM_ASM_OP: opcode for immediate variant, e.g. vadd.vi
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP2_TYPE: Type of operand 2.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.
   IMM_CHK: Predicate function for immediate value.  */
#define _RVV_ASM_BIN_OP_IMM_TEMPLATE(SEW, LMUL, ASM_OP, IMM_ASM_OP,	\
				     FUNC_NAME,	MASK_TYPE,		\
				     OP0_TYPE, OP1_TYPE, OP2_TYPE, 	\
				     OP0_CONSTRANT,			\
				     OP1_CONSTRANT,			\
				     OP2_CONSTRANT, IMM_CHK)		\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a, OP2_TYPE b)					\
{									\
  OP0_TYPE rv;								\
  if (IMM_CHK(SEW, b))							\
    _RVV_ASM_BIN_OP_ASM_TEMPLATE(					\
      SEW, LMUL, IMM_ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, "i");				\
  else									\
    _RVV_ASM_BIN_OP_ASM_TEMPLATE(					\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff, 			\
		  OP1_TYPE a, OP2_TYPE b)				\
{									\
  OP0_TYPE rv;								\
  if (IMM_CHK(SEW, b))							\
    _RVV_ASM_BIN_OP_MASKED_ASM_TEMPLATE(				\
      SEW, LMUL, IMM_ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, "i");				\
  else									\
    _RVV_ASM_BIN_OP_MASKED_ASM_TEMPLATE(				\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}									\

/* Intrinsic function template for mac instructions,
   operand 0 as input and output operand.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 0.
   OP2_TYPE: Type of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_MAC_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				 MASK_TYPE,				\
				 OP0_TYPE, OP1_TYPE, OP2_TYPE, 		\
				 OP1_CONSTRANT,				\
				 OP2_CONSTRANT)				\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP0_TYPE op0, OP1_TYPE a, OP2_TYPE b)			\
{									\
  OP0_TYPE rv;								\
  asm volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		ASM_OP " %0, %1, %2"					\
		: "=vr" (rv)						\
		: OP1_CONSTRANT (a), OP2_CONSTRANT (b),			\
		  "0" (op0)						\
		: "vtype");						\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff,			\
		  OP0_TYPE op0, OP1_TYPE a, OP2_TYPE b)			\
{									\
  OP0_TYPE rv;								\
  asm volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t":::"vtype");	\
  asm volatile ("vmerge.vvm %0, %1, %2, %3"				\
		: "=vr"(rv)						\
		: "vr"(op0), "vr" (maskedoff), "vm"(mask));		\
  asm volatile (ASM_OP " %0, %1, %2, %3.t"				\
		: "+vr" (rv)						\
		: OP1_CONSTRANT (a), OP2_CONSTRANT (b),			\
		  "vm" (mask));						\
  return rv;								\
}

/* Template function for binary integer vector-scalar operation with immediate
   variant.  */
#define _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T,	\
	 					  OP, OPU, IMM_CHK)	\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OPU ".vi",					\
    /* FUNC_NAME */rvv_##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    IMM_CHK)								\
  /* vopu.vs */								\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".vx",						\
    /* IMM_ASM_OP */"v" #OPU ".vi",					\
    /* FUNC_NAME */rvv_##OP##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    IMM_CHK)

/* Template function for binary integer vector-scalar operation.  */
#define _RVV_ASM_INT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */rvv_##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".vx",						\
    /* FUNC_NAME */rvv_##OP##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for binary integer vector-vector operation.  */
#define _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OPU)	\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for binary integer vector-vector and vector-scalar
   operation.  */
#define _RVV_ASM_INT_BIN_OP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_INT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP, OP)		\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OP)

/* Template function for binary integer vector-vector and vector-scalar
   operation, but using different opcode for signed/unsigned operation.  */
#define _RVV_ASM_INT_BIN_OP_OPU(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_INT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OPU)

/* Template function for binary integer vector-vector, vector-scalar and
   vector-signed-immediate operation.  */
#define _RVV_ASM_INT_BIN_OP_WITH_IMM_VER(SEW, LMUL, MLEN, T, OP)	\
  _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T, OP, OP,	\
		 			    _RVV_ASM_INT_SIMM_CHK)	\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OP)

/* Template function for binary integer vector-vector, vector-scalar and
   vector-unsigned-immediate operation.  */
#define _RVV_ASM_INT_BIN_OP_WITH_UIMM_VER(SEW, LMUL, MLEN, T, OP)	\
  _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T, OP, OP,	\
		 			    _RVV_ASM_INT_UIMM_CHK)	\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OP)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_IMM_VER, and)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_IMM_VER, or)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_IMM_VER, xor)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, sll)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, sra)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, srl)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, min, minu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, max, maxu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, div, divu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, rem, remu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, mulh, mulhu)

/* Template function for vmulhsu.vv and vmulhsu.vx.  */
#define _RVV_ASM_MULHSU_OP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */rvv_##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */rvv_##OP##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

_RVV_INT_ITERATOR_ARG (_RVV_ASM_MULHSU_OP, mulhsu)

/* Template function for single-width integer vector-vector multiply-add
   operation.  */
#define _RVV_ASM_INT_MAC_VV(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for single-width integer vector-scalar multiply-add
   operation.  */
#define _RVV_ASM_INT_MAC_VX(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */rvv_##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */int##SEW##_t,						\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"r",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */rvv_##OP##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */uint##SEW##_t,					\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"r",						\
    /* OP2_CONSTRANT */"vr")

#define _RVV_ASM_INT_MAC(SEW, LMUL, MLEN, T, OP)	\
  _RVV_ASM_INT_MAC_VV(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_INT_MAC_VX(SEW, LMUL, MLEN, T, OP)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_MAC, macc)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_MAC, nmsac)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_MAC, madd)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_MAC, nmsub)

/* Template function for integer vector-vector comparison operation.  */
#define _RVV_ASM_INT_CMP_VV(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OP ".vv",					\
    /* FUNC_NAME */rvv_s##OP##_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OPU ".vv",					\
    /* FUNC_NAME */rvv_s##OPU##_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for integer vector-scalar comparison operation.  */
#define _RVV_ASM_INT_CMP_VX(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OP ".vx",					\
    /* FUNC_NAME */rvv_s##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OPU ".vx",					\
    /* FUNC_NAME */rvv_s##OPU##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for integer vector-scalar or vector-immediate
   comparison operation.  */
#define _RVV_ASM_INT_CMP_VXI(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OP ".vx",					\
    /* IMM_ASM_OP */"vms" #OP ".vi",					\
    /* FUNC_NAME */rvv_s##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */ _RVV_ASM_INT_SIMM_CHK)				\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OPU ".vx",					\
    /* IMM_ASM_OP */"vms" #OPU ".vi",					\
    /* FUNC_NAME */rvv_s##OPU##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */ _RVV_ASM_INT_SIMM_CHK)

/* Template function for integer vector-vector or vector-scalar
   comparison operation.  */
#define _RVV_ASM_INT_CMP(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_INT_CMP_VV(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_INT_CMP_VX(SEW, LMUL, MLEN, T, OP, OPU)

/* Template function for integer vector-vector, vector-scalar or
   vector-immediate comparison operation.  */
#define _RVV_ASM_INT_CMP_IMM(SEW, LMUL, MLEN, T, OP, OPU)	\
  _RVV_ASM_INT_CMP_VV(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_INT_CMP_VXI(SEW, LMUL, MLEN, T, OP, OPU)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_CMP_IMM, eq, eq)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_CMP_IMM, ne, ne)
/* vv version of lt/ltu implemented in .md.  */
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_CMP_VX, lt, ltu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_CMP_IMM, le, leu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_CMP_VXI, gt, gtu)

/* Template function for widening integer vector-vector operation.  */
#define _RVV_ASM_WINT_BIN_OP_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vv",						\
    /* FUNC_NAME */rvv_w##OP##_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".vv",					\
    /* FUNC_NAME */rvv_w##OPU##_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening integer vector-scalar operation.  */
#define _RVV_ASM_WINT_BIN_OP_VX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vx",						\
    /* FUNC_NAME */rvv_w##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".vx",					\
    /* FUNC_NAME */rvv_w##OPU##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_VV, sub, subu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_VX, sub, subu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_VX, add, addu)

/* Template function for binary floating point vector-scalar operation.  */
#define _RVV_ASM_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */rvv_##OP##_vs_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

/* Template function for binary floating point vector-vector operation.  */
#define _RVV_ASM_FLOAT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for binary floating point vector-vector and vector-scalar
   operation.  */
#define _RVV_ASM_FLOAT_BIN_OP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_FLOAT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)

_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_BIN_OP, sgnj)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_BIN_OP, sgnjn)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_BIN_OP, sgnjx)

/* Template function for widening floating point vector-vector operation.  */
#define _RVV_ASM_WFLOAT_BIN_OP_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening floating point vector-scalar operation.  */
#define _RVV_ASM_WFLOAT_BIN_OP_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */rvv_##OP##_vs_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

#define _RVV_ASM_WFLOAT_BIN_OP_VV_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL,	\
				     WT, OP)				\
  _RVV_ASM_WFLOAT_BIN_OP_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_WFLOAT_BIN_OP_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)

_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_WFLOAT_BIN_OP_VV_VF, wadd)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_WFLOAT_BIN_OP_VV_VF, wsub)

/* Template function for widening floating point vector-vector operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WFLOAT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".wv",						\
    /* FUNC_NAME */rvv_##OP##_wv_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening floating point vector-scalar operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WFLOAT_BIN_OP_WF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".wf",						\
    /* FUNC_NAME */rvv_##OP##_ws_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

/* Template function for widening floating point vector-vector and
   vector-scalaroperation, operand 1 is widening type.  */
#define _RVV_ASM_WFLOAT_BIN_OP_WV_WF(SEW, LMUL, MLEN, T, WSEW, WLMUL,	\
				     WT, OP)				\
  _RVV_ASM_WFLOAT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_WFLOAT_BIN_OP_WF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)

_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_WFLOAT_BIN_OP_WV_WF, wadd)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_WFLOAT_BIN_OP_WV_WF, wsub)

/* Template function for single-width floating point vector-vector and
   vector-scalar multiply-add operation.  */
#define _RVV_ASM_FLOAT_MAC(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */rvv_##OP##_vs_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"f",						\
    /* OP2_CONSTRANT */"vr")

_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, macc)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, nmacc)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, msac)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, nmsac)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, madd)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, nmadd)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, msub)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_MAC, nmsub)

/* Template function for floating-point vector-vector and vector-sclar
   comparison operation.  */
#define _RVV_ASM_FLOAT_CMP_VV(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmf" #OP ".vv",					\
    /* FUNC_NAME */rvv_##OP##_vv_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

#define _RVV_ASM_FLOAT_CMP_VF(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmf" #OP ".vf",					\
    /* FUNC_NAME */rvv_##OP##_vs_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_bool##MLEN##_t,					\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

#define _RVV_ASM_FLOAT_CMP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_FLOAT_CMP_VV(SEW, LMUL, MLEN, T, OP)				\
  _RVV_ASM_FLOAT_CMP_VF(SEW, LMUL, MLEN, T, OP)

_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_CMP, eq)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_CMP, ne)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_CMP, lt)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_CMP, le)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_CMP_VF, gt)
_RVV_FLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_CMP_VF, ge)

#endif
#endif
