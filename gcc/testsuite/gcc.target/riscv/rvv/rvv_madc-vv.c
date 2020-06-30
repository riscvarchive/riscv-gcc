/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADCSBC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                                   \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryout = v##OP##_vv_##VCLASS##EM##_b##MLEN (vx, vy);                            \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout);                          \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \
  void v##OP##VCLASS##EM##_scalar(size_t n, STYPE *x, STYPE *y, STYPE z) {     \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryout = v##OP##_vx_##VCLASS##EM##_b##MLEN (vx,  z);                            \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout);                          \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \
  void v##OP##VCLASS##EM##_imm(size_t n, STYPE *x, STYPE *y, STYPE z) {        \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryout = v##OP##_vx_##VCLASS##EM##_b##MLEN (vx, 11);                            \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout);                          \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }




RVV_INT_TEST_ARG(VADCSBC, madc)
RVV_INT_TEST_ARG(VADCSBC, msbc)

/* { dg-final { scan-assembler-times "vmadc.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmadc.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmadc.vi" 16 } } */
/* { dg-final { scan-assembler-times "vmsbc.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmsbc.vx" 32 } } */
