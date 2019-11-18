/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASS, EM, MLEN)                                   \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z) {                            \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask;                                                    \
    mask = rvv_mset_bool##MLEN ();                                             \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vx = rvv_lse_##VCLASS##EM##_mask(mask, vy, x, stride);                     \
    vz = vx + vy;                                                              \
    rvv_se_##VCLASS##EM(x, vz);                                                  \
  }

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vlse.v" 44 } } */
