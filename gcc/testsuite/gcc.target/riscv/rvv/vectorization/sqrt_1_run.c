/* { dg-do run } */
/* { dg-additional-options "-Ofast -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include "sqrt_1.c"

#define N 77

#define TEST_LOOP(TYPE, FN)				\
  {							\
    TYPE a[N];						\
    for (int i = 0; i < N; ++i)				\
      a[i] = i;						\
    test_##TYPE (a, N);					\
    for (int i = 0; i < N; ++i)				\
      {							\
	double diff = a[i] - __builtin_sqrt (i);	\
	if (__builtin_fabs (diff) > 0x1.0p-8)		\
	  __builtin_abort ();				\
      }							\
  }

#pragma GCC push_options
#pragma GCC optimize ("O0")
int
main (void)
{
  TEST_ALL (TEST_LOOP);
  return 0;
}
#pragma GCC pop_options