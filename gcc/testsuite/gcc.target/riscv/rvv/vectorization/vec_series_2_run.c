/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "vec_series_2.c"

#define TEST_LOOP(TYPE, BASE, STEP, SUFFIX)	\
  {						\
    TYPE array[NUM_ELEMS (TYPE)] = {};		\
    loop_##TYPE##_##SUFFIX (array);		\
    for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
      if (array[i] != (TYPE) (BASE + i * STEP))	\
	__builtin_abort ();			\
  }

int __attribute__ ((optimize (1)))
main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}
