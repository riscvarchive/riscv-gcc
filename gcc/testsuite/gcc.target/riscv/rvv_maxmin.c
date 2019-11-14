/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMAXMIN(STYPE, VCLASS, EM, MLEN)                                       \
  void vmaxmin##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {            \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvv_max_vv_##VCLASS##EM (vx, vy);                                     \
    vy = rvv_max_vs_##VCLASS##EM (vy, z);                                      \
    vy = rvv_min_vv_##VCLASS##EM (vx, vy);                                     \
    vy = rvv_min_vs_##VCLASS##EM (vy, z);                                      \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

/* XXX: integer intrinsics have not finished */
RVV_FLOAT_TEST(VMAXMIN)

/* { dg-final { scan-assembler-times "vfmax.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmax.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfmin.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmin.vf" 12 } } */
