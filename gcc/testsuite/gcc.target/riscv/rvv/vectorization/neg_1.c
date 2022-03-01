/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized-details --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define DO_OPS(TYPE)					\
void vneg_##TYPE (TYPE *dst, TYPE *src, int count)	\
{							\
  for (int i = 0; i < count; ++i)			\
    dst[i] = -src[i];					\
}

DO_OPS (int8_t)
DO_OPS (int16_t)
DO_OPS (int32_t)
DO_OPS (int64_t)

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 4 "optimized" } } */
/* { dg-final { scan-assembler-times "\tvneg\.v" 4 } } */