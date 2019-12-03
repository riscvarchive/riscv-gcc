/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)			\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##EM##_t vx;						\
    rvv_int##WEM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##EM(x);						\
    vy = rvv_le_int##WEM(y);						\
    vy = rvv_wcvt_f##SEW##toi##WSEW##_v_##EM##_mask (mask, vy, vx);	\
    rvv_se_int##WEM(y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##EM##_t vx;						\
    rvv_uint##WEM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##EM(x);						\
    vy = rvv_le_uint##WEM(y);						\
    vy = rvv_wcvt_f##SEW##toui##WSEW##_v_##EM##_mask (mask, vy, vx);	\
    rvv_se_uint##WEM(y, vy);						\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##WEM##_t vx;						\
    rvv_int##EM##_t vy;							\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##WEM(x);						\
    vy = rvv_le_int##EM(y);						\
    vx = rvv_wcvt_i##SEW##tof##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    rvv_se_float##WEM(x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##WEM##_t vx;						\
    rvv_uint##EM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##WEM(x);						\
    vy = rvv_le_uint##EM(y);						\
    vx = rvv_wcvt_ui##SEW##tof##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    rvv_se_float##WEM(x, vx);						\
  }									\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						_RVV_F##SEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##WEM##_t vx;						\
    rvv_float##EM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##WEM(x);						\
    vy = rvv_le_float##EM(y);						\
    vx = rvv_wcvt_f##SEW##tof##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    rvv_se_float##WEM(x, vx);						\
  }



RVV_FLOAT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vfwcvt.xu.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.x.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.xu.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.x.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.f.v" 6 } } */
