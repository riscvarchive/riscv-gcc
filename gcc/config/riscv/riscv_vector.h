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

#include <stdint.h>

#ifndef __OPTIMIZE__
#error "Vector intrinsics require enable optimization, e.g. -O"
#endif

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

/* Uitl type for easier expand floating point functions.  */
#define _RVV_F16_TYPE float16_t
#define _RVV_F32_TYPE float
#define _RVV_F64_TYPE double

typedef int word_type __attribute__ ((mode (__word__)));
typedef __fp16 float16_t;

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar modes for integer operations.  */
#define _RVV_INT_ITERATOR(MACRO)	\
  MACRO ( 8, 1,  8,  int8_t)		\
  MACRO ( 8, 2,  4,  int8_t)		\
  MACRO ( 8, 4,  2,  int8_t)		\
  MACRO ( 8, 8,  1,  int8_t)		\
  MACRO (16, 1, 16, int16_t)		\
  MACRO (16, 2,  8, int16_t)		\
  MACRO (16, 4,  4, int16_t)		\
  MACRO (16, 8,  2, int16_t)		\
  MACRO (32, 1, 32, int32_t)		\
  MACRO (32, 2, 16, int32_t)		\
  MACRO (32, 4,  8, int32_t)		\
  MACRO (32, 8,  4, int32_t)		\
  MACRO (64, 1, 64, int64_t)		\
  MACRO (64, 2, 32, int64_t)		\
  MACRO (64, 4, 16, int64_t)		\
  MACRO (64, 8,  8, int64_t)

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar modes with extra arguments for integer operations.  */
#define _RVV_INT_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1,  8,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 2,  4,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 4,  2,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 8,  1,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 16, int16_t, __VA_ARGS__)	\
  MACRO (16, 2,  8, int16_t, __VA_ARGS__)	\
  MACRO (16, 4,  4, int16_t, __VA_ARGS__)	\
  MACRO (16, 8,  2, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 32, int32_t, __VA_ARGS__)	\
  MACRO (32, 2, 16, int32_t, __VA_ARGS__)	\
  MACRO (32, 4,  8, int32_t, __VA_ARGS__)	\
  MACRO (32, 8,  4, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 64, int64_t, __VA_ARGS__)	\
  MACRO (64, 2, 32, int64_t, __VA_ARGS__)	\
  MACRO (64, 4, 16, int64_t, __VA_ARGS__)	\
  MACRO (64, 8,  8, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   all corresponding widening vector type.

   MACRO (SEW, LMUL, MLEN, TYPE, NSEW, NTYPE_LETTER)  */
#define _RVV_INT_LOAD_ITERATOR(MACRO)	\
  MACRO (8, 1,   8,   int8_t,  8, b)	\
  MACRO (8, 2,   4,   int8_t,  8, b)	\
  MACRO (8, 4,   2,   int8_t,  8, b)	\
  MACRO (8, 8,   1,   int8_t,  8, b)	\
  MACRO (16, 1, 16, int16_t,  8, b)	\
  MACRO (16, 2,  8, int16_t,  8, b)	\
  MACRO (16, 4,  4, int16_t,  8, b)	\
  MACRO (16, 8,  2, int16_t,  8, b)	\
  MACRO (16, 1, 16, int16_t, 16, h)	\
  MACRO (16, 2,  8, int16_t, 16, h)	\
  MACRO (16, 4,  4, int16_t, 16, h)	\
  MACRO (16, 8,  2, int16_t, 16, h)	\
  MACRO (32, 1, 32, int32_t,  8, b)	\
  MACRO (32, 2, 16, int32_t,  8, b)	\
  MACRO (32, 4,  8, int32_t,  8, b)	\
  MACRO (32, 8,  4, int32_t,  8, b)	\
  MACRO (32, 1, 32, int32_t, 16, h)	\
  MACRO (32, 2, 16, int32_t, 16, h)	\
  MACRO (32, 4,  8, int32_t, 16, h)	\
  MACRO (32, 8,  4, int32_t, 16, h)	\
  MACRO (32, 1, 32, int32_t, 32, w)	\
  MACRO (32, 2, 16, int32_t, 32, w)	\
  MACRO (32, 4,  8, int32_t, 32, w)	\
  MACRO (32, 8,  4, int32_t, 32, w)	\
  MACRO (64, 1, 64, int64_t,  8, b)	\
  MACRO (64, 2, 32, int64_t,  8, b)	\
  MACRO (64, 4, 16, int64_t,  8, b)	\
  MACRO (64, 8,  8, int64_t,  8, b)	\
  MACRO (64, 1, 64, int64_t, 16, h)	\
  MACRO (64, 2, 32, int64_t, 16, h)	\
  MACRO (64, 4, 16, int64_t, 16, h)	\
  MACRO (64, 8,  8, int64_t, 16, h)	\
  MACRO (64, 1, 64, int64_t, 32, w)	\
  MACRO (64, 2, 32, int64_t, 32, w)	\
  MACRO (64, 4, 16, int64_t, 32, w)	\
  MACRO (64, 8,  8, int64_t, 32, w)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding widening vector type.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_WINT_ITERATOR(MACRO)			\
  MACRO ( 8, 1,  8,  int8_t, 16, 2, int16_t)		\
  MACRO ( 8, 2,  4,  int8_t, 16, 4, int16_t)		\
  MACRO ( 8, 4,  2,  int8_t, 16, 8, int16_t)		\
  MACRO (16, 1, 16, int16_t, 32, 2, int32_t)		\
  MACRO (16, 2,  8, int16_t, 32, 4, int32_t)		\
  MACRO (16, 4,  4, int16_t, 32, 8, int32_t)		\
  MACRO (32, 1, 32, int32_t, 64, 2, int64_t)		\
  MACRO (32, 2, 16, int32_t, 64, 4, int64_t)		\
  MACRO (32, 4,  8, int32_t, 64, 8, int64_t)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_WINT_ITERATOR_ARG(MACRO, ...)				\
  MACRO ( 8, 1,  8,  int8_t, 16, 2, int16_t, __VA_ARGS__)		\
  MACRO ( 8, 2,  4,  int8_t, 16, 4, int16_t, __VA_ARGS__)		\
  MACRO ( 8, 4,  2,  int8_t, 16, 8, int16_t, __VA_ARGS__)		\
  MACRO (16, 1, 16, int16_t, 32, 2, int32_t, __VA_ARGS__)		\
  MACRO (16, 2,  8, int16_t, 32, 4, int32_t, __VA_ARGS__)		\
  MACRO (16, 4,  4, int16_t, 32, 8, int32_t, __VA_ARGS__)		\
  MACRO (32, 1, 32, int32_t, 64, 2, int64_t, __VA_ARGS__)		\
  MACRO (32, 2, 16, int32_t, 64, 4, int64_t, __VA_ARGS__)		\
  MACRO (32, 4,  8, int32_t, 64, 8, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding 4 times widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_QINT_ITERATOR_ARG(MACRO, ...)				\
  MACRO ( 8, 1,  8,  int8_t, 32, 4, int32_t, __VA_ARGS__)		\
  MACRO ( 8, 2,  4,  int8_t, 32, 8, int32_t, __VA_ARGS__)		\
  MACRO (16, 1, 16, int16_t, 64, 4, int64_t, __VA_ARGS__)		\
  MACRO (16, 2,  8, int16_t, 64, 8, int64_t, __VA_ARGS__)

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

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar modes with extra arguments for float operations.  */
#define _RVV_FLOAT_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 16, float16_t, __VA_ARGS__)	\
  MACRO (16, 2,  8, float16_t, __VA_ARGS__)	\
  MACRO (16, 4,  4, float16_t, __VA_ARGS__)	\
  MACRO (16, 8,  2, float16_t, __VA_ARGS__)	\
  MACRO (32, 1, 32,     float, __VA_ARGS__)	\
  MACRO (32, 2, 16,     float, __VA_ARGS__)	\
  MACRO (32, 4,  8,     float, __VA_ARGS__)	\
  MACRO (32, 8,  4,     float, __VA_ARGS__)	\
  MACRO (64, 1, 64,    double, __VA_ARGS__)	\
  MACRO (64, 2, 32,    double, __VA_ARGS__)	\
  MACRO (64, 4, 16,    double, __VA_ARGS__)	\
  MACRO (64, 8,  8,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding widening vector type.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_WFLOAT_ITERATOR(MACRO)			\
  MACRO (16, 1, 16, float16_t, 32, 2,  float)		\
  MACRO (16, 2,  8, float16_t, 32, 4,  float)		\
  MACRO (16, 4,  4, float16_t, 32, 8,  float)		\
  MACRO (32, 1, 32,     float, 64, 2, double)		\
  MACRO (32, 2, 16,     float, 64, 4, double)		\
  MACRO (32, 4,  8,     float, 64, 8, double)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_WFLOAT_ITERATOR_ARG(MACRO, ...)				\
  MACRO (16, 1, 16, float16_t, 32, 2,  float, __VA_ARGS__)		\
  MACRO (16, 2,  8, float16_t, 32, 4,  float, __VA_ARGS__)		\
  MACRO (16, 4,  4, float16_t, 32, 8,  float, __VA_ARGS__)		\
  MACRO (32, 1, 32,     float, 64, 2, double, __VA_ARGS__)		\
  MACRO (32, 2, 16,     float, 64, 4, double, __VA_ARGS__)		\
  MACRO (32, 4,  8,     float, 64, 8, double, __VA_ARGS__)

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
vsetvl_##SEW##m##LMUL (word_type a)					\
{									\
  word_type vl;								\
  if (__riscv_xlen == 32)						\
    vl = __builtin_riscv_vsetvl##SEW##m##LMUL##_si (a);			\
  else									\
    vl = __builtin_riscv_vsetvl##SEW##m##LMUL##_di (a);			\
  return vl;								\
}									\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsetvlmax_##SEW##m##LMUL ()						\
{									\
  return vsetvl_##SEW##m##LMUL (-1);					\
}

_RVV_INT_ITERATOR (_RVVSETVL)


#define _RVV_INT_VEC_MOVE(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_v_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_v_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}

_RVV_INT_ITERATOR (_RVV_INT_VEC_MOVE)

/* Define the ld/st intrinsics.  */

#define _RVVINTLD(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vload_i##SEW##m##LMUL (const int##SEW##_t *a)			\
{									\
  return * (vint##SEW##m##LMUL##_t *) a;				\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vload_u##SEW##m##LMUL (const uint##SEW##_t *a)			\
{									\
  return * (vuint##SEW##m##LMUL##_t *) a;				\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vload_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				 vint##SEW##m##LMUL##_t maskedoff,	\
				 const int##SEW##_t *a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vleint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vload_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				  vuint##SEW##m##LMUL##_t maskedoff,	\
				  const uint##SEW##_t *a)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleuint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vleuint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vloads_i##SEW##m##LMUL (const int##SEW##_t *a, word_type stride)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_si (a, stride);	\
  else									\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_di (a, stride);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vloads_u##SEW##m##LMUL (const uint##SEW##_t *a, word_type stride)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_si (a, stride);	\
  else									\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_di (a, stride);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vloads_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				  vint##SEW##m##LMUL##_t maskedoff,	\
				  const int##SEW##_t *a,		\
				  word_type stride)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a, stride);				\
  else									\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a, stride);				\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vloads_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,\
				   const uint##SEW##_t *a,		\
				   word_type stride)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a, stride);				\
  else									\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a, stride);				\
}									\

#define _RVVINTST(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstore_i##SEW##m##LMUL (const int##SEW##_t *a,			\
			vint##SEW##m##LMUL##_t b)			\
{									\
  * (vint##SEW##m##LMUL##_t *) a = b;				\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstore_u##SEW##m##LMUL (const uint##SEW##_t *a, vuint##SEW##m##LMUL##_t b)\
{									\
  * (vuint##SEW##m##LMUL##_t *) a = b;				\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstore_i##SEW##m##LMUL##_mask (const int##SEW##_t *a,			\
				 vbool##MLEN##_t mask,		\
				 vint##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseint##SEW##m##LMUL##_si_mask (mask, b,		\
						     a);		\
  else									\
    __builtin_riscv_vseint##SEW##m##LMUL##_di_mask (mask, b,		\
						     a);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstore_u##SEW##m##LMUL##_mask (const uint##SEW##_t *a,		\
				  vbool##MLEN##_t mask,		\
				  vuint##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseuint##SEW##m##LMUL##_si_mask (mask, b,		\
						      a);		\
  else									\
    __builtin_riscv_vseuint##SEW##m##LMUL##_di_mask (mask, b,		\
						      a);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstores_i##SEW##m##LMUL (const int##SEW##_t *a, word_type stride,	\
			  vint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseint##SEW##m##LMUL##_si (b, a, stride);		\
  else									\
    __builtin_riscv_vsseint##SEW##m##LMUL##_di (b, a, stride);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstores_u##SEW##m##LMUL (const uint##SEW##_t *a, word_type stride,	\
			    vuint##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_si (b, a, stride);		\
  else									\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_di (b, a, stride);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstores_i##SEW##m##LMUL##_mask (const int##SEW##_t *a,		\
				  word_type stride,			\
				  vbool##MLEN##_t mask,		\
				  vint##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseint##SEW##m##LMUL##_si_mask (mask, b,		\
						     a, stride);	\
  else									\
    __builtin_riscv_vsseint##SEW##m##LMUL##_di_mask (mask, b,		\
						     a, stride);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstores_u##SEW##m##LMUL##_mask (const uint##SEW##_t *a,		\
				   word_type stride,			\
				   vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_si_mask (mask, b,		\
						      a, stride);	\
  else									\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_di_mask (mask, b,		\
						      a, stride);	\
}

_RVV_INT_ITERATOR (_RVVINTLD)
_RVV_INT_ITERATOR (_RVVINTST)

#define _RVV_FLOAT_VEC_MOVE(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_v_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}

_RVV_FLOAT_ITERATOR (_RVV_FLOAT_VEC_MOVE)

#define _RVVFLOATLD(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vload_f##SEW##m##LMUL (const T *a)				\
{									\
  return * (vfloat##SEW##m##LMUL##_t *) a;				\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vload_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				    vfloat##SEW##m##LMUL##_t maskedoff,\
				    const T *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlefloat##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vlefloat##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vloads_f##SEW##m##LMUL (const T *a, word_type stride)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_si (a, stride);	\
  else									\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_di (a, stride);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vloads_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				    vfloat##SEW##m##LMUL##_t maskedoff,\
				    const T *a, word_type stride)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a, stride);				\
  else									\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a, stride);				\
}

#define _RVVFLOATST(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstore_f##SEW##m##LMUL (const T *a, vfloat##SEW##m##LMUL##_t b)	\
{									\
  * (vfloat##SEW##m##LMUL##_t *) a = b;				\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstore_f##SEW##m##LMUL##_mask (const T *a,				\
				   vbool##MLEN##_t mask,		\
				   vfloat##SEW##m##LMUL##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsefloat##SEW##m##LMUL##_si_mask (mask, b, a);	\
  else									\
    __builtin_riscv_vsefloat##SEW##m##LMUL##_di_mask (mask, b, a);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstores_f##SEW##m##LMUL (const T *a, word_type stride,		\
			     vfloat##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_si (b, a, stride);	\
  else									\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_di (b, a, stride);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vstores_f##SEW##m##LMUL##_mask (const T *a, word_type stride,	\
				    vbool##MLEN##_t mask,		\
				    vfloat##SEW##m##LMUL##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_si_mask (mask, b,		\
						       a, stride);	\
  else									\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_di_mask (mask, b,		\
						       a, stride);	\
}


_RVV_FLOAT_ITERATOR (_RVVFLOATLD)
_RVV_FLOAT_ITERATOR (_RVVFLOATST)

/* ??? An intrinsic with sizeless type args that doesn't call a builtin fails
   in ipa because it doesn't handle sizeless types in predicates, as called
   from will_be_nonconstant_predicate.  So all of these must use a builtin.  */

/* Define the add intrinsics.  */

#define _RVV_INT_BIN_OP(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
			    vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
				  vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					vint##SEW##m##LMUL##_t maskedoff,\
					vint##SEW##m##LMUL##_t a,	\
					vint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					 vuint##SEW##m##LMUL##_t maskedoff, \
					 vuint##SEW##m##LMUL##_t a,	\
					 vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 T b)					\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
					   uint##SEW##_t b)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					vint##SEW##m##LMUL##_t maskedoff, \
					vint##SEW##m##LMUL##_t a,	\
					T b)				\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					 vuint##SEW##m##LMUL##_t maskedoff,	\
					 vuint##SEW##m##LMUL##_t a,	\
					 uint##SEW##_t b)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_INT_BIN_OP_NOMASK(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
				  vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a, b);		\
}

#define _RVV_INT_BIN_OP_SCALAR_NOMASK(SEW, LMUL, MLEN, T, OP)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 T b)					\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
				  u##T b)				\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\

_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, add)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, add)
#if 0
/* Use inline asm one at this moment.  */
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_NOMASK, sub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR_NOMASK, sub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_NOMASK, rsub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR_NOMASK, rsub)
#endif
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, mul)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, mul)

#define _RVV_INT_ADC_SBC_OP(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  vint##SEW##m##LMUL##_t b,		\
				  vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vvm_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b,		\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##mint##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vm##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   vuint##SEW##m##LMUL##_t b,	\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vvm_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				    vuint##SEW##m##LMUL##_t b,	\
				    vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##muint##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vm##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vsm_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  int##SEW##_t b,			\
				  vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vsm_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				   int##SEW##_t b,			\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##mint##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vs_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  int##SEW##_t b)			\
{									\
  return __builtin_riscv_vm##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vsm_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   uint##SEW##_t b,			\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vsm_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				    uint##SEW##_t b,			\
				    vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##muint##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vs_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   uint##SEW##_t b)			\
{									\
  return __builtin_riscv_vm##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}



_RVV_INT_ITERATOR_ARG (_RVV_INT_ADC_SBC_OP, adc)
_RVV_INT_ITERATOR_ARG (_RVV_INT_ADC_SBC_OP, sbc)

#if 0
#define _RVV_WINT_ADD_SUB(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_v##OP##u_vv_u##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_wv_i##SEW##m##LMUL (vint##WSEW##m##WLMUL##_t a,		\
				vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_wv_i##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_wv_u##SEW##m##LMUL (vuint##WSEW##m##WLMUL##_t a,	\
				   vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_v##OP##u_wv_u##SEW##m##LMUL (a, b);		\
}

_RVV_WINT_ITERATOR_ARG (_RVV_WINT_ADD_SUB, wadd)
#endif

#define _RVVINTCMP(SEW, LMUL, MLEN, T, OP, OPU)				\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				    vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vs##OPU##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset##OP##_vv_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					 vbool##MLEN##_t maskedoff,	\
					 vint##SEW##m##LMUL##_t a,	\
					 vint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL##_mask (mask, maskedoff, \
							   a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset##OP##_vv_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					   vbool##MLEN##_t maskedoff,\
					   vuint##SEW##m##LMUL##_t a,\
					   vuint##SEW##m##LMUL##_t b)\
{									\
  return __builtin_riscv_vs##OPU##uint##SEW##m##LMUL##_mask (mask, maskedoff, \
							     a, b);	\
}

_RVV_INT_ITERATOR_ARG (_RVVINTCMP, lt, ltu)

#define _RVV_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,	\
				   T b)					\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vs_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					  vfloat##SEW##m##LMUL##_t maskedoff, \
					  vfloat##SEW##m##LMUL##_t a, \
					  T b)			\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_FLOAT_BIN_OP(SEW, LMUL, MLEN, T, OP)			\
_RVV_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,	\
			      vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
				       vfloat##SEW##m##LMUL##_t maskedoff, \
				       vfloat##SEW##m##LMUL##_t a,	\
				       vfloat##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a, b);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, add)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, sub)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP_SCALAR, rsub)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, mul)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, div)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP_SCALAR, rdiv)

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, max)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, min)

#define _RVV_FLOAT_UNARY_OP(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_v_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)	\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_v_f##SEW##m##LMUL##_mask (				\
  vbool##MLEN##_t mask,						\
  vfloat##SEW##m##LMUL##_t maskedoff, 				\
  vfloat##SEW##m##LMUL##_t a)					\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_UNARY_OP, sqrt)

#define _RVV_MASK_NULLARY_OP(MLEN, OP)					\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_b##MLEN ()						\
{									\
  return __builtin_riscv_v##OP##bool##MLEN ();				\
}

#define _RVV_MASK_BIN_OP(MLEN, OP)					\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_mm_b##MLEN (vbool##MLEN##_t a,				\
			  vbool##MLEN##_t b)				\
{									\
  return __builtin_riscv_v##OP##bool##MLEN (a, b);			\
}

#define _RVV_MASK_UNARY_OP_SCALAR(MLEN, OP)				\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_m_b##MLEN (vbool##MLEN##_t a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##bool##MLEN##_si (a);			\
  else									\
    return __builtin_riscv_v##OP##bool##MLEN##_di (a);			\
}									\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_m_b##MLEN##_mask (vbool##MLEN##_t mask,		\
				vbool##MLEN##_t a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##bool##MLEN##_si_mask (mask, a);	\
  else									\
    return __builtin_riscv_v##OP##bool##MLEN##_di_mask (mask, a);	\
}

#define _RVV_MASK_UNARY_OP_NOMASK(MLEN, OP)				\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_m_b##MLEN (vbool##MLEN##_t a)				\
{									\
 return __builtin_riscv_v##OP##bool##MLEN (a);				\
}									\

#define _RVV_MASK_UNARY_OP(MLEN, OP)					\
  _RVV_MASK_UNARY_OP_NOMASK(MLEN, OP)					\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_m_b##MLEN##_mask (vbool##MLEN##_t mask,		\
				vbool##MLEN##_t maskedoff,		\
				vbool##MLEN##_t a)			\
{									\
  return __builtin_riscv_v##OP##bool##MLEN##_mask (mask, maskedoff, a);	\
}

_RVV_MASK_ITERATOR (_RVV_MASK_NULLARY_OP, clr)
_RVV_MASK_ITERATOR (_RVV_MASK_NULLARY_OP, set)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_SCALAR, popc)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_SCALAR, first)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sbf)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sof)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sif)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_NOMASK, not)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, and)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, or)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, xor)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, nand)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, nor)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, xnor)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, andnot)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, ornot)

#define _RVV_IOTA(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
viota_m_##SEW##m##LMUL (vbool##MLEN##_t a)			\
{									\
  return __builtin_riscv_viotauint##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
viota_m_##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,			\
			       vuint##SEW##m##LMUL##_t maskedoff,	\
				      vbool##MLEN##_t a)		\
{									\
  return __builtin_riscv_viotauint##SEW##m##LMUL##_mask (mask,		\
							 maskedoff, a);	\
}

_RVV_INT_ITERATOR (_RVV_IOTA)

#define _RVV_VID(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vid_##SEW##m##LMUL ()						\
{									\
  return __builtin_riscv_viduint##SEW##m##LMUL ();			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vid_##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,			\
			      vuint##SEW##m##LMUL##_t maskedoff)	\
{									\
  return __builtin_riscv_viduint##SEW##m##LMUL##_mask (mask, maskedoff);\
}


_RVV_INT_ITERATOR (_RVV_VID)

#define _RVV_MASK_MOVE(MLEN, OP)                                       \
__extension__ extern __inline vbool##MLEN##_t                       \
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))    \
vcpy_m_b##MLEN (vbool##MLEN##_t a)                            \
{                                                                      \
  return a;                                                            \
}

_RVV_MASK_ITERATOR (_RVV_MASK_MOVE,)

/* Helpers for FP widening multiply.  */
#if 0
__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmul_vv_float16m4 (vfloat16m4_t a, vfloat16m4_t b)
{
  return __builtin_riscv_vfwmulfloat16m4 (a, b);
}

__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmul_vs_float16m4 (vfloat16m4_t a, const float16_t b)
{
  return __builtin_riscv_vfwmulfloat16m4_scalar (a, b);
}
#endif
/* Helpers for FP widening multiply accumulate.  */

__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmadd_vv_f16m4 (vfloat16m4_t a, vfloat16m4_t b, vfloat32m8_t c)
{
  return __builtin_riscv_vfwmaddfloat16m4 (a, b, c);
}

__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmsub_vv_f16m4 (vfloat16m4_t a, vfloat16m4_t b, vfloat32m8_t c)
{
  return __builtin_riscv_vfwmsubfloat16m4 (a, b, c);
}

__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmadd_vs_f16m4 (vfloat16m4_t a, const float16_t b,
			vfloat32m8_t c)
{
  return __builtin_riscv_vfwmaddfloat16m4_scalar (a, b, c);
}

/* Reductions.  */

#define _RVV_REDUC_OP(SEW, LMUL, MLEN, T, OP, OPU)			\
__extension__ extern __inline vint##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,	\
				    vint##SEW##m1_t b)		\
{									\
  return __builtin_riscv_reduc_##OP##int##SEW##m##LMUL (b, a);		\
}									\
__extension__ extern __inline vuint##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				      vuint##SEW##m1_t b)		\
{									\
  return __builtin_riscv_reduc_##OPU##uint##SEW##m##LMUL (b, a);	\
}									\
__extension__ extern __inline vint##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
				    vint##SEW##m##LMUL##_t a,	\
				    vint##SEW##m1_t b)		\
{									\
  return __builtin_riscv_reduc_##OP##int##SEW##m##LMUL##_mask (mask,	\
							       b, a);	\
}									\
__extension__ extern __inline vuint##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
				      vuint##SEW##m##LMUL##_t a,	\
				      vuint##SEW##m1_t b)		\
{									\
  return __builtin_riscv_reduc_##OPU##uint##SEW##m##LMUL##_mask (mask,	\
								 b, a);	\
}

_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, sum, sum)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, max, maxu)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, min, minu)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, and, and)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, or, or)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, xor, xor)

#define _RVV_WREDUC_OP(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, OPU)	\
__extension__ extern __inline vint##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,	\
				     vint##WSEW##m1_t b)		\
{									\
  return __builtin_riscv_wreduc_##OP##int##SEW##m##LMUL (b, a);		\
}									\
__extension__ extern __inline vuint##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				       vuint##WSEW##m1_t b)		\
{									\
  return __builtin_riscv_wreduc_##OPU##uint##SEW##m##LMUL (b, a);	\
}									\
__extension__ extern __inline vint##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_i##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
				    vint##SEW##m##LMUL##_t a,	\
				    vint##WSEW##m1_t b)		\
{									\
  return __builtin_riscv_wreduc_##OP##int##SEW##m##LMUL##_mask (mask,	\
							     b, a);	\
}									\
__extension__ extern __inline vuint##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_u##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
				      vuint##SEW##m##LMUL##_t a,	\
				      vuint##WSEW##m1_t b)		\
{									\
  return __builtin_riscv_wreduc_##OPU##uint##SEW##m##LMUL##_mask (mask,	\
								 b, a);	\
}

_RVV_WINT_ITERATOR_ARG (_RVV_WREDUC_OP, sum, sumu)

#define _RVV_FREDUC_OP(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vfloat##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,	\
				       vfloat##SEW##m1_t b)		\
{									\
  return __builtin_riscv_freduc_##OP##float##SEW##m##LMUL (b, a);	\
}									\
__extension__ extern __inline vfloat##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
				    vfloat##SEW##m##LMUL##_t a,	\
				    vfloat##SEW##m1_t b)		\
{									\
  return __builtin_riscv_freduc_##OP##float##SEW##m##LMUL##_mask (mask,\
							     b, a);	\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, sum)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, osum)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, max)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, min)

#define _RVV_FWREDUC_OP(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vfloat##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,	\
					vfloat##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_fwreduc_##OP##float##SEW##m##LMUL (b, a);	\
}									\
__extension__ extern __inline vfloat##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,	\
					       vfloat##SEW##m##LMUL##_t a,\
					       vfloat##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_fwreduc_##OP##float##SEW##m##LMUL##_mask (mask,\
							     b, a);	\
}									\

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FWREDUC_OP, sum)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_FWREDUC_OP, osum)


#define _RVV_VREINTERPRET(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_f##SEW##_i##SEW##_v_##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_f##SEW##_i##SEW##_v_##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_f##SEW##_u##SEW##_v_##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_f##SEW##_u##SEW##_v_##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_i##SEW##_f##SEW##_v_##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_i##SEW##_f##SEW##_v_##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_u##SEW##_f##SEW##_v_##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_u##SEW##_f##SEW##_v_##SEW##m##LMUL (a);\
}

#define _RVV_VREINTERPRET_INT(SEW, LMUL, MLEN, T)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_i##SEW##_u##SEW##_v_##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_i##SEW##_u##SEW##_v_##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_u##SEW##_i##SEW##_v_##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_u##SEW##_i##SEW##_v_##SEW##m##LMUL (a);\
}

_RVV_FLOAT_ITERATOR (_RVV_VREINTERPRET)

_RVV_INT_ITERATOR (_RVV_VREINTERPRET_INT)

#define _RVV_MAC_FLOAT(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t acc,		\
			  vfloat##SEW##m##LMUL##_t a,			\
			  vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_sv_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t acc,		\
			  _RVV_F##SEW##_TYPE a,				\
			  vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				   vfloat##SEW##m##LMUL##_t acc,	\
				   vfloat##SEW##m##LMUL##_t a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_mask (mask, acc, a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_sv_f##SEW##m##LMUL##_mask (vbool##MLEN##_t mask,		\
				   vfloat##SEW##m##LMUL##_t acc,	\
				   _RVV_F##SEW##_TYPE a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, macc)


/* riscv_vector_asm.h contain the inline asm version of intrinsic function,
   it will removed once we implement all intrinsic function in built-in function
   way . */
#include <riscv_vector_asm.h>

#endif
#endif
