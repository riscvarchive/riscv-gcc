/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VCOMPARE_VV(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                               \
  void v##OP##VCLASS##EM##_vv(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {        \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask = MSET (MLEN);                                             \
    mask = vms##OP##_vv_##VCLASS##EM##_b##MLEN##_m(mask, mask, vx, vz, vl);              \
    vx = vadd_vv_##VCLASS##EM##_m (mask, vy, vx, vy, vl);                    \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }

#define VCOMPARE_VX(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                               \
  void v##OP##VCLASS##EM##_vx(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {        \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask = MSET (MLEN);                                             \
    mask = vms##OP##_vx_##VCLASS##EM##_b##MLEN##_m(mask, mask, vx, *z, vl);              \
    vx = vadd_vv_##VCLASS##EM##_m (mask, vy, vx, vy, vl);                    \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }


#define VCOMPARE_VI(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                               \
  void v##OP##VCLASS##EM##_vi(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {        \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask = MSET (MLEN);                                             \
    mask = vms##OP##_vx_##VCLASS##EM##_b##MLEN##_m(mask, mask, vx, 10, vl);              \
    vx = vadd_vv_##VCLASS##EM##_m (mask, vy, vx, vy, vl);                    \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }

#define TEST_COMPARE_VV_VX(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  VCOMPARE_VV (STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)			\
  VCOMPARE_VX (STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define TEST_COMPARE_VX_VI(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  VCOMPARE_VX (STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)			\
  VCOMPARE_VI (STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

#define TEST_COMPARE_VV_VX_VI(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)	\
  TEST_COMPARE_VV_VX(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)		\
  VCOMPARE_VI (STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)

RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, eq)
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, eq)
/* { dg-final { scan-assembler-times "vmseq.vv" 44 } } */
/* { dg-final { scan-assembler-times "vmseq.vx" 44 } } */
/* { dg-final { scan-assembler-times "vmseq.vi" 44 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, ne)
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, ne)
/* { dg-final { scan-assembler-times "vmsne.vv" 44 } } */
/* { dg-final { scan-assembler-times "vmsne.vx" 44 } } */
/* { dg-final { scan-assembler-times "vmsne.vi" 44 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX, lt)
/* { dg-final { scan-assembler-times "vmslt.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmslt.vx" 22 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX, ltu)
/* { dg-final { scan-assembler-times "vmsltu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmsltu.vx" 22 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, le)
/* { dg-final { scan-assembler-times "vmsle.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmsle.vx" 22 } } */
/* { dg-final { scan-assembler-times "vmsle.vi" 22 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, leu)
/* { dg-final { scan-assembler-times "vmsleu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmsleu.vx" 22 } } */
/* { dg-final { scan-assembler-times "vmsleu.vi" 22 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VX_VI, gt)
/* { dg-final { scan-assembler-times "vmsgt.vx" 22 } } */
/* { dg-final { scan-assembler-times "vmsgt.vi" 22 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VX_VI, gtu)
/* { dg-final { scan-assembler-times "vmsgtu.vx" 22 } } */
/* { dg-final { scan-assembler-times "vmsgtu.vi" 22 } } */
