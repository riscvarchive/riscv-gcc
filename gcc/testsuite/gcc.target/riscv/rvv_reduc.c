/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VREDUC(STYPE, VCLASS, EM, EMONE, MLEN)				\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    rvv##VCLASS##EMONE##_t vx;						\
    rvv##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##EMONE (x);					\
    vy = rvv_le_##VCLASS##EM (y);					\
    vx = rvv_redsum_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redmax_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redmin_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redand_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redor_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redxor_vv_##VCLASS##EM (vx, vy);				\
    rvv_se_##VCLASS##EMONE (x, vx);					\
  }
#define VREDUCU(STYPE, VCLASS, EM, EMONE, MLEN)				\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    rvv##VCLASS##EMONE##_t vx;						\
    rvv##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##EMONE (x);					\
    vy = rvv_le_##VCLASS##EM (y);					\
    vx = rvv_redsum_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redmaxu_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redminu_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redand_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redor_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_redxor_vv_##VCLASS##EM (vx, vy);				\
    rvv_se_##VCLASS##EMONE (x, vx);					\
  }

#define VFREDUC(STYPE, VCLASS, EM, EMONE, MLEN)				\
  void vreduc##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {		\
    rvv##VCLASS##EMONE##_t vx;						\
    rvv##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##EMONE (x);					\
    vy = rvv_le_##VCLASS##EM (y);					\
    vx = rvv_fredsum_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_fredosum_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_fredmax_vv_##VCLASS##EM (vx, vy);				\
    vx = rvv_fredmin_vv_##VCLASS##EM (vx, vy);				\
    rvv_se_##VCLASS##EMONE (x, vx);					\
  }

RVV_INT_REDUC_TEST(VREDUC)
RVV_UINT_REDUC_TEST(VREDUCU)
RVV_FLOAT_REDUC_TEST(VFREDUC)

/* { dg-final { scan-assembler-times "vredsum.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredmaxu.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredmax.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredminu.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredmin.vs" 16 } } */
/* { dg-final { scan-assembler-times "vredand.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredor.vs" 32 } } */
/* { dg-final { scan-assembler-times "vredxor.vs" 32 } } */
/* { dg-final { scan-assembler-times "vfredsum.vs" 12 } } */
/* { dg-final { scan-assembler-times "vfredosum.vs" 12 } } */
/* { dg-final { scan-assembler-times "vfredmax.vs" 12 } } */
/* { dg-final { scan-assembler-times "vfredmin.vs" 12 } } */
