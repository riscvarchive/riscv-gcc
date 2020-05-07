/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_COMPRESS(STYPE, VCLASST, VCLASS, EM, MLEN)	\
  void test_compress_##VCLASS##EM (STYPE *x, STYPE *y, long s) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    vx = vload_##VCLASS##EM(x);					\
    vy = vload_##VCLASS##EM(y);					\
    mask = vset_b##MLEN ();					\
    vx = vcompress_vm_##VCLASS##EM##_mask(mask, vx, vy);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\

RVV_INT_TEST (RVV_TEST_COMPRESS)
RVV_UINT_TEST (RVV_TEST_COMPRESS)
RVV_FLOAT_TEST (RVV_TEST_COMPRESS)

/* { dg-final { scan-assembler-times "vcompress.vm" 44 } } */
