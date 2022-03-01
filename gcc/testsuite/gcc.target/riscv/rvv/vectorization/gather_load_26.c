/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#define INDEX8 uint8_t
#define INDEX16 uint16_t
#define INDEX32 uint32_t
#define INDEX64 uint64_t

#include "gather_load_25.c"

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 12 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 12 "optimized" } } */