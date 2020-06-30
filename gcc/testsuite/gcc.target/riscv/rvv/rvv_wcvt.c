/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEW##int##EM##_v_nomask_builtin_test(size_t n, int##SEW##_t *x,\
					       int##WSEW##_t *y, int##WSEW##_t z)	\
  {									\
    vint##EM##_t vx;							\
    vint##WEM##_t vy;						\
    vx = VILOAD(SEW, EM, x);						\
    vy = vwcvt_x_x_v_i##WEM (vx);			\
    VISTORE(WSEW, WEM, y, vy);						\
  }									\
  void rvvcvtuif##SEW##int##EM##_v_nomask_builtin_test(size_t n, uint##WSEW##_t *x,\
						  uint##SEW##_t *y, uint##WSEW##_t z)	\
  {									\
    vuint##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vy = VULOAD(SEW, EM, y);						\
    vx = vwcvtu_x_x_v_u##WEM (vy);			\
    VUSTORE(WSEW, WEM, x, vx);						\
  }

RVV_INT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vwcvt.x.x.v" 9 } } */
/* { dg-final { scan-assembler-times "vwcvtu.x.x.v" 9 } } */
