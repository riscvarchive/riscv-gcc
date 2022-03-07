/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_10.c"

int main()
{
  int8_t a = 10;
  int8_t b = 11;
  int8_t c = 12;
  int8_t f = 13;
  __fp16 a2 = 10.10;
  __fp16 b2 = 11.11;
  __fp16 c2 = 12.12;
  __fp16 f2 = 13.13;

  vnx16qi v = foo (a, b, c, f);
  int8_t expected[] = { a, f, b, f, c, f, c, f, c, f, c, f, c, f, c, f };
  vnx8hf v2 = foo2 (a2, b2, c2, f2);
  __fp16 expected2[] = { a2, f2, b2, f2, c2, f2, c2, f2 };

  for (int i = 0; i < 16; i++)
    if (v[i] != expected[i])
      __builtin_abort ();
  
  for (int i = 0; i < 8; i++)
    if (v2[i] != expected2[i])
      __builtin_abort ();

  return 0;
}
