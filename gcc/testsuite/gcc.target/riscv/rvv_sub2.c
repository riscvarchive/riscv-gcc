/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSUB(STYPE, VCLASS, EM, MLEN)                                          \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    v##VCLASS##EM##_t vx, vy;                                                \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    vy = vsub_vv_##VCLASS##EM (vx, vy);                                     \
    vy = vsub_vs_##VCLASS##EM (vy, z);                                      \
    vstore_##VCLASS##EM(y, vy);                                                  \
    vx = vsub_vs_##VCLASS##EM (vx, 1);                                      \
    vstore_##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate sub.  */
#define VSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    v##VCLASS##EM##_t vx, vy;                                                \
    vx = vload_##VCLASS##EM(x);                                             \
    vy = vload_##VCLASS##EM(y);                                             \
    vy = vsub_vv_##VCLASS##EM (vx, vy);                                     \
    vy = vsub_vs_##VCLASS##EM (vy, z);                                      \
    vstore_##VCLASS##EM(y, vy);                                                  \
  }
/* Same for reverse subtract.  */
#define VRSUB(STYPE, VCLASS, EM, MLEN)                                         \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    v##VCLASS##EM##_t vx, vy;                                                \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    vy = vrsub_vs_##VCLASS##EM (vy, z);                                     \
    vstore_##VCLASS##EM(y, vy);                                                  \
    vx = vrsub_vs_##VCLASS##EM (vx, 1);                                     \
    vstore_##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate for reverse subtract.  */
#define VRSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                  \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    v##VCLASS##EM##_t vx, vy;                                                \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vy = vrsub_vs_##VCLASS##EM (vy, z);                                     \
    vstore_##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VSUB)
RVV_UINT_TEST(VSUB)
RVV_INT_TEST(VRSUB)
RVV_UINT_TEST(VRSUB)
RVV_FLOAT_TEST(VSUB_NO_IMM)
RVV_FLOAT_TEST(VRSUB_NO_IMM)

/* { dg-final { scan-assembler-times "vsub.vv" 32 } } */
/* sub only provide scalar version.  */
/* { dg-final { scan-assembler-times "vsub.vx" 64 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsub.vf" 12 } } */
/* { dg-final { scan-assembler-times "vrsub.vx" 32 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 32 } } */
