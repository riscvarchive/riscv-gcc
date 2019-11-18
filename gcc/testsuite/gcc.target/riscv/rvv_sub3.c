/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSUB(STYPE, VCLASS, EM, MLEN)                                          \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t mask;                                                    \
    mask = rvv_mset_bool##MLEN ();                                             \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vy = rvvsub##VCLASS##EM##_mask (mask, vx, vx, vy);                         \
    vy = rvvsub##VCLASS##EM##_scalar_mask (mask, vx, vy, z);                   \
    rvv_se_##VCLASS##EM(y, vy);                                                  \
    vx = rvvsub##VCLASS##EM##_scalar_mask (mask, vx, vx, 1);                   \
    rvv_se_##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate sub.  */
#define VSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                   \
  void vsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {               \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t mask;                                                    \
    mask = rvv_mset_bool##MLEN ();                                             \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vy = rvv_sub_vv_##VCLASS##EM##_mask (mask, vx, vx, vy);                    \
    vy = rvv_sub_vs_##VCLASS##EM##_mask (mask, vx, vy, z);                     \
    rvv_se_##VCLASS##EM(y, vy);                                                  \
  }
/* Same for reverse subtract.  */
#define VRSUB(STYPE, VCLASS, EM, MLEN)                                         \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    rvv_bool##MLEN##_t mask;                                                    \
    mask = rvv_mset_bool##MLEN ();                                             \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vy = rvvrsub##VCLASS##EM##_scalar_mask (mask, vx, vy, z);                  \
    rvv_se_##VCLASS##EM(y, vy);                                                  \
    vx = rvvrsub##VCLASS##EM##_scalar_mask (mask, vx, vx, 1);                  \
    rvv_se_##VCLASS##EM(x, vx);                                                  \
  }
/* Same as above without the immediate for reverse subtract.  */
#define VRSUB_NO_IMM(STYPE, VCLASS, EM, MLEN)                                  \
  void vrsub##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {              \
    rvv_bool##MLEN##_t mask;                                                    \
    mask = rvv_mset_bool##MLEN ();                                             \
    rvv_##VCLASS##EM##_t vx, vy;                                                \
    vx = rvv_le_##VCLASS##EM(x);                                                 \
    vy = rvv_le_##VCLASS##EM(y);                                                 \
    vy = rvv_rsub_vs_##VCLASS##EM##_mask (mask, vx, vy, z);                    \
    rvv_se_##VCLASS##EM(y, vy);                                                  \
  }

/*
XXX: maksed version for sub/rsub not implement yet.
RVV_INT_TEST(VSUB)
RVV_UINT_TEST(VSUB)
RVV_INT_TEST(VRSUB)
RVV_UINT_TEST(VRSUB)
*/
RVV_FLOAT_TEST(VSUB_NO_IMM)
RVV_FLOAT_TEST(VRSUB_NO_IMM)

/* { dg-final { scan-assembler-times "vsub.vv" 0 } } */
/* { dg-final { scan-assembler-times "vsub.vx" 0 } } */
/* { dg-final { scan-assembler-times "vadd.vi" 0 } } */
/* { dg-final { scan-assembler-times "vfsub.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfsub.vf" 12 } } */
/* { dg-final { scan-assembler-times "vrsub.vx" 0 } } */
/* { dg-final { scan-assembler-times "vrsub.vi" 0 } } */
