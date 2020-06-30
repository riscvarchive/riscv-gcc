/* { dg-do compile } */
/* -fno-expensive-optimizations for disable bswap pass, it will cause ICE when
   there is vector operation with bitwise-or  */
/* { dg-additional-options "-fno-expensive-optimizations" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMBIN(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP, OPERATOR)           \
  void vm##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {            \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy);                           \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN##_m(mask1, mask1, vx, vz);          \
    mask3 = mask1 OPERATOR mask2;                                              \
    vx = vadd_vv_##VCLASS##EM##_m (mask3, vy, vx, vy);                   \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }                                                                            \
  void vm##OP##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {         \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy);                                   \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN##_m(mask1, mask1, vx, vz);              \
    mask3 = v##OP##_mm_b##MLEN(mask1, mask2);                            \
    vx = vadd_vv_##VCLASS##EM##_m (mask3, vy, vx, vy);                   \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }

#define VMNBIN(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                    \
  void vm##OP##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {         \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy);                           \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN##_m(mask1, mask1, vx, vz);         \
    mask3 = v##OP##_mm_b##MLEN(mask1, mask2);                            \
    vx = vadd_vv_##VCLASS##EM##_m (mask3, vy, vx, vy);                   \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }


#define VMNOT(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                         \
  void vmnot##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, STYPE *z) {          \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy);                   \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN##_m(mask1, mask1, vx, vz);              \
    mask3 = vmnot_m_b##MLEN(mask2);                                       \
    vx = vadd_vv_##VCLASS##EM##_m (mask3, vy, vx, vy);                   \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }

RVV_INT_TEST_ARG(VMBIN, mand, &)
RVV_INT_TEST_ARG(VMBIN, mor, |)
RVV_INT_TEST_ARG(VMBIN, mxor, ^)
RVV_INT_TEST_ARG(VMNBIN, mnand)
RVV_INT_TEST_ARG(VMNBIN, mnor)
RVV_INT_TEST_ARG(VMNBIN, mxnor)
RVV_INT_TEST_ARG(VMNBIN, mandnot)
RVV_INT_TEST_ARG(VMNBIN, mornot)
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
