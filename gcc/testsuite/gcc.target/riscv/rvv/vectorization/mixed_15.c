/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "mixed_3.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 56 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwadd\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwaddu\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwadd\.wv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwaddu\.wv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwadd\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwaddu\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwadd\.wx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwaddu\.wx} 6 } } */
/* { dg-final { scan-assembler-times {\tvfwadd\.vv} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwadd\.wv} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwadd\.vf} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwadd\.wf} 2 } } */

