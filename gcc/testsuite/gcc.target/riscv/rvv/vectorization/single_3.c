/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fopenmp-simd -fno-tree-loop-distribute-patterns" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "single_1.c"

/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*1\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*2\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*3\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*4\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*5\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*6\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*7\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*8\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvfmv.v.f\s+v[1-3]?[0-9],\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n} 3 } } */