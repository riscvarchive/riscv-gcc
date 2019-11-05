/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VREDUC(STYPE, VCLASS, EM, MLEN)					\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    rvv##VCLASS##EM##_t vx, vy;						\
    vx = rvvld##VCLASS##EM (x);						\
    vy = rvvld##VCLASS##EM (y);						\
    vy = rvv_redsum_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redmax_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redmin_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redand_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redor_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redxor_vv_##VCLASS##EM (vx, vy);				\
    rvvst##VCLASS##EM (y, vy);						\
  }
#define VREDUCU(STYPE, VCLASS, EM, MLEN)				\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    rvv##VCLASS##EM##_t vx, vy;						\
    vx = rvvld##VCLASS##EM (x);						\
    vy = rvvld##VCLASS##EM (y);						\
    vy = rvv_redsum_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redmaxu_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redminu_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redand_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redor_vv_##VCLASS##EM (vx, vy);				\
    vy = rvv_redxor_vv_##VCLASS##EM (vx, vy);				\
    rvvst##VCLASS##EM (y, vy);						\
  }

RVV_INT_TEST(VREDUC)
RVV_UINT_TEST(VREDUCU)
//RVV_FLOAT_TEST(VREDUC)

/* { dg-final { scan-assembler-times "vredsum.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredmaxu.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredmax.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredminu.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredmin.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredand.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredor.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredxor.vs" 32 } } */
