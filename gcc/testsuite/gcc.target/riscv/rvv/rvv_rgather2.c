/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)		\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##STYPE *y, STYPE *z, long s, word_type vl) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vz = VLOAD(VCLASS, SEW, EM, z);				\
    vx = vrgather_vv_##VCLASS##EM##_m(mask, vz, vx, vy, vl);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, STYPE *z, long s, word_type vl) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vz = VLOAD(VCLASS, SEW, EM, z);				\
    vx = vrgather_vx_##VCLASS##EM##_m(mask, vz, vx, s, vl);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, STYPE *z, long s, word_type vl) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vz = VLOAD(VCLASS, SEW, EM, z);				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vrgather_vx_##VCLASS##EM##_m(mask, vz, vx, 11, vl);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_svu##EM (u##STYPE *x, u##STYPE *y, u##STYPE *z, long s, word_type vl) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vz;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VULOAD(SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vz = VULOAD(SEW, EM, z);				\
    vx = vrgather_vv_u##EM##_m(mask, vz, vx, vy, vl);	\
    VUSTORE(SEW, EM, x, vx);				\
  }								\
  void test_rgather_sxu##EM (u##STYPE *x, u##STYPE *z, long s, word_type vl) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VULOAD(SEW, EM, x);				\
    vz = VULOAD(SEW, EM, z);				\
    vx = vrgather_vx_u##EM##_m(mask, vz, vx, s, vl);	\
    VUSTORE(SEW, EM, x, vx);				\
  }								\
  void test_rgather_siu##EM (u##STYPE *x, u##STYPE *z, long s, word_type vl) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VULOAD(SEW, EM, x);				\
    vz = VULOAD(SEW, EM, z);				\
    vx = vrgather_vx_u##EM##_m(mask, vz, vx, 11, vl);	\
    VUSTORE(SEW, EM, x, vx);				\
  }

#define RVV_TEST_FLOAT_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASS, SEW)\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##ISTYPE *y, STYPE *z, long s, word_type vl) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VULOAD(SEW, EM, y);				\
    vz = VLOAD(VCLASS, SEW, EM, z);				\
    vx = vrgather_vv_##VCLASS##EM##_m(mask, vz, vx, vy, vl);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, STYPE *z, long s, word_type vl) {	\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vz = VLOAD(VCLASS, SEW, EM, z);				\
    vx = vrgather_vx_##VCLASS##EM##_m(mask, vz, vx, s, vl);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, STYPE *z, long s, word_type vl) {	\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = MSET (MLEN);				\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vz = VLOAD(VCLASS, SEW, EM, z);				\
    vx = vrgather_vx_##VCLASS##EM##_m(mask, vz, vx, 11, vl);	\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_RGATHER)
RVV_FLOAT_INT_TEST (RVV_TEST_FLOAT_RGATHER)

/* { dg-final { scan-assembler-times "vrgather.vv" 59 } } */
/* { dg-final { scan-assembler-times "vrgather.vx" 59 } } */
/* { dg-final { scan-assembler-times "vrgather.vi" 59 } } */
