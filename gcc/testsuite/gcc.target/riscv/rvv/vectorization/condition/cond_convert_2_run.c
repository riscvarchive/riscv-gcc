/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "cond_convert_1.c"

#define N 80

#define TEST_LOOP(TYPE1, TYPE2)				\
  {								\
    TYPE1 r[N], b[N];					\
    TYPE2 a[N], pred[N];					\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = (i & 1 ? i : 3 * i) * (i % 3 == 0 ? 1 : -1);	\
	r[i] = (i % 9) * (i % 7 + 1);				\
	pred[i] = (i % 7 < 4);					\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE1##TYPE2 (r, a, b, pred, N);				\
    for (int i = 0; i < N; ++i)					\
      if (r[i] != (pred[i] ? r[i] : (TYPE1) a[i]))		\
	__builtin_abort ();					\
  }

int main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}