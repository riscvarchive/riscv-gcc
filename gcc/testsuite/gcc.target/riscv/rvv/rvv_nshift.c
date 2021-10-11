/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_WINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST, nsra)
RVV_WUINT_TEST_ARG(RVV_NINT_SHIFT_BUILTIN_VEC_SCALAR_IMM_TEST, nsrl)

/* { dg-final { scan-assembler-times "vnsrl.wv" 15 } } */
/* { dg-final { scan-assembler-times "vnsrl.wx" 15 } } */
/* { dg-final { scan-assembler-times "vnsrl.wi" 15 } } */
/* { dg-final { scan-assembler-times "vnsra.wv" 15 } } */
/* { dg-final { scan-assembler-times "vnsra.wx" 15 } } */
/* { dg-final { scan-assembler-times "vnsra.wi" 15 } } */
