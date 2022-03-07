/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fno-vect-cost-model --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stdint.h>

#define DEF_LOOP(TYPE)				\
void __attribute__ ((noipa))			\
mod_##TYPE (TYPE *dst, TYPE *src, int count)	\
{						\
  for (int i = 0; i < count; ++i)		\
    dst[i] = src[i] % 17;			\
}

#define TEST_ALL(T) \
  T (int32_t) \
  T (uint32_t) \
  T (int64_t) \
  T (uint64_t)

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-times {\tvmulh\.vx} 2 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvmulhu\.vx} 2 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvmulh\.vx} 1 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvmulhu\.vx} 1 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvmulh\.vv} 1 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvmulhu\.vv} 1 {target riscv32-*-*} } } */