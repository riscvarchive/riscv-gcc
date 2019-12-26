/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN)		\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##STYPE *y, STYPE *z, long s) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_u##EM(y);				\
    vz = vload_##VCLASS##EM(z);				\
    vx = vrgather_vv_##VCLASS##EM##_mask(mask, vz, vx, vy);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, STYPE *z, long s) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_##VCLASS##EM(x);				\
    vz = vload_##VCLASS##EM(z);				\
    vx = vrgather_vs_##VCLASS##EM##_mask(mask, vz, vx, s);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, STYPE *z, long s) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vz = vload_##VCLASS##EM(z);				\
    vx = vload_##VCLASS##EM(x);				\
    vx = vrgather_vs_##VCLASS##EM##_mask(mask, vz, vx, 11);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_svu##EM (u##STYPE *x, u##STYPE *y, STYPE *z, long s) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vz;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);				\
    vy = vload_u##EM(y);				\
    vz = vload_u##EM(z);				\
    vx = vrgather_vv_u##EM##_mask(mask, vz, vx, vy);	\
    vstore_u##EM(x, vx);				\
  }								\
  void test_rgather_sxu##EM (u##STYPE *x, STYPE *z, long s) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);				\
    vz = vload_u##EM(z);				\
    vx = vrgather_vs_u##EM##_mask(mask, vz, vx, s);	\
    vstore_u##EM(x, vx);				\
  }								\
  void test_rgather_siu##EM (u##STYPE *x, STYPE *z, long s) {\
    vuint##EM##_t vx;					\
    vuint##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_u##EM(x);				\
    vz = vload_u##EM(z);				\
    vx = vrgather_vs_u##EM##_mask(mask, vz, vx, 11);	\
    vstore_u##EM(x, vx);				\
  }

#define RVV_TEST_FLOAT_RGATHER(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASS)\
  void test_rgather_sv##VCLASS##EM (STYPE *x, u##ISTYPE *y, STYPE *z, long s) {\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_u##EM(y);				\
    vz = vload_##VCLASS##EM(z);				\
    vx = vrgather_vv_##VCLASS##EM##_mask(mask, vz, vx, vy);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_sx##VCLASS##EM (STYPE *x, STYPE *z, long s) {	\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_##VCLASS##EM(x);				\
    vz = vload_##VCLASS##EM(z);				\
    vx = vrgather_vs_##VCLASS##EM##_mask(mask, vz, vx, s);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void test_rgather_si##VCLASS##EM (STYPE *x, STYPE *z, long s) {	\
    v##VCLASST##EM##_t vx;					\
    v##VCLASST##EM##_t vz;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_##VCLASS##EM(x);				\
    vz = vload_##VCLASS##EM(z);				\
    vx = vrgather_vs_##VCLASS##EM##_mask(mask, vz, vx, 11);	\
    vstore_##VCLASS##EM(x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_RGATHER)
RVV_FLOAT_INT_TEST (RVV_TEST_FLOAT_RGATHER)

/* { dg-final { scan-assembler-times "vrgather.vv" 44 } } */
/* { dg-final { scan-assembler-times "vrgather.vx" 44 } } */
/* { dg-final { scan-assembler-times "vrgather.vi" 44 } } */
