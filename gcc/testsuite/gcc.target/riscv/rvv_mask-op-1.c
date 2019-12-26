/* { dg-do compile } */
/* -fno-expensive-optimizations for disable bswap pass, it will cause ICE when
   there is vector operation with bitwise-or  */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d -fno-expensive-optimizations" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMBIN(STYPE, VCLASS, EM, MLEN, OP, OPERATOR)                           \
  void vm##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {            \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = mask1 OPERATOR mask2;                                              \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                \
  }                                                                            \
  void vm##OP##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {         \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = rvv_##OP##_mm_bool##MLEN(mask1, mask2);                            \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                \
  }

#define VMNBIN(STYPE, VCLASS, EM, MLEN, OP)                                    \
  void vm##OP##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {         \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = rvv_##OP##_mm_bool##MLEN(mask1, mask2);                            \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                \
  }


#define VMNOT(STYPE, VCLASS, EM, MLEN)                                         \
  void vmnot##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {          \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = rvv_not_m_bool##MLEN(mask2);                                       \
    vx = rvv_add_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                \
  }

RVV_INT_TEST_ARG(VMBIN, and, &)
RVV_INT_TEST_ARG(VMBIN, or, |)
RVV_INT_TEST_ARG(VMBIN, xor, ^)
RVV_INT_TEST_ARG(VMNBIN, nand)
RVV_INT_TEST_ARG(VMNBIN, nor)
RVV_INT_TEST_ARG(VMNBIN, xnor)
RVV_INT_TEST_ARG(VMNBIN, andnot)
RVV_INT_TEST_ARG(VMNBIN, ornot)
/* XXX: vmnot can't generate by oprator now, GCC will ICE.  */
RVV_INT_TEST(VMNOT)

/* { dg-final { scan-assembler-times "vmand.mm" 32 } } */
/* { dg-final { scan-assembler-times "vmor.mm" 32 } } */
/* { dg-final { scan-assembler-times "vmxor.mm" 32 } } */
/* { dg-final { scan-assembler-times "vmnand.mm" 16 } } */
/* { dg-final { scan-assembler-times "vmnor.mm" 16 } } */
/* { dg-final { scan-assembler-times "vmxnor.mm" 16 } } */
/* { dg-final { scan-assembler-times "vmandnot.mm" 16 } } */
/* { dg-final { scan-assembler-times "vmornot.mm" 16 } } */
/* { dg-final { scan-assembler-times "vmnot.m" 16 } } */
