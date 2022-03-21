/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_8.c"

int main()
{
  int8_t a = 10;
  int8_t b = 11;
  int8_t c = 12;
  int8_t d = 13;
  int8_t e = 14;
  int8_t f = 15;
  int8_t g = 16;
  int8_t h = 17;
  __fp16 a2 = 10.10;
  __fp16 b2 = 11.11;
  __fp16 c2 = 12.12;
  __fp16 d2 = 13.13;

  vnx16qi v = foo (a, b, c, d, e, f, g, h);
  int8_t expected[] = { a, 1, b, 2, c, 3, d, 4, e, 5, f, 6, g, 7, h, 8 };
  vnx8hf v2 = foo2 (a2, b2, c2, d2);
  __fp16 expected2[] = { a2, 1.1, b2, 2.2, c2, 3.3, d2, 4.4 };

  for (int i = 0; i < 16; i++)
    if (v[i] != expected[i])
      __builtin_abort ();
  
  for (int i = 0; i < 8; i++)
    if (v2[i] != expected2[i])
      __builtin_abort ();

  return 0;
}
