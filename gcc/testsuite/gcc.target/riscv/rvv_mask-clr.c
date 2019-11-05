/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VCLR(STYPE, VCLASS, EM, MLEN)                                          \
  void vsbf##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {                        \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvvbool##MLEN##_t mask0;                                                   \
    rvvbool##MLEN##_t rv;                                                      \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    mask0 = rvv_mclr_bool##MLEN ();                                            \
    vy = rvvadd##VCLASS##EM##_mask (mask0, vy, vx, vy);                        \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }

RVV_INT_TEST(VCLR)

/* { dg-final { scan-assembler-times "vmclr.m" 16 } } */
