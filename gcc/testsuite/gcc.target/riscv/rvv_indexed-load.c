/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN, SEW)                              \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z, uint##SEW##_t *index) {           \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vuint##EM##_t vindex;                                              \
    vbool##MLEN##_t mask;                                                   \
    vindex = vload_u##EM(index);                                      \
    vx = vloadx_##VCLASS##EM(x, vindex);                                      \
    vy = vload_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    vstore_##VCLASS##EM(x, vz);                                                \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z, u##STYPE *index) {     \
    vint##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                              \
    vuint##EM##_t vindex;                                         \
    vindex = vload_u##EM(index);                                 \
    vx = vloadx##NTYPE_LETTER##_i##EM(y, vindex);                       \
    vstore_i##EM(x, vx);                                                \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z, u##STYPE *index) { \
    vuint##EM##_t vx, vy, vz;                                          \
    vbool##MLEN##_t mask;                                              \
    vuint##EM##_t vindex;                                         \
    vindex = vload_u##EM(index);                                 \
    vx = vloadx##NTYPE_LETTER##_u##EM(y, vindex);                      \
    vstore_u##EM(x, vx);                                               \
  }



RVV_INT_LOAD_TEST(VUSLOAD)

RVV_SEW_INT_TEST(VSLOADSTORE)
RVV_SEW_UINT_TEST(VSLOADSTORE)
RVV_SEW_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vlxe.v" 44 } } */
/* { dg-final { scan-assembler-times "vlxb.v" 16 } } */
/* { dg-final { scan-assembler-times "vlxbu.v" 16 } } */
/* { dg-final { scan-assembler-times "vlxh.v" 12 } } */
/* { dg-final { scan-assembler-times "vlxhu.v" 12 } } */
/* { dg-final { scan-assembler-times "vlxw.v" 8 } } */
/* { dg-final { scan-assembler-times "vlxwu.v" 8 } } */
