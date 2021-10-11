/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sll)
RVV_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sll)
RVV_INT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, sra)
RVV_UINT_TEST_ARG(RVV_SHIFT_VEC_SCALAR_MASKED_TEST, srl)

/* { dg-final { scan-assembler-times "vsll.vv" 44 } } */
/* { dg-final { scan-assembler-times "vsll.vx" 44 } } */
/* { dg-final { scan-assembler-times "vsra.vv" 22 } } */
/* { dg-final { scan-assembler-times "vsra.vx" 22 } } */
/* { dg-final { scan-assembler-times "vsrl.vv" 22 } } */
/* { dg-final { scan-assembler-times "vsrl.vx" 22 } } */
