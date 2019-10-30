/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLT(STYPE, VCLASS, EM, MLEN)                                          \
  void vlt##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE *z) {               \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask;                                                    \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvld##VCLASS##EM(z);                                                 \
    mask = rvvslt##VCLASS##EM(vx, vy);                                         \
    mask = rvvslt##VCLASS##EM##_mask(mask, mask, vx, vz);                      \
    vx = rvvadd##VCLASS##EM##_mask (mask, vy, vx, vy);                         \
    rvvst##VCLASS##EM(x, vx);                                                  \
  }

RVV_INT_TEST(VSLT)

/* XXX: Check only half of vmslt.vv has masking operand.  */
/* { dg-final { scan-assembler-times "vmslt.vv" 32 } } */
