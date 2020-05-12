/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_SEW_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sll)
RVV_SEW_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sll)
RVV_SEW_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sra)
RVV_SEW_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, srl)

/* { dg-final { scan-assembler-times "vsll.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsll.vx" 32 } } */
/* { dg-final { scan-assembler-times "vsra.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsra.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsrl.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsrl.vx" 16 } } */
