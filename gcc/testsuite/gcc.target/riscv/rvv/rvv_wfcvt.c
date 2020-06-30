/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vint##WEM##_t vy;							\
    vx = VFLOAD(SEW, EM, x);						\
    vy = vfwcvt_x_f_v_i##WEM (vx);			\
    VISTORE(WSEW, WEM, y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vuint##WEM##_t vy;						\
    vx = VFLOAD(SEW, EM, x);					\
    vy = vfwcvt_xu_f_v_u##WEM (vx);			\
    VUSTORE(WSEW, WEM, y, vy);					\
  }									\
  void rvvcvtrtzfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vint##WEM##_t vy;							\
    vx = VFLOAD(SEW, EM, x);						\
    vy = vfwcvt_rtz_x_f_v_i##WEM (vx);			\
    VISTORE(WSEW, WEM, y, vy);						\
  }									\
  void rvvcvtfrtzui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vuint##WEM##_t vy;						\
    vx = VFLOAD(SEW, EM, x);					\
    vy = vfwcvt_rtz_xu_f_v_u##WEM (vx);			\
    VUSTORE(WSEW, WEM, y, vy);					\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;						\
    vy = VILOAD(SEW, EM, y);					\
    vx = vfwcvt_f_x_v_f##WEM (vy);			\
    VFSTORE(WSEW, WEM, x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vy = VULOAD(SEW, EM, y);						\
    vx = vfwcvt_f_xu_v_f##WEM (vy);			\
    VFSTORE(WSEW, WEM, x, vx);						\
  }\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						_RVV_F##SEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vfloat##EM##_t vy;						\
    vy = VFLOAD(SEW, EM, y);						\
    vx = vfwcvt_f_f_v_f##WEM (vy);			\
    VFSTORE(WSEW, WEM, x, vx);						\
  }



RVV_FLOAT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vfwcvt.xu.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.x.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.rtz.xu.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.rtz.x.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.xu.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.x.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.f.v" 6 } } */
