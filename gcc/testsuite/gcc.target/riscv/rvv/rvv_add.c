/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, add, +)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, add, +)
RVV_FLOAT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, fadd, +)

/* { dg-final { scan-assembler-times "vadd.vv" 64 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vadd.vx" 0 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vfadd.vv" 24 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vfadd.vf" 0 } } */
