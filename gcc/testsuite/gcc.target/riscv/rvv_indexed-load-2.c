/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASS, EM, MLEN, SEW)                              \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z, uint##SEW##_t *index) {           \
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vuint##EM##_t vindex;                                              \
    vbool##MLEN##_t mask;                                                   \
    mask = vset_bool##MLEN ();                                             \
    vindex = vle_uint##EM(index);                                      \
    vy = vle_##VCLASS##EM(y);                                               \
    vx = vlxe_##VCLASS##EM##_mask(mask, vy, x, vindex);                     \
    vz = vx + vy;                                                              \
    vse_##VCLASS##EM(x, vz);                                                \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z, u##STYPE *index) {     \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    vuint##EM##_t vindex;                                         \
    mask = vset_bool##MLEN ();                                             \
    vindex = vle_uint##EM(index);                                 \
    vx = vle_int##EM (x);                                              \
    vx = vlx##NTYPE_LETTER##_int##EM##_mask(mask, vx, y, vindex);      \
    vse_int##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z, u##STYPE *index) { \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    mask = vset_bool##MLEN ();                                             \
    vuint##EM##_t vindex;                                         \
    vindex = vle_uint##EM(index);                                 \
    vx = vle_uint##EM (x);                                              \
    vx = vlx##NTYPE_LETTER##_uint##EM##_mask(mask, vx, y, vindex);     \
    vse_uint##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_SEW_INT_TEST(VSLOADSTORE)
RVV_SEW_UINT_TEST(VSLOADSTORE)
RVV_SEW_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vlxe.v" 44 } } */
/* { dg-final { scan-assembler-times "vlxb.v" 12 } } */
/* { dg-final { scan-assembler-times "vlxbu.v" 12 } } */
/* { dg-final { scan-assembler-times "vlxh.v" 8 } } */
/* { dg-final { scan-assembler-times "vlxhu.v" 8 } } */
/* { dg-final { scan-assembler-times "vlxw.v" 4 } } */
/* { dg-final { scan-assembler-times "vlxwu.v" 4 } } */
