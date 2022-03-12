/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#define NUM_ELEMS(TYPE) ((int)(5 * (256 / sizeof (TYPE)) + 3))

#define DEF_REDUC_PLUS(TYPE)			\
  TYPE __attribute__ ((noinline, noclone))	\
  reduc_plus_##TYPE (TYPE *a, TYPE *b)		\
  {						\
    TYPE r = 0, q = 3;				\
    for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
      {						\
	r += a[i];				\
	q -= b[i];				\
      }						\
    return r * q;				\
  }

#define TEST_ALL(T) \
  T (_Float16) \
  T (float) \
  T (double)

TEST_ALL (DEF_REDUC_PLUS)

/* { dg-final { scan-assembler-times {\tvfredosum.vs} 6 } } */