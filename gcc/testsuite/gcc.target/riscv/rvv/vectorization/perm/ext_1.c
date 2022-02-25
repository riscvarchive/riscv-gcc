/* { dg-do compile } */
/* { dg-options "-O -mriscv-vector-bits=256 -mrvv" } */

#include <stdint.h>

typedef int64_t vnx2di __attribute__((vector_size (32)));
typedef int32_t vnx4si __attribute__((vector_size (32)));
typedef int16_t vnx8hi __attribute__((vector_size (32)));
typedef int8_t vnx16qi __attribute__((vector_size (32)));
typedef double vnx2df __attribute__((vector_size (32)));
typedef float vnx4sf __attribute__((vector_size (32)));
typedef _Float16 vnx8hf __attribute__((vector_size (32)));

#define MASK_2(X) X, X + 1
#define MASK_4(X) MASK_2 (X), MASK_2 (X + 2)
#define MASK_8(X) MASK_4 (X), MASK_4 (X + 4)
#define MASK_16(X) MASK_8 (X), MASK_8 (X + 8)
#define MASK_32(X) MASK_16 (X), MASK_16 (X + 16)

#define INDEX_4 vnx2di
#define INDEX_8 vnx4si
#define INDEX_16 vnx8hi
#define INDEX_32 vnx16qi

#define DUP_LANE(TYPE, NUNITS, INDEX)					     \
  TYPE dup_##INDEX##_##TYPE (TYPE values1, TYPE values2)		     \
  {									     \
    return __builtin_shuffle (values1, values2,				     \
			      ((INDEX_##NUNITS) { MASK_##NUNITS (INDEX) })); \
  }


#define TEST_ALL(T)				\
  T (vnx2di, 4, 1)				\
  T (vnx2di, 4, 2)				\
  T (vnx2di, 4, 3)				\
  T (vnx4si, 8, 1)				\
  T (vnx4si, 8, 5)				\
  T (vnx4si, 8, 7)				\
  T (vnx8hi, 16, 1)				\
  T (vnx8hi, 16, 6)				\
  T (vnx8hi, 16, 15)				\
  T (vnx16qi, 32, 1)				\
  T (vnx16qi, 32, 19)				\
  T (vnx16qi, 32, 31)				\
  T (vnx2df, 4, 1)				\
  T (vnx2df, 4, 2)				\
  T (vnx2df, 4, 3)				\
  T (vnx4sf, 8, 1)				\
  T (vnx4sf, 8, 5)				\
  T (vnx4sf, 8, 7)				\
  T (vnx8hf, 16, 1)				\
  T (vnx8hf, 16, 6)				\
  T (vnx8hf, 16, 15)				\

TEST_ALL (DUP_LANE)

/* { dg-final { scan-assembler-times {\tvslidedown.vi} 13 } } */
/* { dg-final { scan-assembler-times {\tvslide1down.vx} 5 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvslide1down.vx} 4 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvslideup.vi} 7 } } */
/* { dg-final { scan-assembler-times {\tvcompress.vm} 7 } } */
/* { dg-final { scan-assembler-times {\tvslide1up.vx} 5 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvslide1up.vx} 4 {target riscv64-*-*} } } */

