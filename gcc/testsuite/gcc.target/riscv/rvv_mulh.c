/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MULHSU_TEST(STYPE, VCLASS, EM, MLEN)		\
  void rvvmulhsu##VCLASS##EM##_svv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASS##EM##_t vx;					\
    vu##VCLASS##EM##_t vy;					\
    vx = vload_int##EM(x);					\
    vy = vload_uint##EM(y);					\
    vx = vmulhsu_vv_##VCLASS##EM (vx, vy);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void rvvmulhsu##VCLASS##EM##_uvv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASS##EM##_t vx;					\
    vu##VCLASS##EM##_t vy;					\
    vx = vload_int##EM(x);					\
    vy = vload_uint##EM(y);					\
    vy = vmulhsu_vv_u##VCLASS##EM (vx, vy);			\
    vstore_u##VCLASS##EM(y, vy);				\
  }								\
  void rvvmulhsu##VCLASS##EM##_svx(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASS##EM##_t vx;					\
    vu##VCLASS##EM##_t vy;					\
    vx = vload_int##EM(x);					\
    vy = vload_uint##EM(y);					\
    vx = vmulhsu_vs_##VCLASS##EM (vx, z);			\
    vstore_##VCLASS##EM(x, vx);					\
  }								\
  void rvvmulhsu##VCLASS##EM##_uvx(size_t n, STYPE *x,		\
				 u##STYPE *y, u##STYPE z)	\
  {								\
    v##VCLASS##EM##_t vx;					\
    vu##VCLASS##EM##_t vy;					\
    vx = vload_int##EM(x);					\
    vy = vload_uint##EM(y);					\
    vy = vmulhsu_vs_u##VCLASS##EM (vx, z);			\
    vstore_u##VCLASS##EM(y, vy);				\
  }

RVV_INT_TEST(RVV_MULHSU_TEST)
/* { dg-final { scan-assembler-times "vmulhsu.vv" 32 } } */
/* { dg-final { scan-assembler-times "vmulhsu.vx" 32 } } */

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, mulh)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, mulh)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, smul)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, smul)

/* { dg-final { scan-assembler-times "vmulh.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulh.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsmul.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsmul.vx" 32 } } */
