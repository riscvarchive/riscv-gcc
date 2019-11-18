/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLT(STYPE, VCLASS, EM, MLEN)                                          \
  void vlt##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {               \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask;                                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask = rvv_slt_vv_##VCLASS##EM(vx, vy);                                    \
    mask = rvv_slt_vv_##VCLASS##EM##_mask(mask, mask, vx, vz);                 \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    rvv_se_##VCLASS##EM(x, vx);                                                  \
  }

#define VSLTU(STYPE, VCLASS, EM, MLEN)                                         \
  void vltu##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {              \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask;                                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask = rvv_sltu_vv_##VCLASS##EM(vx, vy);                                   \
    mask = rvv_sltu_vv_##VCLASS##EM##_mask(mask, mask, vx, vz);                \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    rvv_se_##VCLASS##EM(x, vx);                                                  \
  }


RVV_INT_TEST(VSLT)
RVV_UINT_TEST(VSLTU)

/* XXX: Check only half of vmslt.vv has masking operand.  */
/* { dg-final { scan-assembler-times "vmslt.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmsltu.vv" 32 } } */
