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
    rvvbool##MLEN##_t mask;                                                    \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    mask = rvvslt##VCLASS##EM(vx, vy);                                         \
    vy = rvvmul##VCLASS##EM##_mask(mask, vy, vx, vy);                          \
    vy = rvvmul##VCLASS##EM##_scalar_mask(mask, vy, vy, z);                    \
    rvvst##VCLASS##EM(y, vy);                                                  \
    vx = rvvmul##VCLASS##EM##_scalar_mask(mask, vy, vx, 11);                   \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }

#define VMUL_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vmul##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvvbool##MLEN##_t mask;                                                    \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    mask = rvv_mset_bool##MLEN ();                                             \
    vy = rvv_mul_vv_##VCLASS##EM##_mask(mask, vy, vx, vy);                     \
    vy = rvv_mul_vs_##VCLASS##EM##_mask(mask, vy, vy, z);                      \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VMUL)
RVV_FLOAT_TEST(VMUL_NO_IMM)

/* { dg-final { scan-assembler-times "vmul.vv" 16 } } */
/* { dg-final { scan-assembler-times "vmul.vx" 32 } } */
/* { dg-final { scan-assembler-times "vfmul.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmul.vf" 12 } } */
