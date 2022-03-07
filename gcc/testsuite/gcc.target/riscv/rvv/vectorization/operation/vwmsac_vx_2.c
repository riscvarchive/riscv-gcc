/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "vwmsac_vx_1.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 2 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvfwmsac\.vf} 2 } } */