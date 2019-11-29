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
    rvv_##VCLASS##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask;                                                   \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    rvv_se_##VCLASS##EM(x, vz);                                                \
  }

#define VUSSTORE(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vstore##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,          \
                               NSTYPE *y, STYPE z) {                      \
    rvv_int##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask;                                              \
    vx = rvv_le_int##EM(x);                                               \
    rvv_s##NTYPE_LETTER##_int##EM(y, vx);                                 \
  }                                                                       \
  void vustore##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,      \
                                u##NSTYPE *y, STYPE z) {                  \
    rvv_uint##EM##_t vx, vy, vz;                                          \
    rvv_bool##MLEN##_t mask;                                              \
    vx = rvv_le_uint##EM(x);                                              \
    rvv_s##NTYPE_LETTER##_uint##EM(y, vx);                                \
  }



RVV_INT_LOAD_TEST(VUSSTORE)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vse.v\t" 44 } } */
/* { dg-final { scan-assembler-times "vsb.v" 24 } } */
/* { dg-final { scan-assembler-times "vsh.v" 16 } } */
/* { dg-final { scan-assembler-times "vsw.v" 8 } } */
