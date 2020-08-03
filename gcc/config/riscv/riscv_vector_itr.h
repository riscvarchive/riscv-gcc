/* RISC-V Vector extension instructions include file.

   Copyright (C) 2020 Free Software Foundation, Inc.
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

#ifndef _GCC_RISCV_VECTOR_ITR_H
#define _GCC_RISCV_VECTOR_ITR_H 1

#ifndef _GCC_RISCV_VECTOR_H
#error "Never included riscv_vector_itr.h, plz include riscv_vector.h"
#endif

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
   along with its corresponding vector, integer modes, and info for
   corresponding indexed load and store vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, ISEW, ILMUL)  */
#define _RVV_INT_INDEX_ITERATOR(MACRO)	\
  MACRO ( 8, 1,  8,  int8_t,  8, 1)	\
  MACRO ( 8, 1,  8,  int8_t, 16, 2)	\
  MACRO ( 8, 1,  8,  int8_t, 32, 4)	\
  MACRO ( 8, 1,  8,  int8_t, 64, 8)	\
  MACRO ( 8, 2,  4,  int8_t,  8, 2)	\
  MACRO ( 8, 2,  4,  int8_t, 16, 4)	\
  MACRO ( 8, 2,  4,  int8_t, 32, 8)	\
  MACRO ( 8, 4,  2,  int8_t,  8, 4)	\
  MACRO ( 8, 4,  2,  int8_t, 16, 8)	\
  MACRO ( 8, 8,  1,  int8_t,  8, 8)	\
  MACRO (16, 1, 16, int16_t, 16, 1)	\
  MACRO (16, 1, 16, int16_t, 32, 2)	\
  MACRO (16, 1, 16, int16_t, 64, 4)	\
  MACRO (16, 2,  8, int16_t,  8, 1)	\
  MACRO (16, 2,  8, int16_t, 16, 2)	\
  MACRO (16, 2,  8, int16_t, 32, 4)	\
  MACRO (16, 2,  8, int16_t, 64, 8)	\
  MACRO (16, 4,  4, int16_t,  8, 2)	\
  MACRO (16, 4,  4, int16_t, 16, 4)	\
  MACRO (16, 4,  4, int16_t, 32, 8)	\
  MACRO (16, 8,  2, int16_t,  8, 4)	\
  MACRO (16, 8,  2, int16_t, 16, 8)	\
  MACRO (32, 1, 32, int32_t, 32, 1)	\
  MACRO (32, 1, 32, int32_t, 64, 2)	\
  MACRO (32, 2, 16, int32_t, 16, 1)	\
  MACRO (32, 2, 16, int32_t, 32, 2)	\
  MACRO (32, 2, 16, int32_t, 64, 4)	\
  MACRO (32, 4,  8, int32_t,  8, 1)	\
  MACRO (32, 4,  8, int32_t, 16, 2)	\
  MACRO (32, 4,  8, int32_t, 32, 4)	\
  MACRO (32, 4,  8, int32_t, 64, 8)	\
  MACRO (32, 8,  4, int32_t,  8, 2)	\
  MACRO (32, 8,  4, int32_t, 16, 4)	\
  MACRO (32, 8,  4, int32_t, 32, 8)	\
  MACRO (64, 1, 64, int64_t, 64, 1)	\
  MACRO (64, 2, 32, int64_t, 32, 1)	\
  MACRO (64, 2, 32, int64_t, 64, 2)	\
  MACRO (64, 4, 16, int64_t, 16, 1)	\
  MACRO (64, 4, 16, int64_t, 32, 2)	\
  MACRO (64, 4, 16, int64_t, 64, 4)	\
  MACRO (64, 8,  8, int64_t,  8, 1)	\
  MACRO (64, 8,  8, int64_t, 16, 2)	\
  MACRO (64, 8,  8, int64_t, 32, 4)	\
  MACRO (64, 8,  8, int64_t, 64, 8)

#define _RVV_INT_INDEX_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1,  8,  int8_t,  8, 1, __VA_ARGS__)	\
  MACRO ( 8, 1,  8,  int8_t, 16, 2, __VA_ARGS__)	\
  MACRO ( 8, 1,  8,  int8_t, 32, 4, __VA_ARGS__)	\
  MACRO ( 8, 1,  8,  int8_t, 64, 8, __VA_ARGS__)	\
  MACRO ( 8, 2,  4,  int8_t,  8, 2, __VA_ARGS__)	\
  MACRO ( 8, 2,  4,  int8_t, 16, 4, __VA_ARGS__)	\
  MACRO ( 8, 2,  4,  int8_t, 32, 8, __VA_ARGS__)	\
  MACRO ( 8, 4,  2,  int8_t,  8, 4, __VA_ARGS__)	\
  MACRO ( 8, 4,  2,  int8_t, 16, 8, __VA_ARGS__)	\
  MACRO ( 8, 8,  1,  int8_t,  8, 8, __VA_ARGS__)	\
  MACRO (16, 1, 16, int16_t, 16, 1, __VA_ARGS__)	\
  MACRO (16, 1, 16, int16_t, 32, 2, __VA_ARGS__)	\
  MACRO (16, 1, 16, int16_t, 64, 4, __VA_ARGS__)	\
  MACRO (16, 2,  8, int16_t,  8, 1, __VA_ARGS__)	\
  MACRO (16, 2,  8, int16_t, 16, 2, __VA_ARGS__)	\
  MACRO (16, 2,  8, int16_t, 32, 4, __VA_ARGS__)	\
  MACRO (16, 2,  8, int16_t, 64, 8, __VA_ARGS__)	\
  MACRO (16, 4,  4, int16_t,  8, 2, __VA_ARGS__)	\
  MACRO (16, 4,  4, int16_t, 16, 4, __VA_ARGS__)	\
  MACRO (16, 4,  4, int16_t, 32, 8, __VA_ARGS__)	\
  MACRO (16, 8,  2, int16_t,  8, 4, __VA_ARGS__)	\
  MACRO (16, 8,  2, int16_t, 16, 8, __VA_ARGS__)	\
  MACRO (32, 1, 32, int32_t, 32, 1, __VA_ARGS__)	\
  MACRO (32, 1, 32, int32_t, 64, 2, __VA_ARGS__)	\
  MACRO (32, 2, 16, int32_t, 16, 1, __VA_ARGS__)	\
  MACRO (32, 2, 16, int32_t, 32, 2, __VA_ARGS__)	\
  MACRO (32, 2, 16, int32_t, 64, 4, __VA_ARGS__)	\
  MACRO (32, 4,  8, int32_t,  8, 1, __VA_ARGS__)	\
  MACRO (32, 4,  8, int32_t, 16, 2, __VA_ARGS__)	\
  MACRO (32, 4,  8, int32_t, 32, 4, __VA_ARGS__)	\
  MACRO (32, 4,  8, int32_t, 64, 8, __VA_ARGS__)	\
  MACRO (32, 8,  4, int32_t,  8, 2, __VA_ARGS__)	\
  MACRO (32, 8,  4, int32_t, 16, 4, __VA_ARGS__)	\
  MACRO (32, 8,  4, int32_t, 32, 8, __VA_ARGS__)	\
  MACRO (64, 1, 64, int64_t, 64, 1, __VA_ARGS__)	\
  MACRO (64, 2, 32, int64_t, 32, 1, __VA_ARGS__)	\
  MACRO (64, 2, 32, int64_t, 64, 2, __VA_ARGS__)	\
  MACRO (64, 4, 16, int64_t, 16, 1, __VA_ARGS__)	\
  MACRO (64, 4, 16, int64_t, 32, 2, __VA_ARGS__)	\
  MACRO (64, 4, 16, int64_t, 64, 4, __VA_ARGS__)	\
  MACRO (64, 8,  8, int64_t,  8, 1, __VA_ARGS__)	\
  MACRO (64, 8,  8, int64_t, 16, 2, __VA_ARGS__)	\
  MACRO (64, 8,  8, int64_t, 32, 4, __VA_ARGS__)	\
  MACRO (64, 8,  8, int64_t, 64, 8, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, floating-point modes, and info for
   corresponding indexed load and store vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, ISEW, ILMUL)  */
#define _RVV_FLOAT_INDEX_ITERATOR(MACRO)	\
  MACRO (16, 1, 16, float16_t, 16, 1)	\
  MACRO (16, 1, 16, float16_t, 32, 2)	\
  MACRO (16, 1, 16, float16_t, 64, 4)	\
  MACRO (16, 2,  8, float16_t,  8, 1)	\
  MACRO (16, 2,  8, float16_t, 16, 2)	\
  MACRO (16, 2,  8, float16_t, 32, 4)	\
  MACRO (16, 2,  8, float16_t, 64, 8)	\
  MACRO (16, 4,  4, float16_t,  8, 2)	\
  MACRO (16, 4,  4, float16_t, 16, 4)	\
  MACRO (16, 4,  4, float16_t, 32, 8)	\
  MACRO (16, 8,  2, float16_t,  8, 4)	\
  MACRO (16, 8,  2, float16_t, 16, 8)	\
  MACRO (32, 1, 32,     float, 32, 1)	\
  MACRO (32, 1, 32,     float, 64, 2)	\
  MACRO (32, 2, 16,     float, 16, 1)	\
  MACRO (32, 2, 16,     float, 32, 2)	\
  MACRO (32, 2, 16,     float, 64, 4)	\
  MACRO (32, 4,  8,     float,  8, 1)	\
  MACRO (32, 4,  8,     float, 16, 2)	\
  MACRO (32, 4,  8,     float, 32, 4)	\
  MACRO (32, 4,  8,     float, 64, 8)	\
  MACRO (32, 8,  4,     float,  8, 2)	\
  MACRO (32, 8,  4,     float, 16, 4)	\
  MACRO (32, 8,  4,     float, 32, 8)	\
  MACRO (64, 1, 64,    double, 64, 1)	\
  MACRO (64, 2, 32,    double, 32, 1)	\
  MACRO (64, 2, 32,    double, 64, 2)	\
  MACRO (64, 4, 16,    double, 16, 1)	\
  MACRO (64, 4, 16,    double, 32, 2)	\
  MACRO (64, 4, 16,    double, 64, 4)	\
  MACRO (64, 8,  8,    double,  8, 1)	\
  MACRO (64, 8,  8,    double, 16, 2)	\
  MACRO (64, 8,  8,    double, 32, 4)	\
  MACRO (64, 8,  8,    double, 64, 8)

#define _RVV_FLOAT_INDEX_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 16, float16_t, 16, 1, __VA_ARGS__)	\
  MACRO (16, 1, 16, float16_t, 32, 2, __VA_ARGS__)	\
  MACRO (16, 1, 16, float16_t, 64, 4, __VA_ARGS__)	\
  MACRO (16, 2,  8, float16_t,  8, 1, __VA_ARGS__)	\
  MACRO (16, 2,  8, float16_t, 16, 2, __VA_ARGS__)	\
  MACRO (16, 2,  8, float16_t, 32, 4, __VA_ARGS__)	\
  MACRO (16, 2,  8, float16_t, 64, 8, __VA_ARGS__)	\
  MACRO (16, 4,  4, float16_t,  8, 2, __VA_ARGS__)	\
  MACRO (16, 4,  4, float16_t, 16, 4, __VA_ARGS__)	\
  MACRO (16, 4,  4, float16_t, 32, 8, __VA_ARGS__)	\
  MACRO (16, 8,  2, float16_t,  8, 4, __VA_ARGS__)	\
  MACRO (16, 8,  2, float16_t, 16, 8, __VA_ARGS__)	\
  MACRO (32, 1, 32,     float, 32, 1, __VA_ARGS__)	\
  MACRO (32, 1, 32,     float, 64, 2, __VA_ARGS__)	\
  MACRO (32, 2, 16,     float, 16, 1, __VA_ARGS__)	\
  MACRO (32, 2, 16,     float, 32, 2, __VA_ARGS__)	\
  MACRO (32, 2, 16,     float, 64, 4, __VA_ARGS__)	\
  MACRO (32, 4,  8,     float,  8, 1, __VA_ARGS__)	\
  MACRO (32, 4,  8,     float, 16, 2, __VA_ARGS__)	\
  MACRO (32, 4,  8,     float, 32, 4, __VA_ARGS__)	\
  MACRO (32, 4,  8,     float, 64, 8, __VA_ARGS__)	\
  MACRO (32, 8,  4,     float,  8, 2, __VA_ARGS__)	\
  MACRO (32, 8,  4,     float, 16, 4, __VA_ARGS__)	\
  MACRO (32, 8,  4,     float, 32, 8, __VA_ARGS__)	\
  MACRO (64, 1, 64,    double, 64, 1, __VA_ARGS__)	\
  MACRO (64, 2, 32,    double, 32, 1, __VA_ARGS__)	\
  MACRO (64, 2, 32,    double, 64, 2, __VA_ARGS__)	\
  MACRO (64, 4, 16,    double, 16, 1, __VA_ARGS__)	\
  MACRO (64, 4, 16,    double, 32, 2, __VA_ARGS__)	\
  MACRO (64, 4, 16,    double, 64, 4, __VA_ARGS__)	\
  MACRO (64, 8,  8,    double,  8, 1, __VA_ARGS__)	\
  MACRO (64, 8,  8,    double, 16, 2, __VA_ARGS__)	\
  MACRO (64, 8,  8,    double, 32, 4, __VA_ARGS__)	\
  MACRO (64, 8,  8,    double, 64, 8, __VA_ARGS__)

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

/* An iterator to call a macro with every supported SEW, LMUL and MLEN value,
   along with its corresponding vector, scalar modes, info for
   corresponding 8 times widening vector type and extra arguments.

   MACRO (SEW, LMUL, MLEN, TYPE, WSEW, WLMUL, WTYPE)  */
#define _RVV_EINT_ITERATOR_ARG(MACRO, ...)				\
  MACRO ( 8, 1,  8,  int8_t, 64, 8, int64_t, __VA_ARGS__)

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

/* An iterator to call a macro with every supported SEW, LMUL, MLEN and
   corresponding scalar integer and floating-point modes
   with extra arguments for float operations.  */
#define _RVV_FLOAT_INT_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 16, float16_t, int16_t, __VA_ARGS__)	\
  MACRO (16, 2,  8, float16_t, int16_t, __VA_ARGS__)	\
  MACRO (16, 4,  4, float16_t, int16_t, __VA_ARGS__)	\
  MACRO (16, 8,  2, float16_t, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 32,     float, int32_t, __VA_ARGS__)	\
  MACRO (32, 2, 16,     float, int32_t, __VA_ARGS__)	\
  MACRO (32, 4,  8,     float, int32_t, __VA_ARGS__)	\
  MACRO (32, 8,  4,     float, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 64,    double, int64_t, __VA_ARGS__)	\
  MACRO (64, 2, 32,    double, int64_t, __VA_ARGS__)	\
  MACRO (64, 4, 16,    double, int64_t, __VA_ARGS__)	\
  MACRO (64, 8,  8,    double, int64_t, __VA_ARGS__)

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

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=2.  */
#define _RVV_INT_TUPLE_NF2_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 2,  8,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 2, 2,  4,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 4, 2,  2,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 2, 16, int16_t, __VA_ARGS__)	\
  MACRO (16, 2, 2,  8, int16_t, __VA_ARGS__)	\
  MACRO (16, 4, 2,  4, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 2, 32, int32_t, __VA_ARGS__)	\
  MACRO (32, 2, 2, 16, int32_t, __VA_ARGS__)	\
  MACRO (32, 4, 2,  8, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 2, 64, int64_t, __VA_ARGS__)	\
  MACRO (64, 2, 2, 32, int64_t, __VA_ARGS__)	\
  MACRO (64, 4, 2, 16, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=3.  */
#define _RVV_INT_TUPLE_NF3_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 3,  8,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 2, 3,  4,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 3, 16, int16_t, __VA_ARGS__)	\
  MACRO (16, 2, 3,  8, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 3, 32, int32_t, __VA_ARGS__)	\
  MACRO (32, 2, 3, 16, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 3, 64, int64_t, __VA_ARGS__)	\
  MACRO (64, 2, 3, 32, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=4.  */
#define _RVV_INT_TUPLE_NF4_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 4,  8,  int8_t, __VA_ARGS__)	\
  MACRO ( 8, 2, 4,  4,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 4, 16, int16_t, __VA_ARGS__)	\
  MACRO (16, 2, 4,  8, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 4, 32, int32_t, __VA_ARGS__)	\
  MACRO (32, 2, 4, 16, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 4, 64, int64_t, __VA_ARGS__)	\
  MACRO (64, 2, 4, 32, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=5.  */
#define _RVV_INT_TUPLE_NF5_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 5,  8,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 5, 16, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 5, 32, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 5, 64, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=6.  */
#define _RVV_INT_TUPLE_NF6_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 6,  8,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 6, 16, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 6, 32, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 6, 64, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=7.  */
#define _RVV_INT_TUPLE_NF7_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 7,  8,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 7, 16, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 7, 32, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 7, 64, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple operations
   with NF=8.  */
#define _RVV_INT_TUPLE_NF8_ITERATOR_ARG(MACRO, ...)	\
  MACRO ( 8, 1, 8,  8,  int8_t, __VA_ARGS__)	\
  MACRO (16, 1, 8, 16, int16_t, __VA_ARGS__)	\
  MACRO (32, 1, 8, 32, int32_t, __VA_ARGS__)	\
  MACRO (64, 1, 8, 64, int64_t, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for integer tuple
   operations.  */
#define _RVV_INT_TUPLE_ITERATOR_ARG(MACRO, ...)		\
  _RVV_INT_TUPLE_NF2_ITERATOR_ARG (MACRO, __VA_ARGS__)	\
  _RVV_INT_TUPLE_NF3_ITERATOR_ARG (MACRO, __VA_ARGS__)	\
  _RVV_INT_TUPLE_NF4_ITERATOR_ARG (MACRO, __VA_ARGS__)	\
  _RVV_INT_TUPLE_NF5_ITERATOR_ARG (MACRO, __VA_ARGS__)	\
  _RVV_INT_TUPLE_NF6_ITERATOR_ARG (MACRO, __VA_ARGS__)	\
  _RVV_INT_TUPLE_NF7_ITERATOR_ARG (MACRO, __VA_ARGS__)	\
  _RVV_INT_TUPLE_NF8_ITERATOR_ARG (MACRO, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=2.  */
#define _RVV_FLOAT_TUPLE_NF2_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 2, 16, float16_t, __VA_ARGS__)		\
  MACRO (16, 2, 2,  8, float16_t, __VA_ARGS__)		\
  MACRO (16, 4, 2,  4, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 2, 32,     float, __VA_ARGS__)		\
  MACRO (32, 2, 2, 16,     float, __VA_ARGS__)		\
  MACRO (32, 4, 2,  8,     float, __VA_ARGS__)		\
  MACRO (64, 1, 2, 64,    double, __VA_ARGS__)		\
  MACRO (64, 2, 2, 32,    double, __VA_ARGS__)		\
  MACRO (64, 4, 2, 16,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=3.  */
#define _RVV_FLOAT_TUPLE_NF3_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 3, 16, float16_t, __VA_ARGS__)		\
  MACRO (16, 2, 3,  8, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 3, 32,     float, __VA_ARGS__)		\
  MACRO (32, 2, 3, 16,     float, __VA_ARGS__)		\
  MACRO (64, 1, 3, 64,    double, __VA_ARGS__)		\
  MACRO (64, 2, 3, 32,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=4.  */
#define _RVV_FLOAT_TUPLE_NF4_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 4, 16, float16_t, __VA_ARGS__)		\
  MACRO (16, 2, 4,  8, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 4, 32,     float, __VA_ARGS__)		\
  MACRO (32, 2, 4, 16,     float, __VA_ARGS__)		\
  MACRO (64, 1, 4, 64,    double, __VA_ARGS__)		\
  MACRO (64, 2, 4, 32,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=5.  */
#define _RVV_FLOAT_TUPLE_NF5_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 5, 16, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 5, 32,     float, __VA_ARGS__)		\
  MACRO (64, 1, 5, 64,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=6.  */
#define _RVV_FLOAT_TUPLE_NF6_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 6, 16, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 6, 32,     float, __VA_ARGS__)		\
  MACRO (64, 1, 6, 64,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=7.  */
#define _RVV_FLOAT_TUPLE_NF7_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 7, 16, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 7, 32,     float, __VA_ARGS__)		\
  MACRO (64, 1, 7, 64,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple operations
   with NF=8.  */
#define _RVV_FLOAT_TUPLE_NF8_ITERATOR_ARG(MACRO, ...)	\
  MACRO (16, 1, 8, 16, float16_t, __VA_ARGS__)		\
  MACRO (32, 1, 8, 32,     float, __VA_ARGS__)		\
  MACRO (64, 1, 8, 64,    double, __VA_ARGS__)

/* An iterator to call a macro with every supported SEW, LMUL, NF, MLEN and
   corresponding scalar modes with extra arguments for float tuple
   operations.  */
#define _RVV_FLOAT_TUPLE_ITERATOR_ARG(MACRO, ...)	\
  _RVV_FLOAT_TUPLE_NF2_ITERATOR_ARG (MACRO, __VA_ARGS__)\
  _RVV_FLOAT_TUPLE_NF3_ITERATOR_ARG (MACRO, __VA_ARGS__)\
  _RVV_FLOAT_TUPLE_NF4_ITERATOR_ARG (MACRO, __VA_ARGS__)\
  _RVV_FLOAT_TUPLE_NF5_ITERATOR_ARG (MACRO, __VA_ARGS__)\
  _RVV_FLOAT_TUPLE_NF6_ITERATOR_ARG (MACRO, __VA_ARGS__)\
  _RVV_FLOAT_TUPLE_NF7_ITERATOR_ARG (MACRO, __VA_ARGS__)\
  _RVV_FLOAT_TUPLE_NF8_ITERATOR_ARG (MACRO, __VA_ARGS__)
