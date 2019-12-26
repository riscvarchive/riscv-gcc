/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEW##int##EM##_v_nomask_builtin_test(size_t n, int##SEW##_t *x,\
					       int##WSEW##_t *y, int##WSEW##_t z)	\
  {									\
    vint##EM##_t vx;							\
    vint##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_int##EM(x);						\
    vy = rvv_le_int##WEM(y);						\
    vy = rvv_wcvt_i##SEW##toi##WSEW##_v_##EM##_mask (mask, vy, vx);	\
    rvv_se_int##WEM(y, vy);						\
  }									\
  void rvvcvtuif##SEW##int##EM##_v_nomask_builtin_test(size_t n, uint##WSEW##_t *x,\
						  uint##SEW##_t *y, uint##WSEW##_t z)	\
  {									\
    vuint##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_uint##WEM(x);						\
    vy = rvv_le_uint##EM(y);						\
    vx = rvv_wcvt_ui##SEW##toui##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    rvv_se_uint##WEM(x, vx);						\
  }

RVV_INT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vwcvt.x.x.v" 9 } } */
/* { dg-final { scan-assembler-times "vwcvtu.x.x.v" 9 } } */
