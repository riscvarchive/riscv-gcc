/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#include <string.h>
#include <stdio.h>

int __attribute__ ((noinline, noclone))
do_strcmp (char *str1, char *str2)
{
  return strcmp (str1, str2);
}

/* { dg-final { scan-assembler-times {\tvle8ff.v} 2 } } */