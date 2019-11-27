/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MULHSU_TEST(STYPE, VCLASS, EM, MLEN)		\
  void rvvmulhsu##VCLASS##EM##_svv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    rvv_##VCLASS##EM##_t vx;					\
    rvv_u##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    mask = rvv_mset_bool##MLEN ();				\
    vx = rvv_le_int##EM(x);					\
    vy = rvv_le_uint##EM(y);					\
    vx = rvv_mulhsu_vv_##VCLASS##EM##_mask (mask, vx, vx, vy);	\
    rvv_se_##VCLASS##EM(x, vx);					\
  }								\
  void rvvmulhsu##VCLASS##EM##_uvv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    rvv_##VCLASS##EM##_t vx;					\
    rvv_u##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    mask = rvv_mset_bool##MLEN ();				\
    vx = rvv_le_int##EM(x);					\
    vy = rvv_le_uint##EM(y);					\
    vy = rvv_mulhsu_vv_u##VCLASS##EM##_mask (mask, vy, vx, vy);	\
    rvv_se_u##VCLASS##EM(y, vy);				\
  }								\
  void rvvmulhsu##VCLASS##EM##_svx(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    rvv_##VCLASS##EM##_t vx;					\
    rvv_u##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    mask = rvv_mset_bool##MLEN ();				\
    vx = rvv_le_int##EM(x);					\
    vy = rvv_le_uint##EM(y);					\
    vx = rvv_mulhsu_vs_##VCLASS##EM##_mask (mask, vx, vx, z);	\
    rvv_se_##VCLASS##EM(x, vx);					\
  }								\
  void rvvmulhsu##VCLASS##EM##_uvx(size_t n, STYPE *x,		\
				 u##STYPE *y, u##STYPE z)	\
  {								\
    rvv_##VCLASS##EM##_t vx;					\
    rvv_u##VCLASS##EM##_t vy;					\
    rvv_bool##MLEN##_t mask;					\
    mask = rvv_mset_bool##MLEN ();				\
    vx = rvv_le_int##EM(x);					\
    vy = rvv_le_uint##EM(y);					\
    vy = rvv_mulhsu_vs_u##VCLASS##EM##_mask (mask, vy, vx, z);	\
    rvv_se_u##VCLASS##EM(y, vy);				\
  }

RVV_INT_TEST(RVV_MULHSU_TEST)
/* { dg-final { scan-assembler-times "vmulhsu.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmulhsu.vx" 32 } } */

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mulh)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, mulh)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, smul)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, smul)

/* { dg-final { scan-assembler-times "vmulh.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulh.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsmul.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsmul.vx" 32 } } */
