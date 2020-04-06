/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VAND(STYPE, VCLASST, VCLASS, EM, MLEN)                                 \
  void vand##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    v##VCLASST##EM##_t vx, vy;                                                 \
    vbool##MLEN##_t mask;                                                      \
    vx = vload_##VCLASS##EM(x);                                                \
    vy = vload_##VCLASS##EM(y);                                                \
    mask = vset_b##MLEN ();                                                    \
    vy = vand_vv_##VCLASS##EM##_mask (mask, vy, vx, vy);                       \
    vy = vand_vs_##VCLASS##EM##_mask (mask, vy, vy, z);                        \
    vstore_##VCLASS##EM(y, vy);                                                \
    vx = vand_vs_##VCLASS##EM##_mask (mask, vy, vx, 1);                        \
    vstore_##VCLASS##EM(x, vx);                                                \
  }

RVV_INT_TEST(VAND)

/* { dg-final { scan-assembler-times "vand.vv" 16 } } */
/* { dg-final { scan-assembler-times "vand.vx" 16 } } */
/* { dg-final { scan-assembler-times "vand.vi" 16 } } */
