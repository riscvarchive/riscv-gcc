/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VPOPC(STYPE, VCLASS, EM, MLEN)                                         \
  long vpopc##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                    \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t mask1;                                                   \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    rv = rvv_popc_m_bool##MLEN(mask1);                                         \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {     \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask1, mask2;                                            \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    rv = rvv_popc_m_bool##MLEN##_mask(mask1, mask2);                           \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask_opt(size_t n, STYPE *x, STYPE *y, STYPE *z) { \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vz = rvv_le_##VCLASS##EM(z);                                                 \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    /* Combine & and popc into masked popc  */                                 \
    mask3 = mask1 & mask2;                                                     \
    rv = rvv_popc_m_bool##MLEN(mask3);                                         \
    return rv;                                                                 \
  }

#define VFIRST(STYPE, VCLASS, EM, MLEN)                                        \
  long vfirst##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                   \
    rvv_##VCLASS##EM##_t vx, vy;                                               \
    rvv_bool##MLEN##_t mask1;                                                  \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    rv = rvv_first_m_bool##MLEN(mask1);                                        \
    return rv;                                                                 \
  }                                                                            \
  long vfirst##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {    \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask1, mask2;                                           \
    long rv;                                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    rv = rvv_first_m_bool##MLEN##_mask(mask1, mask2);                          \
    return rv;                                                                 \
  }                                                                            \

#define VIOTA(STYPE, VCLASS, EM, MLEN)                                         \
  void viota##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                    \
    rvv_##VCLASS##EM##_t vx, vy;                                               \
    rvv_bool##MLEN##_t mask1;                                                  \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    vy = rvv_iota_m_##VCLASS##EM (mask1);                                      \
    rvv_se_##VCLASS##EM(y, vy);                                                \
  }                                                                            \
  void viota##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {    \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask1, mask2;                                           \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = rvv_le_##VCLASS##EM(z);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    mask2 = rvv_slt_vv_##VCLASS##EM(vx, vz);                                   \
    vy = rvv_iota_m_##VCLASS##EM##_mask(mask1, mask2);                         \
    rvv_se_##VCLASS##EM(y, vy);                                                \
  }                                                                            \

#define VID(STYPE, VCLASS, EM, MLEN)                                           \
  void vid##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                      \
    rvv_##VCLASS##EM##_t vy;                                                   \
    vy = rvv_id_##EM ();                                                       \
    rvv_se_##VCLASS##EM(y, vy);                                                \
  }                                                                            \
  void vid##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {       \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask1, mask2;                                           \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    mask1 = rvv_slt_vv_##VCLASS##EM(vx, vy);                                   \
    vy = rvv_id_##EM##_mask(mask1);                                            \
    rvv_se_##VCLASS##EM(y, vy);                                                \
  }                                                                            \


RVV_INT_TEST(VPOPC)
RVV_INT_TEST(VFIRST)
RVV_UINT_TEST(VIOTA)
RVV_UINT_TEST(VID)

/* { dg-final { scan-assembler-times "vpopc.m" 48 } } */
/* { dg-final { scan-assembler-not "vmand" } } */
/* { dg-final { scan-assembler-times "vfirst.m" 32 } } */
/* { dg-final { scan-assembler-times "vid.v" 32 } } */
