/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#define N 80

#define DEF_LOOP(TYPE)				\
  void __attribute__ ((noinline, noclone))		\
  test_##TYPE (TYPE *__restrict r,		\
		      TYPE *__restrict a,		\
		      TYPE *__restrict b,		\
		      TYPE *__restrict c)	\
  {							\
    for (int i = 0; i < N; ++i)				\
      r[i] = a[i] < 20 ? c[i] : r[i];	\
  }

#define TEST_ALL(T) \
  T (int8_t) \
  T (uint8_t) \
  T (int16_t) \
  T (uint16_t) \
  T (int32_t) \
  T (uint32_t) \
  T (int64_t) \
  T (uint64_t) \
  T (_Float16) \
  T (float) \
  T (double)

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {\tvmerge} } } */
/* { dg-final { scan-assembler-not {\tvfmerge} } } */