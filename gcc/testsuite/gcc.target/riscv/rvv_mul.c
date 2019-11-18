/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, mul, *)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, mul, *)
RVV_FLOAT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, mul, *)

/* { dg-final { scan-assembler-times "vmul.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmul.vx" 32 } } */
/* { dg-final { scan-assembler-times "vfmul.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmul.vf" 12 } } */
