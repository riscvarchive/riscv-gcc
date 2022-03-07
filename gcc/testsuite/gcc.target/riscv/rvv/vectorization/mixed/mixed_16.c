/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "mixed_7.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 56 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwsub\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsubu\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsub\.wv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsubu\.wv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsub\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsubu\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsub\.wx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwsubu\.wx} 6 } } */
/* { dg-final { scan-assembler-times {\tvfwsub\.vv} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwsub\.wv} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwsub\.vf} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwsub\.wf} 2 } } */

