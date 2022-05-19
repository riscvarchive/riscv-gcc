/* { dg-do compile } */
/* { dg-additional-options "-O2 -fno-trapping-math -ftree-vectorize -fdump-tree-optimized " } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
foo (__fp16 *restrict a, __fp16 *restrict b, int16_t *restrict c, int16_t *restrict d, int16_t *restrict e, int n)
{
  for (int i = 0; i < n; ++i)
    e[i] = a[i] >= b[i] ? c[i] : d[i];
}