/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3 -fno-trapping-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define N 80
#define DEF_LOOP(TYPE1, TYPE2)				\
  void __attribute__ ((noipa))					\
  test_##TYPE1##TYPE2 (TYPE1 *__restrict r,			\
		   TYPE2 *__restrict a,			\
		   TYPE1 *__restrict b,			\
		   TYPE2 *__restrict pred, int n)		\
  {								\
    for (int i = 0; i < N; ++i)					\
      {								\
	r[i] = pred[i] ? r[i] : (TYPE1) a[i];		\
      }								\
  }

#define TEST_ALL(T) \
  T (int8_t, int16_t) \
  T (int8_t, int32_t) \
  T (int8_t, int64_t) \
  T (int16_t, int32_t) \
  T (int16_t, int64_t) \
  T (int32_t, int64_t) \
  T (uint8_t, uint16_t) \
  T (uint8_t, uint32_t) \
  T (uint8_t, uint64_t) \
  T (uint16_t, uint32_t) \
  T (uint16_t, uint64_t) \
  T (uint32_t, uint64_t) \
  T (_Float16, float) \
  T (_Float16, double) \
  T (float, double) \

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {\tvmerge} } } */
/* { dg-final { scan-assembler-not {\tvfmerge} } } */