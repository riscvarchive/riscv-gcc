/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMMISC(STYPE, VCLASS, EM, MLEN, OP)                                    \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {                       \
    v##VCLASS##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask1, mask2;                                           \
    vbool##MLEN##_t rv;                                                     \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_##OP##_m_bool##MLEN(mask1);                                    \
    vy = rvv_add_vv_##VCLASS##EM##_mask (mask2, vy, vx, vy);                   \
    * (v##VCLASS##EM##_t *) y = vy;                                         \
  }                                                                            \
  void v##OP##VCLASS##EM##_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {      \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    mask3 = rvv_slt_vv_##VCLASS##EM(vy, vz);                                   \
    mask3 = rvv_##OP##_m_bool##MLEN##_mask(mask1, mask2, mask3);               \
    vy = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    * (v##VCLASS##EM##_t *) y = vy;                                         \
  }                                                                            \

RVV_INT_TEST_ARG(VMMISC, sbf)
RVV_INT_TEST_ARG(VMMISC, sif)
RVV_INT_TEST_ARG(VMMISC, sof)

/* { dg-final { scan-assembler-times "vmsbf.m" 32 } } */
/* { dg-final { scan-assembler-times "vmsif.m" 32 } } */
/* { dg-final { scan-assembler-times "vmsof.m" 32 } } */
