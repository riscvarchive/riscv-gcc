/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VPOPC(STYPE, VCLASS, EM, MLEN)                                         \
  long vpopc##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                    \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t mask1;                                                   \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    rv = rvv_popc_m_bool##MLEN(mask1);                                         \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {     \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask1, mask2;                                            \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    rv = rvv_popc_m_bool##MLEN##_mask(mask1, mask2);                           \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask_opt(size_t n, STYPE *x, STYPE *y, STYPE *z) { \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    /* Combine & and popc into masked popc  */                                 \
    mask3 = mask1 & mask2;                                                     \
    rv = rvv_popc_m_bool##MLEN(mask3);                                         \
    return rv;                                                                 \
  }



RVV_INT_TEST(VPOPC)

/* { dg-final { scan-assembler-times "vpopc.m" 48 } } */
/* { dg-final { scan-assembler-not "vmand" } } */
