/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FCLASS_TEST(STYPE, VCLASS, EM, MLEN, ISTYPE, IVCLASS,  OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
					       u##ISTYPE *y, STYPE z)	\
  {									\
    v##VCLASS##EM##_t vx;						\
    vu##IVCLASS##EM##_t vy;						\
    vx = vload_##VCLASS##EM(x);					\
    vy = v##OP##_v_##VCLASS##EM (vx);				\
    vstore_u##IVCLASS##EM(y, vy);					\
  }

RVV_FLOAT_INT_TEST_ARG(RVV_FCLASS_TEST, class)

RVV_FLOAT_TEST_ARG(RVV_UNARY_BUILTIN_VEC_TEST, sqrt)

/* { dg-final { scan-assembler-times "vfclass.v" 12 } } */
/* { dg-final { scan-assembler-times "vfsqrt.v" 12 } } */
