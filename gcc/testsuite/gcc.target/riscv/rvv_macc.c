/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include "rvv-common.h"
#include <riscv_vector.h>
#include <stddef.h>

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMACC(STYPE, VCLASS, EM, MLEN)                                         \
  void vmacc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {             \
    v##VCLASS##EM##_t vx, vy, vz;                                            \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    vz = vx * vy + vz;                                                         \
    vstore_##VCLASS##EM(z, vz);                                                  \
  }

#define VMACC_IMM(STYPE, VCLASS, EM, MLEN)                                     \
  void vmacc##VCLASS##EM##_imm(size_t n, STYPE x, STYPE *y, STYPE *z) {        \
    v##VCLASS##EM##_t vx, vy, vz;                                            \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    vz = x * vy + vz;                                                          \
    vstore_##VCLASS##EM(z, vz);                                                  \
  }

#if 0
RVV_INT_TEST(VMACC)
#endif

RVV_FLOAT_TEST(VMACC)
RVV_FLOAT_TEST(VMACC_IMM)

/* { dg-final { scan-assembler-times "vf(?:macc|madd)\.vv" 12 } } */
/* { dg-final { scan-assembler-times "vf(?:macc|madd)\.vf" 12 } } */
