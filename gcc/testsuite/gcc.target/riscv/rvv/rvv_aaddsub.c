/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, aadd)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, aaddu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, asub)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, asubu)

/* { dg-final { scan-assembler-times "vaadd.vv" 16 } } */
/* { dg-final { scan-assembler-times "vaadd.vx" 32 } } */
/* { dg-final { scan-assembler-times "vaaddu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vaaddu.vx" 32 } } */
/* { dg-final { scan-assembler-times "vasub.vv" 16 } } */
/* { dg-final { scan-assembler-times "vasub.vx" 32 } } */
/* { dg-final { scan-assembler-times "vasubu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vasubu.vx" 32 } } */
