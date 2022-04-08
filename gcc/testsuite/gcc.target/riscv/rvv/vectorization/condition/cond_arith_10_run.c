/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "cond_arith_10.c"

#define N 80

#undef TEST
#define TEST(TYPE, NAME, OP)					\
  {								\
    TYPE x[N], y[N], z[N], pred[N];				\
    for (int i = 0; i < N; ++i)					\
      {								\
	y[i] = i * i;						\
	z[i] = ((i + 2) % 3) * (i + 1);				\
	pred[i] = i % 3;					\
      }								\
    test_##TYPE##_##NAME (x, y, z[0], pred);			\
    for (int i = 0; i < N; ++i)					\
      {								\
	TYPE expected = i % 3 != 1 ? z[0] OP y[i] : y[i];	\
	if (x[i] != expected)					\
	  __builtin_abort ();					\
	asm volatile ("" ::: "memory");				\
      }								\
  }

int
main (void)
{
  TEST_ALL
  return 0;
}