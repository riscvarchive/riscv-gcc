/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_SEW_WINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, nsrl)
RVV_SEW_WINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, nsra)
RVV_SEW_WUINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, nsrl)
RVV_SEW_WUINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, nsra)

/* { dg-final { scan-assembler-times "vnsrl.wv" 18 } } */
/* { dg-final { scan-assembler-times "vnsrl.wx" 18 } } */
/* { dg-final { scan-assembler-times "vnsrl.wi" 18 } } */
/* { dg-final { scan-assembler-times "vnsra.wv" 18 } } */
/* { dg-final { scan-assembler-times "vnsra.wx" 18 } } */
/* { dg-final { scan-assembler-times "vnsra.wi" 18 } } */
