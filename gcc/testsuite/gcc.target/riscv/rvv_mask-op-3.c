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
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_sbf_m_bool##MLEN(mask1);                                       \
    vy = rvv_add_vv_##VCLASS##EM##_mask (mask2, vy, vx, vy);                   \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }                                                                            \
  void vsbf##VCLASS##EM##_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {       \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    mask3 = rvv_slt_vv_##VCLASS##EM(vy, vz);                                   \
    mask3 = rvv_sbf_m_bool##MLEN##_mask(mask1, mask2, mask3);                  \
    vy = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }                                                                            \

RVV_INT_TEST(VSBF)

/* { dg-final { scan-assembler-times "vmsbf.m" 32 } } */
