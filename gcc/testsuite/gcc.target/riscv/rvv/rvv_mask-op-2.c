/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VPOPC(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                         \
  long vpopc##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, word_type vl) {                    \
    v##VCLASST##EM##_t vx, vy;                                                \
    vbool##MLEN##_t mask1;                                                   \
    long rv;                                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                 \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                 \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    rv = vpopc_m_b##MLEN(mask1, vl);                                         \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_m(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {     \
    v##VCLASST##EM##_t vx, vy, vz;                                            \
    vbool##MLEN##_t mask1, mask2;                                            \
    long rv;                                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                 \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                 \
    vz = VLOAD(VCLASS, SEW, EM, z);                                                 \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vz, vl);                                   \
    rv = vpopc_m_b##MLEN##_m(mask1, mask2, vl);                           \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_m_opt(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) { \
    v##VCLASST##EM##_t vx, vy, vz;                                            \
    vbool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                 \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                 \
    vz = VLOAD(VCLASS, SEW, EM, z);                                                 \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vz, vl);                                   \
    /* Combine & and popc into masked popc  */                                 \
    mask3 = mask1 & mask2;                                                     \
    rv = vpopc_m_b##MLEN(mask3, vl);                                         \
    return rv;                                                                 \
  }

#define VFIRST(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                        \
  long vfirst##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, word_type vl) {                   \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask1;                                                  \
    long rv;                                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    rv = vfirst_m_b##MLEN(mask1, vl);                                        \
    return rv;                                                                 \
  }                                                                            \
  long vfirst##VCLASS##EM##2_m(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {    \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2;                                           \
    long rv;                                                                   \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    mask2 = vmslt_vv_##VCLASS##EM##_b##MLEN(vx, vz, vl);                                   \
    rv = vfirst_m_b##MLEN##_m(mask1, mask2, vl);                          \
    return rv;                                                                 \
  }                                                                            \

#define VIOTA(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                         \
  void viota##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, word_type vl) {                    \
    v##VCLASST##EM##_t vx, vy;                                               \
    vbool##MLEN##_t mask1;                                                  \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask1 = vmsltu_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                           \
    vy = viota_m_u##EM (mask1, vl);                                              \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \
  void viota##VCLASS##EM##2_m(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {    \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2;                                           \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    vz = VLOAD(VCLASS, SEW, EM, z);                                               \
    mask1 = vmsltu_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    mask2 = vmsltu_vv_##VCLASS##EM##_b##MLEN(vx, vz, vl);                                   \
    vy = viota_m_u##EM##_m(mask1, vx, mask2, vl);				\
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \

#define VID(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                           \
  void vid##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y, word_type vl) {                      \
    v##VCLASST##EM##_t vy;                                                   \
    vy = vid_v_u##EM (vl);                                                       \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \
  void vid##VCLASS##EM##2_m(size_t n, STYPE *x, STYPE *y, STYPE *z, word_type vl) {       \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask1, mask2;                                           \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = VLOAD(VCLASS, SEW, EM, y);                                               \
    mask1 = vmsltu_vv_##VCLASS##EM##_b##MLEN(vx, vy, vl);                                   \
    vy = vid_v_u##EM##_m(mask1, vy, vl);                                        \
    VSTORE(VCLASS, SEW, EM, y, vy);                                                \
  }                                                                            \


RVV_INT_TEST(VPOPC)
RVV_INT_TEST(VFIRST)
RVV_UINT_TEST(VIOTA)
RVV_UINT_TEST(VID)

/* { dg-final { scan-assembler-times "vpopc.m" 48 } } */
/* { dg-final { scan-assembler-times "vfirst.m" 32 } } */
/* { dg-final { scan-assembler-times "vid.v" 32 } } */
