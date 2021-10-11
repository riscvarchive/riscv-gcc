/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADDSUB(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)                     \
  void v##OP##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z, word_type vl) {           \
    v##VCLASST##EM##_t vy;                                                   \
    v##VCLASST##WEM##_t vx, vz;                                              \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                              \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = v##OP##_wv_##VCLASS##WEM (vx, vy, vl);                                 \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, WSTYPE *x, STYPE y, WSTYPE *z, word_type vl) {        \
    v##VCLASST##EM##_t vy;                                                   \
    v##VCLASST##WEM##_t vx, vz;                                              \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                              \
    vz = v##OP##_w##STYPEC##_##VCLASS##WEM (vx, y, vl);                                  \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                               \
  }

#define VWADDSUBU(STYPE, VCLASST, VCLASS, EM, MLEN, WSTYPE, WEM, STYPEC, SEW, WSEW, OP)                    \
  void v##OP##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z, word_type vl) {        \
    v##VCLASST##EM##_t vy;                                                  \
    v##VCLASST##WEM##_t vx, vz;                                             \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                             \
    vy = VLOAD(VCLASS, SEW, EM, y);                                              \
    vz = v##OP##_wv_##VCLASS##WEM (vx, vy, vl);                                \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                              \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, WSTYPE *x, STYPE y, WSTYPE *z, word_type vl) {     \
    v##VCLASST##EM##_t vy;                                                  \
    v##VCLASST##WEM##_t vx, vz;                                             \
    vx = VLOAD(VCLASS, WSEW, WEM, x);                                             \
    vz = v##OP##_w##STYPEC##_##VCLASS##WEM (vx, y, vl);                                 \
    VSTORE(VCLASS, WSEW, WEM, z, vz);                                              \
  }


RVV_WINT_TEST_ARG(VWADDSUB, wadd)
RVV_WUINT_TEST_ARG(VWADDSUBU, waddu)
RVV_WINT_TEST_ARG(VWADDSUB, wsub)
RVV_WUINT_TEST_ARG(VWADDSUBU, wsubu)

RVV_WFLOAT_TEST_ARG(VWADDSUB, fwadd)
RVV_WFLOAT_TEST_ARG(VWADDSUB, fwsub)

/* { dg-final { scan-assembler-times "vwadd.wv" 15 } } */
/* { dg-final { scan-assembler-times "vwaddu.wv" 15 } } */
/* { dg-final { scan-assembler-times "vwadd.wx" 15 } } */
/* { dg-final { scan-assembler-times "vwaddu.wx" 15 } } */
/* { dg-final { scan-assembler-times "vwsub.wv" 15 } } */
/* { dg-final { scan-assembler-times "vwsubu.wv" 15 } } */
/* { dg-final { scan-assembler-times "vwsub.wx" 15 } } */
/* { dg-final { scan-assembler-times "vwsubu.wx" 15 } } */
/* { dg-final { scan-assembler-times "vfwadd.wv" 9 } } */
/* { dg-final { scan-assembler-times "vfwadd.wf" 9 } } */
/* { dg-final { scan-assembler-times "vfwsub.wv" 9 } } */
/* { dg-final { scan-assembler-times "vfwsub.wf" 9 } } */
