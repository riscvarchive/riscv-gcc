/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, SCALE)			\
  void __attribute__ ((noinline, noclone))			\
  f_##DATA_TYPE##_##SCALE (DATA_TYPE *restrict dest1,		\
         DATA_TYPE *restrict dest2,		\
         DATA_TYPE *restrict dest3,		\
			   DATA_TYPE *restrict src1, DATA_TYPE *restrict src2, int n)	\
  {								\
    for (int i = 0; i < SCALE; ++i)					\
      { \
        dest1[i] += src1[i] * src2[i];				\
        dest2[i] += src1[i] * dest1[i];				\
        dest3[i] += src2[i] * dest2[i];				\
      } \
  }

#define TEST_TYPE(T, DATA_TYPE)			\
  T (DATA_TYPE, 2)				\
  T (DATA_TYPE, 4)				\
  T (DATA_TYPE, 8)				\
  T (DATA_TYPE, 16)				\
  T (DATA_TYPE, 17)				\
  T (DATA_TYPE, 31)				\
  T (DATA_TYPE, 32)			\
  T (DATA_TYPE, n)

#define TEST_ALL(T)				\
  TEST_TYPE (T, int8_t)			\
  TEST_TYPE (T, uint8_t)			\
  TEST_TYPE (T, int16_t)			\
  TEST_TYPE (T, uint16_t)			\
  TEST_TYPE (T, int32_t)			\
  TEST_TYPE (T, uint32_t)			\
  TEST_TYPE (T, int64_t)			\
  TEST_TYPE (T, uint64_t)     \
  TEST_TYPE (T, __fp16)      \
  TEST_TYPE (T, float)      \
  TEST_TYPE (T, double)      \

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 62 "optimized" } } */
/* { dg-final { scan-assembler-times "\tvmacc\.vv" 76 } } */
/* { dg-final { scan-assembler-times "\tvfmacc\.vv" 27 } } */