/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, sub)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, sub)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsub)

/* Reverse subtract.  */
#define VRSUB(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                         \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl) {              \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask = MSET (MLEN);                                             \
    vy = vrsub_vx_##VCLASS##EM##_m (mask, vx, vy, z, vl);                    \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
    vx = vrsub_vx_##VCLASS##EM##_m (mask, vx, vx, 1, vl);                    \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                \
  }
/* Same as above without the immediate for reverse subtract.  */
#define VRSUB_NO_IMM(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                  \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z, word_type vl) {              \
    vbool##MLEN##_t mask;                                                    \
    v##VCLASST##EM##_t vx, vy;                                                \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                 \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                 \
    mask = MSET (MLEN);                                             \
    vy = vfrsub_vf_##VCLASS##EM##_m (mask, vx, vy, z, vl);                    \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                  \
  }


RVV_INT_TEST(VRSUB)
RVV_UINT_TEST(VRSUB)
RVV_FLOAT_TEST(VRSUB_NO_IMM)

/* { dg-final { scan-assembler-times "vsub.vv" 44 } } */
/* { dg-final { scan-assembler-times "vsub.vx" 88 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 15 } } */
/* { dg-final { scan-assembler-times "vfsub.vf" 15 } } */
/* rsub only provide scalar version.  */
/* { dg-final { scan-assembler-times "vrsub.vx" 44 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 44 } } */
