/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "vwmacc_vx_1.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 8 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwmacc\.vx} 3 } } */
/* { dg-final { scan-assembler-times {\tvwmaccu\.vx} 3 } } */
/* { dg-final { scan-assembler-times {\tvfwmacc\.vf} 2 } } */