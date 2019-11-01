/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMAND(STYPE, VCLASS, EM, MLEN)                                         \
  void vmand##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {             \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask1, mask2, mask3;                                     \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvld##VCLASS##EM(z);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    mask2 = rvvslt##VCLASS##EM##_mask(mask1, mask1, vx, vz);                   \
    mask3 = mask1 & mask2;                                                     \
    vx = rvvadd##VCLASS##EM##_mask (mask3, vy, vx, vy);                        \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }                                                                            \
  void vmand##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {          \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask1, mask2, mask3;                                     \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvld##VCLASS##EM(z);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    mask2 = rvvslt##VCLASS##EM##_mask(mask1, mask1, vx, vz);                   \
    mask3 = rvvandbool##MLEN(mask1, mask2);                                  \
    vx = rvvadd##VCLASS##EM##_mask (mask3, vy, vx, vy);                        \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }


RVV_INT_TEST(VMAND)

/* { dg-final { scan-assembler-times "vmand.mm" 32 } } */
