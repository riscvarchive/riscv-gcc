/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsgnj)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsgnjn)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsgnjx)

/* { dg-final { scan-assembler-times "vfsgnj.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsgnj.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfsgnjn.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsgnjn.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfsgnjx.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsgnjx.vf" 12 } } */
