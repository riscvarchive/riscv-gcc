/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), an
   the e and m value.  */
#define VWREDUC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y) {		\
    rvv_##VCLASS##WEMONE##_t vx;						\
    rvv_##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##WEMONE (x);					\
    vy = rvv_le_##VCLASS##EM (y);					\
    vx = rvv_wredsum_vs_##VCLASS##EM (vx, vy);				\
    rvv_se_##VCLASS##WEMONE (x, vx);					\
  }

#define VWREDUCU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y) {		\
    rvv_##VCLASS##WEMONE##_t vx;						\
    rvv_##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##WEMONE (x);					\
    vy = rvv_le_##VCLASS##EM (y);					\
    vx = rvv_wredsumu_vs_##VCLASS##EM (vx, vy);				\
    rvv_se_##VCLASS##WEMONE (x, vx);					\
  }

#define VFWREDUC(STYPE, VCLASS, EM, MLEN, WSTYPE, WEMONE)		\
  void vreduc##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y) {		\
    rvv_##VCLASS##WEMONE##_t vx;						\
    rvv_##VCLASS##EM##_t vy;						\
    vx = rvv_le_##VCLASS##WEMONE (x);					\
    vy = rvv_le_##VCLASS##EM (y);					\
    vx = rvv_wredsum_vs_##VCLASS##EM (vx, vy);				\
    vx = rvv_wredosum_vs_##VCLASS##EM (vx, vy);			\
    rvv_se_##VCLASS##WEMONE (x, vx);					\
  }

RVV_WINT_REDUC_TEST(VWREDUC)
RVV_WUINT_REDUC_TEST(VWREDUCU)
RVV_WFLOAT_REDUC_TEST(VFWREDUC)

/* { dg-final { scan-assembler-times "vwredsum.vs" 9 } } */
/* { dg-final { scan-assembler-times "vwredsumu.vs" 9 } } */
/* { dg-final { scan-assembler-times "vfwredsum.vs" 6 } } */
