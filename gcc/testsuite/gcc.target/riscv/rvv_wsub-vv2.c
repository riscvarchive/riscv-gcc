/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VWSUB(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                            \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y, WSTYPE *z) {            \
    rvv_##VCLASS##EM##_t vx, vy;                                               \
    rvv_##VCLASS##WEM##_t vz;                                                  \
    rvv_bool##MLEN##_t mask;                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##WEM(z);                                              \
    mask = rvv_mset_bool##MLEN ();                                             \
    vz = rvv_wsub_vv_##VCLASS##EM##_mask (mask, vz, vx, vy);                   \
    rvv_se_##VCLASS##WEM(z, vz);                                               \
  }

#define VWSUBU(STYPE, VCLASS, EM, MLEN, WSTYPE, WEM)                           \
  void vwadd##VCLASS##EM(size_t n, STYPE *x, STYPE *y,                        \
                          WSTYPE *z) {                                         \
    rvv_##VCLASS##EM##_t vx, vy;                                              \
    rvv_##VCLASS##WEM##_t vz;                                                 \
    rvv_bool##MLEN##_t mask;                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                              \
    vy = rvv_le_##VCLASS##EM(y);                                              \
    vz = rvv_le_##VCLASS##WEM(z);                                             \
    mask = rvv_mset_bool##MLEN ();                                             \
    vz = rvv_wsubu_vv_##VCLASS##EM##_mask (mask, vz, vx, vy);                 \
    rvv_se_##VCLASS##WEM(z, vz);                                              \
  }

RVV_WINT_TEST(VWSUB)
RVV_WUINT_TEST(VWSUBU)

/* { dg-final { scan-assembler-times "vwsub.vv" 9 } } */
/* { dg-final { scan-assembler-times "vwsubu.vv" 9 } } */
