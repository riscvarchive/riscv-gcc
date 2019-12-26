/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MERGE_TEST(STYPE, VCLASST, VCLASS, EM, MLEN)			\
  void rvv##VCLASS##EM##_v_builtin_test(size_t n, STYPE *x,	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_##VCLASS##EM(y);				\
    mask = vset_b##MLEN ();				\
    vy = vmerge_vv_##VCLASS##EM##_mask (mask, vx, vy);	\
    vstore_##VCLASS##EM(y, vy);					\
  }								\
  void rvv##VCLASS##EM##_s_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_##VCLASS##EM(y);				\
    mask = vset_b##MLEN ();				\
    vy = vmerge_vs_##VCLASS##EM##_mask (mask, vx, z);	\
    vstore_##VCLASS##EM(y, vy);					\
  }								\
  void rvv##VCLASS##EM##_i_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = vload_##VCLASS##EM(x);				\
    vy = vload_##VCLASS##EM(y);				\
    mask = vset_b##MLEN ();				\
    vy = vmerge_vs_##VCLASS##EM##_mask (mask, vx, 11);	\
    vstore_##VCLASS##EM(y, vy);					\
  }



RVV_INT_TEST(RVV_MERGE_TEST)
RVV_UINT_TEST(RVV_MERGE_TEST)
RVV_FLOAT_TEST(RVV_MERGE_TEST)

/* { dg-final { scan-assembler-times "vmerge.vvm" 44 } } */
/* { dg-final { scan-assembler-times "vmerge.vxm" 32 } } */
/* { dg-final { scan-assembler-times "vmerge.vim" 32 } } */
/* { dg-final { scan-assembler-times "vfmerge.vfm" 24 } } */
