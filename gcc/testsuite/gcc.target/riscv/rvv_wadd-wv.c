/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADD(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                            \
  void vwadd##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {           \
    rvv##VCLASS##EM##_t vy;                                                    \
    rvv##VCLASS##WEM##_t vx, vz;                                               \
    vx = rvvld##VCLASS##WEM(x);                                                \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvwadd_wv_##VCLASS##EM (vx, vy);                                     \
    rvvst##VCLASS##WEM(z, vz);                                                 \
  }

#define VWADDU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                           \
  void vwaddu##VCLASS##EM(size_t n, unsigned WSTYPE *x, unsigned STYPE *y,     \
                         unsigned WSTYPE *z) {                                 \
    rvvu##VCLASS##EM##_t vy;                                                   \
    rvvu##VCLASS##WEM##_t vx, vz;                                              \
    vx = rvvldu##VCLASS##WEM(x);                                               \
    vy = rvvldu##VCLASS##EM(y);                                                \
    vz = rvvwaddu_wv_u##VCLASS##EM (vx, vy);                                   \
    rvvstu##VCLASS##WEM(z, vz);                                                \
  }

RVV_WINT_TEST(VWADD)
RVV_WUINT_TEST(VWADDU)

/* { dg-final { scan-assembler-times "vwadd.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.wv" 9 } } */
