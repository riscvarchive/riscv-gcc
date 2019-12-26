/* { dg-do compile } */
/* -fno-expensive-optimizations for disable bswap pass, it will cause ICE when
   there is vector operation with bitwise-or  */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d -fno-expensive-optimizations" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMBIN(STYPE, VCLASST, VCLASS, EM, MLEN, OP, OPERATOR)                           \
  void vm##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {            \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = mask1 OPERATOR mask2;                                              \
    vx = vadd_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    vstore_##VCLASS##EM(x, vx);                                                \
  }                                                                            \
  void vm##OP##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {         \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = v##OP##_mm_b##MLEN(mask1, mask2);                            \
    vx = vadd_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

#define VMNBIN(STYPE, VCLASST, VCLASS, EM, MLEN, OP)                                    \
  void vm##OP##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {         \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = v##OP##_mm_b##MLEN(mask1, mask2);                            \
    vx = vadd_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    vstore_##VCLASS##EM(x, vx);                                                \
  }


#define VMNOT(STYPE, VCLASST, VCLASS, EM, MLEN)                                         \
  void vmnot##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {          \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM##_mask(mask1, mask1, vx, vz);              \
    mask3 = vnot_m_b##MLEN(mask2);                                       \
    vx = vadd_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    vstore_##VCLASS##EM(x, vx);                                                \
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
