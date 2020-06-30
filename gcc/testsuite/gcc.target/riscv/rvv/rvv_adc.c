/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VADC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)             \
  void vadc##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    v##VCLASST##EM##_t vx, vy;                                                \
    vbool##MLEN##_t carryin;                                                 \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    carryin = MSET (MLEN);                                          \
    vy = vadc_vvm_##VCLASS##EM (vx, vy, carryin);                            \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                  \
  }

RVV_INT_TEST(VADC)

/* { dg-final { scan-assembler-times "vadc.vv" 16 } } */
