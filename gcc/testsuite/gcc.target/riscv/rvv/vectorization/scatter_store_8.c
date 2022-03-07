/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#ifndef INDEX32
#define INDEX16 int16_t
#define INDEX32 int32_t
#endif

#define TEST_LOOP(DATA_TYPE, BITS)					\
  void __attribute__ ((noinline, noclone))				\
  f_##DATA_TYPE (DATA_TYPE *restrict dest, DATA_TYPE *restrict src,	\
		 INDEX##BITS *indices, INDEX##BITS mask, int n)		\
  {									\
    for (int i = 0; i < n; ++i)						\
      dest[(INDEX##BITS) (indices[i] + mask)] = src[i];			\
  }

#define TEST_ALL(T)				\
  T (int8_t, 16)				\
  T (uint8_t, 16)				\
  T (int16_t, 16)				\
  T (uint16_t, 16)				\
  T (_Float16, 16)				\
  T (int32_t, 16)				\
  T (uint32_t, 16)				\
  T (float, 16)					\
  T (int64_t, 32)				\
  T (uint64_t, 32)				\
  T (double, 32)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_SCATTER_STORE" 11 "optimized" } } */