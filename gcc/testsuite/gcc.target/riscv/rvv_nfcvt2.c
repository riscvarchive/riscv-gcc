/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_NFCVT_TEST(EM, WEM, MLEN, SEW, WSEW)	\
  void rvvcvtfi##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
					       int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##WEM##_t vx;						\
    rvv_int##EM##_t vy;							\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##WEM(x);						\
    vy = rvv_le_int##EM(y);						\
    vy = rvv_ncvt_f##WSEW##toi##SEW##_v_##WEM##_mask (mask, vy, vx);		\
    rvv_se_int##EM(y, vy);						\
  }									\
  void rvvcvtfui##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##WSEW##_TYPE *x,\
						u##int##SEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##WEM##_t vx;						\
    rvv_uint##EM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_float##WEM(x);						\
    vy = rvv_le_uint##EM(y);						\
    vy = rvv_ncvt_f##WSEW##toui##SEW##_v_##WEM##_mask (mask, vy, vx);		\
    rvv_se_uint##EM(y, vy);						\
  }									\
  void rvvcvtif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
					       int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##EM##_t vx;						\
    rvv_int##WEM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vy = rvv_le_int##WEM(y);						\
    vx = rvv_le_float##EM(x);						\
    vx = rvv_ncvt_i##WSEW##tof##SEW##_v_##WEM##_mask (mask, vx, vy);		\
    rvv_se_float##EM(x, vx);						\
  }									\
  void rvvcvtuif##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						u##int##WSEW##_t *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##EM##_t vx;						\
    rvv_uint##WEM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vy = rvv_le_uint##WEM(y);						\
    vx = rvv_le_float##EM(x);						\
    vx = rvv_ncvt_ui##WSEW##tof##SEW##_v_##WEM##_mask (mask, vx, vy);		\
    rvv_se_float##EM(x, vx);						\
  }\
  void rvvcvtff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						_RVV_F##WSEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##EM##_t vx;						\
    rvv_float##WEM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vy = rvv_le_float##WEM(y);						\
    vx = rvv_le_float##EM(x);						\
    vx = rvv_ncvt_f##WSEW##tof##SEW##_v_##WEM##_mask (mask, vx, vy);		\
    rvv_se_float##EM(x, vx);						\
  }									\
  void rvvcvtrff##SEWfloat##EM##_v_nomask_builtin_test(size_t n, _RVV_F##SEW##_TYPE *x,\
						_RVV_F##WSEW##_TYPE *y, _RVV_F##SEW##_TYPE z)	\
  {									\
    rvv_float##EM##_t vx;						\
    rvv_float##WEM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vy = rvv_le_float##WEM(y);						\
    vx = rvv_le_float##EM(x);						\
    vx = rvv_ncvt_rod_f##WSEW##tof##SEW##_v_##WEM##_mask (mask, vx, vy);	\
    rvv_se_float##EM(x, vx);						\
  }


RVV_FLOAT_WNCVT_INT_TEST(RVV_NFCVT_TEST)

/* { dg-final { scan-assembler-times "vfncvt.xu.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.x.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.f.xu.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.f.x.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.f.f.w" 6 } } */
/* { dg-final { scan-assembler-times "vfncvt.rod.f.f.w" 6 } } */
