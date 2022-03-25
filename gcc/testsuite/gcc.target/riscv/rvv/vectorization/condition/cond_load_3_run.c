/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "cond_load_3.c"

#define N 80

#define TEST_LOOP(TYPE)					\
  {								\
    TYPE r1[N], r2[N], a[N], b[N], c[N];				\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = (i & 1 ? i : 3 * i);				\
	b[i] = (i >> 4) << (i & 15);				\
	c[i] = ((i + 2) % 3) * (i + 1);				\
  r1[i] = ((i + 4) % 4) * (i + 2);				\
  r2[i] = ((i + 4) % 4) * (i + 2);				\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE (r1, a, b, c);				\
    for (int i = 0; i < N; ++i)					\
      {								\
	TYPE expected = a[i] < 20 ? c[i] : r2[i];\
	if (r1[i] != expected)					\
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