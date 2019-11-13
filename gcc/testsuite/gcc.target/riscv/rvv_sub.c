/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSUB(STYPE, VCLASS, EM, MLEN)                                          \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = vx - vy;                                                              \
    vy = vy - z;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
    vx = vx - 1;                                                               \
    * (rvv##VCLASS##EM##_t *) x = vx;                                          \
  }
/* Same as above without the immediate sub.  */
#define VSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = vx - vy;                                                              \
    vy = vy - z;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }
/* Same for reverse subtract.  */
#define VRSUB(STYPE, VCLASS, EM, MLEN)                                         \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = z - vy;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
    vx = 1 - vx;                                                               \
    * (rvv##VCLASS##EM##_t *) x = vx;                                          \
  }
/* Same as above without the immediate for reverse subtract.  */
#define VRSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                  \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = * (rvv##VCLASS##EM##_t *) x;                                          \
    vy = * (rvv##VCLASS##EM##_t *) y;                                          \
    vy = z - vy;                                                               \
    * (rvv##VCLASS##EM##_t *) y = vy;                                          \
  }

RVV_INT_TEST(VSUB)
RVV_UINT_TEST(VSUB)
RVV_INT_TEST(VRSUB)
RVV_UINT_TEST(VRSUB)
RVV_FLOAT_TEST(VSUB_NO_IMM)
RVV_FLOAT_TEST(VRSUB_NO_IMM)

/* { dg-final { scan-assembler-times "vsub.vv" 32 } } */
/* { dg-final { scan-assembler-times "vsub.vx" 32 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsub.vf" 12 } } */
/* { dg-final { scan-assembler-times "vrsub.vx" 32 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 32 } } */
/* { dg-final { scan-assembler-times "vfrsub.vf" 12 } } */
