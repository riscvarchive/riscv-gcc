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
  T (DATA_TYPE, int16_t, int32_t)		\
  T (DATA_TYPE, uint16_t, int32_t)		\
  T (DATA_TYPE, _Float16, int32_t)		\
  T (DATA_TYPE, int16_t, uint32_t)		\
  T (DATA_TYPE, uint16_t, uint32_t)		\
  T (DATA_TYPE, _Float16, uint32_t)

#define TEST64(T, DATA_TYPE)			\
  T (DATA_TYPE, int32_t, int64_t)		\
  T (DATA_TYPE, uint32_t, int64_t)		\
  T (DATA_TYPE, float, int64_t)			\
  T (DATA_TYPE, int32_t, uint64_t)		\
  T (DATA_TYPE, uint32_t, uint64_t)		\
  T (DATA_TYPE, float, uint64_t)

#define TEST_ALL(T)			\
  TEST32 (T, int32_t)			\
  TEST32 (T, uint32_t)			\
  TEST32 (T, float)			\
  TEST64 (T, int64_t)			\
  TEST64 (T, uint64_t)			\
  TEST64 (T, double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_MASK_GATHER_LOAD" 36 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 36 "optimized" } } */