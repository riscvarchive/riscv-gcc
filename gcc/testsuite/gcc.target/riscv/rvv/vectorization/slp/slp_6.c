/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fno-vect-cost-model" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define VEC_PERM(TYPE)						\
void __attribute__ ((noinline, noclone))			\
vec_slp_##TYPE (TYPE *restrict a, TYPE *restrict b, int n)	\
{								\
  TYPE x0 = b[0];						\
  TYPE x1 = b[1];						\
  TYPE x2 = b[2];						\
  for (int i = 0; i < n; ++i)					\
    {								\
      x0 += a[i * 3];						\
      x1 += a[i * 3 + 1];					\
      x2 += a[i * 3 + 2];					\
    }								\
  b[0] = x0;							\
  b[1] = x1;							\
  b[2] = x2;							\
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