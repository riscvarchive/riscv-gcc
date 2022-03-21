/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#include <string.h>
#include <stdio.h>

int __attribute__ ((noinline, noclone))
do_strlen (char *str)
{
  return strlen (str);
}

/* { dg-final { scan-assembler-times {\tvle8ff.v} 1 } } */