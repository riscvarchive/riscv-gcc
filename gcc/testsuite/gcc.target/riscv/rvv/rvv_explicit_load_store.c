/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define TEST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                          \
  void vadd##VCLASS##EM(STYPE *x, STYPE *y) {                                  \
    v##VCLASST##EM##_t vx;                                                    \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    VSTORE(VCLASS, SEW, EM, y, vx);                                                  \
  }

RVV_INT_TEST(TEST)
RVV_FLOAT_TEST(TEST)

/* { dg-final { scan-assembler-times "vle8\.v" 4 } } */
/* { dg-final { scan-assembler-times "vle16\.v" 8 } } */
/* { dg-final { scan-assembler-times "vle32\.v" 8 } } */
/* { dg-final { scan-assembler-times "vle64\.v" 8 } } */
/* { dg-final { scan-assembler-times "vse8.v\t" 4 } } */
/* { dg-final { scan-assembler-times "vse16.v\t" 8 } } */
/* { dg-final { scan-assembler-times "vse32.v\t" 8 } } */
/* { dg-final { scan-assembler-times "vse64.v\t" 8 } } */
