/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VXOR(STYPE, VCLASST, VCLASS, EM, MLEN)                                 \
  void vxor##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    v##VCLASST##EM##_t vx, vy;                                                 \
    vx = vload_##VCLASS##EM(x);                                                \
    vy = vload_##VCLASS##EM(y);                                                \
    vy = vxor_vv_##VCLASS##EM (vx, vy);                                        \
    vy = vxor_vs_##VCLASS##EM (vy, z);                                         \
    vstore_##VCLASS##EM(y, vy);                                                \
    vx = vxor_vs_##VCLASS##EM (vx, 1);                                         \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

RVV_INT_TEST(VXOR)

/* { dg-final { scan-assembler-times "vxor.vv" 16 } } */
/* { dg-final { scan-assembler-times "vxor.vx" 16 } } */
/* { dg-final { scan-assembler-times "vxor.vi" 16 } } */
