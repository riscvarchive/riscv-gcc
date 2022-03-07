/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "vwmacc_vv_3.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 3 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwmaccsu\.vv} 3 } } */