/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWSUB(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW)            \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {            \
    v##VCLASST##EM##_t vx, vy;                                               \
    v##VCLASST##WEM##_t vz;                                                  \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, WSEW, WEM, z);                                              \
    mask = MSET (MLEN);                                             \
    vz = vwsub_vv_##VCLASS##WEM##_m (mask, vz, vx, vy);                   \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }

#define VWSUBU(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW)           \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y,                        \
                          WSTYPE *z) {                                         \
    v##VCLASST##EM##_t vx, vy;                                              \
    v##VCLASST##WEM##_t vz;                                                 \
    vbool##MLEN##_t mask;                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                              \
    vy = VLOAD(VCLASS, SEW, EM, y);                                              \
    vz = VLOAD(VCLASS, WSEW, WEM, z);                                             \
    mask = MSET (MLEN);                                             \
    vz = vwsubu_vv_##VCLASS##WEM##_m (mask, vz, vx, vy);                 \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                              \
  }

RVV_WINT_TEST(VWSUB)
RVV_WUINT_TEST(VWSUBU)

/* { dg-final { scan-assembler-times "vwsub.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.vv" 9 } } */
