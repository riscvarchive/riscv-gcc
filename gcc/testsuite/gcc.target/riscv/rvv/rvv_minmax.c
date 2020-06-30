/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, min)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, minu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, max)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, maxu)

/* { dg-final { scan-assembler-times "vmin.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmin.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmax.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmax.vx" 16 } } */
/* { dg-final { scan-assembler-times "vminu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vminu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmaxu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmaxu.vx" 16 } } */
