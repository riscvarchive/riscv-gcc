/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_AMO(STYPE, VCLASS, EM, MLEN, OP)		\
  void test_amo##OP##_##VCLASS##EM (STYPE *x, STYPE *y) {	\
    v##VCLASS##EM##_t vx, vy;				\
    vx = vle_##VCLASS##EM(x);				\
    vy = vle_##VCLASS##EM(y);				\
    vx = vamo##OP##_wd_v_##VCLASS##EM(y, vx, vy);		\
    vamo##OP##_v_##VCLASS##EM(y, vx, vy);			\
    vse_##VCLASS##EM(x, vx);					\
  }								\

RVV_INT_TEST_ARG (RVV_TEST_AMO, swap)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, swap)
RVV_INT_TEST_ARG (RVV_TEST_AMO, add)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, add)
RVV_INT_TEST_ARG (RVV_TEST_AMO, xor)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, xor)
RVV_INT_TEST_ARG (RVV_TEST_AMO, or)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, or)
RVV_INT_TEST_ARG (RVV_TEST_AMO, and)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, and)
RVV_INT_TEST_ARG (RVV_TEST_AMO, min)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, min)
RVV_INT_TEST_ARG (RVV_TEST_AMO, max)
RVV_UINT_TEST_ARG (RVV_TEST_AMO, max)
RVV_FLOAT_TEST_ARG (RVV_TEST_AMO, swap)

/* { dg-final { scan-assembler-times "vamoswape.v" 88 } } */
/* { dg-final { scan-assembler-times "vamoadde.v" 64 } } */
/* { dg-final { scan-assembler-times "vamoxore.v" 64 } } */
/* { dg-final { scan-assembler-times "vamoore.v" 64 } } */
/* { dg-final { scan-assembler-times "vamoande.v" 64 } } */
/* { dg-final { scan-assembler-times "vamomine.v" 32 } } */
/* { dg-final { scan-assembler-times "vamominue.v" 32 } } */
/* { dg-final { scan-assembler-times "vamomaxe.v" 32 } } */
/* { dg-final { scan-assembler-times "vamomaxue.v" 32 } } */
