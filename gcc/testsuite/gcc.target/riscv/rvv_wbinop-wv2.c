/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADDSUB(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)                     \
  void v##OP##VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {           \
    v##VCLASS##EM##_t vy;                                                   \
    v##VCLASS##WEM##_t vx, vz;                                              \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vx = vload_##VCLASS##WEM(x);                                              \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##WEM(z);                                              \
    vz = vw##OP##_wv_##VCLASS##EM##_mask (mask, vz, vx, vy);                \
    vstore_##VCLASS##WEM(z, vz);                                               \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, WSTYPE *x, STYPE y, WSTYPE *z) {        \
    v##VCLASS##EM##_t vy;                                                   \
    v##VCLASS##WEM##_t vx, vz;                                              \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vx = vload_##VCLASS##WEM(x);                                              \
    vz = vload_##VCLASS##WEM(z);                                              \
    vz = vw##OP##_ws_##VCLASS##EM##_mask (mask, vz, vx, y);                 \
    vstore_##VCLASS##WEM(z, vz);                                               \
  }

#define VWADDSUBU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)                    \
  void v##OP####VCLASS##EM(size_t n, WSTYPE *x, STYPE *y, WSTYPE *z) {        \
    v##VCLASS##EM##_t vy;                                                  \
    v##VCLASS##WEM##_t vx, vz;                                             \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vx = vload_##VCLASS##WEM(x);                                             \
    vy = vload_##VCLASS##EM(y);                                              \
    vz = vload_##VCLASS##WEM(z);                                             \
    vz = vw##OP##_wv_##VCLASS##EM##_mask (mask, vz, vx, vy);              \
    vstore_##VCLASS##WEM(z, vz);                                              \
  }                                                                            \
  void v##OP####VCLASS##EM##_s(size_t n, WSTYPE *x, STYPE y, WSTYPE *z) {     \
    v##VCLASS##EM##_t vy;                                                  \
    v##VCLASS##WEM##_t vx, vz;                                             \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vx = vload_##VCLASS##WEM(x);                                             \
    vz = vload_##VCLASS##WEM(z);                                             \
    vz = vw##OP##_ws_##VCLASS##EM##_mask (mask, vz, vx, y);               \
    vstore_##VCLASS##WEM(z, vz);                                              \
  }

RVV_WINT_TEST_ARG(VWADDSUB, add)
RVV_WUINT_TEST_ARG(VWADDSUBU, add)
RVV_WINT_TEST_ARG(VWADDSUB, sub)
RVV_WUINT_TEST_ARG(VWADDSUBU, sub)

RVV_WFLOAT_TEST_ARG(VWADDSUB, add)
RVV_WFLOAT_TEST_ARG(VWADDSUB, sub)

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
