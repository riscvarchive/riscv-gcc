/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define LOOP(TYPE, NAME, STEP)					\
  __attribute__((noinline, noclone))				\
  void								\
  test_##TYPE##_##NAME (TYPE *dst, TYPE base, int count)	\
  {								\
    for (int i = 0; i < count; ++i, base += STEP)		\
      dst[i] += base;						\
  }

#define TEST_TYPE(T, TYPE) \
  T (TYPE, m17, -17) \
  T (TYPE, m16, -16) \
  T (TYPE, m15, -15) \
  T (TYPE, m1, -1) \
  T (TYPE, 1, 1) \
  T (TYPE, 15, 15) \
  T (TYPE, 16, 16) \
  T (TYPE, 17, 17)

#define TEST_ALL(T) \
  TEST_TYPE (T, int8_t) \
  TEST_TYPE (T, int16_t) \
  TEST_TYPE (T, int32_t) \
  TEST_TYPE (T, int64_t)

TEST_ALL (LOOP)