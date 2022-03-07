/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "vwnmsac_vx_1.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 4 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvfwnmsac\.vf} 4 } } */