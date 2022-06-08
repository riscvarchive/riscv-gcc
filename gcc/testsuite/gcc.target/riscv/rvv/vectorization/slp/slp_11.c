/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define VEC_PERM(TYPE1, TYPE2)					\
void __attribute__ ((noinline, noclone))			\
vec_slp_##TYPE1##_##TYPE2 (TYPE1 *restrict a,			\
			   TYPE2 *restrict b, int n)		\
{								\
  for (int i = 0; i < n; ++i)					\
    {								\
      a[i * 2] += 1;						\
      a[i * 2 + 1] += 2;					\
      b[i * 4] += 3;						\
      b[i * 4 + 1] += 4;					\
      b[i * 4 + 2] += 5;					\
      b[i * 4 + 3] += 6;					\
    }								\
}

#define TEST_ALL(T)				\
  T (int16_t, uint8_t)				\
  T (uint16_t, int8_t)				\
  T (int32_t, uint16_t)				\
  T (uint32_t, int16_t)				\
  T (float, uint16_t)				\
  T (int64_t, float)				\
  T (uint64_t, int32_t)				\
  T (double, uint32_t)

TEST_ALL (VEC_PERM)

/* { dg-final { scan-assembler-not {\tvlseg} } } */
/* { dg-final { scan-assembler-not {\tvsseg} } } */