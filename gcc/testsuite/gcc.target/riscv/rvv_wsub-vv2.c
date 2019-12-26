/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWSUB(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                            \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {            \
    v##VCLASS##EM##_t vx, vy;                                               \
    v##VCLASS##WEM##_t vz;                                                  \
    vbool##MLEN##_t mask;                                                   \
    vx = vle_##VCLASS##EM(x);                                               \
    vy = vle_##VCLASS##EM(y);                                               \
    vz = vle_##VCLASS##WEM(z);                                              \
    mask = vset_bool##MLEN ();                                             \
    vz = vwsub_vv_##VCLASS##EM##_mask (mask, vz, vx, vy);                   \
    vse_##VCLASS##WEM(z, vz);                                               \
  }

#define VWSUBU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                           \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y,                        \
                          WSTYPE *z) {                                         \
    v##VCLASS##EM##_t vx, vy;                                              \
    v##VCLASS##WEM##_t vz;                                                 \
    vbool##MLEN##_t mask;                                                   \
    vx = vle_##VCLASS##EM(x);                                              \
    vy = vle_##VCLASS##EM(y);                                              \
    vz = vle_##VCLASS##WEM(z);                                             \
    mask = vset_bool##MLEN ();                                             \
    vz = vwsub_vv_##VCLASS##EM##_mask (mask, vz, vx, vy);                 \
    vse_##VCLASS##WEM(z, vz);                                              \
  }

RVV_WINT_TEST(VWSUB)
RVV_WUINT_TEST(VWSUBU)

/* { dg-final { scan-assembler-times "vwsub.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.vv" 9 } } */
