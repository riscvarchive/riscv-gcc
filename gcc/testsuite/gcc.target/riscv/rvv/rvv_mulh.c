/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_MULHSU_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)		\
  void rvvmulhsu##EM##_svv(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z, word_type vl)		\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VILOAD(SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vx = vmulhsu_vv_i##EM (vx, vy, vl);				\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\
  void rvvmulhsu##EM##_svx(size_t n, STYPE *x,		\
				 u##STYPE *y, STYPE z, word_type vl)		\
  {								\
    v##VCLASST##EM##_t vx;					\
    vuint##EM##_t vy;					\
    vx = VILOAD(SEW, EM, x);					\
    vy = VULOAD(SEW, EM, y);					\
    vx = vmulhsu_vx_i##EM (vx, z, vl);				\
    VSTORE(VCLASS, SEW, EM, x, vx);				\
  }								\

RVV_INT_TEST(RVV_MULHSU_TEST)
/* { dg-final { scan-assembler-times "vmulhsu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmulhsu.vx" 22 } } */

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, mulh)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, mulhu)
RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_TEST, smul)

/* { dg-final { scan-assembler-times "vmulh.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmulh.vx" 22 } } */
/* { dg-final { scan-assembler-times "vmulhu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vmulhu.vx" 22 } } */
/* { dg-final { scan-assembler-times "vsmul.vv" 22 } } */
/* { dg-final { scan-assembler-times "vsmul.vx" 22 } } */
