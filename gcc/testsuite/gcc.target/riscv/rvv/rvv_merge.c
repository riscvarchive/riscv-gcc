/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_INT_MERGE_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)			\
  void rvv##VCLASS##EM##_v_builtin_test(size_t n, STYPE *x,	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = vmerge_vvm_##VCLASS##EM (mask, vx, vy);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }								\
  void rvv##VCLASS##EM##_s_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = vmerge_vxm_##VCLASS##EM (mask, vx, z);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }								\
  void rvv##VCLASS##EM##_i_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = vmerge_vxm_##VCLASS##EM (mask, vx, 11);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }

#define RVV_FLOAT_MERGE_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)	\
  void rvv##VCLASS##EM##_s_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = vfmerge_vfm_##VCLASS##EM (mask, vx, z);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }								\
  void rvv##VCLASS##EM##_i_builtin_test(size_t n, STYPE *x, 	\
					     STYPE *y, STYPE z)	\
  {								\
    v##VCLASST##EM##_t vx, vy;				\
    vbool##MLEN##_t mask;					\
    vx = VLOAD(VCLASS, SEW, EM, x);				\
    vy = VLOAD(VCLASS, SEW, EM, y);				\
    mask = MSET (MLEN);				\
    vy = vfmerge_vfm_##VCLASS##EM (mask, vx, 11);	\
    VSTORE(VCLASS, SEW, EM, y, vy);					\
  }


RVV_INT_TEST(RVV_INT_MERGE_TEST)
RVV_UINT_TEST(RVV_INT_MERGE_TEST)
RVV_FLOAT_TEST(RVV_FLOAT_MERGE_TEST)

/* { dg-final { scan-assembler-times "vmerge.vvm" 32 } } */
/* { dg-final { scan-assembler-times "vmerge.vxm" 32 } } */
/* { dg-final { scan-assembler-times "vmerge.vim" 32 } } */
/* { dg-final { scan-assembler-times "vfmerge.vfm" 24 } } */
