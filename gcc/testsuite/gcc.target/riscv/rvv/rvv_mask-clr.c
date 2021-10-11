/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VCLR(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                          \
  void vsbf##VCLASS##EM(size_t n, STYPE *x, STYPE *y, word_type vl) {                        \
    v##VCLASST##EM##_t vx, vy;                                                \
    vbool##MLEN##_t mask0;                                                   \
    vbool##MLEN##_t rv;                                                      \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                 \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                 \
    mask0 = vmclr_m_b##MLEN (vl);                                            \
    vy = vadd_vv_##VCLASS##EM##_m (mask0, vy, vx, vy, vl);                   \
    * (v##VCLASST##EM##_t *) y = vy;                                          \
  }

RVV_INT_TEST(VCLR)

/* { dg-final { scan-assembler-times "vmclr.m" 22 } } */
