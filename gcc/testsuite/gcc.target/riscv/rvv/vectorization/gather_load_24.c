/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
f1 (int64_t *restrict dst, int32_t *src1, int16_t *src2, uint32_t *index)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (int32_t) (src1[i] + src2[index[i]]);
}

void __attribute__ ((noinline, noclone))
f2 (int64_t *restrict dst, int32_t *src1, int16_t *src2, uint64_t *index)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (int32_t) (src1[i] + src2[index[i]]);
}

void __attribute__ ((noinline, noclone))
f3 (int64_t *restrict dst, int32_t *src1, int16_t **src2)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (int32_t) (src1[i] + *src2[i]);
}

void __attribute__ ((noinline, noclone))
f4 (double *restrict dst, float *src1, _Float16 *src2, uint32_t *index)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (float) (src1[i] + src2[index[i]]);
}

void __attribute__ ((noinline, noclone))
f5 (double *restrict dst, float *src1, _Float16 *src2, uint64_t *index)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (float) (src1[i] + src2[index[i]]);
}

void __attribute__ ((noinline, noclone))
f6 (double *restrict dst, float *src1, _Float16 **src2)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (float) (src1[i] + *src2[i]);
}

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 6 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 6 "optimized" } } */