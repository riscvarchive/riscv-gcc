/* { dg-do compile } */
/* { dg-additional-options "-O3 -fno-trapping-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define N 80

#define DEF_LOOP(FLOAT_TYPE, INT_TYPE)				\
  void __attribute__ ((noipa))					\
  test_##INT_TYPE (FLOAT_TYPE *__restrict r,			\
		   INT_TYPE *__restrict a,			\
		   FLOAT_TYPE *__restrict b,			\
		   INT_TYPE *__restrict pred, int n)		\
  {								\
    for (int i = 0; i < N; ++i)					\
      {								\
	r[i] = pred[i] ? r[i] : (FLOAT_TYPE) a[i];		\
      }								\
  }

#define TEST_ALL(T) \
  T (_Float16, int16_t) \
  T (_Float16, uint16_t) \
  T (float, int32_t) \
  T (float, uint32_t) \
  T (double, int64_t) \
  T (double, uint64_t)

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {\tvmerge} } } */
/* { dg-final { scan-assembler-not {\tvfmerge} } } */