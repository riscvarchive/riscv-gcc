/* { dg-do compile } */
/* { dg-additional-options "-fno-expensive-optimizations" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, or, |)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, or, |)


/* { dg-final { scan-assembler-times "vor.vv" 64 } } */
/* { dg-final { scan-assembler-times "vor.vx" 0 } } */
/* { dg-final { scan-assembler-times "vor.vi" 32 } } */
