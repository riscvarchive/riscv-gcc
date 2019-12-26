/* { dg-do compile } */
/* { dg-options "-O2 -march=rv64gcv -mabi=lp64d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN)                                   \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z) {                            \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_b##MLEN ();                                             \
    vy = vload_##VCLASS##EM(y);                                               \
    vx = vload_##VCLASS##EM##_mask(mask, vy, x);                              \
    vz = vx + vy;                                                              \
    vstore_##VCLASS##EM(x, vz);                                                \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z) {                      \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    mask = vset_b##MLEN ();                                        \
    vx = vload_i##EM (x);                                              \
    vx = vload##NTYPE_LETTER##_i##EM##_mask(mask, vx, y);               \
    vstore_i##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z) {                  \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    mask = vset_b##MLEN ();                                        \
    vx = vload_u##EM (x);                                              \
    vx = vload##NTYPE_LETTER##_u##EM##_mask(mask, vx, y);              \
    vstore_u##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vle.v" 160 } } */
/* { dg-final { scan-assembler-times "vlb.v" 16 } } */
/* { dg-final { scan-assembler-times "vlbu.v" 16 } } */
/* { dg-final { scan-assembler-times "vlh.v" 12 } } */
/* { dg-final { scan-assembler-times "vlhu.v" 12 } } */
/* { dg-final { scan-assembler-times "vlw.v" 8 } } */
/* { dg-final { scan-assembler-times "vlwu.v" 8 } } */
