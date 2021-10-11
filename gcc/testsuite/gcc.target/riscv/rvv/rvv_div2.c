/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, div)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, divu)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fdiv)

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VRDIV(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                    \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl) {              \
    v##VCLASST##EM##_t vx, vy;                                                \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vy = vfrdiv_vf_##VCLASS##EM (vy, z, vl);;                                                               \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                  \
  }

RVV_FLOAT_TEST(VRDIV)


/* { dg-final { scan-assembler-times "vdiv.vv" 22 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 44 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 22 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 44 } } */
/* { dg-final { scan-assembler-times "vfdiv.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfdiv.vf" 15 } } */
/* { dg-final { scan-assembler-times "vfrdiv.vf" 15 } } */
