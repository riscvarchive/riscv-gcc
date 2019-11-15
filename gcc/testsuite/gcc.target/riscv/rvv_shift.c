/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, sll)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, sll)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, sra)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, sra)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, srl)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, srl)

/* { dg-final { scan-assembler-times "vsll.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsll.vx" 32 } } */
/* { dg-final { scan-assembler-times "vsra.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsra.vx" 32 } } */
/* { dg-final { scan-assembler-times "vsrl.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsrl.vx" 32 } } */
