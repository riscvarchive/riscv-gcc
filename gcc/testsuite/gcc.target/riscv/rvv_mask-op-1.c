/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMAND(STYPE, VCLASS, EM, MLEN)                                         \
  void vmand##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {             \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask1, mask2, mask3;                                     \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = mask1 & mask2;                                                     \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                  \
  }                                                                            \
  void vmand##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {          \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask1, mask2, mask3;                                     \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = rvv_and_mm_bool##MLEN(mask1, mask2);                               \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                  \
  }


RVV_INT_TEST(VMAND)

/* { dg-final { scan-assembler-times "vmand.mm" 32 } } */
