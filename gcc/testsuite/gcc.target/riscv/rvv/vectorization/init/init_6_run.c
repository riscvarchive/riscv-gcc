/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_6.c"

int main()
{
  int8_t a = 10;
  int8_t b = 11;
  int8_t c = 12;
  __fp16 a2 = 10.10;
  __fp16 b2 = 11.11;
  __fp16 c2 = 12.12;

  vnx16qi v = foo (a, b, c);
  int8_t expected[] = { c, c, c, c, c, c, c, c, c, c, c, c, c, c, b, a };

  vnx16qi v2 = foo2 (a, b, c);
  int8_t expected2[] = { c, c, c, c, c, c, c, c, c, c, c, c, c, a, b, a };

  vnx8hf v3 = foo3 (a2, b2, c2);
  __fp16 expected3[] = { c2, c2, c2, c2, c2, c2, b2, a2 };

  vnx8hf v4 = foo4 (a2, b2, c2);
  __fp16 expected4[] = { c2, c2, c2, c2, c2, a2, b2, a2 };

  for (int i = 0; i < 16; i++)
    if (v[i] != expected[i])
      __builtin_abort ();
  
  for (int i = 0; i < 16; i++)
    if (v2[i] != expected2[i])
      __builtin_abort ();
  
  for (int i = 0; i < 8; i++)
    if (v3[i] != expected3[i])
      __builtin_abort ();
  
  for (int i = 0; i < 8; i++)
    if (v4[i] != expected4[i])
      __builtin_abort ();

  return 0;
}
