/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADD(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                            \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {            \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvv##VCLASS##WEM##_t vz;                                                   \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvwadd_vv_##VCLASS##EM (vx, vy);                                     \
    rvvst##VCLASS##WEM(z, vz);                                                 \
  }

#define VWADDU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                           \
  void vwaddu##VCLASS##EM(size_t n, unsigned STYPE *x, unsigned STYPE *y,      \
                         unsigned WSTYPE *z) {                                 \
    rvvu##VCLASS##EM##_t vx, vy;                                               \
    rvvu##VCLASS##WEM##_t vz;                                                  \
    vx = rvvldu##VCLASS##EM(x);                                                \
    vy = rvvldu##VCLASS##EM(y);                                                \
    vz = rvvwaddu_vv_u##VCLASS##EM (vx, vy);                                   \
    rvvstu##VCLASS##WEM(z, vz);                                                \
  }

RVV_WINT_TEST(VWADD)
RVV_WINT_TEST(VWADDU)

/* { dg-final { scan-assembler-times "vwadd.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.vv" 9 } } */
