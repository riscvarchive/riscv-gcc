/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mul)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mul)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fmul)

/* { dg-final { scan-assembler-times "vmul.vv" 44 } } */
/* { dg-final { scan-assembler-times "vmul.vx" 44 } } */
/* { dg-final { scan-assembler-times "vfmul.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfmul.vf" 15 } } */
