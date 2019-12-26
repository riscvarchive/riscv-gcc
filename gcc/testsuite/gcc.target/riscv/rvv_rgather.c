/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_RGATHER(STYPE, VCLASS, EM, MLEN)		\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##STYPE *y, long s) {\
    v##VCLASS##EM##_t vx;					\
    vu##VCLASS##EM##_t vy;					\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_u##VCLASS##EM(y);				\
    vx = vrgather_vv_##VCLASS##EM(vx, vy);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASS##EM##_t vx;					\
    vx = vload_##VCLASS##EM(x);				\
    vx = vrgather_vs_##VCLASS##EM(vx, s);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASS##EM##_t vx;					\
    vx = vload_##VCLASS##EM(x);				\
    vx = vrgather_vs_##VCLASS##EM(vx, 11);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_svu##VCLASS##EM (u##STYPE *x, u##STYPE *y, long s) {\
    vu##VCLASS##EM##_t vx;					\
    vu##VCLASS##EM##_t vy;					\
    vx = vload_u##VCLASS##EM(x);				\
    vy = vload_u##VCLASS##EM(y);				\
    vx = vrgather_vv_u##VCLASS##EM(vx, vy);			\
    vstore_u##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_sxu##VCLASS##EM (u##STYPE *x, long s) {		\
    vu##VCLASS##EM##_t vx;					\
    vx = vload_u##VCLASS##EM(x);				\
    vx = vrgather_vs_u##VCLASS##EM(vx, s);			\
    vstore_u##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_siu##VCLASS##EM (u##STYPE *x, long s) {		\
    vu##VCLASS##EM##_t vx;					\
    vx = vload_u##VCLASS##EM(x);				\
    vx = vrgather_vs_u##VCLASS##EM(vx, 11);			\
    vstore_u##VCLASS##EM(x, vx);					\
  }

#define RVV_TEST_FLOAT_RGATHER(STYPE, VCLASS, EM, MLEN, ISTYPE, IVCLASS)\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##ISTYPE *y, long s) {\
    v##VCLASS##EM##_t vx;					\
    vu##IVCLASS##EM##_t vy;					\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_u##IVCLASS##EM(y);				\
    vx = vrgather_vv_##VCLASS##EM(vx, vy);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASS##EM##_t vx;					\
    vx = vload_##VCLASS##EM(x);				\
    vx = vrgather_vs_##VCLASS##EM(vx, s);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, long s) {		\
    v##VCLASS##EM##_t vx;					\
    vx = vload_##VCLASS##EM(x);				\
    vx = vrgather_vs_##VCLASS##EM(vx, 11);			\
    vstore_##VCLASS##EM(x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_RGATHER)
RVV_FLOAT_INT_TEST (RVV_TEST_FLOAT_RGATHER)

/* { dg-final { scan-assembler-times "vrgather.vv" 44 } } */
/* { dg-final { scan-assembler-times "vrgather.vx" 44 } } */
/* { dg-final { scan-assembler-times "vrgather.vi" 44 } } */
