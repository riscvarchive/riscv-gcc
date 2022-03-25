/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "cond_load_1.c"

#define N 80

#define TEST_LOOP(TYPE)					\
  {								\
    TYPE r[N], a[N], b[N], c[N];				\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = (i & 1 ? i : 3 * i);				\
	b[i] = (i >> 4) << (i & 15);				\
	c[i] = ((i + 2) % 3) * (i + 1);				\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE (r, a, b, c);				\
    for (int i = 0; i < N; ++i)					\
      {								\
	TYPE expected = a[i] < 20 ? b[i] : c[i];	\
	if (r[i] != expected)					\
	  __builtin_abort ();					\
	asm volatile ("" ::: "memory");				\
      }								\
  }

int
main (void)
{
  TEST_ALL (TEST_LOOP)
  return 0;
}