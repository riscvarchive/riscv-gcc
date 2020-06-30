/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_WINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST, nsra)
RVV_WUINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST, nsrl)

/* { dg-final { scan-assembler-times "vnsrl.wv" 9 } } */
/* { dg-final { scan-assembler-times "vnsrl.wx" 9 } } */
/* { dg-final { scan-assembler-times "vnsrl.wi" 9 } } */
/* { dg-final { scan-assembler-times "vnsra.wv" 9 } } */
/* { dg-final { scan-assembler-times "vnsra.wx" 9 } } */
/* { dg-final { scan-assembler-times "vnsra.wi" 9 } } */
