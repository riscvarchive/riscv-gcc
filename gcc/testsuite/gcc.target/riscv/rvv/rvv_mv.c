/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_TEST_MV_SV_VS(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)\
  STYPE test_mv_xs##VCLASS##EM (STYPE *x) {			\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    return vmv_x_s_##VCLASS##EM##_##VCLASS##SEW (vx);			\
  }								\
  void test_mv_sx##VCLASS##EM (STYPE *x, STYPE s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vmv_s_x_##VCLASS##EM(vx, s);				\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }

RVV_INT_TEST (RVV_TEST_MV_SV_VS)
RVV_UINT_TEST (RVV_TEST_MV_SV_VS)

#define RVV_TEST_FMV_SV_VS(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)\
  STYPE test_mv_xs##VCLASS##EM (STYPE *x) {			\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    return vfmv_f_s_##VCLASS##EM##_f##SEW(vx);				\
  }								\
  void test_mv_sx##VCLASS##EM (STYPE *x, STYPE s) {		\
    v##VCLASST##EM##_t vx;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vx = vfmv_s_f_##VCLASS##EM(vx, s);				\
    VSTORE(VCLASS, SEW, EM, x, vx);					\
  }


RVV_FLOAT_TEST (RVV_TEST_FMV_SV_VS)

/* { dg-final { scan-assembler-times "vmv.s.x" 32 } } */
/* { dg-final { scan-assembler-times "vmv.x.s" 32 } } */
/* { dg-final { scan-assembler-times "vfmv.f.s" 12 } } */
/* { dg-final { scan-assembler-times "vfmv.s.f" 12 } } */
