/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, sadd)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, sadd)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, ssub)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, ssub)

/* { dg-final { scan-assembler-times "vsadd.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsadd.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vsaddu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsaddu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsaddu.vi" 32 } } */
/* { dg-final { scan-assembler-times "vssub.vv" 16 } } */
/* { dg-final { scan-assembler-times "vssub.vx" 16 } } */
/* { dg-final { scan-assembler-times "vssubu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vssubu.vx" 16 } } */
