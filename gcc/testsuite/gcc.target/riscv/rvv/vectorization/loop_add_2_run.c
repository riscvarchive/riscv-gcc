/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "loop_add_2.c"

#define N 131
#define BASE 41

#define TEST_LOOP(TYPE, NAME, STEP)				\
  {								\
    TYPE a[N];							\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = i * i + i % 5;					\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE##_##NAME (a, BASE, N);				\
    for (int i = 0; i < N; ++i)					\
      {								\
	TYPE expected = i * i + i % 5 + BASE + i * STEP;	\
	if (a[i] != expected)					\
	  __builtin_abort ();					\
      }								\
  }

int __attribute__ ((optimize (1)))
main (void)
{
  TEST_ALL (TEST_LOOP)
}