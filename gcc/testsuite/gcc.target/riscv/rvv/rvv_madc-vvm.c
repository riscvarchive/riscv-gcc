/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADCSBC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, OP)                                   \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl) {              \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryin = MSET (MLEN);                                          \
    carryout = v##OP##_vvm_##VCLASS##EM##_b##MLEN (vx, vy, carryin, vl);                  \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout, vl);                           \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl) {          \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryin = MSET (MLEN);                                          \
    carryout = v##OP##_vxm_##VCLASS##EM##_b##MLEN (vx, z, carryin, vl);                   \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout, vl);                           \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \
  void v##OP##VCLASS##EM##_i(size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl) {          \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryin = MSET (MLEN);                                          \
    carryout = v##OP##_vxm_##VCLASS##EM##_b##MLEN (vx, 11, carryin, vl);                  \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout, vl);                           \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }



RVV_INT_TEST_ARG(VADCSBC, madc)
RVV_INT_TEST_ARG(VADCSBC, msbc)

/* { dg-final { scan-assembler-times "vmadc.vvm" 22 } } */
/* { dg-final { scan-assembler-times "vmadc.vxm" 22 } } */
/* { dg-final { scan-assembler-times "vmadc.vim" 22 } } */
/* { dg-final { scan-assembler-times "vmsbc.vvm" 22 } } */
/* { dg-final { scan-assembler-times "vmsbc.vxm" 44 } } */
