/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#define TYPE uint8_t
#define NAME(X) qi_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

#define TYPE uint16_t
#define NAME(X) hi_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

#define TYPE uint32_t
#define NAME(X) si_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

#define TYPE uint64_t
#define NAME(X) di_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

#define TYPE _Float16
#define NAME(X) hf_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

#define TYPE float
#define NAME(X) sf_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

#define TYPE double
#define NAME(X) df_##X
#include "struct_vect_1.c"
#undef NAME
#undef TYPE

/* { dg-final { scan-tree-dump-times "\.LOAD_LANES" 49 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.STORE_LANES" 49 "optimized" } } */
/* { dg-final { scan-assembler-not {\tvmv1r.v} } } */
/* { dg-final { scan-assembler-not {\tvmv2r.v} } } */
/* { dg-final { scan-assembler-not {\tvmv4r.v} } } */