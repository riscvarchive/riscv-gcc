/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FREINT_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASST, IVCLASS, SEW)	\
  void rvreintuf##SEW##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       u##ISTYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vx;							\
    vuint##EM##_t vy;							\
    vx = VFLOAD(SEW, EM, x);						\
    vy = vreinterpret_v_f##EM##_u##EM (vx);				\
    VUSTORE(SEW, EM, y, vy);						\
  }									\
  void rvreintif##SEW##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
					       ISTYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vx;							\
    vint##EM##_t vy;							\
    vx = VFLOAD(SEW, EM, x);						\
    vy = vreinterpret_v_f##EM##_i##EM (vx);				\
    VISTORE(SEW, EM, y, vy);						\
  }									\
  void rvreintfu##SEW##EM##_v_nomask_builtin_test(size_t n, u##ISTYPE *x,\
					       STYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vy;							\
    vuint##EM##_t vx;							\
    vx = VULOAD(SEW, EM, x);						\
    vy = vreinterpret_v_u##EM##_f##EM (vx);				\
    VFSTORE(SEW, EM, y, vy);						\
  }									\
  void rvreintfi##SEW##EM##_v_nomask_builtin_test(size_t n, ISTYPE *x,	\
					       STYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vy;							\
    vint##EM##_t vx;							\
    vx = VILOAD(SEW, EM, x);						\
    vy = vreinterpret_v_i##EM##_f##EM (vx);				\
    VFSTORE(SEW, EM, y, vy);						\
  }

#define RVV_REINT_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)	\
  void rvreintui##SEW##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       u##STYPE *y, STYPE z)	\
  {									\
    vint##EM##_t vx;							\
    vuint##EM##_t vy;							\
    vx = VILOAD(SEW, EM, x);						\
    vy = vreinterpret_v_i##EM##_u##EM (vx);				\
    VUSTORE(SEW, EM, y, vy);						\
  }									\
  void rvreintiu##SEW##EM##_v_nomask_builtin_test(size_t n, u##STYPE *x,\
					       STYPE *y, STYPE z)	\
  {									\
    vuint##EM##_t vx;							\
    vint##EM##_t vy;							\
    vx = VULOAD(SEW, EM, x);						\
    vy = vreinterpret_v_u##EM##_i##EM (vx);				\
    VISTORE(SEW, EM, y, vy);						\
  }


RVV_FLOAT_CVT_INT_TEST(RVV_FREINT_TEST)
RVV_INT_TEST(RVV_REINT_TEST)

