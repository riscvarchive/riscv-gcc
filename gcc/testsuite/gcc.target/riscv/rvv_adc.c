/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADC(STYPE, VCLASS, EM, MLEN)                                          \
  void vadc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t carryin;                                                 \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    carryin = rvv_set_bool##MLEN ();                                          \
    vy = rvv_adc_vv_##VCLASS##EM (vx, vy, carryin);                            \
    rvv_se_##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VADC)

/* { dg-final { scan-assembler-times "vadc.vv" 16 } } */
