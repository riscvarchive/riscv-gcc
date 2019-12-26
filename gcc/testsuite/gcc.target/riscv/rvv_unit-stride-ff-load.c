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
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = vload_##VCLASS##EM(x);                                               \
    vy = vloadff_##VCLASS##EM(y);                                             \
    vz = vx + vy;                                                              \
    vstore_##VCLASS##EM(x, vz);                                                \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z) {                      \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    vx = vload##NTYPE_LETTER##ff_int##EM(y);                              \
    vstore_int##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z) {                  \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    vx = vload##NTYPE_LETTER##ff_uint##EM(y);                             \
    vstore_uint##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vleff.v" 44 } } */
/* { dg-final { scan-assembler-times "vlbff.v" 16 } } */
/* { dg-final { scan-assembler-times "vlbuff.v" 16 } } */
/* { dg-final { scan-assembler-times "vlhff.v" 12 } } */
/* { dg-final { scan-assembler-times "vlhuff.v" 12 } } */
/* { dg-final { scan-assembler-times "vlwff.v" 8 } } */
/* { dg-final { scan-assembler-times "vlwuff.v" 8 } } */
