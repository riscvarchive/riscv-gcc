/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VPOPC(STYPE, VCLASS, EM, MLEN)                                         \
  long vpopc##VCLASS##EM##2(size_t n, STYPE *x, STYPE *y) {                    \
    rvv##VCLASS##EM##_t vx, vy;                                                \
    rvvbool##MLEN##_t mask1;                                                   \
    long rv;                                                                   \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    rv = rvvpopcbool##MLEN(mask1);                                             \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask(size_t n, STYPE *x, STYPE *y, STYPE *z) {     \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask1, mask2;                                            \
    long rv;                                                                   \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvld##VCLASS##EM(z);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    mask2 = rvvslt##VCLASS##EM(vx, vz);                                        \
    rv = rvvpopcbool##MLEN##_mask(mask1, mask2);                               \
    return rv;                                                                 \
  }                                                                            \
  long vpopc##VCLASS##EM##2_mask_opt(size_t n, STYPE *x, STYPE *y, STYPE *z) { \
    rvv##VCLASS##EM##_t vx, vy, vz;                                            \
    rvvbool##MLEN##_t mask1, mask2, mask3;                                     \
    long rv;                                                                   \
    vx = rvvld##VCLASS##EM(x);                                                 \
    vy = rvvld##VCLASS##EM(y);                                                 \
    vz = rvvld##VCLASS##EM(z);                                                 \
    mask1 = rvvslt##VCLASS##EM(vx, vy);                                        \
    mask2 = rvvslt##VCLASS##EM(vx, vz);                                        \
    /* Combine & and popc into masked popc  */                                 \
    mask3 = mask1 & mask2;                                                     \
    rv = rvvpopcbool##MLEN(mask3);                                             \
    return rv;                                                                 \
  }



RVV_INT_TEST(VPOPC)

/* { dg-final { scan-assembler-times "vpopc.m" 48 } } */
/* { dg-final { scan-assembler-not "vmand" } } */
