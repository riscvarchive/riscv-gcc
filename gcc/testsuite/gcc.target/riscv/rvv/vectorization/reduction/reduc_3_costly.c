/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fno-vect-cost-model" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define NUM_ELEMS(TYPE) (32 / sizeof (TYPE))

#define REDUC_PTR(DSTTYPE, SRCTYPE)				\
void reduc_ptr_##DSTTYPE##_##SRCTYPE (DSTTYPE *restrict sum,	\
				      SRCTYPE *restrict array,	\
				      int count)		\
{								\
  *sum = 0;							\
  for (int i = 0; i < count; ++i)				\
    *sum += array[i];						\
}

/* Widening reductions.  */
REDUC_PTR (int32_t, int8_t)
REDUC_PTR (int32_t, int16_t)

REDUC_PTR (int64_t, int8_t)
REDUC_PTR (int64_t, int16_t)
REDUC_PTR (int64_t, int32_t)

REDUC_PTR (float, _Float16)
REDUC_PTR (double, float)

/* { dg-final { scan-assembler-times {\tvredsum.vs} 5 } } */
/* { dg-final { scan-assembler-times {\tvfredusum.vs} 2 } } */