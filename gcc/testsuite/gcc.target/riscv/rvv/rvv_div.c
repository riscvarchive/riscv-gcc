/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, div, /)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, div, /)
RVV_FLOAT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, fdiv, /)

/* { dg-final { scan-assembler-times "vdiv.vv" 48 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vdiv.vx" 0 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 48 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vdivu.vx" 0 } } */
/* { dg-final { scan-assembler-times "vfdiv.vv" 24 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vfdiv.vf" 0 } } */
