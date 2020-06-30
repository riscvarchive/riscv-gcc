/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, and)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, and)

/* { dg-final { scan-assembler-times "vand.vv" 32 } } */
/* { dg-final { scan-assembler-times "vand.vx" 32 } } */
/* { dg-final { scan-assembler-times "vand.vi" 32 } } */
