/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsgnj)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsgnjn)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsgnjx)

/* { dg-final { scan-assembler-times "vfsgnj.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfsgnj.vf" 15 } } */
/* { dg-final { scan-assembler-times "vfsgnjn.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfsgnjn.vf" 15 } } */
/* { dg-final { scan-assembler-times "vfsgnjx.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfsgnjx.vf" 15 } } */
