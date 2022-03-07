/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE)						\
  void __attribute__ ((noinline, noclone))				\
  f_##DATA_TYPE (DATA_TYPE *restrict dest, DATA_TYPE *restrict *src,	\
		 int n)							\
  {									\
    for (int i = 0; i < n; ++i)						\
      dest[i] += *src[i];						\
  }

#define TEST_ALL(T)				\
  T (int8_t)					\
  T (uint8_t)					\
  T (int16_t)					\
  T (uint16_t)					\
  T (_Float16)					\
  T (int32_t)					\
  T (uint32_t)					\
  T (float)					\
  T (int64_t)					\
  T (uint64_t)					\
  T (double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 11 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 11 "optimized" } } */