/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define VEC_PERM(TYPE)						\
void __attribute__ ((noinline, noclone))			\
vec_slp_##TYPE (TYPE *restrict a, TYPE *restrict b, int n)	\
{								\
  TYPE x0 = b[0];						\
  TYPE x1 = b[1];						\
  TYPE x2 = b[2];						\
  TYPE x3 = b[3];						\
  for (int i = 0; i < n; ++i)					\
    {								\
      x0 += a[i * 4];						\
      x1 += a[i * 4 + 1];					\
      x2 += a[i * 4 + 2];					\
      x3 += a[i * 4 + 3];					\
    }								\
  b[0] = x0;							\
  b[1] = x1;							\
  b[2] = x2;							\
  b[3] = x3;							\
}

#define TEST_ALL(T)				\
  T (int8_t)					\
  T (uint8_t)					\
  T (int16_t)					\
  T (uint16_t)					\
  T (int32_t)					\
  T (uint32_t)					\
  T (_Float16)					\
  T (float)

TEST_ALL (VEC_PERM)

/* { dg-final { scan-assembler-not {\tvlseg} } } */
/* { dg-final { scan-assembler-not {\tvsseg} } } */