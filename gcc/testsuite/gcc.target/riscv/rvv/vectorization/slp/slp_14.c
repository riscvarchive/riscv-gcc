/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fno-vect-cost-model" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define VEC_PERM(TYPE)						\
void __attribute__ ((weak))					\
vec_slp_##TYPE (TYPE *restrict a, TYPE *restrict b, int n)	\
{								\
  for (int i = 0; i < n; ++i)					\
    {								\
      TYPE a1 = a[i * 2];					\
      TYPE a2 = a[i * 2 + 1];					\
      TYPE b1 = b[i * 2];					\
      TYPE b2 = b[i * 2 + 1];					\
      a[i * 2] = b1 > 1 ? a1 / b1 : a1;				\
      a[i * 2 + 1] = b2 > 2 ? a2 / b2 : a2;			\
    }								\
}

#define TEST_ALL(T)				\
  T (int32_t)					\
  T (uint32_t)					\
  T (int64_t)					\
  T (uint64_t)					\
  T (float)					\
  T (double)

TEST_ALL (VEC_PERM)

/* { dg-final { scan-assembler-not {\tvlseg} } } */
/* { dg-final { scan-assembler-not {\tvsseg} } } */