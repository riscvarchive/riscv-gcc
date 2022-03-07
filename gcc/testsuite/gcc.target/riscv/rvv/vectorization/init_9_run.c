/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_9.c"

int main()
{
  int8_t a = 10;
  int8_t b = 11;
  __fp16 a2 = 10;
  __fp16 b2 = 11;

  vnx16qi v = foo (a, b);
  int8_t expected[] = { a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b };
  vnx8hf v2 = foo2 (a2, b2);
  __fp16 expected2[] = { a2, b2, a2, b2, a2, b2, a2, b2 };

  for (int i = 0; i < 16; i++)
    if (v[i] != expected[i])
      __builtin_abort ();
  
  for (int i = 0; i < 8; i++)
    if (v2[i] != expected2[i])
      __builtin_abort ();

  return 0;

}
