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
#define _GCC_RISCV_VECTOR_H 1

#ifndef __riscv_vector
#error "Vector intrinsics require the vector extension."
#else

#define M1 (0x0)
#define M2 (0x1)
#define M4 (0x2)
#define M8 (0x3)

#define E8  (0x0 << 2)
#define E16 (01x << 2)
#define E32 (0x2 << 2)

typedef int word_type __attribute__ ((mode (__word__)));
typedef __fp16 float16_t;

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar modes for integer operations.  */
#define _RVV_INT_ITERATOR(MACRO)				\
  MACRO ( 8, 1,  8, char)					\
  MACRO ( 8, 2,  4, char)					\
  MACRO ( 8, 4,  2, char)					\
  MACRO ( 8, 8,  1, char)					\
  MACRO (16, 1, 16, short)					\
  MACRO (16, 2,  8, short)					\
  MACRO (16, 4,  4, short)					\
  MACRO (16, 8,  2, short)					\
  MACRO (32, 1, 32, int)					\
  MACRO (32, 2, 16, int)					\
  MACRO (32, 4,  8, int)					\
  MACRO (32, 8,  4, int)					\
  MACRO (64, 1, 64, long long)					\
  MACRO (64, 2, 32, long long)					\
  MACRO (64, 4, 16, long long)					\
  MACRO (64, 8,  8, long long)

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar modes with extra arguments for integer operations.  */
#define _RVV_INT_ITERATOR_ARG(MACRO, ...)			\
  MACRO ( 8, 1,  8, char, __VA_ARGS__)				\
  MACRO ( 8, 2,  4, char, __VA_ARGS__)				\
  MACRO ( 8, 4,  2, char, __VA_ARGS__)				\
  MACRO ( 8, 8,  1, char, __VA_ARGS__)				\
  MACRO (16, 1, 16, short, __VA_ARGS__)				\
  MACRO (16, 2,  8, short, __VA_ARGS__)				\
  MACRO (16, 4,  4, short, __VA_ARGS__)				\
  MACRO (16, 8,  2, short, __VA_ARGS__)				\
  MACRO (32, 1, 32, int, __VA_ARGS__)				\
  MACRO (32, 2, 16, int, __VA_ARGS__)				\
  MACRO (32, 4,  8, int, __VA_ARGS__)				\
  MACRO (32, 8,  4, int, __VA_ARGS__)				\
  MACRO (64, 1, 64, long long, __VA_ARGS__)			\
  MACRO (64, 2, 32, long long, __VA_ARGS__)			\
  MACRO (64, 4, 16, long long, __VA_ARGS__)			\
  MACRO (64, 8,  8, long long, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_WINT_ITERATOR_ARG(MACRO, ...)			\
  MACRO ( 8, 1,  8,  char, 16, 2, short, __VA_ARGS__)		\
  MACRO ( 8, 2,  4,  char, 16, 4, short, __VA_ARGS__)		\
  MACRO ( 8, 4,  2,  char, 16, 8, short, __VA_ARGS__)		\
  MACRO (16, 1, 16, short, 32, 2, int, __VA_ARGS__)		\
  MACRO (16, 2,  8, short, 32, 4, int,__VA_ARGS__)		\
  MACRO (16, 4,  4, short, 32, 8, int, __VA_ARGS__)		\
  MACRO (32, 1, 32,   int, 64, 2, long long, __VA_ARGS__)		\
  MACRO (32, 2, 16,   int, 64, 4, long long, __VA_ARGS__)		\
  MACRO (32, 4,  8,   int, 64, 8, long long, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar modes for float operations.  */
#define _RVV_FLOAT_ITERATOR(MACRO)				\
  MACRO (16, 1, 16, float16_t)					\
  MACRO (16, 2,  8, float16_t)					\
  MACRO (16, 4,  4, float16_t)					\
  MACRO (16, 8,  2, float16_t)					\
  MACRO (32, 1, 32, float)					\
  MACRO (32, 2, 16, float)					\
  MACRO (32, 4,  8, float)					\
  MACRO (32, 8,  4, float)					\
  MACRO (64, 1, 64, double)					\
  MACRO (64, 2, 32, double)					\
  MACRO (64, 4, 16, double)					\
  MACRO (64, 8,  8, double)

/* An iterator to call a macro with every supported MLEN for masking
   operations.  */
#define _RVV_MASK_ITERATOR(MACRO, ...)				\
  MACRO ( 1, __VA_ARGS__)					\
  MACRO ( 2, __VA_ARGS__)					\
  MACRO ( 4, __VA_ARGS__)					\
  MACRO ( 8, __VA_ARGS__)					\
  MACRO (16, __VA_ARGS__)					\
  MACRO (32, __VA_ARGS__)					\
  MACRO (64, __VA_ARGS__)					\

/* Define the setvl intrinsics.  Use the int iterator because it is a
   superset of the float one, but ignore the type operand.  */

#define _RVVSETVL(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvsetvl##SEW##m##LMUL (word_type a)					\
{									\
  word_type vl;								\
  if (__riscv_xlen == 32)						\
    vl = __builtin_riscv_vsetvl##SEW##m##LMUL##_si (a);			\
  else									\
    vl = __builtin_riscv_vsetvl##SEW##m##LMUL##_di (a);			\
  return vl;								\
}

_RVV_INT_ITERATOR (_RVVSETVL)

/* Define the ld/st intrinsics.  */

#define _RVVINTLD(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvldint##SEW##m##LMUL (const T *a)					\
{									\
  return * (rvvint##SEW##m##LMUL##_t *) a;				\
}									\
__extension__ extern __inline rvvuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvlduint##SEW##m##LMUL (const T *a)					\
{									\
  return * (rvvuint##SEW##m##LMUL##_t *) a;				\
}

#define _RVVINTST(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvstint##SEW##m##LMUL (const T *a, rvvint##SEW##m##LMUL##_t b)		\
{									\
  * (rvvint##SEW##m##LMUL##_t *) a = b;					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvstuint##SEW##m##LMUL (const T *a, rvvuint##SEW##m##LMUL##_t b)	\
{									\
  * (rvvuint##SEW##m##LMUL##_t *) a = b;				\
}

_RVV_INT_ITERATOR (_RVVINTLD)
_RVV_INT_ITERATOR (_RVVINTST)

#define _RVVFLOATLD(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline rvvfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvldfloat##SEW##m##LMUL (const T *a)					\
{									\
  return * (rvvfloat##SEW##m##LMUL##_t *) a;				\
}

#define _RVVFLOATST(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvstfloat##SEW##m##LMUL (const T *a, rvvfloat##SEW##m##LMUL##_t b)	\
{									\
  * (rvvfloat##SEW##m##LMUL##_t *) a = b;				\
}

_RVV_FLOAT_ITERATOR (_RVVFLOATLD)
_RVV_FLOAT_ITERATOR (_RVVFLOATST)

/* ??? An intrinsic with sizeless type args that doesn't call a builtin fails
   in ipa because it doesn't handle sizeless types in predicates, as called
   from will_be_nonconstant_predicate.  So all of these must use a builtin.  */

/* Define the add intrinsics.  */

#define _RVV_INT_BIN_OP(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##SEW##m##LMUL (rvvint##SEW##m##LMUL##_t a,			\
			    rvvint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##SEW##m##LMUL##_mask (rvvbool##MLEN##_t mask,		\
				   rvvint##SEW##m##LMUL##_t maskedoff,	\
				   rvvint##SEW##m##LMUL##_t a,		\
				   rvvint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##SEW##m##LMUL##_scalar (rvvint##SEW##m##LMUL##_t a, T b)	\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##SEW##m##LMUL##_scalar_mask (rvvbool##MLEN##_t mask,	\
			          rvvint##SEW##m##LMUL##_t maskedoff,	\
				  rvvint##SEW##m##LMUL##_t a, T b)	\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}

#define _RVV_INT_BIN_OP_NOMASK(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##SEW##m##LMUL (rvvint##SEW##m##LMUL##_t a,			\
			    rvvint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}

#define _RVV_INT_BIN_OP_SCALAR_NOMASK(SEW, LMUL, MLEN, T, OP)		\
__extension__ extern __inline rvvint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##SEW##m##LMUL##_scalar (rvvint##SEW##m##LMUL##_t a, T b)	\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, add)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, add)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_NOMASK, sub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR_NOMASK, sub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_NOMASK, rsub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR_NOMASK, rsub)

#define _RVV_WINT_ADD_SUB(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline rvvint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##_vv_int##SEW##m##LMUL (rvvint##SEW##m##LMUL##_t a,		\
				rvvint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_vv_int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline rvvuint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##u_vv_uint##SEW##m##LMUL (rvvuint##SEW##m##LMUL##_t a,		\
				 rvvuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##u_vv_uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline rvvint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##_wv_int##SEW##m##LMUL (rvvint##WSEW##m##WLMUL##_t a,		\
				rvvint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_wv_int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline rvvuint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##u_wv_uint##SEW##m##LMUL (rvvuint##WSEW##m##WLMUL##_t a,	\
				  rvvuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##u_wv_uint##SEW##m##LMUL (a, b);		\
}



_RVV_WINT_ITERATOR_ARG (_RVV_WINT_ADD_SUB, wadd)

#define _RVVINTSLT(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline rvvbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvsltint##SEW##m##LMUL (rvvint##SEW##m##LMUL##_t a,			\
			 rvvint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vsltint##SEW##m##LMUL (a, b);			\
}									\
__extension__ extern __inline rvvbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvsltint##SEW##m##LMUL##_mask (rvvbool##MLEN##_t mask,			\
				rvvbool##MLEN##_t maskedoff,		\
				rvvint##SEW##m##LMUL##_t a,		\
				rvvint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vsltint##SEW##m##LMUL##_mask (mask, maskedoff,	\
						       a, b);		\
}

_RVV_INT_ITERATOR (_RVVINTSLT)

#if 0
#define _RVVFLOATADD(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline rvvfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvaddfloat##SEW##m##LMUL (rvvfloat##SEW##m##LMUL##_t a,		\
			   rvvfloat##SEW##m##LMUL##_t b)		\
{									\
  return a + b;								\
}

#define _RVVFLOATADDS(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline rvvfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvaddsfloat##SEW##m##LMUL (rvvfloat##SEW##m##LMUL##_t a, T b)		\
{									\
  return a + b;								\
}

_RVV_FLOAT_ITERATOR (_RVVFLOATADD)
_RVV_FLOAT_ITERATOR (_RVVFLOATADDS)
#endif

#define _RVV_MASK_BIN_OP(MLEN, OP)					\
__extension__ extern __inline rvvbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##bool##MLEN (rvvbool##MLEN##_t a,				\
		     rvvbool##MLEN##_t b)				\
{									\
  return __builtin_riscv_v##OP##bool##MLEN (a, b);			\
}									\

#define _RVV_MASK_UNARY_OP_SCALAR(MLEN, OP)				\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##bool##MLEN (rvvbool##MLEN##_t a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##bool##MLEN##_si (a);			\
  else									\
    return __builtin_riscv_v##OP##bool##MLEN##_di (a);			\
}									\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##bool##MLEN##_mask (rvvbool##MLEN##_t mask,			\
			    rvvbool##MLEN##_t a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##bool##MLEN##_si_mask (mask, a);	\
  else									\
    return __builtin_riscv_v##OP##bool##MLEN##_di_mask (mask, a);	\
}									\

#define _RVV_MASK_UNARY_OP(MLEN, OP)					\
__extension__ extern __inline rvvbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##bool##MLEN (rvvbool##MLEN##_t a)				\
{									\
 return __builtin_riscv_v##OP##bool##MLEN (a);				\
}									\
__extension__ extern __inline rvvbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##bool##MLEN##_mask (rvvbool##MLEN##_t mask,			\
			    rvvbool##MLEN##_t maskedoff,		\
			    rvvbool##MLEN##_t a)			\
{									\
  return __builtin_riscv_v##OP##bool##MLEN##_mask (mask, maskedoff, a);	\
}

_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, and)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_SCALAR, popc)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sbf)

/* Helpers for FP widening multiply.  */

__extension__ extern __inline rvvfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
rvvwmulfloat16m4 (rvvfloat16m4_t a, rvvfloat16m4_t b)
{
  return __builtin_riscv_vfwmulfloat16m4 (a, b);
}

__extension__ extern __inline rvvfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
rvvwmulfloat16m4_scalar (rvvfloat16m4_t a, const float16_t b)
{
  return __builtin_riscv_vfwmulfloat16m4_scalar (a, b);
}

/* Helpers for FP widening multiply accumulate.  */

__extension__ extern __inline rvvfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
rvvwmaddfloat16m4 (rvvfloat16m4_t a, rvvfloat16m4_t b, rvvfloat32m8_t c)
{
  return __builtin_riscv_vfwmaddfloat16m4 (a, b, c);
}

__extension__ extern __inline rvvfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
rvvwmsubfloat16m4 (rvvfloat16m4_t a, rvvfloat16m4_t b, rvvfloat32m8_t c)
{
  return __builtin_riscv_vfwmsubfloat16m4 (a, b, c);
}

__extension__ extern __inline rvvfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
rvvwmaddfloat16m4_scalar (rvvfloat16m4_t a, const float16_t b,
			  rvvfloat32m8_t c)
{
  return __builtin_riscv_vfwmaddfloat16m4_scalar (a, b, c);
}

#endif
#endif
