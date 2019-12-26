/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADC(STYPE, VCLASST, VCLASS, EM, MLEN)                                          \
  void vadc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    v##VCLASST##EM##_t vx, vy;                                                \
    vbool##MLEN##_t carryin;                                                 \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    carryin = vset_b##MLEN ();                                          \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryin);                            \
    vstore_##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VADC)

/* { dg-final { scan-assembler-times "vadc.vv" 16 } } */
