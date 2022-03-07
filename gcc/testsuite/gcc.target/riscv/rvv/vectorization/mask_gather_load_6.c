/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, CMP_TYPE, INDEX_TYPE)			\
  void __attribute__ ((noinline, noclone))									\
  f_##DATA_TYPE##_##CMP_TYPE##_##INDEX_TYPE				\
    (DATA_TYPE *restrict dest, DATA_TYPE *restrict src,			\
     CMP_TYPE *cmp1, CMP_TYPE *cmp2, INDEX_TYPE *indices, int n)	\
  {									\
    for (int i = 0; i < n; ++i)						\
      if (cmp1[i] == cmp2[i])						\
	dest[i] += src[indices[i]];					\
  }

#define TEST32(T, DATA_TYPE)			\
  T (DATA_TYPE, int8_t, int32_t)		\
  T (DATA_TYPE, uint8_t, int32_t)		\
  T (DATA_TYPE, int16_t, int32_t)		\
  T (DATA_TYPE, uint16_t, int32_t)		\
  T (DATA_TYPE, _Float16, int32_t)		\
  T (DATA_TYPE, int64_t, int32_t)		\
  T (DATA_TYPE, uint64_t, int32_t)		\
  T (DATA_TYPE, double, int32_t)		\
  T (DATA_TYPE, int64_t, uint32_t)		\
  T (DATA_TYPE, uint64_t, uint32_t)		\
  T (DATA_TYPE, double, uint32_t)

#define TEST_ALL(T)			\
  TEST32 (T, int8_t)			\
  TEST32 (T, uint8_t)			\
  TEST32 (T, int16_t)			\
  TEST32 (T, uint16_t)			\
  TEST32 (T, _Float16)			\
  TEST32 (T, int32_t)			\
  TEST32 (T, uint32_t)			\
  TEST32 (T, float)       \
  TEST32 (T, int64_t)			\
  TEST32 (T, uint64_t)			\
  TEST32 (T, double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_MASK_GATHER_LOAD" 121 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 121 "optimized" } } */