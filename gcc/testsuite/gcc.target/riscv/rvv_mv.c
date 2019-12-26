/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_MV_SV_VS(STYPE, VCLASS, EM, MLEN)		\
  STYPE test_mv_xs##VCLASS##EM (STYPE *x) {			\
    v##VCLASS##EM##_t vx;					\
    vx = vle_##VCLASS##EM(x);				\
    return vmv_v_##VCLASS##EM(vx);				\
  }								\
  void test_mv_sx##VCLASS##EM (STYPE *x, STYPE s) {		\
    v##VCLASS##EM##_t vx;					\
    vx = vle_##VCLASS##EM(x);				\
    vx = vmv_s_##VCLASS##EM(vx, s);				\
    vse_##VCLASS##EM(x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_MV_SV_VS)
RVV_UINT_TEST (RVV_TEST_MV_SV_VS)
RVV_FLOAT_TEST (RVV_TEST_MV_SV_VS)

/* { dg-final { scan-assembler-times "vmv.s.x" 32 } } */
/* { dg-final { scan-assembler-times "vmv.x.s" 32 } } */
/* { dg-final { scan-assembler-times "vfmv.f.s" 12 } } */
/* { dg-final { scan-assembler-times "vfmv.s.f" 12 } } */
