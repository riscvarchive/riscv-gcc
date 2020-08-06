/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, mul, *)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, mul, *)
RVV_FLOAT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, mul, *)

/* { dg-final { scan-assembler-times "vmul.vv" 64 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vmul.vx" 0 } } */
/* { dg-final { scan-assembler-times "vfmul.vv" 24 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vfmul.vf" 0 } } */
