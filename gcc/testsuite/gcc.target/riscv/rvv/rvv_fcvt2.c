/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FCVT_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASST, IVCLASS, SEW)	\
  void rvvcvtfi##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    v##IVCLASST##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = MSET (MLEN);					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(IVCLASS, SEW, EM, y);					\
    vy = vfcvt_x_f_v_i##EM##_m (mask, vy, vx);	\
    VSTORE(IVCLASS, SEW, EM, y, vy);					\
  }									\
  void rvvcvtfui##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
						u##ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = MSET (MLEN);					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vy = vfcvt_xu_f_v_u##EM##_m (mask, vy, vx);	\
    VUSTORE(SEW, EM, y, vy);					\
  }									\
  void rvvcvtrtzfi##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    v##IVCLASST##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = MSET (MLEN);					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(IVCLASS, SEW, EM, y);					\
    vy = vfcvt_rtz_x_f_v_i##EM##_m (mask, vy, vx);	\
    VSTORE(IVCLASS, SEW, EM, y, vy);					\
  }									\
  void rvvcvtrtzfui##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
						u##ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = MSET (MLEN);					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vy = vfcvt_rtz_xu_f_v_u##EM##_m (mask, vy, vx);	\
    VUSTORE(SEW, EM, y, vy);					\
  }									\
  void rvvcvtif##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    v##IVCLASST##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = MSET (MLEN);					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VLOAD(IVCLASS, SEW, EM, y);					\
    vx = vfcvt_f_x_v_f##EM##_m (mask, vx, vy);	\
    VSTORE(VCLASS, SEW, EM, x, vx);						\
  }									\
  void rvvcvtuif##SEW##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
						u##ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    vuint##EM##_t vy;						\
    vbool##MLEN##_t mask;						\
    mask = MSET (MLEN);					\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vx = vfcvt_f_xu_v_f##EM##_m (mask, vx, vy);	\
    VSTORE(VCLASS, SEW, EM, x, vx);						\
  }									\



RVV_FLOAT_CVT_INT_TEST(RVV_FCVT_TEST)

/* { dg-final { scan-assembler-times "vfcvt.xu.f.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.x.f.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.rtz.xu.f.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.rtz.x.f.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.f.xu.v" 12 } } */
/* { dg-final { scan-assembler-times "vfcvt.f.x.v" 12 } } */
