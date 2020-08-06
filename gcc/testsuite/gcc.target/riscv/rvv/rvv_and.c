/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, and, &)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, and, &)


/* { dg-final { scan-assembler-times "vand.vv" 64 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vand.vx" 0 } } */
/* { dg-final { scan-assembler-times "vand.vi" 32 } } */
