/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEW##int##EM##_##WEM##_v_nomask_builtin_test(size_t n, int##SEW##_t *x,\
					       int##WSEW##_t *y, int##WSEW##_t z)	\
  {									\
    vint##EM##_t vx;							\
    vint##WEM##_t vy;						\
    vx = vload_i##EM(x);						\
    vy = vcvt_i##WSEW##_i##SEW##_v_##EM (vx);			\
    vstore_i##WEM(y, vy);						\
  }									\
  void rvvcvtuif##SEW##int##EM##_##WEM##_v_nomask_builtin_test(size_t n, uint##WSEW##_t *x,\
						  uint##SEW##_t *y, uint##WSEW##_t z)	\
  {									\
    vuint##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vy = vload_u##EM(y);						\
    vx = vcvt_u##WSEW##_u##SEW##_v_##EM (vy);			\
    vstore_u##WEM(x, vx);						\
  }

RVV_INT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vwcvt.x.x.v" 9 } } */
/* { dg-final { scan-assembler-times "vwcvtu.x.x.v" 9 } } */
/* { dg-final { scan-assembler-times "vsext.vf4" 4 } } */
/* { dg-final { scan-assembler-times "vzext.vf4" 4 } } */
/* { dg-final { scan-assembler "vsext.vf8"} } */
/* { dg-final { scan-assembler "vzext.vf8"} } */
