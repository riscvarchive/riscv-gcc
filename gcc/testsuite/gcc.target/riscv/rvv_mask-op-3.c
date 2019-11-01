/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSBF(STYPE, VCLASS, EM, MLEN)                                          \
  void vsbf##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {                        \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvvbool##MLEN##_t mask1, mask2;                                            \
    rvvbool##MLEN##_t rv;                                                      \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    mask2 = rvvsbfbool##MLEN(mask1);                                           \
    vy = rvvadd##VCLASS##EM##_mask (mask2, vy, vx, vy);                        \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }                                                                            \
  void vsbf##VCLASS##EM##_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {       \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvld##VCLASS##EM(z);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    mask2 = rvvslt##VCLASS##EM(vx, vz);                                        \
    mask3 = rvvslt##VCLASS##EM(vy, vz);                                        \
    mask3 = rvvsbfbool##MLEN##_mask(mask1, mask2, mask3);                      \
    vy = rvvadd##VCLASS##EM##_mask (mask3, vy, vx, vy);                        \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }                                                                            \

RVV_INT_TEST(VSBF)

/* { dg-final { scan-assembler-times "vmsbf.m" 32 } } */
