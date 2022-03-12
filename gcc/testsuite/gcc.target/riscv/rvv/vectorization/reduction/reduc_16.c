/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=256 -O3 -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define NUM_ELEMS(TYPE) (32 / sizeof (TYPE))

#define REDUC_PTR(DSTTYPE, SRCTYPE)				\
void reduc_ptr_##DSTTYPE##_##SRCTYPE (DSTTYPE *restrict sum,	\
				      SRCTYPE *restrict array,	\
				      int count)		\
{								\
  *sum = 0;							\
  for (int i = 0; i < NUM_ELEMS(DSTTYPE); ++i)				\
    *sum += array[i];						\
}

/* Widening reductions.  */
REDUC_PTR (int16_t, int8_t)
REDUC_PTR (int32_t, int16_t)
REDUC_PTR (int64_t, int32_t)

REDUC_PTR (uint16_t, uint8_t)
REDUC_PTR (uint32_t, uint16_t)
REDUC_PTR (uint64_t, uint32_t)

REDUC_PTR (float, _Float16)
REDUC_PTR (double, float)

/* { dg-final { scan-assembler-times {vwredsum\.vs} 3 } } */
/* { dg-final { scan-assembler-times {vwredsumu\.vs} 3 } } */
/* { dg-final { scan-assembler-times {vfwredusum\.vs} 2 } } */