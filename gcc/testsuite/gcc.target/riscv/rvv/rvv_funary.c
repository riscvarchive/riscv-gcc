/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define RVV_FCLASS_TEST(STYPE, VCLASST, VCLASS, EM, MLEN, ISTYPE, IVCLASS, SEW, OP)	\
  void rvv##OP##VCLASS##EM##_v_nomask_builtin_test(size_t n, STYPE *x,	\
					       u##ISTYPE *y, STYPE z, word_type vl)	\
  {									\
    v##VCLASST##EM##_t vx;						\
    vuint##EM##_t vy;						\
    vx = VLOAD(VCLASS, SEW, EM, x);					\
    vy = v##OP##_v_u##EM (vx, vl);				\
    VUSTORE(SEW, EM, y, vy);					\
  }

RVV_FLOAT_INT_TEST_ARG(RVV_FCLASS_TEST, fclass)

RVV_FLOAT_TEST_ARG(RVV_UNARY_BUILTIN_VEC_TEST, fsqrt)
RVV_FLOAT_TEST_ARG(RVV_UNARY_BUILTIN_VEC_TEST, fabs)

/* { dg-final { scan-assembler-times "vfclass.v" 15 } } */
/* { dg-final { scan-assembler-times "vfsqrt.v" 15 } } */
/* { dg-final { scan-assembler-times "vfsgnjx.vv" 15 } } */
