/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_COMPRESS(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)	\
  void test_compress_##VCLASS##EM (STYPE *x, STYPE *y, long s) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(VCLASS, SEW, EM, y);					\
    mask = MSET (MLEN);					\
    vx = vcompress_vm_##VCLASS##EM(mask, vx, vy);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\

RVV_INT_TEST (RVV_TEST_COMPRESS)
RVV_UINT_TEST (RVV_TEST_COMPRESS)
RVV_FLOAT_TEST (RVV_TEST_COMPRESS)

/* { dg-final { scan-assembler-times "vcompress.vm" 44 } } */
