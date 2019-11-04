/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADC(STYPE, VCLASS, EM, MLEN)                                          \
  void vadc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvvbool##MLEN##_t carryin;                                                 \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    carryin = rvv_mset_bool##MLEN ();                                          \
    vy = rvv_adc##VCLASS##EM (vx, vy, carryin);                                \
    rvvst##VCLASS##EM(y, vy);                                                  \
  }

RVV_INT_TEST(VADC)

/* { dg-final { scan-assembler-times "vadc.vv" 16 } } */
