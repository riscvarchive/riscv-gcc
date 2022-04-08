/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "cond_arith_2.c"

#define N 80

#undef TEST
#define TEST(DATA_TYPE, PRED_TYPE, NAME, OP)			\
  {								\
    DATA_TYPE x[N], y[N], z[N];					\
    PRED_TYPE pred[N];						\
    for (int i = 0; i < N; ++i)					\
      {								\
	y[i] = i * i;						\
	z[i] = ((i + 2) % 3) * (i + 1);				\
	pred[i] = i % 3;					\
      }								\
    test_##DATA_TYPE##_##PRED_TYPE##_##NAME (x, y, z, pred);	\
    for (int i = 0; i < N; ++i)					\
      {								\
	DATA_TYPE expected = i % 3 != 1 ? y[i] OP z[i] : y[i];	\
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