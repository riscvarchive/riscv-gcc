/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

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
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    vstore_##VCLASS##EM##_mask(x, mask, vz);                                   \
  }

#define VUSSTORE(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vstore##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,          \
                               NSTYPE *y, STYPE z) {                      \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    mask = vset_b##MLEN ();                                        \
    vx = vload_i##EM(x);                                               \
    vstore##NTYPE_LETTER##_i##EM##_mask(y, mask, vx);                    \
  }                                                                       \
  void vustore##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,      \
                                u##NSTYPE *y, STYPE z) {                  \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    mask = vset_b##MLEN ();                                        \
    vx = vload_u##EM(x);                                              \
    vstore##NTYPE_LETTER##_u##EM##_mask(y, mask, vx);                   \
  }

RVV_INT_LOAD_TEST(VUSSTORE)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vse.v\t" 44 } } */
/* { dg-final { scan-assembler-times "vsb.v" 32 } } */
/* { dg-final { scan-assembler-times "vsh.v" 24 } } */
/* { dg-final { scan-assembler-times "vsw.v" 16 } } */
