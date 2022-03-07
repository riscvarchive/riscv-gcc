/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void
f1 (uint64_t *dst, uint32_t *src1, uint16_t *src2)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (uint32_t) (src1[i] + src2[i]);
}