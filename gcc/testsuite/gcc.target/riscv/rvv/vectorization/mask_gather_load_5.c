/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#ifndef INDEX32
#define INDEX32 int32_t
#define INDEX64 int64_t
#endif

#define TEST_LOOP(DATA_TYPE, CMP_TYPE)					\
  void __attribute__ ((noinline, noclone))									\
  f_##DATA_TYPE##_##CMP_TYPE						\
    (DATA_TYPE *restrict dest, DATA_TYPE *restrict *restrict src,	\
     CMP_TYPE *cmp1, CMP_TYPE *cmp2, int n)				\
  {									\
    for (int i = 0; i < n; ++i)						\
      if (cmp1[i] == cmp2[i])						\
	dest[i] += *src[i];						\
  }

#define TEST_TYPE(T, DATA_TYPE)		\
  T (DATA_TYPE, int8_t)		\
  T (DATA_TYPE, uint8_t)		\
  T (DATA_TYPE, int16_t)		\
  T (DATA_TYPE, uint16_t)		\
  T (DATA_TYPE, _Float16)     \
  T (DATA_TYPE, int32_t)		\
  T (DATA_TYPE, uint32_t)		\
  T (DATA_TYPE, float)     \
  T (DATA_TYPE, int64_t)		\
  T (DATA_TYPE, uint64_t)		\
  T (DATA_TYPE, double)

#define TEST_ALL(T)			\
  TEST_TYPE (T, int8_t)		\
  TEST_TYPE (T, uint8_t)		\
  TEST_TYPE (T, int16_t)		\
  TEST_TYPE (T, uint16_t)		\
  TEST_TYPE (T, _Float16)     \
  TEST_TYPE (T, int32_t)		\
  TEST_TYPE (T, uint32_t)		\
  TEST_TYPE (T, float)     \
  TEST_TYPE (T, int64_t)		\
  TEST_TYPE (T, uint64_t)		\
  TEST_TYPE (T, double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_MASK_GATHER_LOAD" 121 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 121 "optimized" } } */