/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, macc)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsac)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, madd)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsub)

RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, macc)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmacc)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, msac)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsac)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, madd)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmadd)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, msub)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsub)

/* { dg-final { scan-assembler-times "vmacc.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmacc.vx" 32 } } */
/* { dg-final { scan-assembler-times "vnmsac.vv" 32 } } */
/* { dg-final { scan-assembler-times "vnmsac.vx" 32 } } */
/* { dg-final { scan-assembler-times "vmadd.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmadd.vx" 32 } } */
/* { dg-final { scan-assembler-times "vnmsub.vv" 32 } } */
/* { dg-final { scan-assembler-times "vnmsub.vx" 32 } } */

/* { dg-final { scan-assembler-times "vfmacc.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfmacc.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfnmacc.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfnmacc.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfmsac.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfmsac.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfnmsac.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfnmsac.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfmadd.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfmadd.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfnmadd.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfnmadd.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfmsub.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfmsub.vf" 24 } } */
/* { dg-final { scan-assembler-times "vfnmsub.vv" 24 } } */
/* { dg-final { scan-assembler-times "vfnmsub.vf" 24 } } */
