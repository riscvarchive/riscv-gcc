/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VPOPC(STYPE, VCLASST, VCLASS, EM, MLEN)                                         \
  long vpopc##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                    \
    v##VCLASST##EM##_t vx, vy;                                                \
    vbool##MLEN##_t mask1;                                                   \
    long rv;                                                                   \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    rv = vpopc_m_b##MLEN(mask1);                                         \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {     \
    v##VCLASST##EM##_t vx, vy, vz;                                            \
    vbool##MLEN##_t mask1, mask2;                                            \
    long rv;                                                                   \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    vz = vload_##VCLASS##EM(z);                                                 \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM(vx, vz);                                   \
    rv = vpopc_m_b##MLEN##_mask(mask1, mask2);                           \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask_opt(size_t n, STYPE *x, STYPE *y, STYPE *z) { \
    v##VCLASST##EM##_t vx, vy, vz;                                            \
    vbool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = vload_##VCLASS##EM(x);                                                 \
    vy = vload_##VCLASS##EM(y);                                                 \
    vz = vload_##VCLASS##EM(z);                                                 \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM(vx, vz);                                   \
    /* Combine & and popc into masked popc  */                                 \
    mask3 = mask1 & mask2;                                                     \
    rv = vpopc_m_b##MLEN(mask3);                                         \
    return rv;                                                                 \
  }

#define VFIRST(STYPE, VCLASST, VCLASS, EM, MLEN)                                        \
  long vfirst##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                   \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask1;                                                  \
    long rv;                                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    rv = vfirst_m_b##MLEN(mask1);                                        \
    return rv;                                                                 \
  }                                                                            \
  long vfirst##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {    \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2;                                           \
    long rv;                                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM(vx, vz);                                   \
    rv = vfirst_m_b##MLEN##_mask(mask1, mask2);                          \
    return rv;                                                                 \
  }                                                                            \

#define VIOTA(STYPE, VCLASST, VCLASS, EM, MLEN)                                         \
  void viota##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                    \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask1;                                                  \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    vy = viota_m_##EM (mask1);                                              \
    vstore_##VCLASS##EM(y, vy);                                                \
  }                                                                            \
  void viota##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {    \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2;                                           \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vload_##VCLASS##EM(z);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = vsetlt_vv_##VCLASS##EM(vx, vz);                                   \
    vy = viota_m_##EM##_mask(mask1, vx, mask2);				\
    vstore_##VCLASS##EM(y, vy);                                                \
  }                                                                            \

#define VID(STYPE, VCLASST, VCLASS, EM, MLEN)                                           \
  void vid##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                      \
    v##VCLASST##EM##_t vy;                                                   \
    vy = vid_##EM ();                                                       \
    vstore_##VCLASS##EM(y, vy);                                                \
  }                                                                            \
  void vid##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {       \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2;                                           \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    mask1 = vsetlt_vv_##VCLASS##EM(vx, vy);                                   \
    vy = vid_##EM##_mask(mask1, vy);                                        \
    vstore_##VCLASS##EM(y, vy);                                                \
  }                                                                            \


RVV_INT_TEST(VPOPC)
RVV_INT_TEST(VFIRST)
RVV_UINT_TEST(VIOTA)
RVV_UINT_TEST(VID)

/* { dg-final { scan-assembler-times "vpopc.m" 48 } } */
/* { dg-final { scan-assembler-not "vmand" } } */
/* { dg-final { scan-assembler-times "vfirst.m" 32 } } */
/* { dg-final { scan-assembler-times "vid.v" 32 } } */
