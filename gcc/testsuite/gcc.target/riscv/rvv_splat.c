/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_SPLAT(STYPE, VCLASS, EM, MLEN)			\
  void test_splat##VCLASS##EM (STYPE *x, STYPE s) {		\
    v##VCLASS##EM##_t vx;					\
    vx = vsplat_s_##VCLASS##EM(s);				\
    vse_##VCLASS##EM(x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_SPLAT)
RVV_UINT_TEST (RVV_TEST_SPLAT)
RVV_FLOAT_TEST (RVV_TEST_SPLAT)

/* { dg-final { scan-assembler-times "vmv.v.x" 32 } } */
/* { dg-final { scan-assembler-times "vfmv.v.f" 12 } } */
