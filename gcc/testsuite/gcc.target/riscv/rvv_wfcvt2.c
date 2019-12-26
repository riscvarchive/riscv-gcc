/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_WFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)			\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vint##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vx = vload_float##EM(x);						\
    vy = vload_int##WEM(y);						\
    vy = vwcvt_f##SEW##toi##WSEW##_v_##EM##_mask (mask, vy, vx);	\
    vstore_int##WEM(y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vuint##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vx = vload_float##EM(x);						\
    vy = vload_uint##WEM(y);						\
    vy = vwcvt_f##SEW##toui##WSEW##_v_##EM##_mask (mask, vy, vx);	\
    vstore_uint##WEM(y, vy);						\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;							\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vx = vload_float##WEM(x);						\
    vy = vload_int##EM(y);						\
    vx = vwcvt_i##SEW##tof##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    vstore_float##WEM(x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vx = vload_float##WEM(x);						\
    vy = vload_uint##EM(y);						\
    vx = vwcvt_ui##SEW##tof##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    vstore_float##WEM(x, vx);						\
  }									\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						_RVV_F##SEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vfloat##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_bool##MLEN ();					\
    vx = vload_float##WEM(x);						\
    vy = vload_float##EM(y);						\
    vx = vwcvt_f##SEW##tof##WSEW##_v_##EM##_mask (mask, vx, vy);	\
    vstore_float##WEM(x, vx);						\
  }



RVV_FLOAT_WNCVT_INT_TEST(RVV_WFCVT_TEST)

/* { dg-final { scan-assembler-times "vfwcvt.xu.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.x.f.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.xu.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.x.v" 6 } } */
/* { dg-final { scan-assembler-times "vfwcvt.f.f.v" 6 } } */
