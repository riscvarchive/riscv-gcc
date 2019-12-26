/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSET(STYPE, VCLASST, VCLASS, EM, MLEN)                                          \
  void vsbf##VCLASS##EM(size_t n, STYPE *x, STYPE *y) {                        \
    v##VCLASST##EM##_t vx, vy;                                                \
    vbool##MLEN##_t mask0;                                                   \
    vbool##MLEN##_t rv;                                                      \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    mask0 = vset_b##MLEN ();                                            \
    vy = vadd_vv_##VCLASS##EM##_mask (mask0, vy, vx, vy);                   \
    * (v##VCLASST##EM##_t *) y = vy;                                          \
  }

RVV_INT_TEST(VSET)

/* { dg-final { scan-assembler-times "vmset.m" 16 } } */
