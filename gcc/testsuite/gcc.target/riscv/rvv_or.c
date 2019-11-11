/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f -fno-expensive-optimizations" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VOR(STYPE, VCLASS, EM, MLEN)                                          \
  void vor##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = vx | vy;                                                              \
    vy = vy | z;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
    vx = vx | 1;                                                               \
    * (rvv##VCLASS##EM##_t *) x = vx;                                          \
  }

RVV_INT_TEST(VOR)

/* { dg-final { scan-assembler-times "vor.vv" 16 } } */
/* { dg-final { scan-assembler-times "vor.vx" 16 } } */
/* { dg-final { scan-assembler-times "vor.vi" 16 } } */
