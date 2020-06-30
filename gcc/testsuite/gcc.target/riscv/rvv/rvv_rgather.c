/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)		\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##STYPE *y, long s) {\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = vrgather_vv_##VCLASS##EM(vx, vy);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, s);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, 11);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_svu##EM (u##STYPE *x, u##STYPE *y, long s) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VULOAD(SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = vrgather_vv_u##EM(vx, vy);			\
    VUSTORE(SEW, EM, x, vx);					\
  }								\
  void test_rgather_sxu##EM (u##STYPE *x, long s) {		\
    vuint##EM##_t vx;					\
    vx = VULOAD(SEW, EM, x);				\
    vx = vrgather_vx_u##EM(vx, s);			\
    VUSTORE(SEW, EM, x, vx);					\
  }								\
  void test_rgather_siu##EM (u##STYPE *x, long s) {		\
    vuint##EM##_t vx;					\
    vx = VULOAD(SEW, EM, x);				\
    vx = vrgather_vx_u##EM(vx, 11);			\
    VUSTORE(SEW, EM, x, vx);					\
  }

#define RVV_TEST_FLOAT_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASS, SEW)\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##ISTYPE *y, long s) {\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = vrgather_vv_##VCLASS##EM(vx, vy);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, s);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, 11);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_RGATHER)
RVV_FLOAT_INT_TEST (RVV_TEST_FLOAT_RGATHER)

/* { dg-final { scan-assembler-times "vrgather.vv" 44 } } */
/* { dg-final { scan-assembler-times "vrgather.vx" 44 } } */
/* { dg-final { scan-assembler-times "vrgather.vi" 44 } } */
