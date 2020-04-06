/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VOR(STYPE, VCLASST, VCLASS, EM, MLEN)                                  \
  void vor##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {                \
    v##VCLASST##EM##_t vx, vy;                                                 \
    vx = vload_##VCLASS##EM(x);                                                \
    vy = vload_##VCLASS##EM(y);                                                \
    vy = vor_vv_##VCLASS##EM (vx, vy);                                         \
    vy = vor_vs_##VCLASS##EM (vy, z);                                          \
    vstore_##VCLASS##EM(y, vy);                                                \
    vx = vor_vs_##VCLASS##EM (vx, 1);                                          \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

RVV_INT_TEST(VOR)

/* { dg-final { scan-assembler-times "vor.vv" 16 } } */
/* { dg-final { scan-assembler-times "vor.vx" 16 } } */
/* { dg-final { scan-assembler-times "vor.vi" 16 } } */
