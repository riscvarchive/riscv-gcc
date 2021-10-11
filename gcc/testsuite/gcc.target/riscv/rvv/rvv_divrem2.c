/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, div)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, divu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, rem)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, remu)

/* { dg-final { scan-assembler-times "vdiv.vv" 22 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 22 } } */
/* { dg-final { scan-assembler-times "vrem.vv" 22 } } */
/* { dg-final { scan-assembler-times "vrem.vx" 22 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 22 } } */
/* { dg-final { scan-assembler-times "vremu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vremu.vx" 22 } } */
