/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VCOMPARE_VV(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                               \
  void v##OP##VCLASS##EM##_vv(size_t n, STYPE *x, STYPE *y, STYPE z) {         \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask = vms##OP##_vv_##VCLASS##EM##_b##MLEN(vx, vy);                                 \
    vx = vadd_vv_##VCLASS##EM##_m (mask, vy, vx, vy);                    \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }

#define VCOMPARE_VX(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                               \
  void v##OP##VCLASS##EM##_vx(size_t n, STYPE *x, STYPE *y, STYPE z) {         \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask = vms##OP##_vx_##VCLASS##EM##_b##MLEN(vx, z);                            \
    vx = vadd_vv_##VCLASS##EM##_m (mask, vy, vx, vy);                    \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }

#define VCOMPARE_VI(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                               \
  void v##OP##VCLASS##EM##_vi(size_t n, STYPE *x, STYPE *y, STYPE z) {         \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask = vms##OP##_vx_##VCLASS##EM##_b##MLEN(vx, 12);                           \
    vx = vadd_vv_##VCLASS##EM##_m (mask, vy, vx, vy);                    \
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
/* { dg-final { scan-assembler-times "vmseq.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmseq.vx" 32 } } */
/* { dg-final { scan-assembler-times "vmseq.vi" 32 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, ne)
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, ne)
/* { dg-final { scan-assembler-times "vmsne.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmsne.vx" 32 } } */
/* { dg-final { scan-assembler-times "vmsne.vi" 32 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX, lt)
/* { dg-final { scan-assembler-times "vmslt.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmslt.vx" 16 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX, ltu)
/* { dg-final { scan-assembler-times "vmsltu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsltu.vx" 16 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, le)
/* { dg-final { scan-assembler-times "vmsle.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsle.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsle.vi" 16 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, leu)
/* { dg-final { scan-assembler-times "vmsleu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsleu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsleu.vi" 16 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VX_VI, gt)
/* { dg-final { scan-assembler-times "vmsgt.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsgt.vi" 16 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VX_VI, gtu)
/* { dg-final { scan-assembler-times "vmsgtu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsgtu.vi" 16 } } */
