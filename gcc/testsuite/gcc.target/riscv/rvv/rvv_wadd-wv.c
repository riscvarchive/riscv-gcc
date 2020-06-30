/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADD(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW)         \
  void vwadd##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {           \
    v##VCLASST##EM##_t vy;                                                   \
    v##VCLASST##WEM##_t vx, vz;                                              \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                              \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = vwadd_wv_##VCLASS##WEM (vx, vy);                                    \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }

#define VWADDU(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW)        \
  void vwaddu##EM(size_t n, WSTYPE *x, STYPE *y,                       \
                          WSTYPE *z) {                                         \
    v##VCLASST##EM##_t vy;                                                   \
    v##VCLASST##WEM##_t vx, vz;                                              \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                              \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = vwaddu_wv_##VCLASS##WEM (vx, vy);                                    \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }

RVV_WINT_TEST(VWADD)
RVV_WUINT_TEST(VWADDU)

/* { dg-final { scan-assembler-times "vwadd.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.wv" 9 } } */
