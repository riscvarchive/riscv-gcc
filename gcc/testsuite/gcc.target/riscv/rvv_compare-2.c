/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VCOMPARE_VV(STYPE, VCLASS, EM, MLEN, OP)                               \
  void v##OP##VCLASS##EM##_vv(size_t n, STYPE *x, STYPE *y, STYPE *z) {        \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask = vset_bool##MLEN ();                                             \
    mask = v##OP##_vv_##VCLASS##EM##_mask(mask, mask, vx, vz);              \
    vx = vadd_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

#define VCOMPARE_VX(STYPE, VCLASS, EM, MLEN, OP)                               \
  void v##OP##VCLASS##EM##_vx(size_t n, STYPE *x, STYPE *y, STYPE *z) {        \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask = vset_bool##MLEN ();                                             \
    mask = v##OP##_vs_##VCLASS##EM##_mask(mask, mask, vx, *z);              \
    vx = vadd_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    vstore_##VCLASS##EM(x, vx);                                                \
  }


#define VCOMPARE_VI(STYPE, VCLASS, EM, MLEN, OP)                               \
  void v##OP##VCLASS##EM##_vi(size_t n, STYPE *x, STYPE *y, STYPE *z) {        \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask = vset_bool##MLEN ();                                             \
    mask = v##OP##_vs_##VCLASS##EM##_mask(mask, mask, vx, 10);              \
    vx = vadd_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

#define TEST_COMPARE_VV_VX(STYPE, VCLASS, EM, MLEN, OP)		\
  VCOMPARE_VV (STYPE, VCLASS, EM, MLEN, OP)			\
  VCOMPARE_VX (STYPE, VCLASS, EM, MLEN, OP)

#define TEST_COMPARE_VX_VI(STYPE, VCLASS, EM, MLEN, OP)		\
  VCOMPARE_VX (STYPE, VCLASS, EM, MLEN, OP)			\
  VCOMPARE_VI (STYPE, VCLASS, EM, MLEN, OP)

#define TEST_COMPARE_VV_VX_VI(STYPE, VCLASS, EM, MLEN, OP)	\
  TEST_COMPARE_VV_VX(STYPE, VCLASS, EM, MLEN, OP)		\
  VCOMPARE_VI (STYPE, VCLASS, EM, MLEN, OP)

RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, seq)
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, seq)
/* { dg-final { scan-assembler-times "vmseq.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmseq.vx" 32 } } */
/* { dg-final { scan-assembler-times "vmseq.vi" 32 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, sne)
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, sne)
/* { dg-final { scan-assembler-times "vmsne.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmsne.vx" 32 } } */
/* { dg-final { scan-assembler-times "vmsne.vi" 32 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX, slt)
/* { dg-final { scan-assembler-times "vmslt.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmslt.vx" 16 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX, slt)
/* { dg-final { scan-assembler-times "vmsltu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsltu.vx" 16 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VV_VX_VI, sle)
/* { dg-final { scan-assembler-times "vmsle.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsle.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsle.vi" 16 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VV_VX_VI, sle)
/* { dg-final { scan-assembler-times "vmsleu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsleu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsleu.vi" 16 } } */
RVV_INT_TEST_ARG(TEST_COMPARE_VX_VI, sgt)
/* { dg-final { scan-assembler-times "vmsgt.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsgt.vi" 16 } } */
RVV_UINT_TEST_ARG(TEST_COMPARE_VX_VI, sgt)
/* { dg-final { scan-assembler-times "vmsgtu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmsgtu.vi" 16 } } */
