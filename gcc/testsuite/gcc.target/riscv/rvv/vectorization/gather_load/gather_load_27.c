/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, OTHER_TYPE)				\
  void __attribute__ ((noinline, noclone))				\
  f_##DATA_TYPE##_##BITS (DATA_TYPE *restrict dest,			\
			  DATA_TYPE *restrict src,			\
			  OTHER_TYPE *restrict other,			\
			  OTHER_TYPE mask,				\
			  int stride, int n)				\
  {									\
    for (int i = 0; i < n; ++i)						\
      dest[i] = src[i * stride] + (OTHER_TYPE) (other[i] | mask);	\
  }

#define TEST_ALL(T)				\
  T (int16_t, int32_t)				\
  T (uint16_t, int32_t)				\
  T (_Float16, int32_t)				\
  T (int32_t, int16_t)				\
  T (uint32_t, int16_t)				\
  T (float, int16_t)				\
  T (int64_t, int32_t)				\
  T (uint64_t, int32_t)				\
  T (double, int32_t)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 9 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 9 "optimized" } } */