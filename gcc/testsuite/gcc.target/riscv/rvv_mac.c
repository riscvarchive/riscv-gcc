/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, macc)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsac)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, madd)
RVV_INT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsub)
RVV_UINT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, macc)
RVV_UINT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsac)
RVV_UINT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, madd)
RVV_UINT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsub)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, macc)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmacc)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, msac)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsac)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, madd)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmadd)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, msub)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, nmsub)

/* { dg-final { scan-assembler-times "v(?:macc|madd)\.vv" 128 } } */
/* { dg-final { scan-assembler-times "v(?:macc|madd)\.vx" 128 } } */
/* { dg-final { scan-assembler-times "v(?:nmsac|nmsub)\.vv" 128 } } */
/* { dg-final { scan-assembler-times "v(?:nmsac|nmsub)\.vx" 128 } } */

/* { dg-final { scan-assembler-times "vfmacc.vv|vfmadd.vv" 48 } } */
/* { dg-final { scan-assembler-times "vfmacc.vf|vfmadd.vf" 48 } } */
/* { dg-final { scan-assembler-times "vfnmacc.vv|vfnmadd.vv" 48 } } */
/* { dg-final { scan-assembler-times "vfnmacc.vf|vfnmadd.vf" 48 } } */
/* { dg-final { scan-assembler-times "vfmsac.vv|vfmsub.vv" 48 } } */
/* { dg-final { scan-assembler-times "vfmsac.vf|vfmsub.vf" 48 } } */
/* { dg-final { scan-assembler-times "vfnmsac.vv|vfnmsub.vv" 48 } } */
/* { dg-final { scan-assembler-times "vfnmsac.vf|vfnmsub.vf" 48 } } */
