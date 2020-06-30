/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, div, /)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, div, /)
RVV_FLOAT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, fdiv, /)

/* { dg-final { scan-assembler-times "vdiv.vv" 32 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 32 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vfdiv.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfdiv.vf" 12 } } */
