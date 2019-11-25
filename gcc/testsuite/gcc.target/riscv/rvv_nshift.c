/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_WINT_TEST_ARG(RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, nsrl)
RVV_WINT_TEST_ARG(RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, nsra)
RVV_WUINT_TEST_ARG(RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, nsrl)
RVV_WUINT_TEST_ARG(RVV_NINT_BIN_BUILTIN_VEC_SCALAR_IMM_TEST, nsra)

/* { dg-final { scan-assembler-times "vnsrl.wv" 18 } } */
/* { dg-final { scan-assembler-times "vnsrl.wx" 18 } } */
/* { dg-final { scan-assembler-times "vnsrl.wi" 18 } } */
/* { dg-final { scan-assembler-times "vnsra.wv" 18 } } */
/* { dg-final { scan-assembler-times "vnsra.wx" 18 } } */
/* { dg-final { scan-assembler-times "vnsra.wi" 18 } } */
