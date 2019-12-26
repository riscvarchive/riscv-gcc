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
    v##VCLASS##EM##_t vx, vy, vz;                                            \
    vbool##MLEN##_t mask;                                                    \
    mask = rvv_set_bool##MLEN ();                                             \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    rvv_sse_##VCLASS##EM##_mask(x, stride, mask, vz);                          \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z) {                      \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    mask = rvv_set_bool##MLEN ();                                             \
    vx = rvv_le_int##EM(x);                                               \
    rvv_ss##NTYPE_LETTER##_int##EM##_mask(y, stride, mask, vx);                        \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z) {                  \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    mask = rvv_set_bool##MLEN ();                                             \
    vx = rvv_le_uint##EM(x);                                              \
    rvv_ss##NTYPE_LETTER##_uint##EM##_mask(y, stride, mask, vx);                       \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vsse.v" 44 } } */
/* { dg-final { scan-assembler-times "vssb.v" 24 } } */
/* { dg-final { scan-assembler-times "vssh.v" 16 } } */
/* { dg-final { scan-assembler-times "vssw.v" 8 } } */
