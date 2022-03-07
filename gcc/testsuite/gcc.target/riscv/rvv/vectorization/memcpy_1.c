/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdlib.h>

void __attribute__ ((noinline, noclone))
do_it_cpy (char * in, char * out, size_t size)
{
  __builtin_memcpy (out, in, size);
}

void __attribute__ ((noinline, noclone))
do_it_cpy_large (char * in, char * out)
{
  __builtin_memcpy (out, in, 1024);
}

void __attribute__ ((noinline, noclone))
do_it_cpy_127 (char * in, char * out)
{
  __builtin_memcpy (out, in, 127);
}

void __attribute__ ((noinline, noclone))
do_it_cpy_128 (char * in, char * out)
{
  __builtin_memcpy (out, in, 128);
}

/* { dg-final { scan-assembler-times {\tvle8.v} 3 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvse8.v} 3 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvle8.v} 4 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvse8.v} 4 {target riscv32-*-*} } } */