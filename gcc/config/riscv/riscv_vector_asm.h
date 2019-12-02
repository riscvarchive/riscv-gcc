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

/* Unmasked inline asm template for store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STORE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				    OP0_CONSTRANT,		\
				    OP1_CONSTRANT)		\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"	\
		      ASM_OP " %1, %0"				\
		      : OP0_CONSTRANT (addr)			\
		      : OP1_CONSTRANT (a)			\
		      : "vtype", "memory")

/* Masked inline asm template for store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STORE_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
					   OP0_CONSTRANT,		\
					   OP1_CONSTRANT)		\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %1, %0, %2.t"				\
		      : OP0_CONSTRANT (addr)				\
		      : OP1_CONSTRANT (a),				\
		        "vm" (mask)					\
		      : "vtype", "memory")

/* Unmasked inline asm template for strided load instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_LOAD_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					   OP0_CONSTRANT,	\
					   OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"	\
		      ASM_OP " %0, %1, %2"			\
		      : OP0_CONSTRANT (rv)			\
		      : OP1_CONSTRANT (a),			\
			"r" (stride)				\
		      : "vtype", "memory")

/* Masked inline asm template for store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_LOAD_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						  OP0_CONSTRANT,	\
						  OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1, %2, %3.t"			\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (a),				\
		        "r" (stride),					\
		        "vm" (mask), "0"(maskedoff)			\
		      : "vtype", "memory")

/* Unmasked inline asm template for strided store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_STORE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					    OP0_CONSTRANT,	\
					    OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"	\
		      ASM_OP " %1, %0, %2"			\
		      : OP0_CONSTRANT (addr)			\
		      : OP1_CONSTRANT (a), "r"(stride)		\
		      : "vtype", "memory")

/* Masked inline asm template for strided store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_STORE_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						   OP0_CONSTRANT,	\
						   OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %1, %0, %2, %3.t"			\
		      : OP0_CONSTRANT (addr)				\
		      : OP1_CONSTRANT (a), "r"(stride),			\
		        "vm" (mask)					\
		      : "vtype", "memory")

/* Unmasked inline asm template for indexed load instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_LOAD_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					   OP0_CONSTRANT,	\
					   OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"	\
		      ASM_OP " %0, %1, %2"			\
		      : OP0_CONSTRANT (rv)			\
		      : OP1_CONSTRANT (a),			\
			"vr" (index)				\
		      : "vtype", "memory")

/* Masked inline asm template for indexed load instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_LOAD_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						  OP0_CONSTRANT,	\
						  OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1, %2, %3.t"			\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (a),				\
		        "vr" (index),					\
		        "vm" (mask), "0"(maskedoff)			\
		      : "vtype", "memory")

/* Unmasked inline asm template for indexed store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_STORE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					    OP0_CONSTRANT,	\
					    OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"	\
		      ASM_OP " %1, %0, %2"			\
		      : OP0_CONSTRANT (addr)			\
		      : OP1_CONSTRANT (a),			\
			"vr" (index)				\
		      : "vtype", "memory")

/* Masked inline asm template for indexed store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_STORE_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						   OP0_CONSTRANT,	\
						   OP1_CONSTRANT)	\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %1, %0, %2, %3.t"			\
		      : OP0_CONSTRANT (addr)				\
		      : OP1_CONSTRANT (a),				\
		        "vr" (index),					\
		        "vm" (mask)					\
		      : "vtype", "memory")

/* Inline asm template for vmv.v.x/vfmv.v.f.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_MV_VS_ASM_TEMPLATE(SEW, LMUL, ASM_OP,			\
				    OP0_CONSTRANT,			\
				    OP1_CONSTRANT)			\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %2"					\
		      : OP0_CONSTRANT (rv)				\
		      : "0"(a), OP1_CONSTRANT (b)			\
		      : "vtype")

/* Unmasked inline asm template for unary operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNARY_OP_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				       OP0_CONSTRANT,			\
				       OP1_CONSTRANT)			\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1"					\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (a)				\
		      : "vtype")

/* Masked inline asm template for unary operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNARY_OP_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					      OP0_CONSTRANT,		\
					      OP1_CONSTRANT)		\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1, %2.t"				\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (a),				\
		        "vm" (mask), "0" (maskedoff)			\
		      : "vtype")

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
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1, %2"				\
		      : OP0_CONSTRANT (rv)				\
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
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1, %2, %3.t"			\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (a), OP2_CONSTRANT (b),		\
		        "vm" (mask), "0" (maskedoff)			\
		      : "vtype")

/* Inline asm template for merge operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_MERGE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,			\
				    OP0_CONSTRANT,			\
				    OP1_CONSTRANT,			\
				    OP2_CONSTRANT)			\
    __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		      ASM_OP " %0, %1,%2, %3"				\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (a), OP2_CONSTRANT (b),		\
		        "vm" (mask)					\
		      : "vtype")

/* Store intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STORE_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				MASK_TYPE,				\
				OP0_TYPE, OP1_TYPE,	 		\
				OP0_CONSTRANT,				\
				OP1_CONSTRANT)				\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP0_TYPE addr, OP1_TYPE a)					\
{									\
  _RVV_ASM_STORE_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (OP0_TYPE addr, MASK_TYPE mask, OP1_TYPE a)		\
{									\
  _RVV_ASM_STORE_MASKED_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
}

/* Strided load intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_LOAD_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
				       MASK_TYPE,			\
				       OP0_TYPE, OP1_TYPE,		\
				       OP0_CONSTRANT,			\
				       OP1_CONSTRANT)			\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a, word_type stride)				\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_STRIDED_LOAD_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff, OP1_TYPE a,	\
		  word_type stride)					\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_STRIDED_LOAD_MASKED_ASM_TEMPLATE(				\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}

/* Strided store intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_STORE_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
					MASK_TYPE,			\
					OP0_TYPE, OP1_TYPE,		\
					OP0_CONSTRANT,			\
					OP1_CONSTRANT)			\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP0_TYPE addr, word_type stride, OP1_TYPE a)			\
{									\
  _RVV_ASM_STRIDED_STORE_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (OP0_TYPE addr, word_type stride,			\
		  MASK_TYPE mask, OP1_TYPE a)				\
{									\
  _RVV_ASM_STRIDED_STORE_MASKED_ASM_TEMPLATE(				\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
}

/* Indexed load intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   INDEX_TYPE: Type of index operand.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_LOAD_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
				       MASK_TYPE,			\
				       OP0_TYPE, OP1_TYPE, INDEX_TYPE,	\
				       OP0_CONSTRANT,			\
				       OP1_CONSTRANT)			\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a, INDEX_TYPE index)				\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_INDEXED_LOAD_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff, OP1_TYPE a,	\
		  INDEX_TYPE index)					\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_INDEXED_LOAD_MASKED_ASM_TEMPLATE(				\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}

/* Indexed store intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   INDEX_TYPE: Type of index operand.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_STORE_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
					MASK_TYPE,			\
					OP0_TYPE, OP1_TYPE, INDEX_TYPE,	\
					OP0_CONSTRANT,			\
					OP1_CONSTRANT)			\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP0_TYPE addr, INDEX_TYPE index, OP1_TYPE a)			\
{									\
  _RVV_ASM_INDEXED_STORE_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (OP0_TYPE addr, INDEX_TYPE index,			\
		  MASK_TYPE mask, OP1_TYPE a)				\
{									\
  _RVV_ASM_INDEXED_STORE_MASKED_ASM_TEMPLATE(				\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
}

/* Intrinsic function template for  vmv.v.x/vfmv.v.f.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_MV_VS_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				OP0_TYPE, OP1_TYPE,			\
				OP0_CONSTRANT,				\
				OP1_CONSTRANT)				\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP0_TYPE a, OP1_TYPE b)					\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_MV_VS_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}

/* Unmasked unary intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNMASKED_UNARY_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,\
					    OP0_TYPE, OP1_TYPE,		\
					    OP0_CONSTRANT,		\
					    OP1_CONSTRANT)		\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a)							\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_UNARY_OP_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}

/* UNARY intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNARY_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
				   MASK_TYPE,				\
				   OP0_TYPE, OP1_TYPE,	 		\
				   OP0_CONSTRANT,			\
				   OP1_CONSTRANT)			\
  _RVV_ASM_UNMASKED_UNARY_OP_TEMPLATE (SEW, LMUL, ASM_OP, FUNC_NAME,	\
				       OP0_TYPE, OP1_TYPE,		\
				       OP0_CONSTRANT, OP1_CONSTRANT)	\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff,			\
		  OP1_TYPE a)						\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_UNARY_OP_MASKED_ASM_TEMPLATE(				\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}

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
  __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"		\
		    ASM_OP " %0, %1, %2"				\
		    : "=vr" (rv)					\
		    : OP1_CONSTRANT (a), OP2_CONSTRANT (b),		\
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
  __asm__ volatile ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t":::"vtype");\
  __asm__ volatile ("vmerge.vvm %0, %1, %2, %3"				\
		    : "=vr"(rv)						\
		    : "vr"(op0), "vr" (maskedoff), "vm"(mask));		\
  __asm__ volatile (ASM_OP " %0, %1, %2, %3.t"				\
		    : "+vr" (rv)					\
		    : OP1_CONSTRANT (a), OP2_CONSTRANT (b),		\
		      "vm" (mask));					\
  return rv;								\
}

/* Merge intrinsic function template.
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
   OP1_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_MERGE_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				MASK_TYPE,				\
				OP0_TYPE, OP1_TYPE, OP2_TYPE,  		\
				OP0_CONSTRANT,				\
				OP1_CONSTRANT,				\
				OP2_CONSTRANT)				\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (MASK_TYPE mask, OP1_TYPE a, OP2_TYPE b)			\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_MERGE_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}

/* Merge intrinsic function template, but support immediate version.
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
   OP1_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_MERGE_IMM_TEMPLATE(SEW, LMUL, ASM_OP, IMM_ASM_OP,	\
				    FUNC_NAME,	MASK_TYPE,		\
				    OP0_TYPE, OP1_TYPE, OP2_TYPE,	\
				    OP0_CONSTRANT,			\
				    OP1_CONSTRANT,			\
				    OP2_CONSTRANT)			\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (MASK_TYPE mask, OP1_TYPE a, OP2_TYPE b)			\
{									\
  OP0_TYPE rv;								\
  if (_RVV_ASM_INT_SIMM_CHK(SEW, b))					\
    _RVV_ASM_MERGE_ASM_TEMPLATE(					\
      SEW, LMUL, IMM_ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, "i");				\
  else									\
    _RVV_ASM_MERGE_ASM_TEMPLATE(					\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}									\

#define _RVV_ASM_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)	\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_l##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER "u.v",				\
    /* FUNC_NAME */rvv_l##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_LOAD)

#define _RVV_ASM_STORE(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)	\
  _RVV_ASM_STORE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vs" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_s##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_STORE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vs" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_s##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */uint##NSEW##_t *,					\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_STORE)

#define _RVV_ASM_STRIDED_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_STRIDED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vls" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_ls##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_STRIDED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vls" #NTYPE_LETTER "u.v",				\
    /* FUNC_NAME */rvv_ls##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_STRIDED_LOAD)

#define _RVV_ASM_STRIDED_STORE(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_STRIDED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vss" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_ss##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_STRIDED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vss" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_ss##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */uint##NSEW##_t *,					\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_STRIDED_STORE)

#define _RVV_ASM_INDEXED_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlx" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_lx##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlx" #NTYPE_LETTER "u.v",				\
    /* FUNC_NAME */rvv_lx##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_INDEXED_LOAD)

#define _RVV_ASM_INT_INDEXED_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlxe.v",						\
    /* FUNC_NAME */rvv_lxe_int##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##SEW##_t *,					\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlxe.v",						\
    /* FUNC_NAME */rvv_lxe_uint##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##SEW##_t *,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_ITERATOR (_RVV_ASM_INT_INDEXED_LOAD)

#define _RVV_ASM_FLOAT_INDEXED_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlxe.v",						\
    /* FUNC_NAME */rvv_lxe_float##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const _RVV_F##SEW##_TYPE *,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_FLOAT_ITERATOR (_RVV_ASM_FLOAT_INDEXED_LOAD)

#define _RVV_ASM_INDEXED_STORE(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsx" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_sx##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const int##NSEW##_t *,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsx" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_sx##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const uint##NSEW##_t *,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsux" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_sux##NTYPE_LETTER##_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const int##NSEW##_t *,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsux" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */rvv_sux##NTYPE_LETTER##_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const uint##NSEW##_t *,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_INDEXED_STORE)

#define _RVV_ASM_INT_INDEXED_STORE(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsxe.v",						\
    /* FUNC_NAME */rvv_sxe_int##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const int##SEW##_t *,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsxe.v",						\
    /* FUNC_NAME */rvv_sxe_uint##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const uint##SEW##_t *,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsuxe.v",						\
    /* FUNC_NAME */rvv_suxe_int##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const int##SEW##_t *,					\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsuxe.v",						\
    /* FUNC_NAME */rvv_suxe_uint##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const uint##SEW##_t *,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_ITERATOR (_RVV_ASM_INT_INDEXED_STORE)

#define _RVV_ASM_FLOAT_INDEXED_STORE(SEW, LMUL, MLEN, T)		\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsxe.v",						\
    /* FUNC_NAME */rvv_sxe_float##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const _RVV_F##SEW##_TYPE *,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsuxe.v",						\
    /* FUNC_NAME */rvv_suxe_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */const _RVV_F##SEW##_TYPE *,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_FLOAT_ITERATOR (_RVV_ASM_FLOAT_INDEXED_STORE)

#define _RVV_ASM_FF_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)	\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER "ff.v",				\
    /* FUNC_NAME */rvv_l##NTYPE_LETTER##ff_int##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER "uff.v",				\
    /* FUNC_NAME */rvv_l##NTYPE_LETTER##ff_uint##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_FF_LOAD)

#define _RVV_ASM_INT_E_FF_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vleff.v",						\
    /* FUNC_NAME */rvv_leff_int##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##SEW##_t *,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vleff.v",						\
    /* FUNC_NAME */rvv_leff_uint##SEW##m##LMUL,				\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##SEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_ITERATOR (_RVV_ASM_INT_E_FF_LOAD)

#define _RVV_ASM_FLOAT_E_FF_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vleff.v",						\
    /* FUNC_NAME */rvv_leff_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const _RVV_F##SEW##_TYPE *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_FLOAT_ITERATOR (_RVV_ASM_FLOAT_E_FF_LOAD)

/* Template function for binary integer vector-scalar operation with immediate
   variant.  */
#define _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T,	\
	 					  OP, OPU, IMM_CHK)	\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OP ".vi",					\
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
  _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T, OP, OP,\
		 			    _RVV_ASM_INT_SIMM_CHK)	\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OP)

/* Template function for binary integer vector-vector, vector-scalar and
   vector-unsigned-immediate operation.  */
#define _RVV_ASM_INT_BIN_OP_WITH_UIMM_VER(SEW, LMUL, MLEN, T, OP)	\
  _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T, OP, OP,	\
		 			    _RVV_ASM_INT_UIMM_CHK)	\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OP)

/* Template function for binary integer vector-vector, vector-scalar and
   vector-signed-immediate operation.  */
#define _RVV_ASM_INT_BIN_OP_OPU_WITH_IMM_VER(SEW, LMUL, MLEN, T, OP, OPU)\
  _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T, OP, OPU,\
					    _RVV_ASM_INT_SIMM_CHK)	\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OPU)


_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP, sub)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK, rsub, rsub,
		       _RVV_ASM_INT_SIMM_CHK)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_IMM_VER, and)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_IMM_VER,  or)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_IMM_VER, xor)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, sll)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, sra)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, srl)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, min, minu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, max, maxu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, div, divu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, rem, remu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, mulh, mulhu)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU_WITH_IMM_VER, sadd, saddu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, ssub, ssubu)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU_WITH_IMM_VER, aadd, aaddu)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_OPU, asub, asubu)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP, smul)

_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, ssra)
_RVV_INT_ITERATOR_ARG (_RVV_ASM_INT_BIN_OP_WITH_UIMM_VER, ssrl)

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

/* Template function for widening integer vector-vector multiply-add
   operation.  */
#define _RVV_ASM_INT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
			     ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U)	\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #ASM_OP ".vv",					\
    /* FUNC_NAME */rvv_##FUNC_NAME_OP##_vv_##OP0U##int##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_##OP0U##int##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_##OP1U##int##SEW##m##LMUL##_t,			\
    /* OP2_TYPE */rvv_##OP2U##int##SEW##m##LMUL##_t,			\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening integer vector-scalar multiply-add
   operation.  */
#define _RVV_ASM_INT_WMAC_VX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
			     ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U)	\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #ASM_OP ".vx",					\
    /* FUNC_NAME */rvv_##FUNC_NAME_OP##_vs_##OP0U##int##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_##OP0U##int##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */OP1U##int##SEW##_t,					\
    /* OP2_TYPE */rvv_##OP2U##int##SEW##m##LMUL##_t,			\
    /* OP1_CONSTRANT */"r",						\
    /* OP2_CONSTRANT */"vr")						\

#define _RVV_ASM_INT_WMAC(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,		\
			  ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U)	\
  _RVV_ASM_INT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,		\
		       ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U)		\
  _RVV_ASM_INT_WMAC_VX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,		\
		       ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U)

_RVV_WINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC,      wmacc,   wmacc,  ,  ,  )
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC,     wmaccu,   wmacc, u, u, u)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC,    wmaccsu, wmaccsu,  ,  , u)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC_VX, wmaccus, wmaccus,  , u,  )

_RVV_QINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC,      qmacc,   qmacc,  ,  ,  )
_RVV_QINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC,     qmaccu,   qmacc, u, u, u)
_RVV_QINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC,    qmaccsu, qmaccsu,  ,  , u)
_RVV_QINT_ITERATOR_ARG (_RVV_ASM_INT_WMAC_VX, qmaccus, qmaccus,  , u,  )

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
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_VV, add, addu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_VV, mul, mulu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_VX, mul, mulu)

/* Template function for vwmulsu.v[v|x] instructions.  */
#define _RVV_ASM_WMULSU(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vv",						\
    /* FUNC_NAME */rvv_w##OP##_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vv",						\
    /* FUNC_NAME */rvv_w##OP##_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vx",						\
    /* FUNC_NAME */rvv_w##OP##_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vx",						\
    /* FUNC_NAME */rvv_w##OP##_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WMULSU, mulsu)

/* Template function for widening integer vector-vector operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WINT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".wv",						\
    /* FUNC_NAME */rvv_w##OP##_wv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".wv",					\
    /* FUNC_NAME */rvv_w##OPU##_wv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening integer vector-scalar operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WINT_BIN_OP_WX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".wx",						\
    /* FUNC_NAME */rvv_w##OP##_ws_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".wx",					\
    /* FUNC_NAME */rvv_w##OPU##_ws_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_WV, sub, subu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_WX, sub, subu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_WV, add, addu)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_WINT_BIN_OP_WX, add, addu)

/* Template function for narrowing integer vector-vector operation.  */
#define _RVV_ASM_NINT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".wv",						\
    /* FUNC_NAME */rvv_##OP##_wv_int##WSEW##m##WLMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".wv",						\
    /* FUNC_NAME */rvv_##OP##_wv_uint##WSEW##m##WLMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for narrowing integer vector-scalar operation.  */
#define _RVV_ASM_NINT_BIN_OP_WX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".wx",						\
    /* FUNC_NAME */rvv_##OP##_ws_int##WSEW##m##WLMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".wx",						\
    /* FUNC_NAME */rvv_##OP##_ws_uint##WSEW##m##WLMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for narrowing integer vector-scalar operation.  */
#define _RVV_ASM_NINT_BIN_OP_WXI(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".wx",						\
    /* IMM_ASM_OP */"v" #OP ".wi",					\
    /* FUNC_NAME */rvv_##OP##_ws_int##WSEW##m##WLMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */_RVV_ASM_INT_UIMM_CHK)					\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".wx",						\
    /* IMM_ASM_OP */"v" #OPU ".wi",					\
    /* FUNC_NAME */rvv_##OP##_ws_uint##WSEW##m##WLMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */_RVV_ASM_INT_UIMM_CHK)

#define _RVV_ASM_NINT_BIN_OP(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
			     OP, OPU)					\
  _RVV_ASM_NINT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, OPU)	\
  _RVV_ASM_NINT_BIN_OP_WXI(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, OPU)

_RVV_WINT_ITERATOR_ARG (_RVV_ASM_NINT_BIN_OP, nsrl, nsrl)
_RVV_WINT_ITERATOR_ARG (_RVV_ASM_NINT_BIN_OP, nsra, nsra)

_RVV_WINT_ITERATOR_ARG (_RVV_ASM_NINT_BIN_OP, nclip, nclipu)

#define _RVV_ASM_MERGE_INT_OP(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vvm",						\
    /* FUNC_NAME */rvv_merge_vv_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MERGE_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vxm",						\
    /* IMM_ASM_OP */"vmerge.vim",					\
    /* FUNC_NAME */rvv_merge_vs_int##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vvm",						\
    /* FUNC_NAME */rvv_merge_vv_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MERGE_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vxm",						\
    /* IMM_ASM_OP */"vmerge.vim",					\
    /* FUNC_NAME */rvv_merge_vs_uint##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

_RVV_INT_ITERATOR (_RVV_ASM_MERGE_INT_OP)

#define _RVV_FCLASS(SEW, LMUL, MLEN, T)					\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfclass.v",						\
    /* FUNC_NAME */rvv_class_v_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")

_RVV_FLOAT_ITERATOR (_RVV_FCLASS)

#define _RVV_FCVT(SEW, LMUL, MLEN, T)					\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.xu.f.v",						\
    /* FUNC_NAME */rvv_cvt_f##SEW##toui##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.x.f.v",						\
    /* FUNC_NAME */rvv_cvt_f##SEW##toi##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.f.xu.v",						\
    /* FUNC_NAME */rvv_cvt_ui##SEW##tof##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.f.x.v",						\
    /* FUNC_NAME */rvv_cvt_i##SEW##tof##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")

_RVV_FLOAT_ITERATOR (_RVV_FCVT)

#define _RVV_FWCVT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT)			\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.xu.f.v",					\
    /* FUNC_NAME */rvv_wcvt_f##SEW##toui##WSEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.x.f.v",						\
    /* FUNC_NAME */rvv_wcvt_f##SEW##toi##WSEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.f.xu.v",					\
    /* FUNC_NAME */rvv_wcvt_ui##SEW##tof##WSEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.f.x.v",						\
    /* FUNC_NAME */rvv_wcvt_i##SEW##tof##WSEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.f.f.v",						\
    /* FUNC_NAME */rvv_wcvt_f##SEW##tof##WSEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")

_RVV_WFLOAT_ITERATOR (_RVV_FWCVT)

#define _RVV_FNCVT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT)			\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.xu.f.w",					\
    /* FUNC_NAME */rvv_ncvt_f##WSEW##toui##SEW##_w_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.x.f.w",						\
    /* FUNC_NAME */rvv_ncvt_f##WSEW##toi##SEW##_w_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.f.xu.w",					\
    /* FUNC_NAME */rvv_ncvt_ui##WSEW##tof##SEW##_w_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_uint##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.f.x.w",						\
    /* FUNC_NAME */rvv_ncvt_i##WSEW##tof##SEW##_w_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_int##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.f.f.w",						\
    /* FUNC_NAME */rvv_ncvt_f##WSEW##tof##SEW##_w_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.rod.f.f.w",					\
    /* FUNC_NAME */rvv_ncvt_rod_f##WSEW##tof##SEW##_w_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##WSEW##m##WLMUL##_t,			\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")

_RVV_WFLOAT_ITERATOR (_RVV_FNCVT)

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
_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_WFLOAT_BIN_OP_VV_VF, wmul)

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

#define _RVV_ASM_MERGE_FLOAT_OP(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vvm",						\
    /* FUNC_NAME */rvv_merge_vv_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfmerge.vfm",						\
    /* FUNC_NAME */rvv_merge_vs_float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

_RVV_FLOAT_ITERATOR (_RVV_ASM_MERGE_FLOAT_OP)

/* Template function for widening floating point vector-vector multiply-add
   operation.  */
#define _RVV_ASM_FLOAT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */rvv_##OP##_vv_##float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_##float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */rvv_##float##SEW##m##LMUL##_t,			\
    /* OP2_TYPE */rvv_##float##SEW##m##LMUL##_t,			\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening floating point vector-scalar multiply-add
   operation.  */
#define _RVV_ASM_FLOAT_WMAC_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */rvv_##OP##_vs_##float##SEW##m##LMUL,			\
    /* MASK_TYPE */rvv_bool##MLEN##_t,					\
    /* OP0_TYPE */rvv_##float##WSEW##m##WLMUL##_t,			\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP2_TYPE */rvv_##float##SEW##m##LMUL##_t,			\
    /* OP1_CONSTRANT */"f",						\
    /* OP2_CONSTRANT */"vr")						\


#define _RVV_ASM_FLOAT_WMAC(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_FLOAT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_FLOAT_WMAC_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)

_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_WMAC, wmacc)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_WMAC, wnmacc)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_WMAC, wmsac)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_ASM_FLOAT_WMAC, wnmsac)

/* Integer and Floating-Point Scalar Move Functions.  */

#define _RVV_MV_XS_SX(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_UNMASKED_UNARY_OP_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.x.s",						\
    /* FUNC_NAME */rvv_mv_v_int##SEW##m##LMUL,				\
    /* OP0_TYPE */int##SEW##_t,						\
    /* OP1_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=r",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNMASKED_UNARY_OP_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.x.s",						\
    /* FUNC_NAME */rvv_mv_v_uint##SEW##m##LMUL,				\
    /* OP0_TYPE */uint##SEW##_t,					\
    /* OP1_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=r",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_MV_VS_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.s.x",						\
    /* FUNC_NAME */rvv_mv_s_int##SEW##m##LMUL,				\
    /* OP0_TYPE */rvv_int##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"r")						\
  _RVV_ASM_MV_VS_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.s.x",						\
    /* FUNC_NAME */rvv_mv_s_uint##SEW##m##LMUL,				\
    /* OP0_TYPE */rvv_uint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"r")

_RVV_INT_ITERATOR (_RVV_MV_XS_SX)

#define _RVV_MV_FS_SF(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_UNMASKED_UNARY_OP_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vfmv.f.s",						\
    /* FUNC_NAME */rvv_mv_v_float##SEW##m##LMUL,			\
    /* OP0_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP1_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=f",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_MV_VS_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfmv.s.f",						\
    /* FUNC_NAME */rvv_mv_s_float##SEW##m##LMUL,			\
    /* OP0_TYPE */rvv_float##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"f")

_RVV_FLOAT_ITERATOR (_RVV_MV_FS_SF)

#endif
#endif
