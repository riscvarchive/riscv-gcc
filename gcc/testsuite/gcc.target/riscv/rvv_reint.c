/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FREINT_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASST, IVCLASS, SEW)	\
  void rvreintuf##SEW##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       ISTYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vx;							\
    vuint##EM##_t vy;							\
    vx = vload_f##EM(x);						\
    vy = vreinterpret_u##SEW##_f##SEW##_v_##EM (vx);			\
    vstore_u##EM(y, vy);						\
  }									\
  void rvreintif##SEW##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
					       ISTYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vx;							\
    vint##EM##_t vy;							\
    vx = vload_f##EM(x);						\
    vy = vreinterpret_i##SEW##_f##SEW##_v_##EM (vx);			\
    vstore_i##EM(y, vy);						\
  }									\
  void rvreintfu##SEW##EM##_v_nomask_builtin_test(size_t n, ISTYPE *x,\
					       STYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vy;							\
    vuint##EM##_t vx;							\
    vx = vload_u##EM(x);						\
    vy = vreinterpret_f##SEW##_u##SEW##_v_##EM (vx);			\
    vstore_f##EM(y, vy);						\
  }									\
  void rvreintfi##SEW##EM##_v_nomask_builtin_test(size_t n, ISTYPE *x,	\
					       STYPE *y, STYPE z)	\
  {									\
    vfloat##EM##_t vy;							\
    vint##EM##_t vx;							\
    vx = vload_i##EM(x);						\
    vy = vreinterpret_f##SEW##_i##SEW##_v_##EM (vx);			\
    vstore_f##EM(y, vy);						\
  }

#define RVV_REINT_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, SEW)		\
  void rvreintui##SEW##EM##_v_nomask_builtin_test(size_t n, STYPE *x,\
					       u##STYPE *y, STYPE z)	\
  {									\
    vint##EM##_t vx;							\
    vuint##EM##_t vy;							\
    vx = vload_i##EM(x);						\
    vy = vreinterpret_u##SEW##_i##SEW##_v_##EM (vx);			\
    vstore_u##EM(y, vy);						\
  }									\
  void rvreintiu##SEW##EM##_v_nomask_builtin_test(size_t n, u##STYPE *x,\
					       STYPE *y, STYPE z)	\
  {									\
    vuint##EM##_t vx;							\
    vint##EM##_t vy;							\
    vx = vload_u##EM(x);						\
    vy = vreinterpret_i##SEW##_u##SEW##_v_##EM (vx);			\
    vstore_i##EM(y, vy);						\
  }


RVV_FLOAT_CVT_INT_TEST(RVV_FREINT_TEST)
RVV_SEW_INT_TEST(RVV_REINT_TEST)

