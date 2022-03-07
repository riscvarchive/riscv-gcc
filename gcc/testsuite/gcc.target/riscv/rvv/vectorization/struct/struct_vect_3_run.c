/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#define TYPE uint32_t
#include "struct_vect_1_run.c"