/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MULHSU_TEST(STYPE, VCLASST, VCLASS, EM, MLEN)		\
  void rvvmulhsu##EM##_svv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_i##EM(x);					\
    vy = vload_u##EM(y);					\
    vx = vmulhsu_vv_##VCLASS##EM##_mask (mask, vx, vx, vy);	\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void rvvmulhsu##EM##_svx(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vbool##MLEN##_t mask;					\
    mask = vset_b##MLEN ();				\
    vx = vload_i##EM(x);					\
    vy = vload_u##EM(y);					\
    vx = vmulhsu_vs_##VCLASS##EM##_mask (mask, vx, vx, z);	\
    vstore_##VCLASS##EM(x, vx);					\
  }

RVV_INT_TEST(RVV_MULHSU_TEST)
/* { dg-final { scan-assembler-times "vmulhsu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhsu.vx" 16 } } */

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mulh)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mulh)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, smul)

/* { dg-final { scan-assembler-times "vmulh.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulh.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsmul.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsmul.vx" 16 } } */
