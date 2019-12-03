/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASS, EM, MLEN)                                   \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z) {                            \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_bool##MLEN##_t mask;                                                    \
    mask = rvv_set_bool##MLEN ();                                             \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vx = rvv_lse_##VCLASS##EM##_mask(mask, vy, x, stride);                     \
    vz = vx + vy;                                                              \
    rvv_se_##VCLASS##EM(x, vz);                                                  \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z) {                      \
    rvv_int##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask;                                              \
    mask = rvv_set_bool##MLEN ();                                        \
    vx = rvv_le_int##EM (x);                                              \
    vx = rvv_ls##NTYPE_LETTER##_int##EM##_mask(mask, vx, y, n);           \
    rvv_se_int##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z) {                  \
    rvv_uint##EM##_t vx, vy, vz;                                          \
    rvv_bool##MLEN##_t mask;                                              \
    mask = rvv_set_bool##MLEN ();                                        \
    vx = rvv_le_uint##EM (x);                                             \
    vx = rvv_ls##NTYPE_LETTER##_uint##EM##_mask(mask, vx, y, n);          \
    rvv_se_uint##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vlse.v" 44 } } */
/* { dg-final { scan-assembler-times "vlsb.v" 12 } } */
/* { dg-final { scan-assembler-times "vlsbu.v" 12 } } */
/* { dg-final { scan-assembler-times "vlsh.v" 8 } } */
/* { dg-final { scan-assembler-times "vlshu.v" 8 } } */
/* { dg-final { scan-assembler-times "vlsw.v" 4 } } */
/* { dg-final { scan-assembler-times "vlswu.v" 4 } } */

