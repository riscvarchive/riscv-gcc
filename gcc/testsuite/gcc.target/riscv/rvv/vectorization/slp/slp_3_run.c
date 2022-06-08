/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "slp_3.c"

#define N (77 * 4)

#define HARNESS(TYPE)						\
  {								\
    TYPE a[N], b[4] = { 41, 25, 31, 62 };			\
    for (unsigned int i = 0; i < N; ++i)			\
      {								\
	a[i] = i * 2 + i % 5;					\
	asm volatile ("" ::: "memory");				\
      }								\
    vec_slp_##TYPE (a, N / 4);					\
    for (unsigned int i = 0; i < N; ++i)			\
      {								\
	TYPE orig = i * 2 + i % 5;				\
	TYPE expected = orig + b[i % 4];			\
	if (a[i] != expected)					\
	  __builtin_abort ();					\
      }								\
  }

int __attribute__ ((optimize (1)))
main (void)
{
  TEST_ALL (HARNESS)
}