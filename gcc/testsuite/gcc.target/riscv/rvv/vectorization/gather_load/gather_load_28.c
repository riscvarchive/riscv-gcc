/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, NAME, SCALE)			\
  void __attribute__ ((noinline, noclone))			\
  f_##DATA_TYPE##_##NAME (DATA_TYPE *restrict dest,		\
			   DATA_TYPE *restrict src, int n)	\
  {								\
    for (int i = 0; i < n; ++i)					\
      dest[i] += src[i * SCALE];				\
  }

#define TEST_TYPE(T, DATA_TYPE)			\
  T (DATA_TYPE, 91, 91)				\
  T (DATA_TYPE, 177, 177)				\
  T (DATA_TYPE, 11, 11)				\
  T (DATA_TYPE, 200, 200)			\
  T (DATA_TYPE, m100, -100)

#define TEST_ALL(T)				\
  TEST_TYPE (T, int16_t)			\
  TEST_TYPE (T, uint16_t)			\
  TEST_TYPE (T, _Float16)				\
  TEST_TYPE (T, int32_t)			\
  TEST_TYPE (T, uint32_t)			\
  TEST_TYPE (T, float)				\
  TEST_TYPE (T, int64_t)			\
  TEST_TYPE (T, uint64_t)			\
  TEST_TYPE (T, double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 45 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 45 "optimized" } } */