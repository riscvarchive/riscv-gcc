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
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvsub##VCLASS##EM (vx, vy);                                          \
    vy = rvvsub##VCLASS##EM##_scalar (vy, z);                                  \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvsub##VCLASS##EM##_scalar (vx, 1);                                  \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate sub.  */
#define VSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = vx - vy;                                                              \
    vy = vy - z;                                                               \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }
/* Same for reverse subtract.  */
#define VRSUB(STYPE, VCLASS, EM, MLEN)                                         \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvrsub##VCLASS##EM##_scalar (vy, z);                                 \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvrsub##VCLASS##EM##_scalar (vx, 1);                                 \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }

RVV_INT_TEST(VSUB)
RVV_INT_TEST(VRSUB)
RVV_FLOAT_TEST(VSUB_NO_IMM)

/* { dg-final { scan-assembler-times "vsub.vv" 16 } } */
/* { dg-final { scan-assembler-times "vsub.vx" 16 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 16 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 24 } } */
/* ??? Not implemented yet.  */
/* { dg-final { scan-assembler-times "vfsub.vf" 0 } } */
/* { dg-final { scan-assembler-times "vrsub.vx" 16 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 16 } } */
