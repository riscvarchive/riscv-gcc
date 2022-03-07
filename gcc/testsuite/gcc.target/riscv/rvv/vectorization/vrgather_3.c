/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx64qi __attribute__((vector_size (64)));
typedef int16_t vnx32hi __attribute__((vector_size (64)));
typedef int32_t vnx16si __attribute__((vector_size (64)));
typedef int64_t vnx8di __attribute__((vector_size (64)));
typedef _Float16 vnx32hf __attribute__((vector_size (64)));
typedef float vnx16sf __attribute__((vector_size (64)));
typedef double vnx8df __attribute__((vector_size (64)));

#define MASK_2(X, Y) (Y) - 1 - (X), (Y) - 2 - (X)
#define MASK_4(X, Y) MASK_2 (X, Y), MASK_2 (X + 2, Y)
#define MASK_8(X, Y) MASK_4 (X, Y), MASK_4 (X + 4, Y)
#define MASK_16(X, Y) MASK_8 (X, Y), MASK_8 (X + 8, Y)
#define MASK_32(X, Y) MASK_16 (X, Y), MASK_16 (X + 16, Y)
#define MASK_64(X, Y) MASK_32 (X, Y), MASK_32 (X + 32, Y)

#define INDEX_64 vnx64qi
#define INDEX_32 vnx32hi
#define INDEX_16 vnx16si
#define INDEX_8 vnx8di

#define PERMUTE(TYPE, NUNITS)						\
  TYPE permute_##TYPE (TYPE values1, TYPE values2)			\
  {									\
    return __builtin_shuffle						\
      (values1, values2,						\
       ((INDEX_##NUNITS) { MASK_##NUNITS (0, NUNITS) }));		\
  }

#define TEST_ALL(T)				\
  T (vnx64qi, 64)				\
  T (vnx32hi, 32)				\
  T (vnx16si, 16)					\
  T (vnx8di, 8)					\
  T (vnx32hf, 32)				\
  T (vnx16sf, 16)					\
  T (vnx8df, 8)

TEST_ALL (PERMUTE)

/* { dg-final { scan-assembler-times {\tvrgather.vv} 7 } } */