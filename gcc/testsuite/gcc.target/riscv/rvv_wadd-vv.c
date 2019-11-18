/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADD(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                            \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {            \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_##VCLASS##WEM##_t vz;                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_wadd_vv_##VCLASS##EM (vx, vy);                                    \
    rvv_se_##VCLASS##WEM(z, vz);                                                 \
  }

#define VWADDU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                           \
  void vwaddu##VCLASS##EM(size_t n, STYPE *x, STYPE *y,                        \
                          WSTYPE *z) {                                         \
    rvv_u##VCLASS##EM##_t vx, vy;                                               \
    rvv_u##VCLASS##WEM##_t vz;                                                  \
    vx = rvv_le_u##VCLASS##EM(x);                                              \
    vy = rvv_le_u##VCLASS##EM(y);                                              \
    vz = rvv_waddu_vv_u##VCLASS##EM (vx, vy);                                  \
    rvv_se_u##VCLASS##WEM(z, vz);                                                \
  }

RVV_WINT_TEST(VWADD)
RVV_WUINT_TEST(VWADDU)

/* { dg-final { scan-assembler-times "vwadd.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.vv" 9 } } */
