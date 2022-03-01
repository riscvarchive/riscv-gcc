/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fopenmp-simd -mriscv-vector-bits=128 -fno-vect-cost-model -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
foo (uint64_t *restrict x, uint64_t *restrict y, uint64_t *restrict index)
{
#pragma omp for simd simdlen(2)
  for (int i = 0; i < 128; ++i)
    x[i] += y[index[i]];
}

/* { dg-final { scan-tree-dump-times "\.GATHER_LOAD" 1 "optimized" } } */