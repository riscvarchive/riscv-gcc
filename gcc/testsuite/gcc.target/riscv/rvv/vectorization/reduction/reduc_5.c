/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define REDUC(TYPE)						\
  TYPE reduc_##TYPE (TYPE *x, int count)			\
  {								\
    TYPE sum = 0;						\
    for (int i = 0; i < count; ++i)				\
      sum -= x[i];						\
    return sum;							\
  }

REDUC (int8_t)
REDUC (uint8_t)
REDUC (int16_t)
REDUC (uint16_t)
REDUC (int32_t)
REDUC (uint32_t)
REDUC (int64_t)
REDUC (uint64_t)
REDUC (float)
REDUC (double)

/* { dg-final { scan-assembler-times {\tvredsum.vs} 8 } } */
/* { dg-final { scan-assembler-times {\tvfredusum.vs} 2 } } */