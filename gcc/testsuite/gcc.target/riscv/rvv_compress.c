/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_COMPRESS(STYPE, VCLASS, EM, MLEN)		\
  void test_compress_##VCLASS##EM (STYPE *x, STYPE *y, long s) {\
    rvv_##VCLASS##EM##_t vx;					\
    rvv_##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_mset_bool##MLEN ();				\
    vx = rvv_compress_vm_##VCLASS##EM(vx, mask);		\
    rvv_se_##VCLASS##EM(x, vx);					\
  }								\

RVV_INT_TEST (RVV_TEST_COMPRESS)
RVV_UINT_TEST (RVV_TEST_COMPRESS)
RVV_FLOAT_TEST (RVV_TEST_COMPRESS)

/* { dg-final { scan-assembler-times "vcompress.vm" 44 } } */
