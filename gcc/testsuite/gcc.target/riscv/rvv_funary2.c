/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FCLASS_TEST(STYPE, VCLASS, EM, MLEN, ISTYPE, IVCLASS,  OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
					       ISTYPE *y, STYPE z)	\
  {									\
    rvv_##VCLASS##EM##_t vx;						\
    rvv_##IVCLASS##EM##_t vy;						\
    rvv_bool##MLEN##_t mask;						\
    mask = rvv_set_bool##MLEN ();					\
    vx = rvv_le_##VCLASS##EM(x);					\
    vy = rvv_le_##IVCLASS##EM(y);					\
    vy = rvv_##OP##_v_##VCLASS##EM##_mask (mask, vy, vx);		\
    rvv_se_##IVCLASS##EM(y, vy);					\
  }

RVV_FLOAT_INT_TEST_ARG(RVV_FCLASS_TEST, class)

RVV_FLOAT_TEST_ARG(RVV_UNARY_BUILTIN_VEC_MASKED_TEST, sqrt)

/* { dg-final { scan-assembler-times "vfclass.v" 12 } } */
/* { dg-final { scan-assembler-times "vfsqrt.v" 12 } } */
