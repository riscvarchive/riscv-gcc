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

/* An iterator to call a macro with every supported E and M value for
   integer operations.  */
#define _RVVINTEANDM(MACRO)					\
  MACRO (8, 1, char, 8)						\
  MACRO (8, 2, char, 4)						\
  MACRO (8, 4, char, 2)						\
  MACRO (8, 8, char, 1)						\
  MACRO (16, 1, short, 16)					\
  MACRO (16, 2, short, 8)					\
  MACRO (16, 4, short, 4)					\
  MACRO (16, 8, short, 2)					\
  MACRO (32, 1, int, 32)					\
  MACRO (32, 2, int, 16)					\
  MACRO (32, 4, int, 8)						\
  MACRO (32, 8, int, 4)						\
  MACRO (64, 1, long long, 64)					\
  MACRO (64, 2, long long, 32)					\
  MACRO (64, 4, long long, 16)					\
  MACRO (64, 8, long long, 8)

/* An iterator to call a macro with every supported E and M value with extra
   arguments for integer operations.  */
#define _RVVINTEANDM_ARG(MACRO, ...)				\
  MACRO (8, 1, char, 8, __VA_ARGS__)				\
  MACRO (8, 2, char, 4, __VA_ARGS__)				\
  MACRO (8, 4, char, 2, __VA_ARGS__)				\
  MACRO (8, 8, char, 1, __VA_ARGS__)				\
  MACRO (16, 1, short, 16, __VA_ARGS__)				\
  MACRO (16, 2, short, 8, __VA_ARGS__)				\
  MACRO (16, 4, short, 4, __VA_ARGS__)				\
  MACRO (16, 8, short, 2, __VA_ARGS__)				\
  MACRO (32, 1, int, 32, __VA_ARGS__)				\
  MACRO (32, 2, int, 16, __VA_ARGS__)				\
  MACRO (32, 4, int, 8, __VA_ARGS__)				\
  MACRO (32, 8, int, 4, __VA_ARGS__)				\
  MACRO (64, 1, long long, 64, __VA_ARGS__)			\
  MACRO (64, 2, long long, 32, __VA_ARGS__)			\
  MACRO (64, 4, long long, 16, __VA_ARGS__)			\
  MACRO (64, 8, long long, 8, __VA_ARGS__)

/* An iterator to call a macro with every supported E and M value for
   float operations.  */
#define _RVVFLOATEANDM(MACRO)					\
  MACRO (16, 1, float16_t, 16)					\
  MACRO (16, 2, float16_t, 8)					\
  MACRO (16, 4, float16_t, 4)					\
  MACRO (16, 8, float16_t, 2)					\
  MACRO (32, 1, float, 32)					\
  MACRO (32, 2, float, 16)					\
  MACRO (32, 4, float, 8)					\
  MACRO (32, 8, float, 4)					\
  MACRO (64, 1, double, 64)					\
  MACRO (64, 2, double, 32)					\
  MACRO (64, 4, double, 16)					\
  MACRO (64, 8, double, 8)

/* Define the setvl intrinsics.  Use the int iterator because it is a
   superset of the float one, but ignore the type operand.  */

#define _RVVSETVL(E, M, T, P)						\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvsetvl##E##m##M (word_type a)						\
{									\
  word_type vl;								\
  if (__riscv_xlen == 32)						\
    vl = __builtin_riscv_vsetvl##E##m##M##_si (a);			\
  else									\
    vl = __builtin_riscv_vsetvl##E##m##M##_di (a);			\
  return vl;								\
}

_RVVINTEANDM (_RVVSETVL)

/* Define the ld/st intrinsics.  */

#define _RVVINTLD(E, M, T, P)						\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvldint##E##m##M (const T *a)						\
{									\
  return * (rvvint##E##m##M##_t *) a;					\
}

#define _RVVINTST(E, M, T, P)						\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvstint##E##m##M (const T *a, rvvint##E##m##M##_t b)			\
{									\
  * (rvvint##E##m##M##_t *) a = b;					\
}

_RVVINTEANDM (_RVVINTLD)
_RVVINTEANDM (_RVVINTST)

#define _RVVFLOATLD(E, M, T, P)						\
__extension__ extern __inline rvvfloat##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvldfloat##E##m##M (const T *a)					\
{									\
  return * (rvvfloat##E##m##M##_t *) a;					\
}

#define _RVVFLOATST(E, M, T, P)						\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvstfloat##E##m##M (const T *a, rvvfloat##E##m##M##_t b)		\
{									\
  * (rvvfloat##E##m##M##_t *) a = b;					\
}

_RVVFLOATEANDM (_RVVFLOATLD)
_RVVFLOATEANDM (_RVVFLOATST)

/* ??? An intrinsic with sizeless type args that doesn't call a builtin fails
   in ipa because it doesn't handle sizeless types in predicates, as called
   from will_be_nonconstant_predicate.  So all of these must use a builtin.  */

/* Define the add intrinsics.  */

#define _RVV_INT_BIN_OP(E, M, T, P, OP)					\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##E##m##M (rvvint##E##m##M##_t a, rvvint##E##m##M##_t b)	\
{									\
  return __builtin_riscv_v##OP##int##E##m##M (a, b);			\
}									\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##E##m##M##_mask (rvvbool##P##_t mask,			\
			   rvvint##E##m##M##_t maskedoff,		\
			   rvvint##E##m##M##_t a, rvvint##E##m##M##_t b)\
{									\
  return __builtin_riscv_v##OP##int##E##m##M##_mask (			\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_OP_SCALAR(E, M, T, P, OP)				\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##E##m##M##_scalar (rvvint##E##m##M##_t a, T b)		\
{									\
  return __builtin_riscv_v##OP##int##E##m##M##_scalar (a, b);		\
}									\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##E##m##M##_scalar_mask (rvvbool##P##_t mask,		\
			          rvvint##E##m##M##_t maskedoff,	\
				  rvvint##E##m##M##_t a, T b)		\
{									\
  return __builtin_riscv_v##OP##int##E##m##M##_scalar (a, b);		\
}

#define _RVV_INT_BIN_OP_NOMASK(E, M, T, P, OP)				\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##E##m##M (rvvint##E##m##M##_t a, rvvint##E##m##M##_t b)	\
{									\
  return __builtin_riscv_v##OP##int##E##m##M (a, b);			\
}

#define _RVV_INT_BIN_OP_SCALAR_NOMASK(E, M, T, P, OP)			\
__extension__ extern __inline rvvint##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvv##OP##int##E##m##M##_scalar (rvvint##E##m##M##_t a, T b)		\
{									\
  return __builtin_riscv_v##OP##int##E##m##M##_scalar (a, b);		\
}

_RVVINTEANDM_ARG (_RVV_INT_BIN_OP, add)
_RVVINTEANDM_ARG (_RVV_INT_BIN_OP_SCALAR, add)
_RVVINTEANDM_ARG (_RVV_INT_BIN_OP_NOMASK, sub)
_RVVINTEANDM_ARG (_RVV_INT_BIN_OP_SCALAR_NOMASK, sub)
_RVVINTEANDM_ARG (_RVV_INT_BIN_OP_NOMASK, rsub)
_RVVINTEANDM_ARG (_RVV_INT_BIN_OP_SCALAR_NOMASK, rsub)

#define _RVVINTSLT(E, M, T, P)						\
__extension__ extern __inline rvvbool##P##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvsltint##E##m##M (rvvint##E##m##M##_t a, rvvint##E##m##M##_t b)	\
{									\
  return __builtin_riscv_vsltint##E##m##M (a, b);			\
}									\
__extension__ extern __inline rvvbool##P##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvsltint##E##m##M##_mask (rvvbool##P##_t mask,				\
			   rvvbool##P##_t maskedoff,			\
			   rvvint##E##m##M##_t a,			\
			   rvvint##E##m##M##_t b)			\
{									\
  return __builtin_riscv_vsltint##E##m##M##_mask (mask, maskedoff,	\
						  a, b);		\
}

_RVVINTEANDM (_RVVINTSLT)

#if 0
#define _RVVFLOATADD(E, M, T, P)					\
__extension__ extern __inline rvvfloat##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvaddfloat##E##m##M (rvvfloat##E##m##M##_t a, rvvfloat##E##m##M##_t b)	\
{									\
  return a + b;								\
}

#define _RVVFLOATADDS(E, M, T, P)					\
__extension__ extern __inline rvvfloat##E##m##M##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
rvvaddsfloat##E##m##M (rvvfloat##E##m##M##_t a, T b)			\
{									\
  return a + b;								\
}

_RVVFLOATEANDM (_RVVFLOATADD)
_RVVFLOATEANDM (_RVVFLOATADDS)
#endif

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
