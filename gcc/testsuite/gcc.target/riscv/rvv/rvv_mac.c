/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

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

RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fmacc)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fnmacc)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fmsac)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fnmsac)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fmadd)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fnmadd)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fmsub)
RVV_FLOAT_TEST_ARG(RVV_MAC_BUILTIN_VEC_SCALAR_MASKED_TEST, fnmsub)

/* { dg-final { scan-assembler-times "v(?:macc|madd)\.vv" 176 } } */
/* { dg-final { scan-assembler-times "v(?:macc|madd)\.vx" 176 } } */
/* { dg-final { scan-assembler-times "v(?:nmsac|nmsub)\.vv" 176 } } */
/* { dg-final { scan-assembler-times "v(?:nmsac|nmsub)\.vx" 176 } } */

/* { dg-final { scan-assembler-times "vfmacc.vv|vfmadd.vv" 60 } } */
/* { dg-final { scan-assembler-times "vfmacc.vf|vfmadd.vf" 60 } } */
/* { dg-final { scan-assembler-times "vfnmacc.vv|vfnmadd.vv" 60 } } */
/* { dg-final { scan-assembler-times "vfnmacc.vf|vfnmadd.vf" 60 } } */
/* { dg-final { scan-assembler-times "vfmsac.vv|vfmsub.vv" 60 } } */
/* { dg-final { scan-assembler-times "vfmsac.vf|vfmsub.vf" 60 } } */
/* { dg-final { scan-assembler-times "vfnmsac.vv|vfnmsub.vv" 60 } } */
/* { dg-final { scan-assembler-times "vfnmsac.vf|vfnmsub.vf" 60 } } */
