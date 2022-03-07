/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "strcmp_1.c"

int main ()
{
  char str1[15];
  char str2[15];
  int ret;

  strcpy(str1, "abcdef");
  strcpy(str2, "ABCDEF");

  ret = do_strcmp(str1, str2);
  if(ret <= 0)
   __builtin_abort ();
  ret = do_strcmp(str2, str1);
  if(ret >= 0)
   __builtin_abort ();
  ret = do_strcmp(str1, str1);
  if(ret != 0)
   __builtin_abort ();

   return(0);
}