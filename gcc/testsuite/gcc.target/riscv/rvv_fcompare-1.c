/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VCOMPARE_VV(STYPE, VCLASS, EM, MLEN, OP)                               \
  void v##OP##VCLASS##EM##_vv(size_t n, STYPE *x, STYPE *y, STYPE z) {         \
    v##VCLASS##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask;                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    mask = vset##OP##_vv_##VCLASS##EM(vx, vy);                                \
    vx = vadd_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

#define VCOMPARE_VF(STYPE, VCLASS, EM, MLEN, OP)                               \
  void v##OP##VCLASS##EM##_vx(size_t n, STYPE *x, STYPE *y, STYPE z) {         \
    v##VCLASS##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask;                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    mask = vset##OP##_vs_##VCLASS##EM(vx, z);                                 \
    vx = vadd_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                    \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

#define TEST_COMPARE(STYPE, VCLASS, EM, MLEN, OP)		\
  VCOMPARE_VV (STYPE, VCLASS, EM, MLEN, OP)			\
  VCOMPARE_VF (STYPE, VCLASS, EM, MLEN, OP)

RVV_FLOAT_TEST_ARG(TEST_COMPARE, eq)
/* { dg-final { scan-assembler-times "vmfeq.vv" 12 } } */
/* { dg-final { scan-assembler-times "vmfeq.vf" 12 } } */
RVV_FLOAT_TEST_ARG(TEST_COMPARE, ne)
/* { dg-final { scan-assembler-times "vmfne.vv" 12 } } */
/* { dg-final { scan-assembler-times "vmfne.vf" 12 } } */
RVV_FLOAT_TEST_ARG(TEST_COMPARE, lt)
/* { dg-final { scan-assembler-times "vmflt.vv" 12 } } */
/* { dg-final { scan-assembler-times "vmflt.vf" 12 } } */
RVV_FLOAT_TEST_ARG(TEST_COMPARE, le)
/* { dg-final { scan-assembler-times "vmfle.vv" 12 } } */
/* { dg-final { scan-assembler-times "vmfle.vf" 12 } } */
RVV_FLOAT_TEST_ARG(VCOMPARE_VF, gt)
/* { dg-final { scan-assembler-times "vmfgt.vf" 12 } } */
RVV_FLOAT_TEST_ARG(VCOMPARE_VF, ge)
/* { dg-final { scan-assembler-times "vmfge.vf" 12 } } */
