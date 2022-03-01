/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, SCALE, NUM, NAME)			\
  void __attribute__ ((noinline, noclone))			\
  f_##DATA_TYPE##_##SCALE##_##NAME (DATA_TYPE *restrict dest, int n)	\
  {								\
    for (int i = 0; i < SCALE; ++i)					\
      dest[i] = dest[i] | NUM;				\
  }

#define NUM_TYPE(T, DATA_TYPE, SCALE)			\
  T (DATA_TYPE, SCALE, -15, f15)				\
  T (DATA_TYPE, SCALE, 15, 15)				\
  T (DATA_TYPE, SCALE, 16, 16)				\
  T (DATA_TYPE, SCALE, 17, 17)	            \
  T (DATA_TYPE, SCALE, 32, 32)	


#define TEST_TYPE(T, DATA_TYPE)			\
  NUM_TYPE (T, DATA_TYPE, 2)				\
  NUM_TYPE (T, DATA_TYPE, 4)				\
  NUM_TYPE (T, DATA_TYPE, 8)				\
  NUM_TYPE (T, DATA_TYPE, 16)				\
  NUM_TYPE (T, DATA_TYPE, 17)				\
  NUM_TYPE (T, DATA_TYPE, 31)				\
  NUM_TYPE (T, DATA_TYPE, 32)			\
  NUM_TYPE (T, DATA_TYPE, n)			

#define TEST_ALL(T)				\
  TEST_TYPE (T, int8_t)			\
  TEST_TYPE (T, uint8_t)			\
  TEST_TYPE (T, int16_t)			\
  TEST_TYPE (T, uint16_t)			\
  TEST_TYPE (T, int32_t)			\
  TEST_TYPE (T, uint32_t)			\
  TEST_TYPE (T, int64_t)			\
  TEST_TYPE (T, uint64_t)			

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 220 "optimized" } } */
/* { dg-final { scan-assembler-times "\tvor\.vx" 204 } } */
/* { dg-final { scan-assembler-times "\tvor\.vi" 136 } } */