/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

RVV_INT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, sub)
RVV_UINT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_IMM_MASKED_TEST, sub)
RVV_FLOAT_TEST_ARG(RVV_BIN_BUILTIN_VEC_SCALAR_MASKED_TEST, fsub)

/* Same for reverse subtract.  */
#define VRSUB(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                         \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    v##VCLASST##EM##_t vx, vy;                                                \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                 \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                 \
    vy = vrsub_vx_##VCLASS##EM (vy, z);                                     \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                  \
    vx = vrsub_vx_##VCLASS##EM (vx, 1);                                     \
    VSTORE(VCLASS, SEW, EM, x, vx);                                                  \
  }
/* Same as above without the immediate for reverse subtract.  */
#define VRSUB_NO_IMM(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                  \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    v##VCLASST##EM##_t vx, vy;                                                \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vy = vfrsub_vf_##VCLASS##EM (vy, z);                                     \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                  \
  }

RVV_INT_TEST(VRSUB)
RVV_UINT_TEST(VRSUB)
RVV_FLOAT_TEST(VRSUB_NO_IMM)

/* { dg-final { scan-assembler-times "vsub.vv" 32 } } */
/* sub only provide scalar version.  */
/* { dg-final { scan-assembler-times "vsub.vx" 64 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsub.vf" 12 } } */
/* { dg-final { scan-assembler-times "vrsub.vx" 32 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 32 } } */
