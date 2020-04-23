/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_NFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;							\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vx = vload_f##WEM(x);						\
    vy = vload_i##EM(y);						\
    vy = vcvt_i##SEW##_f##WSEW##_v_##WEM##_mask (mask, vy, vx);		\
    vstore_i##EM(y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vx = vload_f##WEM(x);						\
    vy = vload_u##EM(y);						\
    vy = vcvt_u##SEW##_f##WSEW##_v_##WEM##_mask (mask, vy, vx);		\
    vstore_u##EM(y, vy);						\
  }									\
  void rvvcvtrtzfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vint##EM##_t vy;							\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vx = vload_f##WEM(x);						\
    vy = vload_i##EM(y);						\
    vy = vcvt_rtz_i##SEW##_f##WSEW##_v_##WEM##_mask (mask, vy, vx);		\
    vstore_i##EM(y, vy);						\
  }									\
  void rvvcvtrtzfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##WEM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vx = vload_f##WEM(x);						\
    vy = vload_u##EM(y);						\
    vy = vcvt_rtz_u##SEW##_f##WSEW##_v_##WEM##_mask (mask, vy, vx);		\
    vstore_u##EM(y, vy);						\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vint##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vy = vload_i##WEM(y);						\
    vx = vload_f##EM(x);						\
    vx = vcvt_f##SEW##_i##WSEW##_v_##WEM##_mask (mask, vx, vy);		\
    vstore_f##EM(x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vuint##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vy = vload_u##WEM(y);						\
    vx = vload_f##EM(x);						\
    vx = vcvt_f##SEW##_u##WSEW##_v_##WEM##_mask (mask, vx, vy);		\
    vstore_f##EM(x, vx);						\
  }\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						_RVV_F##WSEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vfloat##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vy = vload_f##WEM(y);						\
    vx = vload_f##EM(x);						\
    vx = vcvt_f##SEW##_f##WSEW##_v_##WEM##_mask (mask, vx, vy);		\
    vstore_f##EM(x, vx);						\
  }									\
  void rvvcvtrff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						_RVV_F##WSEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    vfloat##EM##_t vx;						\
    vfloat##WEM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = vset_b##MLEN ();					\
    vy = vload_f##WEM(y);						\
    vx = vload_f##EM(x);						\
    vx = vcvt_rod_f##SEW##_f##WSEW##_v_##WEM##_mask (mask, vx, vy);	\
    vstore_f##EM(x, vx);						\
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
