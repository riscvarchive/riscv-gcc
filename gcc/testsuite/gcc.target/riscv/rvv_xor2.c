/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VXOR(STYPE, VCLASS, EM, MLEN)                                          \
  void vxor##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvxor##VCLASS##EM (vx, vy);                                          \
    vy = rvvxor##VCLASS##EM##_scalar (vy, z);                                  \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvxor##VCLASS##EM##_scalar (vx, 1);                                  \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }

RVV_INT_TEST(VXOR)

/* { dg-final { scan-assembler-times "vxor.vv" 16 } } */
/* { dg-final { scan-assembler-times "vxor.vx" 16 } } */
/* { dg-final { scan-assembler-times "vxor.vi" 16 } } */
