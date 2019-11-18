/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define TEST(STYPE, VCLASS, EM, MLEN)                                          \
  void vadd##VCLASS##EM(STYPE *x, STYPE *y) {                                  \
    rvv##VCLASS##EM##_t vx;                                                    \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    rvv_se_##VCLASS##EM(y, vx);                                                  \
  }

RVV_INT_TEST(TEST)
RVV_FLOAT_TEST(TEST)

/* { dg-final { scan-assembler-times "vle\.v" 28 } } */
/* { dg-final { scan-assembler-times "vse.v\t" 28 } } */
