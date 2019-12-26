/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMAXMIN(STYPE, VCLASS, EM, MLEN)                                       \
  void vmaxmin##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {            \
    v##VCLASS##EM##_t vx, vy;                                                \
    vbool##MLEN##_t mask;                                                    \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    mask = vset_bool##MLEN ();                                             \
    vy = vmax_vv_##VCLASS##EM##_mask(mask, vy, vx, vy);                     \
    vy = vmax_vs_##VCLASS##EM##_mask(mask, vy, vy, z);                      \
    vy = vmin_vv_##VCLASS##EM##_mask(mask, vy, vx, vy);                     \
    vy = vmin_vs_##VCLASS##EM##_mask(mask, vy, vy, z);                      \
    vstore_##VCLASS##EM(y, vy);                                                  \
  }

RVV_FLOAT_TEST(VMAXMIN)

/* { dg-final { scan-assembler-times "vfmax.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmax.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfmin.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfmin.vf" 12 } } */
