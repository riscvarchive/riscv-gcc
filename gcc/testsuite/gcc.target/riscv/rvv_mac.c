/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, macc)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsac)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, madd)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsub)

/* { dg-final { scan-assembler-times "vmacc.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmacc.vx" 32 } } */
/* { dg-final { scan-assembler-times "vnmsac.vv" 32 } } */
/* { dg-final { scan-assembler-times "vnmsac.vx" 32 } } */
/* { dg-final { scan-assembler-times "vmadd.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmadd.vx" 32 } } */
/* { dg-final { scan-assembler-times "vnmsub.vv" 32 } } */
/* { dg-final { scan-assembler-times "vnmsub.vx" 32 } } */
