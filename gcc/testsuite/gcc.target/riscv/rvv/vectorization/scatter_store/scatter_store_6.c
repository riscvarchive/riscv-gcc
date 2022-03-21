/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#ifndef INDEX32
#define INDEX8 int8_t
#define INDEX16 int16_t
#define INDEX32 int32_t
#endif

/* Invoked 18 times for each data size.  */
#define TEST_LOOP(DATA_TYPE, BITS)					\
  void __attribute__ ((noinline, noclone))				\
  f_##DATA_TYPE (DATA_TYPE *restrict dest, DATA_TYPE *restrict src,	\
		 INDEX##BITS *indices, INDEX##BITS mask, int n)		\
  {									\
    for (int i = 9; i < n; ++i)						\
      dest[(INDEX##BITS) (indices[i] | mask)] = src[i] + 1;		\
  }

#define TEST_ALL(T)				\
  T (int16_t, 8)				\
  T (uint16_t, 8)				\
  T (_Float16, 8)					\
  T (int32_t, 16)				\
  T (uint32_t, 16)				\
  T (float, 16)					\
  T (int64_t, 32)				\
  T (uint64_t, 32)				\
  T (double, 32)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_SCATTER_STORE" 9 "optimized" } } */