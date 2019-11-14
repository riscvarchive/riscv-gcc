/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMUL(STYPE, VCLASS, EM, MLEN)                                          \
  void vmul##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvvmul##VCLASS##EM(vx, vy);                                           \
    vy = rvvmul##VCLASS##EM##_scalar (vy, z);                                     \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

#define VFMUL(STYPE, VCLASS, EM, MLEN)                                         \
  void vmul##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vy = rvv_mul_vv_##VCLASS##EM(vx, vy);                                      \
    vy = rvv_mul_vs_##VCLASS##EM (vy, z);                                      \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VMUL)
RVV_FLOAT_TEST(VFMUL)

/* { dg-final { scan-assembler-times "vmul.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmul.vx" 16 } } */
/* { dg-final { scan-assembler-times "vfmul.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmul.vf" 12 } } */
