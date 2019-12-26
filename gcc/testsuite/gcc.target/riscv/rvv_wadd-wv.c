/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADD(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                            \
  void vwadd##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {           \
    v##VCLASS##EM##_t vy;                                                   \
    v##VCLASS##WEM##_t vx, vz;                                              \
    vx = vload_##VCLASS##WEM(x);                                              \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vwadd_wv_##VCLASS##EM (vx, vy);                                    \
    vstore_##VCLASS##WEM(z, vz);                                               \
  }

#define VWADDU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                           \
  void vwaddu##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y,                       \
                          WSTYPE *z) {                                         \
    v##VCLASS##EM##_t vy;                                                   \
    v##VCLASS##WEM##_t vx, vz;                                              \
    vx = vload_##VCLASS##WEM(x);                                              \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vwadd_wv_##VCLASS##EM (vx, vy);                                    \
    vstore_##VCLASS##WEM(z, vz);                                               \
  }

RVV_WINT_TEST(VWADD)
RVV_WUINT_TEST(VWADDU)

/* { dg-final { scan-assembler-times "vwadd.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.wv" 9 } } */
