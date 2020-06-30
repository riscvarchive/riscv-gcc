/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_WINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, nclip)
RVV_WUINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, nclipu)

/* { dg-final { scan-assembler-times "vnclip.wv" 9 } } */
/* { dg-final { scan-assembler-times "vnclip.wx" 9 } } */
/* { dg-final { scan-assembler-times "vnclip.wi" 9 } } */
/* { dg-final { scan-assembler-times "vnclipu.wv" 9 } } */
/* { dg-final { scan-assembler-times "vnclipu.wx" 9 } } */
/* { dg-final { scan-assembler-times "vnclipu.wi" 9 } } */
