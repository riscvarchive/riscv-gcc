/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vint##WEM##_t vy;							\
    vx = vload_f##EM(x);						\
    vy = vcvt_i##WSEW##_f##SEW##_v_##EM (vx);			\
    vstore_i##WEM(y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vuint##WEM##_t vy;						\
    vx = vload_f##EM(x);					\
    vy = vcvt_u##WSEW##_f##SEW##_v_##EM (vx);			\
    vstore_u##WEM(y, vy);					\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;						\
    vy = vload_i##EM(y);					\
    vx = vcvt_f##WSEW##_i##SEW##_v_##EM (vy);			\
    vstore_f##WEM(x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vy = vload_u##EM(y);						\
    vx = vcvt_f##WSEW##_u##SEW##_v_##EM (vy);			\
    vstore_f##WEM(x, vx);						\
  }\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						_RVV_F##SEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vfloat##EM##_t vy;						\
    vy = vload_f##EM(y);						\
    vx = vcvt_f##WSEW##_f##SEW##_v_##EM (vy);			\
    vstore_f##WEM(x, vx);						\
  }



RVV_FLOAT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vfwcvt.xu.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.x.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.xu.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.x.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.f.v" 6 } } */
