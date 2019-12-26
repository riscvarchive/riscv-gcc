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
    v##VCLASS##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    vx = vloads_##VCLASS##EM(x, stride);                                      \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    vstore_##VCLASS##EM(x, vz);                                                \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z) {                      \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    vx = vloads##NTYPE_LETTER##_int##EM(y, n);                            \
    vstore_int##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z) {                  \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    vx = vloads##NTYPE_LETTER##_uint##EM(y, n);                           \
    vstore_uint##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vlse.v" 44 } } */
/* { dg-final { scan-assembler-times "vlsb.v" 16 } } */
/* { dg-final { scan-assembler-times "vlsbu.v" 16 } } */
/* { dg-final { scan-assembler-times "vlsh.v" 12 } } */
/* { dg-final { scan-assembler-times "vlshu.v" 12 } } */
/* { dg-final { scan-assembler-times "vlsw.v" 8 } } */
/* { dg-final { scan-assembler-times "vlswu.v" 8 } } */

