/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "strcpy_1.c"

int main ()
{
  char str[] = "This is RISC-V 'V' Extension";
  char new_str[50];
  do_strcpy (new_str, str);
  return 0;
}