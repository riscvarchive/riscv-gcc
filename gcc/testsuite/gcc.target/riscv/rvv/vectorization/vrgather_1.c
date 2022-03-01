/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef int16_t vnx8hi __attribute__((vector_size (16)));
typedef int32_t vnx4si __attribute__((vector_size (16)));
typedef int64_t vnx2di __attribute__((vector_size (16)));
typedef _Float16 vnx8hf __attribute__((vector_size (16)));
typedef float vnx4sf __attribute__((vector_size (16)));
typedef double vnx2df __attribute__((vector_size (16)));

#define MASK_2(X, Y) (Y) - 1 - (X), (Y) - 2 - (X)
#define MASK_4(X, Y) MASK_2 (X, Y), MASK_2 (X + 2, Y)
#define MASK_8(X, Y) MASK_4 (X, Y), MASK_4 (X + 4, Y)
#define MASK_16(X, Y) MASK_8 (X, Y), MASK_8 (X + 8, Y)
#define MASK_32(X, Y) MASK_16 (X, Y), MASK_16 (X + 16, Y)

#define INDEX_16 vnx16qi
#define INDEX_8 vnx8hi
#define INDEX_4 vnx4si
#define INDEX_2 vnx2di

#define PERMUTE(TYPE, NUNITS)						\
  TYPE permute_##TYPE (TYPE values1, TYPE values2)			\
  {									\
    return __builtin_shuffle						\
      (values1, values2,						\
       ((INDEX_##NUNITS) { MASK_##NUNITS (0, NUNITS) }));		\
  }

#define TEST_ALL(T)				\
  T (vnx16qi, 16)				\
  T (vnx8hi, 8)				\
  T (vnx4si, 4)					\
  T (vnx2di, 2)					\
  T (vnx8hf, 8)				\
  T (vnx4sf, 4)					\
  T (vnx2df, 2)

TEST_ALL (PERMUTE)

/* { dg-final { scan-assembler-times {\tvrgather.vv} 7 } } */