/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_SEW_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sll)
RVV_SEW_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sll)
RVV_SEW_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sra)
RVV_SEW_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, srl)
RVV_SEW_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, ssra)
RVV_SEW_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, ssrl)

/* { dg-final { scan-assembler-times "vsll.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsll.vx" 32 } } */
/* { dg-final { scan-assembler-times "vsra.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsra.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsrl.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsrl.vx" 16 } } */
/* { dg-final { scan-assembler-times "vssra.vv" 16 } } */
/* { dg-final { scan-assembler-times "vssra.vx" 16 } } */
/* { dg-final { scan-assembler-times "vssrl.vv" 16 } } */
/* { dg-final { scan-assembler-times "vssrl.vx" 16 } } */
