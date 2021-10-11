/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, add)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, add)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fadd)

/* { dg-final { scan-assembler-times "vadd.vv" 44 } } */
/* { dg-final { scan-assembler-times "vadd.vx" 44 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 44 } } */
/* { dg-final { scan-assembler-times "vfadd.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfadd.vf" 15 } } */
