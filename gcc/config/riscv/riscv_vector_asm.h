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

/* Predicate function for signed immediate value.  */
#define _RVV_ASM_INT_SIMM_CHK(SEW, IMM) \
  (__builtin_constant_p (b) &&		\
   (((int##SEW##_t)IMM) < 15) && (((int##SEW##_t)IMM) >= -16))
/* Predicate function for unsigned immediate value.  */
#define _RVV_ASM_INT_UIMM_CHK(SEW, IMM) \
  (__builtin_constant_p (b) && (((IMM) >= 0) && ((IMM) <= 31)))

#define _RVV_SETVTYPE(SEW, LMUL)			\
  register vint##SEW##m##LMUL##_t vtype asm("vtype");	\
  __builtin_riscv_vsetvtype##SEW##m##LMUL ();

/* Unmasked inline asm template for store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STORE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				    OP0_CONSTRANT,		\
				    OP1_CONSTRANT)		\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ volatile (ASM_OP " %1, %0"				\
		      : OP0_CONSTRANT (*addr)			\
		      : OP1_CONSTRANT (a), "vt"(vtype)		\
		      : "memory")

/* Masked inline asm template for store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STORE_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
					   OP0_CONSTRANT,		\
					   OP1_CONSTRANT)		\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ volatile (ASM_OP " %1, %0, %2.t"				\
		      : OP0_CONSTRANT (*addr)				\
		      : OP1_CONSTRANT (a),				\
		        "vm" (mask), "vt"(vtype)			\
		      : "memory")

/* Unmasked inline asm template for strided load instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_LOAD_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					   OP0_CONSTRANT,	\
					   OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ volatile (ASM_OP " %0, %1, %2"			\
		      : OP0_CONSTRANT (rv)			\
		      : OP1_CONSTRANT (*a),			\
			"r" (stride), "vt"(vtype))

/* Masked inline asm template for store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_LOAD_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						  OP0_CONSTRANT,	\
						  OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ volatile (ASM_OP " %0, %1, %2, %3.t"			\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (*a),				\
		        "r" (stride),					\
		        "vm" (mask), "0"(maskedoff), "vt"(vtype)	\
		      : "memory")

/* Unmasked inline asm template for strided store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_STORE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
					    OP0_CONSTRANT,		\
					    OP1_CONSTRANT)		\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ volatile (ASM_OP " %1, %0, %2"				\
		      : OP0_CONSTRANT (*addr)				\
		      : OP1_CONSTRANT (a), "r"(stride), "vt"(vtype)	\
		      : "memory")

/* Masked inline asm template for strided store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_STRIDED_STORE_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						   OP0_CONSTRANT,	\
						   OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ volatile (ASM_OP " %1, %0, %2, %3.t"			\
		      : OP0_CONSTRANT (*addr)				\
		      : OP1_CONSTRANT (a), "r"(stride),			\
		        "vm" (mask), "vt"(vtype)			\
		      : "memory")

/* Unmasked inline asm template for indexed load instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_LOAD_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					   OP0_CONSTRANT,	\
					   OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ volatile (ASM_OP " %0, %1, %2"			\
		      : OP0_CONSTRANT (rv)			\
		      : OP1_CONSTRANT (*a),			\
			"vr" (index), "vt"(vtype)		\
		      : "memory")

/* Masked inline asm template for indexed load instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_LOAD_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						  OP0_CONSTRANT,	\
						  OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ volatile (ASM_OP " %0, %1, %2, %3.t"			\
		      : OP0_CONSTRANT (rv)				\
		      : OP1_CONSTRANT (*a),				\
		        "vr" (index),					\
		        "vm" (mask), "0"(maskedoff), "vt"(vtype)	\
		      : "memory")

/* Unmasked inline asm template for indexed store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_STORE_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					    OP0_CONSTRANT,	\
					    OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ volatile (ASM_OP " %1, %0, %2"			\
		      : OP0_CONSTRANT (*addr)			\
		      : OP1_CONSTRANT (a),			\
			"vr" (index), "vt"(vtype)		\
		      : "memory")

/* Masked inline asm template for indexed store instructions.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_INDEXED_STORE_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
						   OP0_CONSTRANT,	\
						   OP1_CONSTRANT)	\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ volatile (ASM_OP " %1, %0, %2, %3.t"			\
		      : OP0_CONSTRANT (*addr)				\
		      : OP1_CONSTRANT (a),				\
		        "vr" (index),					\
		        "vm" (mask), "vt"(vtype)			\
		      : "memory")

/* Unmasked inline asm template for AMO instructions with WD=1.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...  */
#define _RVV_ASM_AMO_WD_ASM_TEMPLATE(SEW, LMUL, ASM_OP)	\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ volatile (ASM_OP " %1, %0, %2, %3"			\
		      : "+A" (*addr), "=vr"(rv)			\
		      : "vr" (a), "1"(b), "vt"(vtype)		\
		      : "memory")

/* Masked inline asm template for AMO instructions with WD=1.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...  */
#define _RVV_ASM_AMO_WD_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP)		\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ volatile (ASM_OP " %1, %0, %2, %3, %4.t"			\
		      : "+A" (*addr), "=vr"(rv)				\
		      : "vr" (a), "1"(b), "vm"(mask), "vt"(vtype)	\
		      : "memory")

/* Inline asm template for vmv.v.x/vfmv.v.f.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_MV_VS_ASM_TEMPLATE(SEW, LMUL, ASM_OP,			\
				    OP0_CONSTRANT,			\
				    OP1_CONSTRANT)			\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %2"						\
	     : OP0_CONSTRANT (rv)					\
	     : "0"(a), OP1_CONSTRANT (b), "vt"(vtype));

/* Inline asm template for splat.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_SPLAT_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				    OP0_CONSTRANT,		\
				    OP1_CONSTRANT)		\
    _RVV_SETVTYPE(SEW, LMUL);					\
    __asm__ (ASM_OP " %0, %1"					\
	     : OP0_CONSTRANT (rv)				\
	     : OP1_CONSTRANT (a), "vt"(vtype));

/* Unmasked inline asm template for load operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_LOAD_OP_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				       OP0_CONSTRANT,			\
				       OP1_CONSTRANT)			\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1"						\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (*a), "vt"(vtype)				\
	     : "memory");

/* Unmasked inline asm template for unary operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNARY_OP_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				       OP0_CONSTRANT,			\
				       OP1_CONSTRANT)			\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1"						\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a), "vt"(vtype));				\

/* Unmasked inline asm template for unary operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_WUNARY_OP_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				        OP0_CONSTRANT,			\
				        OP1_CONSTRANT)			\
    __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
	     ASM_OP " %0, %1"						\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a)					\
	     : "vtype");


/* Inline asm template for scalar move operation.
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_SCALAR_MOVE_ASM_TEMPLATE(ASM_OP,		\
					  OP0_CONSTRANT,	\
					  OP1_CONSTRANT)	\
    __asm__ (ASM_OP " %0, %1"					\
	     : OP0_CONSTRANT (rv)				\
	     : OP1_CONSTRANT (a));

/* Masked inline asm template for load operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_LOAD_OP_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
					      OP0_CONSTRANT,		\
					      OP1_CONSTRANT)		\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1, %2.t"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (*a),					\
	       "vm" (mask), "0" (maskedoff), "vt"(vtype))

/* Masked inline asm template for unary operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNARY_OP_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					      OP0_CONSTRANT,		\
					      OP1_CONSTRANT)		\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1, %2.t"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a),					\
	       "vm" (mask), "0" (maskedoff), "vt"(vtype))

/* Masked inline asm template for widening unary operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_WUNARY_OP_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,	\
					       OP0_CONSTRANT,		\
					       OP1_CONSTRANT)		\
    __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
             ASM_OP " %0, %1, %2.t"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a),					\
	       "vm" (mask), "0" (maskedoff)				\
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
  {									\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1, %2"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a), OP2_CONSTRANT (b), "vt"(vtype));	\
  }

/* Unmasked inline asm template for widening operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_WBIN_OP_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
				     OP0_CONSTRANT,			\
				     OP1_CONSTRANT,			\
				     OP2_CONSTRANT)			\
  {									\
    __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
	     ASM_OP " %0, %1, %2"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a), OP2_CONSTRANT (b)			\
	     : "vtype");						\
  }


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
  {									\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1, %2, %3.t"					\
	     : OP0_CONSTRANT (rv)				\
	     : OP1_CONSTRANT (a), OP2_CONSTRANT (b),		\
	       "vm" (mask), "0" (maskedoff), "vt"(vtype));	\
  }

/* Masked inline asm template for widening operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_WBIN_OP_MASKED_ASM_TEMPLATE(SEW, LMUL, ASM_OP,		\
					     OP0_CONSTRANT,		\
					     OP1_CONSTRANT,		\
					     OP2_CONSTRANT)		\
  {									\
    __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
	     ASM_OP " %0, %1, %2, %3.t"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a), OP2_CONSTRANT (b),			\
	       "vm" (mask), "0" (maskedoff)				\
	     : "vtype");						\
  }


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
  {									\
    _RVV_SETVTYPE(SEW, LMUL);						\
    __asm__ (ASM_OP " %0, %1,%2, %3"					\
	     : OP0_CONSTRANT (rv)					\
	     : OP1_CONSTRANT (a), OP2_CONSTRANT (b),			\
	       "vm" (mask), "vt"(vtype));				\
  }

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

/* AMO with WD intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.  */
#define _RVV_ASM_AMO_WD_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				 MASK_TYPE,				\
				 OP0_TYPE, OP1_TYPE, OP2_TYPE)		\
__extension__ extern __inline OP2_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP0_TYPE addr, OP1_TYPE a, OP2_TYPE b)			\
{									\
  OP2_TYPE rv;								\
  _RVV_ASM_AMO_WD_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP);							\
  return rv;								\
}									\
__extension__ extern __inline OP2_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE addr, OP1_TYPE a, OP2_TYPE b)\
{									\
  OP2_TYPE rv;								\
  _RVV_ASM_AMO_WD_MASKED_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP);							\
  return rv;								\
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

/* Intrinsic function template for splat.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_SPLAT_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				OP0_TYPE, OP1_TYPE,			\
				OP0_CONSTRANT,				\
				OP1_CONSTRANT)				\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a)							\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_SPLAT_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}


/* Scalar move operation intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_SCALAR_MOVE_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,\
				      OP0_TYPE, OP1_TYPE,		\
				      OP0_CONSTRANT,		\
				      OP1_CONSTRANT)		\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a)							\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_SCALAR_MOVE_ASM_TEMPLATE(					\
    ASM_OP,								\
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

/* Unmasked unary intrinsic function template for widening operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_UNMASKED_WUNARY_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,\
					     OP0_TYPE, OP1_TYPE,	\
					     OP0_CONSTRANT,		\
					     OP1_CONSTRANT)		\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a)							\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_WUNARY_OP_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}


/* LOAD intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_LOAD_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				  MASK_TYPE,				\
				  OP0_TYPE, OP1_TYPE,	 		\
				  OP0_CONSTRANT,			\
				  OP1_CONSTRANT)			\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a)							\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_LOAD_OP_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff,			\
		  OP1_TYPE a)						\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_LOAD_OP_MASKED_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT); 					\
  return rv;								\
}

/* UNARY intrinsic function template for widening operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.  */
#define _RVV_ASM_WUNARY_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
				    MASK_TYPE,				\
				    OP0_TYPE, OP1_TYPE,	 		\
				    OP0_CONSTRANT,			\
				    OP1_CONSTRANT)			\
  _RVV_ASM_UNMASKED_WUNARY_OP_TEMPLATE (SEW, LMUL, ASM_OP, FUNC_NAME,	\
				        OP0_TYPE, OP1_TYPE,		\
				        OP0_CONSTRANT, OP1_CONSTRANT)	\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff,			\
		  OP1_TYPE a)						\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_WUNARY_OP_MASKED_ASM_TEMPLATE(				\
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

/* Unmasked binary intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP2_TYPE: Type of operand 2.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_UNMASKED_BIN_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
					  OP0_TYPE, OP1_TYPE, OP2_TYPE, \
					  OP0_CONSTRANT,		\
					  OP1_CONSTRANT,		\
					  OP2_CONSTRANT)		\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a, OP2_TYPE b)					\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_BIN_OP_ASM_TEMPLATE(						\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}

/* Unmasked binary intrinsic function template for widening operation.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   ASM_OP: string for opcode, e.g. vadd.vv, vsub.vx, vwadd.wv...
   FUNC_NAME: function name.
   OP0_TYPE: Type of operand 0.
   OP1_TYPE: Type of operand 1.
   OP2_TYPE: Type of operand 2.
   OP0_CONSTRAINT: string for the constraint of operand 0.
   OP1_CONSTRAINT: string for the constraint of operand 1.
   OP2_CONSTRAINT: string for the constraint of operand 2.  */
#define _RVV_ASM_UNMASKED_WBIN_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,\
					   OP0_TYPE, OP1_TYPE, OP2_TYPE, \
					   OP0_CONSTRANT,		\
					   OP1_CONSTRANT,		\
					   OP2_CONSTRANT)		\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (OP1_TYPE a, OP2_TYPE b)					\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_WBIN_OP_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
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
  _RVV_ASM_UNMASKED_BIN_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
				    OP0_TYPE, OP1_TYPE, OP2_TYPE,	\
				    OP0_CONSTRANT,			\
				    OP1_CONSTRANT,			\
				    OP2_CONSTRANT)			\
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

/* Binary intrinsic function template for widening operation.
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
#define _RVV_ASM_WBIN_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,		\
				 MASK_TYPE,				\
				 OP0_TYPE, OP1_TYPE, OP2_TYPE, 		\
				 OP0_CONSTRANT,				\
				 OP1_CONSTRANT,				\
				 OP2_CONSTRANT)				\
  _RVV_ASM_UNMASKED_WBIN_OP_TEMPLATE(SEW, LMUL, ASM_OP, FUNC_NAME,	\
				     OP0_TYPE, OP1_TYPE, OP2_TYPE,	\
				     OP0_CONSTRANT,			\
				     OP1_CONSTRANT,			\
				     OP2_CONSTRANT)			\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff,			\
		  OP1_TYPE a, OP2_TYPE b)				\
{									\
  OP0_TYPE rv;								\
  _RVV_ASM_WBIN_OP_MASKED_ASM_TEMPLATE(					\
    SEW, LMUL, ASM_OP,							\
    OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT); 			\
  return rv;								\
}

/* Binary intrinsic function template for widening operation,
   but support immediate version.
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
#define _RVV_ASM_WBIN_OP_IMM_TEMPLATE(SEW, LMUL, ASM_OP, IMM_ASM_OP,	\
				      FUNC_NAME,	MASK_TYPE,	\
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
    _RVV_ASM_WBIN_OP_ASM_TEMPLATE(					\
      SEW, LMUL, IMM_ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, "i")				\
  else									\
    _RVV_ASM_WBIN_OP_ASM_TEMPLATE(					\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT) 			\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask, OP0_TYPE maskedoff, 			\
		  OP1_TYPE a, OP2_TYPE b)				\
{									\
  OP0_TYPE rv;								\
  if (IMM_CHK(SEW, b))							\
    _RVV_ASM_WBIN_OP_MASKED_ASM_TEMPLATE(				\
      SEW, LMUL, IMM_ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, "i")				\
  else									\
    _RVV_ASM_WBIN_OP_MASKED_ASM_TEMPLATE(				\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT)			\
  return rv;								\
}									\


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
      OP0_CONSTRANT, OP1_CONSTRANT, "i")				\
  else									\
    _RVV_ASM_BIN_OP_ASM_TEMPLATE(					\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT) 			\
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
      OP0_CONSTRANT, OP1_CONSTRANT, "i")				\
  else									\
    _RVV_ASM_BIN_OP_MASKED_ASM_TEMPLATE(				\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT)			\
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
  __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
	   ASM_OP " %0, %1, %2"						\
	   : "=vr" (rv)							\
	   : OP1_CONSTRANT (a), OP2_CONSTRANT (b),			\
	     "0" (op0)							\
	   : "vtype");							\
  return rv;								\
}									\
__extension__ extern __inline OP0_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME##_mask (MASK_TYPE mask,					\
		  OP0_TYPE op0, OP1_TYPE a, OP2_TYPE b)			\
{									\
  __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
	   ASM_OP " %0, %1, %2, %3.t"					\
	   : "+vr" (op0)						\
	   : OP1_CONSTRANT (a), OP2_CONSTRANT (b),			\
	     "vm" (mask)						\
	   : "vtype");							\
  return op0;								\
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
      OP0_CONSTRANT, OP1_CONSTRANT, "i")				\
  else									\
    _RVV_ASM_MERGE_ASM_TEMPLATE(					\
      SEW, LMUL, ASM_OP,						\
      OP0_CONSTRANT, OP1_CONSTRANT, OP2_CONSTRANT) 			\
  return rv;								\
}									\

#define _RVV_ASM_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)	\
  _RVV_ASM_LOAD_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vload##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_LOAD_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER "u.v",				\
    /* FUNC_NAME */vload##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_LOAD)

#define _RVV_ASM_STORE(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)	\
  _RVV_ASM_STORE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vs" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstore##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_STORE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vs" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstore##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##NSEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_STORE)

#define _RVV_ASM_STRIDED_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_STRIDED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vls" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vloads##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_STRIDED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vls" #NTYPE_LETTER "u.v",				\
    /* FUNC_NAME */vloads##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_STRIDED_LOAD)

#define _RVV_ASM_STRIDED_STORE(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_STRIDED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vss" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstores##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_STRIDED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vss" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstores##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##NSEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_STRIDED_STORE)

#define _RVV_ASM_INDEXED_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlx" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vloadx##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlx" #NTYPE_LETTER "u.v",				\
    /* FUNC_NAME */vloadx##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_INDEXED_LOAD)

#define _RVV_ASM_INT_INDEXED_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlxe.v",						\
    /* FUNC_NAME */vloadx_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##SEW##_t *,					\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlxe.v",						\
    /* FUNC_NAME */vloadx_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##SEW##_t *,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_ITERATOR (_RVV_ASM_INT_INDEXED_LOAD)

#define _RVV_ASM_FLOAT_INDEXED_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_INDEXED_LOAD_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vlxe.v",						\
    /* FUNC_NAME */vloadx_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const _RVV_F##SEW##_TYPE *,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_FLOAT_ITERATOR (_RVV_ASM_FLOAT_INDEXED_LOAD)

#define _RVV_ASM_INDEXED_STORE(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsx" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstorex##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsx" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstorex##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##NSEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsux" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstoreux##NTYPE_LETTER##_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsux" #NTYPE_LETTER ".v",				\
    /* FUNC_NAME */vstoreux##NTYPE_LETTER##_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##NSEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_INDEXED_STORE)

#define _RVV_ASM_INT_INDEXED_STORE(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsxe.v",						\
    /* FUNC_NAME */vstorex_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##SEW##_t *,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsxe.v",						\
    /* FUNC_NAME */vstorex_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##SEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsuxe.v",						\
    /* FUNC_NAME */vstoreux_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##SEW##_t *,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsuxe.v",						\
    /* FUNC_NAME */vstoreux_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##SEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_INT_ITERATOR (_RVV_ASM_INT_INDEXED_STORE)

#define _RVV_ASM_FLOAT_INDEXED_STORE(SEW, LMUL, MLEN, T)		\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsxe.v",						\
    /* FUNC_NAME */vstorex_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */_RVV_F##SEW##_TYPE *,					\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_INDEXED_STORE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vsuxe.v",						\
    /* FUNC_NAME */vstoreux_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */_RVV_F##SEW##_TYPE *,					\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* INDEX_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"+A",						\
    /* OP1_CONSTRANT */"vr")

_RVV_FLOAT_ITERATOR (_RVV_ASM_FLOAT_INDEXED_STORE)

#define _RVV_ASM_FF_LOAD(SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)	\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER "ff.v",				\
    /* FUNC_NAME */vload##NTYPE_LETTER##ff_i##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vl" #NTYPE_LETTER "uff.v",				\
    /* FUNC_NAME */vload##NTYPE_LETTER##ff_u##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##NSEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_LOAD_ITERATOR (_RVV_ASM_FF_LOAD)

#define _RVV_ASM_INT_E_FF_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vleff.v",						\
    /* FUNC_NAME */vloadff_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const int##SEW##_t *,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vleff.v",						\
    /* FUNC_NAME */vloadff_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */const uint##SEW##_t *,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"A")

_RVV_INT_ITERATOR (_RVV_ASM_INT_E_FF_LOAD)

#define _RVV_ASM_FLOAT_E_FF_LOAD(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vleff.v",						\
    /* FUNC_NAME */vloadff_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
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
    /* FUNC_NAME */v##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
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
    /* FUNC_NAME */v##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
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
    /* FUNC_NAME */v##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".vx",						\
    /* FUNC_NAME */v##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for slide1[down|up] vector-scalar operation.  */
#define _RVV_ASM_SLIDE1_OP_SCALAR(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */v##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".vx",						\
    /* FUNC_NAME */v##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for fslide1[down|up] vector-scalar operation.  */
#define _RVV_ASM_FSLIDE1_OP_SCALAR(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */v##OP##_vs_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

/* Template function for binary integer vector-vector operation.  */
#define _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OPU)	\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".vv",						\
    /* FUNC_NAME */v##OP##_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
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

/* Template function for shift operation.  */
#define _RVV_ASM_INT_SHIFT_OP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OP ".vi",					\
    /* FUNC_NAME */v##OP##_vs_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint8_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)						\
  /* vopu.vs */								\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OP ".vi",					\
    /* FUNC_NAME */v##OP##_vs_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint8_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for binary integer vector-vector, vector-scalar and
   vector-signed-immediate operation.  */
#define _RVV_ASM_INT_BIN_OP_OPU_WITH_IMM_VER(SEW, LMUL, MLEN, T, OP, OPU)\
  _RVV_ASM_INT_BIN_OP_SCALAR_WITH_IMM_CHECK(SEW, LMUL, MLEN, T, OP, OPU,\
					    _RVV_ASM_INT_SIMM_CHK)	\
  _RVV_ASM_INT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP, OPU)

#define _RVV_ASM_INT_NOT(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vnot.v",						\
    /* FUNC_NAME */vnot_v_i##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vnot.v",						\
    /* FUNC_NAME */vnot_v_u##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")

/* Template function for vmulhsu.vv and vmulhsu.vx.  */
#define _RVV_ASM_MULHSU_OP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */v##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */v##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for single-width integer vector-vector multiply-add
   operation.  */
#define _RVV_ASM_INT_MAC_VV(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for single-width integer vector-scalar multiply-add
   operation.  */
#define _RVV_ASM_INT_MAC_VX(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */v##OP##_sv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */int##SEW##_t,						\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"r",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* FUNC_NAME */v##OP##_sv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */uint##SEW##_t,					\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"r",						\
    /* OP2_CONSTRANT */"vr")

#define _RVV_ASM_INT_MAC(SEW, LMUL, MLEN, T, OP)	\
  _RVV_ASM_INT_MAC_VV(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_INT_MAC_VX(SEW, LMUL, MLEN, T, OP)

/* Template function for widening integer vector-vector multiply-add
   operation.  */
#define _RVV_ASM_INT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
			     ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U,	\
			     OP0T, OP1T, OP2T)				\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #ASM_OP ".vv",					\
    /* FUNC_NAME */v##FUNC_NAME_OP##_vv_##OP0U##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */v##OP0T##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */v##OP1T##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */v##OP2T##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening integer vector-scalar multiply-add
   operation.  */
#define _RVV_ASM_INT_WMAC_VX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
			     ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U,	\
			     OP0T, OP1T, OP2T)				\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #ASM_OP ".vx",					\
    /* FUNC_NAME */v##FUNC_NAME_OP##_sv_##OP0U##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */v##OP0T##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */OP1T##SEW##_t,					\
    /* OP2_TYPE */v##OP2T##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"r",						\
    /* OP2_CONSTRANT */"vr")						\

#define _RVV_ASM_INT_WMAC(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,		\
			  ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U,	\
			  OP0T, OP1T, OP2T)				\
  _RVV_ASM_INT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,		\
		       ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U,		\
		       OP0T, OP1T, OP2T)				\
  _RVV_ASM_INT_WMAC_VX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,		\
		       ASM_OP, FUNC_NAME_OP, OP0U, OP1U, OP2U,		\
		       OP0T, OP1T, OP2T)				\

/* Template function for integer vector-vector comparison operation.  */
#define _RVV_ASM_INT_CMP_VV(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OP ".vv",					\
    /* FUNC_NAME */vset##OP##_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OPU ".vv",					\
    /* FUNC_NAME */vset##OP##_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for integer vector-scalar comparison operation.  */
#define _RVV_ASM_INT_CMP_VX(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OP ".vx",					\
    /* FUNC_NAME */vset##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OPU ".vx",					\
    /* FUNC_NAME */vset##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for integer vector-scalar or vector-immediate
   comparison operation.  */
#define _RVV_ASM_INT_CMP_VXI(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OP ".vx",					\
    /* IMM_ASM_OP */"vms" #OP ".vi",					\
    /* FUNC_NAME */vset##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */ _RVV_ASM_INT_SIMM_CHK)				\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vms" #OPU ".vx",					\
    /* IMM_ASM_OP */"vms" #OPU ".vi",					\
    /* FUNC_NAME */vset##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
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

/* Template function for widening integer vector-vector operation.  */
#define _RVV_ASM_WINT_BIN_OP_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vv",						\
    /* FUNC_NAME */vw##OP##_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".vv",					\
    /* FUNC_NAME */vw##OP##_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening integer vector-scalar operation.  */
#define _RVV_ASM_WINT_BIN_OP_VX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vx",						\
    /* FUNC_NAME */vw##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".vx",					\
    /* FUNC_NAME */vw##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

#define _RVV_ASM_WCVT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT)		\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vwcvt.x.x.v",						\
    /* FUNC_NAME */vcvt_i##WSEW##_i##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vwcvtu.x.x.v",						\
    /* FUNC_NAME */vcvt_u##WSEW##_u##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")

/* Template function for vwmulsu.v[v|x] instructions.  */
#define _RVV_ASM_WMULSU(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vv",						\
    /* FUNC_NAME */vw##OP##_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vv",						\
    /* FUNC_NAME */vw##OP##_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vx",						\
    /* FUNC_NAME */vw##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".vx",						\
    /* FUNC_NAME */vw##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for widening integer vector-vector operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WINT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".wv",						\
    /* FUNC_NAME */vw##OP##_wv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".wv",					\
    /* FUNC_NAME */vw##OP##_wv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening integer vector-scalar operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WINT_BIN_OP_WX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OP ".wx",						\
    /* FUNC_NAME */vw##OP##_ws_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vw" #OPU ".wx",					\
    /* FUNC_NAME */vw##OP##_ws_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for narrowing integer vector-vector operation.  */
#define _RVV_ASM_NINT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".wv",						\
    /* FUNC_NAME */v##OP##_wv_i##WSEW##m##WLMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".wv",						\
    /* FUNC_NAME */v##OP##_wv_u##WSEW##m##WLMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for narrowing integer vector-scalar operation.  */
#define _RVV_ASM_NINT_BIN_OP_WX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".wx",						\
    /* FUNC_NAME */v##OP##_ws_i##WSEW##m##WLMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".wx",						\
    /* FUNC_NAME */v##OP##_ws_u##WSEW##m##WLMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

/* Template function for narrowing integer vector-scalar operation.  */
#define _RVV_ASM_NINT_BIN_OP_WXI(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				OP, OPU)				\
  _RVV_ASM_WBIN_OP_IMM_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".wx",						\
    /* IMM_ASM_OP */"v" #OP ".wi",					\
    /* FUNC_NAME */v##OP##_ws_i##WSEW##m##WLMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */_RVV_ASM_INT_UIMM_CHK)					\
  _RVV_ASM_WBIN_OP_IMM_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OPU ".wx",						\
    /* IMM_ASM_OP */"v" #OPU ".wi",					\
    /* FUNC_NAME */v##OP##_ws_u##WSEW##m##WLMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    /* IMM_CHK */_RVV_ASM_INT_UIMM_CHK)

#define _RVV_ASM_NINT_BIN_OP(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
			     OP, OPU)					\
  _RVV_ASM_NINT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, OPU)	\
  _RVV_ASM_NINT_BIN_OP_WXI(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, OPU)


#define _RVV_ASM_MERGE_INT_OP(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vvm",						\
    /* FUNC_NAME */vmerge_vv_i##SEW##m##LMUL##_mask,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vd",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MERGE_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vxm",						\
    /* IMM_ASM_OP */"vmerge.vim",					\
    /* FUNC_NAME */vmerge_vs_i##SEW##m##LMUL##_mask,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vd",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")						\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vvm",						\
    /* FUNC_NAME */vmerge_vv_u##SEW##m##LMUL##_mask,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vd",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MERGE_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vxm",						\
    /* IMM_ASM_OP */"vmerge.vim",					\
    /* FUNC_NAME */vmerge_vs_u##SEW##m##LMUL##_mask,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vd",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r")

#define _RVV_FCLASS(SEW, LMUL, MLEN, T)					\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfclass.v",						\
    /* FUNC_NAME */vclass_v_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")

#define _RVV_FCVT(SEW, LMUL, MLEN, T)					\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.xu.f.v",						\
    /* FUNC_NAME */vcvt_u##SEW##_f##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.x.f.v",						\
    /* FUNC_NAME */vcvt_i##SEW##_f##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.rtz.xu.f.v",					\
    /* FUNC_NAME */vcvt_rtz_u##SEW##_f##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.rtz.x.f.v",					\
    /* FUNC_NAME */vcvt_rtz_i##SEW##_f##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.f.xu.v",						\
    /* FUNC_NAME */vcvt_f##SEW##_u##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_UNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfcvt.f.x.v",						\
    /* FUNC_NAME */vcvt_f##SEW##_i##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr")						\

#define _RVV_FWCVT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT)			\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.xu.f.v",					\
    /* FUNC_NAME */vcvt_u##WSEW##_f##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.x.f.v",						\
    /* FUNC_NAME */vcvt_i##WSEW##_f##SEW##_v_##SEW##m##LMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.rtz.xu.f.v",					\
    /* FUNC_NAME */vcvt_rtz_u##WSEW##_f##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.rtz.x.f.v",					\
    /* FUNC_NAME */vcvt_rtz_i##WSEW##_f##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.f.xu.v",					\
    /* FUNC_NAME */vcvt_f##WSEW##_u##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.f.x.v",						\
    /* FUNC_NAME */vcvt_f##WSEW##_i##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfwcvt.f.f.v",						\
    /* FUNC_NAME */vcvt_f##WSEW##_f##SEW##_v_##SEW##m##LMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")

#define _RVV_FNCVT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT)			\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.xu.f.w",					\
    /* FUNC_NAME */vcvt_u##SEW##_f##WSEW##_v_##WSEW##m##WLMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.x.f.w",						\
    /* FUNC_NAME */vcvt_i##SEW##_f##WSEW##_v_##WSEW##m##WLMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.rtz.xu.f.w",					\
    /* FUNC_NAME */vcvt_rtz_u##SEW##_f##WSEW##_v_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.rtz.x.f.w",					\
    /* FUNC_NAME */vcvt_rtz_i##SEW##_f##WSEW##_v_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.f.xu.w",					\
    /* FUNC_NAME */vcvt_f##SEW##_u##WSEW##_v_##WSEW##m##WLMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.f.x.w",						\
    /* FUNC_NAME */vcvt_f##SEW##_i##WSEW##_v_##WSEW##m##WLMUL,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.f.f.w",						\
    /* FUNC_NAME */vcvt_f##SEW##_f##WSEW##_v_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_WUNARY_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfncvt.rod.f.f.w",					\
    /* FUNC_NAME */vcvt_rod_f##SEW##_f##WSEW##_v_##WSEW##m##WLMUL,	\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr")

/* Template function for binary floating point vector-scalar operation.  */
#define _RVV_ASM_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */v##OP##_vs_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

/* Template function for binary floating point vector-vector operation.  */
#define _RVV_ASM_FLOAT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for binary floating point vector-vector and vector-scalar
   operation.  */
#define _RVV_ASM_FLOAT_BIN_OP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_FLOAT_BIN_OP_VEC(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)

/* Template function for widening floating point vector-vector operation.  */
#define _RVV_ASM_WFLOAT_BIN_OP_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening floating point vector-scalar operation.  */
#define _RVV_ASM_WFLOAT_BIN_OP_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */v##OP##_vs_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

#define _RVV_ASM_WFLOAT_BIN_OP_VV_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL,	\
				     WT, OP)				\
  _RVV_ASM_WFLOAT_BIN_OP_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_WFLOAT_BIN_OP_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)


/* Template function for widening floating point vector-vector operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WFLOAT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".wv",						\
    /* FUNC_NAME */v##OP##_wv_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening floating point vector-scalar operation,
   operand 1 is widening type.  */
#define _RVV_ASM_WFLOAT_BIN_OP_WF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT,	\
				  OP)					\
  _RVV_ASM_WBIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".wf",						\
    /* FUNC_NAME */v##OP##_ws_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

/* Template function for widening floating point vector-vector and
   vector-scalaroperation, operand 1 is widening type.  */
#define _RVV_ASM_WFLOAT_BIN_OP_WV_WF(SEW, LMUL, MLEN, T, WSEW, WLMUL,	\
				     WT, OP)				\
  _RVV_ASM_WFLOAT_BIN_OP_WV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_WFLOAT_BIN_OP_WF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)


/* Template function for single-width floating point vector-vector and
   vector-scalar multiply-add operation.  */
#define _RVV_ASM_FLOAT_MAC(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */v##OP##_sv_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"f",						\
    /* OP2_CONSTRANT */"vr")


/* Template function for floating-point vector-vector and vector-sclar
   comparison operation.  */
#define _RVV_ASM_FLOAT_CMP_VV(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmf" #OP ".vv",					\
    /* FUNC_NAME */vset##OP##_vv_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

#define _RVV_ASM_FLOAT_CMP_VF(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmf" #OP ".vf",					\
    /* FUNC_NAME */vset##OP##_vs_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vbool##MLEN##_t,					\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

#define _RVV_ASM_FLOAT_CMP(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_FLOAT_CMP_VV(SEW, LMUL, MLEN, T, OP)				\
  _RVV_ASM_FLOAT_CMP_VF(SEW, LMUL, MLEN, T, OP)

#define _RVV_ASM_MERGE_FLOAT_OP(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmerge.vvm",						\
    /* FUNC_NAME */vmerge_vv_f##SEW##m##LMUL##_mask,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=vd",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_MERGE_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfmerge.vfm",						\
    /* FUNC_NAME */vmerge_vs_f##SEW##m##LMUL##_mask,		\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vd",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"f")

/* Template function for widening floating point vector-vector multiply-add
   operation.  */
#define _RVV_ASM_FLOAT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vv",						\
    /* FUNC_NAME */v##OP##_vv_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")

/* Template function for widening floating point vector-scalar multiply-add
   operation.  */
#define _RVV_ASM_FLOAT_WMAC_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_MAC_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vf" #OP ".vf",						\
    /* FUNC_NAME */v##OP##_sv_f##SEW##m##LMUL,				\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##WSEW##m##WLMUL##_t,				\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_CONSTRANT */"f",						\
    /* OP2_CONSTRANT */"vr")						\


#define _RVV_ASM_FLOAT_WMAC(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_FLOAT_WMAC_VV(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
  _RVV_ASM_FLOAT_WMAC_VF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)

/* Integer and Floating-Point Scalar Move Functions.  */

#define _RVV_MV_XS_SX(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_SCALAR_MOVE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.x.s",						\
    /* FUNC_NAME */vmv_v_i##SEW##m##LMUL,				\
    /* OP0_TYPE */int##SEW##_t,						\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=r",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_SCALAR_MOVE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.x.s",						\
    /* FUNC_NAME */vmv_v_u##SEW##m##LMUL,				\
    /* OP0_TYPE */uint##SEW##_t,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=r",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_MV_VS_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.s.x",						\
    /* FUNC_NAME */vmv_s_i##SEW##m##LMUL,				\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"r")						\
  _RVV_ASM_MV_VS_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.s.x",						\
    /* FUNC_NAME */vmv_s_u##SEW##m##LMUL,				\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"r")

#define _RVV_MV_FS_SF(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_SCALAR_MOVE_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vfmv.f.s",						\
    /* FUNC_NAME */vmv_v_f##SEW##m##LMUL,			\
    /* OP0_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=f",						\
    /* OP1_CONSTRANT */"vr")						\
  _RVV_ASM_MV_VS_TEMPLATE(					\
    SEW, LMUL,								\
    /* ASM_OP */"vfmv.s.f",						\
    /* FUNC_NAME */vmv_s_f##SEW##m##LMUL,			\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"f")

#define _RVV_INT_SPLAT(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_SPLAT_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.v.x",						\
    /* FUNC_NAME */vsplat_s_i##SEW##m##LMUL,			\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */int##SEW##_t,						\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"r")						\
  _RVV_ASM_SPLAT_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vmv.v.x",						\
    /* FUNC_NAME */vsplat_s_u##SEW##m##LMUL,			\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */uint##SEW##_t,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"r")

#define _RVV_FLOAT_SPLAT(SEW, LMUL, MLEN, T)				\
  _RVV_ASM_SPLAT_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vfmv.v.f",						\
    /* FUNC_NAME */vsplat_s_f##SEW##m##LMUL,			\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */_RVV_F##SEW##_TYPE,					\
    /* OP0_CONSTRANT */"=vr",						\
    /* OP1_CONSTRANT */"f")

/* Vector Slideup Instructions.  */

/* Template function for integer slideup/slidedown operation.  */
#define _RVV_ASM_INT_SLIDEUP_SLIDEDOWN(SEW, LMUL, MLEN, T, OP)		\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OP ".vi",					\
    /* FUNC_NAME */v##OP##_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */word_type,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)						\
  /* vopu.vs */								\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OP ".vi",					\
    /* FUNC_NAME */v##OP##_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */word_type,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)

/* Template function for floating point slideup/slidedown operation.  */
#define _RVV_ASM_FLOAT_SLIDEUP_SLIDEDOWN(SEW, LMUL, MLEN, T, OP)	\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"v" #OP ".vx",						\
    /* IMM_ASM_OP */"v" #OP ".vi",					\
    /* FUNC_NAME */v##OP##_vs_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */word_type,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)

/* Template function for integer rgather operation.  */
#define _RVV_ASM_INT_RGATHER(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vrgather.vv",						\
    /* FUNC_NAME */vrgather_vv_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vrgather.vv",						\
    /* FUNC_NAME */vrgather_vv_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vrgather.vx",						\
    /* IMM_ASM_OP */"vrgather.vi",					\
    /* FUNC_NAME */vrgather_vs_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */word_type,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)						\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vrgather.vx",						\
    /* IMM_ASM_OP */"vrgather.vi",					\
    /* FUNC_NAME */vrgather_vs_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */word_type,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)

/* Template function for floating point rgather operation.  */
#define _RVV_ASM_FLOAT_RGATHER(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_BIN_OP_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vrgather.vv",						\
    /* FUNC_NAME */vrgather_vv_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"vr")						\
  _RVV_ASM_BIN_OP_IMM_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vrgather.vx",						\
    /* IMM_ASM_OP */"vrgather.vi",					\
    /* FUNC_NAME */vrgather_vs_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP1_TYPE */vfloat##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */word_type,						\
    /* OP0_CONSTRANT */"=&vr",						\
    /* OP1_CONSTRANT */"vr",						\
    /* OP2_CONSTRANT */"r",						\
    _RVV_ASM_INT_UIMM_CHK)

/* Compress intrinsic function template.
   SEW: integer, should be 8, 16, 32, 64
   LMUL: integer, should be 1, 2, 4 or 8
   FUNC_NAME: function name.
   MASK_TYPE: Type of mask.
   VAL_TYPE: Type of input/output operand. */
#define _RVV_ASM_COMPRESS_OP_TEMPLATE(SEW, LMUL, FUNC_NAME,		\
				      MASK_TYPE,			\
				      VAL_TYPE)				\
__extension__ extern __inline VAL_TYPE					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
FUNC_NAME (MASK_TYPE mask, VAL_TYPE a, VAL_TYPE b)			\
{									\
  VAL_TYPE rv;								\
  __asm__ ("vsetvli x0,x0,e" #SEW ",m" #LMUL "\n\t"			\
	   "vcompress.vm %0, %1, %2"					\
	   : "=vr" (rv)							\
	   : "vr" (b), "vr" (mask),					\
	     "0" (a)							\
	   : "vtype");							\
  return rv;								\
}									\

/* Template function for integer compress operation.  */
#define _RVV_ASM_INT_COMPRESS(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_COMPRESS_OP_TEMPLATE(					\
    SEW, LMUL,								\
    /* FUNC_NAME */vcompress_vm_i##SEW##m##LMUL##_mask,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* VAL_TYPE */vint##SEW##m##LMUL##_t)				\
  _RVV_ASM_COMPRESS_OP_TEMPLATE(					\
    SEW, LMUL,								\
    /* FUNC_NAME */vcompress_vm_u##SEW##m##LMUL##_mask,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* VAL_TYPE */vuint##SEW##m##LMUL##_t)

/* Template function for floating point compress operation.  */
#define _RVV_ASM_FLOAT_COMPRESS(SEW, LMUL, MLEN, T)			\
  _RVV_ASM_COMPRESS_OP_TEMPLATE(					\
    SEW, LMUL,								\
    /* FUNC_NAME */vcompress_vm_f##SEW##m##LMUL##_mask,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* VAL_TYPE */vfloat##SEW##m##LMUL##_t)

/* Template function for integer AMO operation.  */
#define _RVV_INT_AMO_TEMPLATE(SEW, LMUL, MLEN, T, OP, OPU)		\
  _RVV_ASM_AMO_WD_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vamo" #OP "e.v",					\
    /* FUNC_NAME */vamo##OP##e_v_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##SEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t)				\
  _RVV_ASM_AMO_WD_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vamo" #OPU "e.v",					\
    /* FUNC_NAME */vamo##OPU##e_v_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */uint##SEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t)

_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, swap, swap)
_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, add, add)
_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, xor, xor)
_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, or, or)
_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, and, and)
_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, min, minu)
_RVV_INT_ITERATOR_ARG (_RVV_INT_AMO_TEMPLATE, max, maxu)

/* Template function for integer AMO operation.  */
#define _RVV_INT_AMOW_TEMPLATE(SEW, LMUL, MLEN, TYPE, NSEW, ADDR_TYPE_LETTER,\
			       OP, OPU)					\
  _RVV_ASM_AMO_WD_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vamo" #OP "w.v",					\
    /* FUNC_NAME */vamo##OP##w_v_i##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */int##NSEW##_t *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vint##SEW##m##LMUL##_t)				\
  _RVV_ASM_AMO_WD_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vamo" #OPU "w.v",					\
    /* FUNC_NAME */vamo##OPU##w_v_u##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */ADDR_TYPE_LETTER##int##NSEW##_t *,			\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vuint##SEW##m##LMUL##_t)

_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, swap, swap)
_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, add, add)
_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, xor, xor)
_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, or, or)
_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, and, and)
_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, min, minu)
_RVV_INT_AMOW_ITERATOR_ARG (_RVV_INT_AMOW_TEMPLATE, max, maxu)

#define _RVV_AMO_FLOAT_TEMPLATE(SEW, LMUL, MLEN, T, OP)			\
  _RVV_ASM_AMO_WD_TEMPLATE(						\
    SEW, LMUL,								\
    /* ASM_OP */"vamo" #OP "e.v",					\
    /* FUNC_NAME */vamo##OP##e_v_f##SEW##m##LMUL,			\
    /* MASK_TYPE */vbool##MLEN##_t,					\
    /* OP0_TYPE */_RVV_F##SEW##_TYPE *,					\
    /* OP1_TYPE */vuint##SEW##m##LMUL##_t,				\
    /* OP2_TYPE */vfloat##SEW##m##LMUL##_t)

_RVV_FLOAT_ITERATOR_ARG (_RVV_AMO_FLOAT_TEMPLATE, swap)

__extension__ extern __inline word_type
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vreadvl ()
{
  word_type rv;
  __asm__ volatile ("csrr %0, vl"
		    : "=r" (rv)
		    :
		    : "vl");
  return rv;
}

#endif
#endif
