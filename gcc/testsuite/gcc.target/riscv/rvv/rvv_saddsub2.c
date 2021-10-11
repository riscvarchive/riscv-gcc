/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, sadd)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, saddu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, ssub)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, ssubu)

/* { dg-final { scan-assembler-times "vsadd.vv" 22 } } */
/* { dg-final { scan-assembler-times "vsadd.vx" 22 } } */
/* { dg-final { scan-assembler-times "vsadd.vi" 22 } } */
/* { dg-final { scan-assembler-times "vsaddu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vsaddu.vx" 22 } } */
/* { dg-final { scan-assembler-times "vsaddu.vi" 22 } } */
/* { dg-final { scan-assembler-times "vssub.vv" 22 } } */
/* { dg-final { scan-assembler-times "vssub.vx" 44 } } */
/* { dg-final { scan-assembler-times "vssubu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vssubu.vx" 44 } } */
