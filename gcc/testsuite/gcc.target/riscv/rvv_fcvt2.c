/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FCVT_TEST(STYPE, VCLASS, EM, MLEN, ISTYPE, IVCLASS, SEW)	\
  void rvvcvtfi##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASS##EM##_t vx;						\
    v##IVCLASS##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_##IVCLASS##EM(y);					\
    vy = rvv_cvt_f##SEW##toi##SEW##_v_##EM##_mask (mask, vy, vx);	\
    rvv_se_##IVCLASS##EM(y, vy);					\
  }									\
  void rvvcvtfui##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
						u##ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASS##EM##_t vx;						\
    vu##IVCLASS##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_u##IVCLASS##EM(y);					\
    vy = rvv_cvt_f##SEW##toui##SEW##_v_##EM##_mask (mask, vy, vx);	\
    rvv_se_u##IVCLASS##EM(y, vy);					\
  }									\
  void rvvcvtif##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASS##EM##_t vx;						\
    v##IVCLASS##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_##IVCLASS##EM(y);					\
    vx = rvv_cvt_i##SEW##tof##SEW##_v_##EM##_mask (mask, vx, vy);	\
    rvv_se_##VCLASS##EM(x, vx);						\
  }									\
  void rvvcvtuif##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
						u##ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASS##EM##_t vx;						\
    vu##IVCLASS##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_u##IVCLASS##EM(y);					\
    vx = rvv_cvt_ui##SEW##tof##SEW##_v_##EM##_mask (mask, vx, vy);	\
    rvv_se_##VCLASS##EM(x, vx);						\
  }									\



RVV_FLOAT_CVT_INT_TEST(RVV_FCVT_TEST)

/* { dg-final { scan-assembler-times "vfcvt.xu.f.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.x.f.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.f.xu.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.f.x.v" 12 } } */
