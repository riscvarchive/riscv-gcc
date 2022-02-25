/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx8qi __attribute__((vector_size (8)));
typedef int16_t vnx4hi __attribute__((vector_size (8)));
typedef int32_t vnx2si __attribute__((vector_size (8)));
typedef _Float16 vnx4hf __attribute__((vector_size (8)));
typedef float vnx2sf __attribute__((vector_size (8)));

#define MASK_2(X, Y) (Y) - 1 - (X), (Y) - 2 - (X)
#define MASK_4(X, Y) MASK_2 (X, Y), MASK_2 (X + 2, Y)
#define MASK_8(X, Y) MASK_4 (X, Y), MASK_4 (X + 4, Y)
#define MASK_16(X, Y) MASK_8 (X, Y), MASK_8 (X + 8, Y)
#define MASK_32(X, Y) MASK_16 (X, Y), MASK_16 (X + 16, Y)

#define INDEX_8 vnx8qi
#define INDEX_4 vnx4hi
#define INDEX_2 vnx2si

#define PERMUTE(TYPE, NUNITS)						\
  TYPE permute_##TYPE (TYPE values1, TYPE values2)			\
  {									\
    return __builtin_shuffle						\
      (values1, values2,						\
       ((INDEX_##NUNITS) { MASK_##NUNITS (0, NUNITS) }));		\
  }

#define TEST_ALL(T)				\
  T (vnx8qi, 8)				\
  T (vnx4hi, 4)				\
  T (vnx2si, 2)					\
  T (vnx4hf, 4)				\
  T (vnx2sf, 2)				

TEST_ALL (PERMUTE)

/* { dg-final { scan-assembler-times {\tvrgather.vv} 5 } } */