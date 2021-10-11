/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMMISC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                                    \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, word_type vl) {                       \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask1, mask2;                                           \
    vbool##MLEN##_t rv;                                                     \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    mask2 = v##OP##_m_b##MLEN(mask1, vl);                                    \
    vy = vadd_vv_##VCLASS##EM##_m (mask2, vy, vx, vy, vl);                   \
    * (v##VCLASST##EM##_t *) y = vy;                                         \
  }                                                                            \
  void v##OP##VCLASS##EM##_m(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {      \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2, mask3;                                    \
    long rv;                                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vz, vl);                                   \
    mask3 = vmslt_vv_##VCLASS##EM##_b##MLEN(vy, vz, vl);                                   \
    mask3 = v##OP##_m_b##MLEN##_m(mask1, mask2, mask3, vl);               \
    vy = vadd_vv_##VCLASS##EM##_m (mask3, vy, vx, vy, vl);                   \
    * (v##VCLASST##EM##_t *) y = vy;                                         \
  }                                                                            \

RVV_INT_TEST_ARG(VMMISC, msbf)
RVV_INT_TEST_ARG(VMMISC, msif)
RVV_INT_TEST_ARG(VMMISC, msof)

/* { dg-final { scan-assembler-times "vmsbf.m" 44 } } */
/* { dg-final { scan-assembler-times "vmsif.m" 44 } } */
/* { dg-final { scan-assembler-times "vmsof.m" 44 } } */
