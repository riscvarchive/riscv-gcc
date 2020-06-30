/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, div)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, divu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, rem)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, remu)

/* { dg-final { scan-assembler-times "vdiv.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 16 } } */
/* { dg-final { scan-assembler-times "vrem.vv" 16 } } */
/* { dg-final { scan-assembler-times "vrem.vx" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vremu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vremu.vx" 16 } } */
