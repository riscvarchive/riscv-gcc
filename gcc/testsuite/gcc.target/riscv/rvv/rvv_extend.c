/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW, NAME)					\
  void rvv_s##NAME##_v_i##WEM##_v_nomask_builtin_test(size_t n, int##SEW##_t *x,	\
						      int##WSEW##_t *y, int##WSEW##_t z)\
  {											\
    vint##EM##_t vx;									\
    vint##WEM##_t vy;									\
    vx = VILOAD(SEW, EM, x);								\
    vy = vs##NAME##_i##WEM (vx);							\
    VISTORE(WSEW, WEM, y, vy);								\
  }											\
  void rvv_z##NAME##_v_u##WEM##_v_nomask_builtin_test(size_t n, uint##WSEW##_t *x,	\
						      uint##SEW##_t *y, uint##WSEW##_t z)\
  {											\
    vuint##WEM##_t vx;									\
    vuint##EM##_t vy;									\
    vy = VULOAD(SEW, EM, y);								\
    vx = vz##NAME##_u##WEM(vy);							\
    VUSTORE(WSEW, WEM, x, vx);								\
  }

RVV_WINT_EXTEND_TEST(RVV_WFCVT_TEST, ext_vf2)
RVV_QINT_EXTEND_TEST(RVV_WFCVT_TEST, ext_vf4)
RVV_EINT_EXTEND_TEST(RVV_WFCVT_TEST, ext_vf8)

/* { dg-final { scan-assembler-times "vsext.vf2" 9 } } */
/* { dg-final { scan-assembler-times "vzext.vf2" 9 } } */
/* { dg-final { scan-assembler-times "vsext.vf4" 4 } } */
/* { dg-final { scan-assembler-times "vzext.vf4" 4 } } */
/* { dg-final { scan-assembler "vsext.vf8"} } */
/* { dg-final { scan-assembler "vzext.vf8"} } */
