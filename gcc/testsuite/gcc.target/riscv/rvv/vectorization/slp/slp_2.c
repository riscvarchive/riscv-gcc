/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define VEC_PERM(TYPE)						\
TYPE __attribute__ ((noinline, noclone))			\
vec_slp_##TYPE (TYPE *restrict a, int n)			\
{								\
  for (int i = 0; i < n; ++i)					\
    {								\
      a[i * 2] += 10;						\
      a[i * 2 + 1] += 17;					\
    }								\
}

#define TEST_ALL(T)				\
  T (int8_t)					\
  T (uint8_t)					\
  T (int16_t)					\
  T (uint16_t)					\
  T (int32_t)					\
  T (uint32_t)					\
  T (int64_t)					\
  T (uint64_t)					\
  T (_Float16)					\
  T (float)					\
  T (double)

TEST_ALL (VEC_PERM)

/* { dg-final { scan-assembler-not {\tvlseg} } } */
/* { dg-final { scan-assembler-not {\tvsseg} } } */