/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VAND(STYPE, VCLASS, EM, MLEN)                                          \
  void vand##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvand##VCLASS##EM (vx, vy);                                          \
    vy = rvvand##VCLASS##EM##_scalar (vy, z);                                  \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvand##VCLASS##EM##_scalar (vx, 1);                                  \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }

RVV_INT_TEST(VAND)

/* { dg-final { scan-assembler-times "vand.vv" 16 } } */
/* { dg-final { scan-assembler-times "vand.vx" 16 } } */
/* { dg-final { scan-assembler-times "vand.vi" 16 } } */
