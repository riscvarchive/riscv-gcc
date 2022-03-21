/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#ifndef INDEX32
#define INDEX8 int8_t
#define INDEX16 int16_t
#define INDEX32 int32_t
#define INDEX64 int64_t
#endif

#define TEST_LOOP(DATA_TYPE, CMP_TYPE, BITS)				\
  void __attribute__ ((noinline, noclone))									\
  f_##DATA_TYPE##_##CMP_TYPE						\
    (DATA_TYPE *restrict dest, DATA_TYPE *restrict src,			\
     CMP_TYPE *restrict cmp1, CMP_TYPE *restrict cmp2, 			\
     INDEX##BITS *restrict indices, int n)				\
  {									\
    for (int i = 0; i < n; ++i)						\
      if (cmp1[i] == cmp2[i])						\
	dest[indices[i]] = src[i] + 1;					\
  }

#define TEST8(T, DATA_TYPE)		\
  T (DATA_TYPE, int8_t, 8)		\
  T (DATA_TYPE, uint8_t, 8)

#define TEST16(T, DATA_TYPE)		\
  T (DATA_TYPE, int16_t, 16)		\
  T (DATA_TYPE, uint16_t, 16)		\
  T (DATA_TYPE, _Float16, 16)

#define TEST32(T, DATA_TYPE)		\
  T (DATA_TYPE, int32_t, 32)		\
  T (DATA_TYPE, uint32_t, 32)		\
  T (DATA_TYPE, float, 32)

#define TEST64(T, DATA_TYPE)		\
  T (DATA_TYPE, int64_t, 64)		\
  T (DATA_TYPE, uint64_t, 64)		\
  T (DATA_TYPE, double, 64)

#define TEST_ALL(T)			\
  TEST8 (T, int8_t)			\
  TEST8 (T, uint8_t)			\
  TEST16 (T, int16_t)			\
  TEST16 (T, uint16_t)			\
  TEST16 (T, _Float16)			\
  TEST32 (T, int32_t)			\
  TEST32 (T, uint32_t)			\
  TEST32 (T, float)			\
  TEST64 (T, int64_t)			\
  TEST64 (T, uint64_t)			\
  TEST64 (T, double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_MASK_SCATTER_STORE" 31 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 31 "optimized" } } */