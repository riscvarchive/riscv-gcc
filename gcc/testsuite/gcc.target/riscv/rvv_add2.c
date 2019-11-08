/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADD(STYPE, VCLASS, EM, MLEN)                                          \
  void vadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvadd##VCLASS##EM (vx, vy);                                          \
    vy = rvvadd##VCLASS##EM##_scalar (vy, z);                                  \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvadd##VCLASS##EM##_scalar (vx, 1);                                  \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate add.  */
#define VADD_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = vx + vy;                                                              \
    vy = vy + z;                                                               \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VADD)
RVV_UINT_TEST(VADD)
RVV_FLOAT_TEST(VADD_NO_IMM)

/* { dg-final { scan-assembler-times "vadd.vv" 32 } } */
/* { dg-final { scan-assembler-times "vadd.vx" 32 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 32 } } */
/* { dg-final { scan-assembler-times "vfadd.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfadd.vf" 12 } } */
