/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3 -fno-trapping-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define N 80

#define DEF_LOOP(INT_TYPE, FLOAT_TYPE)				\
  void __attribute__ ((noipa))					\
  test_##INT_TYPE (INT_TYPE *__restrict r,			\
		   FLOAT_TYPE *__restrict a,			\
		   INT_TYPE *__restrict b,			\
		   FLOAT_TYPE *__restrict pred, int n)		\
  {								\
    for (int i = 0; i < N; ++i)					\
      {								\
	r[i] = pred[i] ? r[i] : (INT_TYPE) a[i];		\
      }								\
  }

#define TEST_ALL(T) \
  T (int16_t, _Float16) \
  T (uint16_t, _Float16) \
  T (int32_t, float) \
  T (uint32_t, float) \
  T (int64_t, double) \
  T (uint64_t, double)

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {\tvmerge} } } */
/* { dg-final { scan-assembler-not {\tvfmerge} } } */