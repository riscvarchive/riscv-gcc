/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADCSBC(STYPE, VCLASS, EM, MLEN, OP)                                   \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    v##VCLASS##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = vle_##VCLASS##EM(x);                                               \
    vy = vle_##VCLASS##EM(y);                                               \
    carryin = vset_bool##MLEN ();                                          \
    carryout = v##OP##_vvm_##VCLASS##EM (vx, vy, carryin);                  \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout);                           \
    vse_##VCLASS##EM(y, vy);                                                \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, STYPE *x, STYPE *y, STYPE z) {          \
    v##VCLASS##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = vle_##VCLASS##EM(x);                                               \
    vy = vle_##VCLASS##EM(y);                                               \
    carryin = vset_bool##MLEN ();                                          \
    carryout = v##OP##_vsm_##VCLASS##EM (vx, z, carryin);                   \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout);                           \
    vse_##VCLASS##EM(y, vy);                                                \
  }                                                                            \
  void v##OP##VCLASS##EM##_i(size_t n, STYPE *x, STYPE *y, STYPE z) {          \
    v##VCLASS##EM##_t vx, vy;                                               \
    vbool##MLEN##_t carryin, carryout;                                      \
    vx = vle_##VCLASS##EM(x);                                               \
    vy = vle_##VCLASS##EM(y);                                               \
    carryin = vset_bool##MLEN ();                                          \
    carryout = v##OP##_vsm_##VCLASS##EM (vx, 11, carryin);                  \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryout);                           \
    vse_##VCLASS##EM(y, vy);                                                \
  }



RVV_INT_TEST_ARG(VADCSBC, madc)
RVV_INT_TEST_ARG(VADCSBC, msbc)

/* { dg-final { scan-assembler-times "vmadc.vvm" 16 } } */
/* { dg-final { scan-assembler-times "vmadc.vxm" 16 } } */
/* { dg-final { scan-assembler-times "vmadc.vim" 16 } } */
/* { dg-final { scan-assembler-times "vmsbc.vvm" 16 } } */
/* { dg-final { scan-assembler-times "vmsbc.vxm" 32 } } */
