/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN)                                   \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z) {                            \
    v##VCLASST##EM##_t vx, vy, vz;                                            \
    vbool##MLEN##_t mask;                                                    \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    vstores_##VCLASS##EM(x, stride, vz);                                       \
  }

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vsse8.v" 8 } } */
/* { dg-final { scan-assembler-times "vsse16.v" 12 } } */
/* { dg-final { scan-assembler-times "vsse32.v" 12 } } */
/* { dg-final { scan-assembler-times "vsse64.v" 12 } } */
