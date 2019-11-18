/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADD_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvv_add_vv_##VCLASS##EM (vx, vy);                                     \
    vy = rvv_add_vs_##VCLASS##EM (vy, z);                                      \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, add)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, add)
RVV_FLOAT_TEST(VADD_NO_IMM)

/* { dg-final { scan-assembler-times "vadd.vv" 32 } } */
/* { dg-final { scan-assembler-times "vadd.vx" 32 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vfadd.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfadd.vf" 12 } } */
