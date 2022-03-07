/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "init_13.c"

int main()
{
  int8_t a = 10;
  int8_t b = 11;
  int8_t f = 12;

  vnx16qi v = foo (a, b, f);
  int8_t expected[] = { b, f, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, a, 2};
  vnx16qi v2 = foo2 (a, b, f);
  int8_t expected2[] = { b, f, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, a, 15};
  vnx16qi v3 = foo3 (a, b, f);
  int8_t expected3[] = { b, f, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 15};
  vnx16qi v4 = foo4 (a, b, f);
  int8_t expected4[] = { 2, 3, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 15, b, a};
  vnx16qi v5 = foo5 (a, b, f);
  int8_t expected5[] = { 2, 3, 4, f, 6, 7, 8, 9, 10, 11, 12, 13, 13, 15, b, a};
  vnx16qi v6 = foo6 (a, b, f);
  int8_t expected6[] = { a, b, 4, f, 6, 7, 8, 9, 10, a, 12, 13, 13, 15, b, a};
  vnx16qi v7 = foo7 (a, b, f);
  int8_t expected7[] = { a, b, f, f, f, f, f, f, f, a, f, f, f, f, b, f};
  vnx16qi v8 = foo8 (a, b, f);
  int8_t expected8[] = { b, f, 3, 3, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, a, 15};

  for (int i = 0; i < 16; i++)
  {
    if (v[i] != expected[i])
      __builtin_abort ();
    if (v2[i] != expected2[i])
      __builtin_abort ();
    if (v3[i] != expected3[i])
      __builtin_abort ();
    if (v4[i] != expected4[i])
      __builtin_abort ();
    if (v5[i] != expected5[i])
      __builtin_abort ();
    if (v6[i] != expected6[i])
      __builtin_abort ();
    if (v7[i] != expected7[i])
      __builtin_abort ();
    if (v8[i] != expected8[i])
      __builtin_abort ();
  }

  return 0;
}
