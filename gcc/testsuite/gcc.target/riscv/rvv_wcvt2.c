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
    mask = vset_bool##MLEN ();					\
    vx = vload_int##EM(x);						\
    vy = vload_int##WEM(y);						\
    vy = vcvt_i##SEW##toi##WSEW##_v_##EM##_mask (mask, vy, vx);	\
    vstore_int##WEM(y, vy);						\
  }									\
  void rvvcvtuif##SEW##int##EM##_v_nomask_builtin_test(size_t n, uint##WSEW##_t *x,\
						  uint##SEW##_t *y, uint##WSEW##_t z)	\
  {									\
    vuint##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vx = vload_uint##WEM(x);						\
    vy = vload_uint##EM(y);						\
    vx = vcvt_ui##SEW##toui##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    vstore_uint##WEM(x, vx);						\
  }

RVV_INT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vwcvt.x.x.v" 9 } } */
/* { dg-final { scan-assembler-times "vwcvtu.x.x.v" 9 } } */
