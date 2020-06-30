/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MULHSU_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)		\
  void rvvmulhsu##EM##_svv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VILOAD(SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vx = vmulhsu_vv_i##EM (vx, vy);				\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\
  void rvvmulhsu##EM##_svx(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z)		\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VILOAD(SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vx = vmulhsu_vx_i##EM (vx, z);				\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\

RVV_INT_TEST(RVV_MULHSU_TEST)
/* { dg-final { scan-assembler-times "vmulhsu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhsu.vx" 16 } } */

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, mulh)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, mulhu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, smul)

/* { dg-final { scan-assembler-times "vmulh.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulh.vx" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmulhu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vsmul.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsmul.vx" 16 } } */
