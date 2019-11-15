/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, div)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, div)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, rem)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, rem)

/* { dg-final { scan-assembler-times "vdiv.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 16 } } */
/* { dg-final { scan-assembler-times "vrem.vv" 16 } } */
/* { dg-final { scan-assembler-times "vrem.vx" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vremu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vremu.vx" 16 } } */
