/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=256 -O3" } */
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

REDUC_PTR (float, _Float16)
REDUC_PTR (double, float)

/* { dg-final { scan-assembler-times {vfwredosum\.vs} 2 } } */