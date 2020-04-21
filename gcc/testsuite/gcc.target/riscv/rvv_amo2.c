/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_AMO(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, OP, OPU)	\
  void test_amo##OP##e_##VCLASS##EM (uint##SEW##_t *x, int##SEW##_t *y) {\
    vint##EM##_t vy;						\
    vuint##EM##_t vx;						\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);					\
    vy = vload_i##EM(y);					\
    vy = vamo##OP##e_v_i##EM##_mask(mask, y, vx, vy);			\
    vstore_i##EM(y, vy);					\
  }								\
  void test_uamo##OP##e_##VCLASS##EM (uint##SEW##_t *x, uint##SEW##_t *y) {\
    vuint##EM##_t vx, vy;						\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);					\
    vy = vload_u##EM(y);					\
    vx = vamo##OPU##e_v_u##EM##_mask(mask, y, vx, vy);			\
    vstore_u##EM(x, vx);					\
  }								\

#define RVV_TEST_FAMO(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, OP)	\
  void test_amo##OP##e_##VCLASS##EM (uint##SEW##_t *x, STYPE *y) {	\
    vuint##EM##_t vx;						\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    v##VCLASST##EM##_t vy;					\
    vx = vload_u##EM(x);					\
    vy = vload_##VCLASS##EM(y);					\
    vy = vamo##OP##e_v_##VCLASS##EM##_mask(mask, y, vx, vy);			\
    vstore_##VCLASS##EM(y, vy);					\
  }

#define RVV_TEST_AMOW(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, UADDR_LETTER, OP, OPU)	\
  void test_amo##OP##w_##VCLASS##EM (uint##SEW##_t *x, int##SEW##_t *y, UADDR_LETTER##int32_t *addr) {\
    vint##EM##_t vy;						\
    vuint##EM##_t vx;						\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);					\
    vy = vload_i##EM(y);					\
    vy = vamo##OP##w_v_i##EM##_mask(mask, addr, vx, vy);			\
    vstore_i##EM(y, vy);					\
  }								\
  void test_uamo##OP##w_##VCLASS##EM (uint##SEW##_t *x, uint##SEW##_t *y, UADDR_LETTER##int32_t *addr) {\
    vuint##EM##_t vx, vy;						\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);					\
    vy = vload_u##EM(y);					\
    vx = vamo##OPU##w_v_u##EM##_mask(mask, addr, vx, vy);			\
    vstore_u##EM(x, vx);					\
  }								\

RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, swap, swap)
RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, add, add)
RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, xor, xor)
RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, or, or)
RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, and, and)
RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, min, minu)
RVV_SEW_INT_TEST_ARG (RVV_TEST_AMO, max, maxu)
RVV_SEW_FLOAT_TEST_ARG (RVV_TEST_FAMO, swap)

RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, swap, swap)
RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, add, add)
RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, xor, xor)
RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, or, or)
RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, and, and)
RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, min, minu)
RVV_AMOW_INT_TEST_ARG (RVV_TEST_AMOW, max, maxu)

/* { dg-final { scan-assembler-times "vamoswape.v" 44 } } */
/* { dg-final { scan-assembler-times "vamoadde.v" 32 } } */
/* { dg-final { scan-assembler-times "vamoxore.v" 32 } } */
/* { dg-final { scan-assembler-times "vamoore.v" 32 } } */
/* { dg-final { scan-assembler-times "vamoande.v" 32 } } */
/* { dg-final { scan-assembler-times "vamomine.v" 16 } } */
/* { dg-final { scan-assembler-times "vamominue.v" 16 } } */
/* { dg-final { scan-assembler-times "vamomaxe.v" 16 } } */
/* { dg-final { scan-assembler-times "vamomaxue.v" 16 } } */
/* { dg-final { scan-assembler-times "vamoswapw.v" 16 } } */
/* { dg-final { scan-assembler-times "vamoaddw.v" 16} } */
/* { dg-final { scan-assembler-times "vamoxorw.v" 16 } } */
/* { dg-final { scan-assembler-times "vamoorw.v" 16 } } */
/* { dg-final { scan-assembler-times "vamoandw.v" 16 } } */
/* { dg-final { scan-assembler-times "vamominw.v" 8 } } */
/* { dg-final { scan-assembler-times "vamominuw.v" 8 } } */
/* { dg-final { scan-assembler-times "vamomaxw.v" 8 } } */
/* { dg-final { scan-assembler-times "vamomaxuw.v" 8 } } */
