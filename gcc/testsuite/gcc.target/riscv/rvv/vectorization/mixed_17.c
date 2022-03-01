/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "mixed_11.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 46 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwmul\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmulu\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmul\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmulu\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmulsu\.vv} 12 } } */
/* { dg-final { scan-assembler-times {\tvwmulsu\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvfwmul\.vv} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwmul\.vf} 2 } } */