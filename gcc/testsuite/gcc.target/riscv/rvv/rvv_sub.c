/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, sub, -)
RVV_UINT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_IMM_TEST, sub, -)
RVV_FLOAT_TEST_ARG(RVV_BIN_OPERATOR_VEC_SCALAR_TEST, fsub, -)

/* { dg-final { scan-assembler-times "vsub.vv" 64 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vsub.vx" 0 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 24 } } */
/* combine not work with vec_dup currently.  */
/* { dg-final { scan-assembler-times "vfsub.vf" 0 } } */
