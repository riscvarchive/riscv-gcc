/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWADDSUB(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)                     \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {            \
    rvv_##VCLASS##EM##_t vx, vy;                                               \
    rvv_##VCLASS##WEM##_t vz;                                                  \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_w##OP##_vv_##VCLASS##EM (vx, vy);                                 \
    rvv_se_##VCLASS##WEM(z, vz);                                               \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, STYPE *x, STYPE y, WSTYPE *z) {         \
    rvv_##VCLASS##EM##_t vx, vy;                                               \
    rvv_##VCLASS##WEM##_t vz;                                                  \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vz = rvv_w##OP##_vs_##VCLASS##EM (vx, y);                                  \
    rvv_se_##VCLASS##WEM(z, vz);                                               \
  }

#define VWADDSUBU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)                    \
  void v##OP##u##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {         \
    rvv_##VCLASS##EM##_t vx, vy;                                              \
    rvv_##VCLASS##WEM##_t vz;                                                 \
    vx = rvv_le_##VCLASS##EM(x);                                              \
    vy = rvv_le_##VCLASS##EM(y);                                              \
    vz = rvv_w##OP##_vv_##VCLASS##EM (vx, vy);                                \
    rvv_se_##VCLASS##WEM(z, vz);                                              \
  }                                                                            \
  void v##OP##u##VCLASS##EM##_s(size_t n, STYPE *x, STYPE y, WSTYPE *z) {      \
    rvv_##VCLASS##EM##_t vx, vy;                                              \
    rvv_##VCLASS##WEM##_t vz;                                                 \
    vx = rvv_le_##VCLASS##EM(x);                                              \
    vz = rvv_w##OP##_vs_##VCLASS##EM (vx, y);                                \
    rvv_se_##VCLASS##WEM(z, vz);                                              \
  }

#define VWMULSU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM, OP)                      \
  void v##OP##VCLASS##EM(size_t n, STYPE *x, u##STYPE *y, WSTYPE *z) {         \
    rvv_##VCLASS##EM##_t vx;                                                   \
    rvv_u##VCLASS##EM##_t vy;                                                  \
    rvv_##VCLASS##WEM##_t vz;                                                  \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_u##VCLASS##EM(y);                                              \
    vz = rvv_w##OP##_vv_##VCLASS##EM (vx, vy);                                 \
    rvv_se_##VCLASS##WEM(z, vz);                                               \
  }                                                                            \
  void v##OP##VCLASS##EM##_s(size_t n, STYPE *x, u##STYPE y, WSTYPE *z) {      \
    rvv_##VCLASS##EM##_t vx;                                                   \
    rvv_u##VCLASS##EM##_t vy;                                                  \
    rvv_##VCLASS##WEM##_t vz;                                                  \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vz = rvv_w##OP##_vs_##VCLASS##EM (vx, y);                                  \
    rvv_se_##VCLASS##WEM(z, vz);                                               \
  }                                                                            \
  void v##OP##u##VCLASS##EM(size_t n, STYPE *x, u##STYPE *y, WSTYPE *z) {      \
    rvv_##VCLASS##EM##_t vx;                                                   \
    rvv_u##VCLASS##EM##_t vy;                                                  \
    rvv_u##VCLASS##WEM##_t vz;                                                 \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_u##VCLASS##EM(y);                                              \
    vz = rvv_w##OP##_vv_u##VCLASS##EM (vx, vy);                                \
    rvv_se_u##VCLASS##WEM(z, vz);                                              \
  }                                                                            \
  void v##OP##u##VCLASS##EM##_s(size_t n, STYPE *x, u##STYPE y, WSTYPE *z) {   \
    rvv_##VCLASS##EM##_t vx;                                                   \
    rvv_u##VCLASS##EM##_t vy;                                                  \
    rvv_u##VCLASS##WEM##_t vz;                                                 \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vz = rvv_w##OP##_vs_u##VCLASS##EM (vx, y);                                 \
    rvv_se_u##VCLASS##WEM(z, vz);                                              \
  }

RVV_WINT_TEST_ARG(VWADDSUB, add)
RVV_WUINT_TEST_ARG(VWADDSUBU, add)
RVV_WINT_TEST_ARG(VWADDSUB, sub)
RVV_WUINT_TEST_ARG(VWADDSUBU, sub)
RVV_WINT_TEST_ARG(VWADDSUB, mul)
RVV_WUINT_TEST_ARG(VWADDSUBU, mul)
RVV_WINT_TEST_ARG(VWMULSU, mulsu)

RVV_WFLOAT_TEST_ARG(VWADDSUB, add)
RVV_WFLOAT_TEST_ARG(VWADDSUB, sub)
RVV_WFLOAT_TEST_ARG(VWADDSUB, mul)

/* { dg-final { scan-assembler-times "vwadd.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwadd.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwaddu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwsub.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwsub.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmul.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmulu.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwmul.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmulu.vx" 9 } } */
/* { dg-final { scan-assembler-times "vwmulsu.vv" 18 } } */
/* { dg-final { scan-assembler-times "vwmulsu.vx" 18 } } */
/* { dg-final { scan-assembler-times "vfwadd.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwadd.vf" 6 } } */
/* { dg-final { scan-assembler-times "vfwsub.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwsub.vf" 6 } } */
/* { dg-final { scan-assembler-times "vfwmul.vv" 6 } } */
/* { dg-final { scan-assembler-times "vfwmul.vf" 6 } } */
