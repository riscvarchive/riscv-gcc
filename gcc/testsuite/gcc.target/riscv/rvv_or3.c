/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VOR(STYPE, VCLASS, EM, MLEN)                                          \
  void vor##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvvbool##MLEN##_t mask;                                                    \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    mask = rvvslt##VCLASS##EM(vx, vy);                                         \
    vy = rvvor##VCLASS##EM##_mask (mask, vy, vx, vy);                         \
    vy = rvvor##VCLASS##EM##_scalar_mask (mask, vy, vy, z);                   \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvor##VCLASS##EM##_scalar_mask (mask, vy, vx, 1);                   \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }

RVV_INT_TEST(VOR)

/* { dg-final { scan-assembler-times "vor.vv" 16 } } */
/* { dg-final { scan-assembler-times "vor.vx" 16 } } */
/* { dg-final { scan-assembler-times "vor.vi" 16 } } */
