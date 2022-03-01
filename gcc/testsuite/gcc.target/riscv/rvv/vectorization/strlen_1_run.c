/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "strlen_1.c"
#include <stdio.h>

int main ()
{
  char str[50] = "This is RISC-V 'V' Extension Test";
  if (do_strlen (str) != 33)
    __builtin_abort ();

  return 0;
}
