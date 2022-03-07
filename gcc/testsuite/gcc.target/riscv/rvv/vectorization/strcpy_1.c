/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#include <string.h>
#include <stdio.h>

char* __attribute__ ((noinline, noclone))
do_strcpy (char *str1, char *str2)
{
  return strcpy (str1, str2);
}

/* { dg-final { scan-assembler-times {\tvle8ff.v} 1 } } */