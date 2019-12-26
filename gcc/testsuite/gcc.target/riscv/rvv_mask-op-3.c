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
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = v##OP##_m_bool##MLEN(mask1);                                    \
    vy = vadd_vv_##VCLASS##EM##_mask (mask2, vy, vx, vy);                   \
    * (v##VCLASS##EM##_t *) y = vy;                                         \
  }                                                                            \
  void v##OP##VCLASS##EM##_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {      \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    long rv;                                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM(vx, vz);                                   \
    mask3 = vsetlt_vv_##VCLASS##EM(vy, vz);                                   \
    mask3 = v##OP##_m_bool##MLEN##_mask(mask1, mask2, mask3);               \
    vy = vadd_vv_##VCLASS##EM##_mask (mask3, vy, vx, vy);                   \
    * (v##VCLASS##EM##_t *) y = vy;                                         \
  }                                                                            \

RVV_INT_TEST_ARG(VMMISC, sbf)
RVV_INT_TEST_ARG(VMMISC, sif)
RVV_INT_TEST_ARG(VMMISC, sof)

/* { dg-final { scan-assembler-times "vmsbf.m" 32 } } */
/* { dg-final { scan-assembler-times "vmsif.m" 32 } } */
/* { dg-final { scan-assembler-times "vmsof.m" 32 } } */
