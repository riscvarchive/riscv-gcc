/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)		\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##STYPE *y, long s, word_type vl) {\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = vrgather_vv_##VCLASS##EM(vx, vy, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, long s, word_type vl) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, s, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, long s, word_type vl) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, 11, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_svu##EM (u##STYPE *x, u##STYPE *y, long s, word_type vl) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VULOAD(SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = vrgather_vv_u##EM(vx, vy, vl);			\
    VUSTORE(SEW, EM, x, vx);					\
  }								\
  void test_rgather_sxu##EM (u##STYPE *x, long s, word_type vl) {		\
    vuint##EM##_t vx;					\
    vx = VULOAD(SEW, EM, x);				\
    vx = vrgather_vx_u##EM(vx, s, vl);			\
    VUSTORE(SEW, EM, x, vx);					\
  }								\
  void test_rgather_siu##EM (u##STYPE *x, long s, word_type vl) {		\
    vuint##EM##_t vx;					\
    vx = VULOAD(SEW, EM, x);				\
    vx = vrgather_vx_u##EM(vx, 11, vl);			\
    VUSTORE(SEW, EM, x, vx);					\
  }

#define RVV_TEST_FLOAT_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASS, SEW)\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##ISTYPE *y, long s, word_type vl) {\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vx = vrgather_vv_##VCLASS##EM(vx, vy, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, long s, word_type vl) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, s, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, long s, word_type vl) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM(vx, 11, vl);			\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_RGATHER)
RVV_FLOAT_INT_TEST (RVV_TEST_FLOAT_RGATHER)

/* { dg-final { scan-assembler-times "vrgather.vv" 59 } } */
/* { dg-final { scan-assembler-times "vrgather.vx" 59 } } */
/* { dg-final { scan-assembler-times "vrgather.vi" 59 } } */
