/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx128qi __attribute__((vector_size (128)));
typedef int16_t vnx64hi __attribute__((vector_size (128)));
typedef int32_t vnx32si __attribute__((vector_size (128)));
typedef int64_t vnx16di __attribute__((vector_size (128)));
typedef _Float16 vnx64hf __attribute__((vector_size (128)));
typedef float vnx32sf __attribute__((vector_size (128)));
typedef double vnx16df __attribute__((vector_size (128)));

#define MASK_2(X, Y) (Y) - 1 - (X), (Y) - 2 - (X)
#define MASK_4(X, Y) MASK_2 (X, Y), MASK_2 (X + 2, Y)
#define MASK_8(X, Y) MASK_4 (X, Y), MASK_4 (X + 4, Y)
#define MASK_16(X, Y) MASK_8 (X, Y), MASK_8 (X + 8, Y)
#define MASK_32(X, Y) MASK_16 (X, Y), MASK_16 (X + 16, Y)
#define MASK_64(X, Y) MASK_32 (X, Y), MASK_32 (X + 32, Y)
#define MASK_128(X, Y) MASK_64 (X, Y), MASK_64 (X + 64, Y)

#define INDEX_128 vnx128qi
#define INDEX_64 vnx64hi
#define INDEX_32 vnx32si
#define INDEX_16 vnx16di

#define PERMUTE(TYPE, NUNITS)						\
  TYPE permute_##TYPE (TYPE values1, TYPE values2)			\
  {									\
    return __builtin_shuffle						\
      (values1, values2,						\
       ((INDEX_##NUNITS) { MASK_##NUNITS (0, NUNITS) }));		\
  }

#define TEST_ALL(T)				\
  T (vnx128qi, 128)				\
  T (vnx64hi, 64)				\
  T (vnx32si, 32)					\
  T (vnx16di, 16)					\
  T (vnx64hf, 64)				\
  T (vnx32sf, 32)					\
  T (vnx16df, 16)

TEST_ALL (PERMUTE)

/* { dg-final { scan-assembler-times {\tvrgather.vv} 7 } } */