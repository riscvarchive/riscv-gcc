/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "gather_load_29.c"

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 45 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 45 "optimized" } } */