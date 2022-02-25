/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_3.c"

int main()
{
  int8_t a = 10;
  int8_t b = 11;
  int8_t c = 12;
  __fp16 a2 = 10.10;
  __fp16 b2 = 11.11;
  __fp16 c2 = 12.12;

  vnx16qi v = foo (a, b);
  int8_t expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, a, b };

  vnx16qi v2 = foo2 (a, b, c);
  int8_t expected2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, a, b, c };

  vnx8hf v3 = foo3 (a2, b2);
  __fp16 expected3[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, a2, b2 };

  vnx8hf v4 = foo4 (a2, b2, c2);
  __fp16 expected4[] = { 1.1, 2.2, 3.3, 4.4, 5.5, a2, b2, c2 };

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
