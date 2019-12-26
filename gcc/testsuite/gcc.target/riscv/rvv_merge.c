/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MERGE_TEST(STYPE, VCLASS, EM, MLEN)			\
  void rvv##VCLASS##EM##_v_builtin_test(size_t n, STYPE *x,	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASS##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_set_bool##MLEN ();				\
    vy = rvv_merge_vv_##VCLASS##EM##_mask (mask, vx, vy);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }								\
  void rvv##VCLASS##EM##_s_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASS##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_set_bool##MLEN ();				\
    vy = rvv_merge_vs_##VCLASS##EM##_mask (mask, vx, z);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }								\
  void rvv##VCLASS##EM##_i_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASS##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = rvv_le_##VCLASS##EM(x);				\
    vy = rvv_le_##VCLASS##EM(y);				\
    mask = rvv_set_bool##MLEN ();				\
    vy = rvv_merge_vs_##VCLASS##EM##_mask (mask, vx, 11);	\
    rvv_se_##VCLASS##EM(y, vy);					\
  }



RVV_INT_TEST(RVV_MERGE_TEST)
RVV_UINT_TEST(RVV_MERGE_TEST)
RVV_FLOAT_TEST(RVV_MERGE_TEST)

/* { dg-final { scan-assembler-times "vmerge.vvm" 44 } } */
/* { dg-final { scan-assembler-times "vmerge.vxm" 32 } } */
/* { dg-final { scan-assembler-times "vmerge.vim" 32 } } */
/* { dg-final { scan-assembler-times "vfmerge.vfm" 24 } } */
