/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, sadd)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, saddu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, ssub)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, ssubu)

/* { dg-final { scan-assembler-times "vsadd.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsadd.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vsaddu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsaddu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsaddu.vi" 16 } } */
/* { dg-final { scan-assembler-times "vssub.vv" 16 } } */
/* { dg-final { scan-assembler-times "vssub.vx" 16 } } */
/* { dg-final { scan-assembler-times "vssubu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vssubu.vx" 32 } } */
