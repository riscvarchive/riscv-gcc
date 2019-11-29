/* { dg-do compile } */
/* { dg-options "-O2 -march=rv64gcv -mabi=lp64d" } */

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

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z) {                      \
    rvv_int##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask;                                              \
    vx = rvv_l##NTYPE_LETTER##_int##EM(y);                                \
    rvv_se_int##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z) {                  \
    rvv_uint##EM##_t vx, vy, vz;                                          \
    rvv_bool##MLEN##_t mask;                                              \
    vx = rvv_l##NTYPE_LETTER##_uint##EM(y);                               \
    rvv_se_uint##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vle.v" 88 } } */
/* { dg-final { scan-assembler-times "vlb.v" 12 } } */
/* { dg-final { scan-assembler-times "vlbu.v" 12 } } */
/* { dg-final { scan-assembler-times "vlh.v" 8 } } */
/* { dg-final { scan-assembler-times "vlhu.v" 8 } } */
/* { dg-final { scan-assembler-times "vlw.v" 4 } } */
/* { dg-final { scan-assembler-times "vlwu.v" 4 } } */
