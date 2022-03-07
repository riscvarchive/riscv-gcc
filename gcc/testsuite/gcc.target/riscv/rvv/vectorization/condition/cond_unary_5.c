/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define abs(A) ((A) < 0 ? -(A) : (A))
#define neg(A) (-(A))
#define not(A) (~(A))

#define DEF_LOOP(TYPE1, TYPE2, COUNT, OP)			\
  void __attribute__ ((noipa))					\
  test_##TYPE1##_##TYPE2##_##OP (TYPE2 *__restrict r,		\
				 TYPE2 *__restrict a,		\
				 TYPE1 *__restrict pred)	\
  {								\
    for (int i = 0; i < COUNT; ++i)				\
      r[i] = pred[i] ? OP (a[i]) : a[i];			\
  }

#define TEST_TYPES(T, TYPE1, TYPE2, COUNT) \
  T (TYPE1, TYPE2, COUNT, abs) \
  T (TYPE1, TYPE2, COUNT, neg) \
  T (TYPE1, TYPE2, COUNT, not)

#define TEST_ALL(T) \
  TEST_TYPES (T, int16_t, int8_t, 7) \
  TEST_TYPES (T, int32_t, int8_t, 3) \
  TEST_TYPES (T, int32_t, int16_t, 3) \
  TEST_TYPES (T, int64_t, int8_t, 5) \
  TEST_TYPES (T, int64_t, int16_t, 5) \
  TEST_TYPES (T, int64_t, int32_t, 5)

TEST_ALL (DEF_LOOP)
