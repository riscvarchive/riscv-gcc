/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VDIV(STYPE, VCLASS, EM, MLEN)                                          \
  void vmul##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vy = rvv_div_vv_##VCLASS##EM(vx, vy);                                      \
    vy = rvv_div_vs_##VCLASS##EM (vy, z);                                      \
    vy = rvv_rdiv_vs_##VCLASS##EM (vy, z);                                     \
    rvv_se_##VCLASS##EM(y, vy);                                                  \
  }

/* integer intrinsics have not finished */
//RVV_INT_TEST(VDIV)
RVV_FLOAT_TEST(VDIV)

/* { dg-final { scan-assembler-times "vfdiv.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfdiv.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfrdiv.vf" 12 } } */
