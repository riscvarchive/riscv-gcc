/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mulh)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mulh)

/* { dg-final { scan-assembler-times "vmulh.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulh.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vx" 16 } } */
