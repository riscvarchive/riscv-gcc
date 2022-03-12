/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#define REDUC(TYPE)						\
  TYPE reduc_##TYPE (TYPE *x, TYPE *y, int count)		\
  {								\
    TYPE sum = 0;						\
    for (int i = 0; i < count; ++i)				\
      sum -= x[i] * y[i];					\
    return sum;							\
  }

REDUC (float)
REDUC (double)

/* { dg-final { scan-assembler-times {\tvfnmsac.v} 2 } } */
/* { dg-final { scan-assembler-times {\tvfredusum.vs} 2 } } */