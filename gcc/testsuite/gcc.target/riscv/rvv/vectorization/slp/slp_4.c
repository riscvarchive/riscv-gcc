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
      a[i * 8] += 99;						\
      a[i * 8 + 1] += 11;					\
      a[i * 8 + 2] += 17;					\
      a[i * 8 + 3] += 80;					\
      a[i * 8 + 4] += 63;					\
      a[i * 8 + 5] += 37;					\
      a[i * 8 + 6] += 24;					\
      a[i * 8 + 7] += 81;					\
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