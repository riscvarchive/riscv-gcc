/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, xor, ^)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, xor, ^)


/* { dg-final { scan-assembler-times "vxor.vv" 64 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vxor.vx" 0 } } */
/* { dg-final { scan-assembler-times "vxor.vi" 32 } } */
