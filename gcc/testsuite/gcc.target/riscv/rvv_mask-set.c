/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSET(STYPE, VCLASS, EM, MLEN)                                          \
  void vsbf##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {                        \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t mask0;                                                   \
    rvv_bool##MLEN##_t rv;                                                      \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    mask0 = rvv_mset_bool##MLEN ();                                            \
    vy = rvv_add_vv_##VCLASS##EM##_mask (mask0, vy, vx, vy);                   \
    * (rvv_##VCLASS##EM##_t *) y = vy;                                          \
  }

RVV_INT_TEST(VSET)

/* { dg-final { scan-assembler-times "vmset.m" 16 } } */
