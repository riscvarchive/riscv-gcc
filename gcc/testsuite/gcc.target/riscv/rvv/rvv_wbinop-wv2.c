/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADDSUB(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)                     \
  void v##OP##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {           \
    v##VCLASST##EM##_t vy;                                                   \
    v##VCLASST##WEM##_t vx, vz;                                              \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                              \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, WSEW, WEM, z);                                              \
    vz = v##OP##_wv_##VCLASS##WEM##_m (mask, vz, vx, vy);                \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, WSTYPE *x, STYPE y, WSTYPE *z) {        \
    v##VCLASST##EM##_t vy;                                                   \
    v##VCLASST##WEM##_t vx, vz;                                              \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                              \
    vz = VLOAD(VCLASS, WSEW, WEM, z);                                              \
    vz = v##OP##_w##STYPEC##_##VCLASS##WEM##_m (mask, vz, vx, y);                 \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }

#define VWADDSUBU(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)                    \
  void v##OP##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {        \
    v##VCLASST##EM##_t vy;                                                  \
    v##VCLASST##WEM##_t vx, vz;                                             \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                             \
    vy = VLOAD(VCLASS, SEW, EM, y);                                              \
    vz = VLOAD(VCLASS, WSEW, WEM, z);                                             \
    vz = v##OP##_wv_##VCLASS##WEM##_m (mask, vz, vx, vy);              \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                              \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, WSTYPE *x, STYPE y, WSTYPE *z) {     \
    v##VCLASST##EM##_t vy;                                                  \
    v##VCLASST##WEM##_t vx, vz;                                             \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                             \
    vz = VLOAD(VCLASS, WSEW, WEM, z);                                             \
    vz = v##OP##_w##STYPEC##_##VCLASS##WEM##_m (mask, vz, vx, y);               \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                              \
  }

RVV_WINT_TEST_ARG(VWADDSUB, wadd)
RVV_WUINT_TEST_ARG(VWADDSUBU, waddu)
RVV_WINT_TEST_ARG(VWADDSUB, wsub)
RVV_WUINT_TEST_ARG(VWADDSUBU, wsubu)

RVV_WFLOAT_TEST_ARG(VWADDSUB, fwadd)
RVV_WFLOAT_TEST_ARG(VWADDSUB, fwsub)

/* { dg-final { scan-assembler-times "vwadd.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwadd.wx" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.wx" 9 } } */
/* { dg-final { scan-assembler-times "vwsub.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.wv" 9 } } */
/* { dg-final { scan-assembler-times "vwsub.wx" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.wx" 9 } } */
/* { dg-final { scan-assembler-times "vfwadd.wv" 6 } } */
/* { dg-final { scan-assembler-times "vfwadd.wf" 6 } } */
/* { dg-final { scan-assembler-times "vfwsub.wv" 6 } } */
/* { dg-final { scan-assembler-times "vfwsub.wf" 6 } } */
