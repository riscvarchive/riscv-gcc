/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(TYPE1, TYPE2)						\
  void __attribute__ ((noinline, noclone))									\
  f_##TYPE1##_##TYPE2 (TYPE1 *restrict dst, TYPE1 *restrict src1,	\
		       TYPE2 *restrict src2, uint32_t *restrict index,	\
		       int n)						\
  {									\
    for (int i = 0; i < n; ++i)						\
      dst[i] += src1[i] + src2[index[i]];				\
  }

#define TEST_ALL(T) \
  T (int16_t, int8_t) \
  T (int32_t, int8_t) \
  T (int64_t, int8_t) \
  T (_Float16, int8_t) \
  T (float, int8_t) \
  T (double, int8_t) \
  T (int32_t, int16_t) \
  T (int64_t, int16_t) \
  T (float, int16_t) \
  T (double, int16_t) \
  T (int64_t, int32_t) \
  T (double, int32_t)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 12 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 12 "optimized" } } */