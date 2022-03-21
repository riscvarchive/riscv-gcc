/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_7.c"

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
  int8_t a2 = 18;
  int8_t b2 = 19;
  int8_t c2 = 20;
  int8_t d2 = 21;
  int8_t e2 = 22;
  int8_t f2 = 23;
  int8_t g2 = 24;
  int8_t h2 = 25;

  __fp16 a3 = 10.10;
  __fp16 b3 = 11.11;
  __fp16 c3 = 12.12;
  __fp16 d3 = 13.13;
  __fp16 e3 = 14.14;
  __fp16 f3 = 15.15;
  __fp16 g3 = 16.16;
  __fp16 h3 = 17.17;

  vnx16qi v = foo (a, b, c, d, e, f, g, h, a2, b2, c2, d2, e2, f2, g2, h2);
  int8_t expected[] = { a, b, c, d, e, f, g, h, a2, b2, c2, d2, e2, f2, g2, h2 };
  vnx8hf v2 = foo2 (a3, b3, c3, d3, e3, f3, g3, h3);
  __fp16 expected2[] = { a3, b3, c3, d3, e3, f3, g3, h3 };

  for (int i = 0; i < 16; i++)
    if (v[i] != expected[i])
      __builtin_abort ();
  
  for (int i = 0; i < 8; i++)
    if (v2[i] != expected2[i])
      __builtin_abort ();

  return 0;
}
