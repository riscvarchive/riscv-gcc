/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_SLIDEUPDOWN(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)		\
  void test_slideup_sx##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vslideup_vx_##VCLASS##EM(vx, vx, s);			\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\
  void test_slidedown_sx##VCLASS##EM (STYPE *x, long s) {	\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vslidedown_vx_##VCLASS##EM(vx, vx, s);			\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\
  void test_slideup_si##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vslideup_vx_##VCLASS##EM(vx, vx, 11);			\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\
  void test_slidedown_si##VCLASS##EM (STYPE *x, long s) {	\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vslidedown_vx_##VCLASS##EM(vx, vx, 11);		\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\


#define RVV_TEST_SLIDE1UPDOWN(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW, PREFIX)	\
  void test_slide1up_sx##VCLASS##EM (STYPE *x, STYPE s) {	\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = v##PREFIX##slide1up_v##STYPEC##_##VCLASS##EM(vx, s);		\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_slide1down_sx##VCLASS##EM (STYPE *x, STYPE s) {	\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = v##PREFIX##slide1down_v##STYPEC##_##VCLASS##EM(vx, s);		\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }

RVV_INT_TEST_ARG (RVV_TEST_SLIDE1UPDOWN, )
RVV_UINT_TEST_ARG (RVV_TEST_SLIDE1UPDOWN, )
RVV_FLOAT_TEST_ARG (RVV_TEST_SLIDE1UPDOWN, f)
RVV_INT_TEST (RVV_TEST_SLIDEUPDOWN)
RVV_UINT_TEST (RVV_TEST_SLIDEUPDOWN)
RVV_FLOAT_TEST (RVV_TEST_SLIDEUPDOWN)

/* { dg-final { scan-assembler-times "vslideup.vx" 44 } } */
/* { dg-final { scan-assembler-times "vslideup.vi" 44 } } */
/* { dg-final { scan-assembler-times "vslidedown.vx" 44 } } */
/* { dg-final { scan-assembler-times "vslidedown.vi" 44 } } */
/* { dg-final { scan-assembler-times "vslide1up.vx" 32 } } */
/* { dg-final { scan-assembler-times "vslide1down.vx" 32 } } */
/* { dg-final { scan-assembler-times "vfslide1up.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfslide1down.vf" 12 } } */
