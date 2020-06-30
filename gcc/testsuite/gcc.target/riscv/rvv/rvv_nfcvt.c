/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_NFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;							\
    vx = VFLOAD(WSEW, WEM, x);						\
    vy = vfncvt_x_f_w_i##EM (vx);			\
    VISTORE(SEW, EM, y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vx = VFLOAD(WSEW, WEM, x);					\
    vy = vfncvt_xu_f_w_u##EM (vx);			\
    VUSTORE(SEW, EM, y, vy);					\
  }									\
  void rvvcvtrtzfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;							\
    vx = VFLOAD(WSEW, WEM, x);						\
    vy = vfncvt_rtz_x_f_w_i##EM (vx);			\
    VISTORE(SEW, EM, y, vy);						\
  }									\
  void rvvcvtrtzfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vx = VFLOAD(WSEW, WEM, x);					\
    vy = vfncvt_rtz_xu_f_w_u##EM (vx);			\
    VUSTORE(SEW, EM, y, vy);					\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vint##WEM##_t vy;						\
    vy = VILOAD(WSEW, WEM, y);					\
    vx = vfncvt_f_x_w_f##EM (vy);			\
    VFSTORE(SEW, EM, x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vuint##WEM##_t vy;						\
    vy = VULOAD(WSEW, WEM, y);						\
    vx = vfncvt_f_xu_w_f##EM (vy);			\
    VFSTORE(SEW, EM, x, vx);						\
  }\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						_RVV_F##WSEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vfloat##WEM##_t vy;						\
    vy = VFLOAD(WSEW, WEM, y);						\
    vx = vfncvt_f_f_w_f##EM (vy);			\
    VFSTORE(SEW, EM, x, vx);						\
  }									\
  void rvvcvtrff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						_RVV_F##WSEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vfloat##WEM##_t vy;						\
    vy = VFLOAD(WSEW, WEM, y);						\
    vx = vfncvt_rod_f_f_w_f##EM (vy);			\
    VFSTORE(SEW, EM, x, vx);						\
  }


RVV_FLOAT_WNCVT_INT_TEST(RVV_NFCVT_TEST)

/* { dg-final { scan-assembler-times "vfncvt.xu.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.x.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.rtz.xu.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.rtz.x.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.f.xu.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.f.x.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.f.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.rod.f.f.w" 6 } } */
