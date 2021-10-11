/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_WINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST, nclip)
RVV_WUINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST, nclipu)

/* { dg-final { scan-assembler-times "vnclip.wv" 15 } } */
/* { dg-final { scan-assembler-times "vnclip.wx" 15 } } */
/* { dg-final { scan-assembler-times "vnclip.wi" 15 } } */
/* { dg-final { scan-assembler-times "vnclipu.wv" 15 } } */
/* { dg-final { scan-assembler-times "vnclipu.wx" 15 } } */
/* { dg-final { scan-assembler-times "vnclipu.wi" 15 } } */
