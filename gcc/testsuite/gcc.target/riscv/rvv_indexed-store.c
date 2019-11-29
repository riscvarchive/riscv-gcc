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
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_uint##EM##_t vindex;                                              \
    rvv_bool##MLEN##_t mask;                                                    \
    vindex = rvv_le_uint##EM(index);                                      \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    rvv_sxe_##VCLASS##EM(x, vindex, vz);                                       \
  }									\
  void vsuloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,               \
                               STYPE *y, STYPE z, uint##SEW##_t *index) {       \
    rvv_##VCLASS##EM##_t vx, vy, vz;                                            \
    rvv_uint##EM##_t vindex;                                              \
    rvv_bool##MLEN##_t mask;                                                    \
    vindex = rvv_le_uint##EM(index);                                      \
    vx = rvv_le_##VCLASS##EM(x);                                               \
    vy = rvv_le_##VCLASS##EM(y);                                               \
    vz = vx + vy;                                                              \
    rvv_suxe_##VCLASS##EM(x, vindex, vz);                                      \
  }

#define VUSLOAD(EM, MLEN, STYPE, NSTYPE, NTYPE_LETTER)			  \
  void vload##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z, u##STYPE *index) {                      \
    rvv_int##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask;                                              \
    rvv_uint##EM##_t vindex;                                         \
    vindex = rvv_le_uint##EM(index);                                 \
    vx = rvv_le_int##EM(x);                                               \
    rvv_sx##NTYPE_LETTER##_int##EM(y, vindex, vx);                        \
  }                                                                       \
  void vuload##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z, u##STYPE *index) {                  \
    rvv_uint##EM##_t vx, vy, vz;                                          \
    rvv_bool##MLEN##_t mask;                                              \
    rvv_uint##EM##_t vindex;                                         \
    vindex = rvv_le_uint##EM(index);                                 \
    vx = rvv_le_uint##EM(x);                                              \
    rvv_sx##NTYPE_LETTER##_uint##EM(y, vindex, vx);                       \
  }									\
  void vloadu##EM##NTYPE_LETTER(size_t n, long stride, STYPE *x,           \
                               NSTYPE *y, STYPE z, u##STYPE *index) {     \
    rvv_int##EM##_t vx, vy, vz;                                           \
    rvv_bool##MLEN##_t mask;                                              \
    rvv_uint##EM##_t vindex;                                         \
    vindex = rvv_le_uint##EM(index);                                 \
    vx = rvv_le_int##EM(x);                                               \
    rvv_sux##NTYPE_LETTER##_int##EM(y, vindex, vx);                        \
  }                                                                       \
  void vuloadu##EM##NTYPE_LETTER(size_t n, long stride, u##STYPE *x,       \
                                u##NSTYPE *y, STYPE z, u##STYPE *index) {                  \
    rvv_uint##EM##_t vx, vy, vz;                                          \
    rvv_bool##MLEN##_t mask;                                              \
    rvv_uint##EM##_t vindex;                                         \
    vindex = rvv_le_uint##EM(index);                                 \
    vx = rvv_le_uint##EM(x);                                              \
    rvv_sux##NTYPE_LETTER##_uint##EM(y, vindex, vx);                       \
  }

RVV_INT_LOAD_TEST(VUSLOAD)

RVV_SEW_INT_TEST(VSLOADSTORE)
RVV_SEW_UINT_TEST(VSLOADSTORE)
RVV_SEW_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vsxe.v" 44 } } */
/* { dg-final { scan-assembler-times "vsxb.v" 24 } } */
/* { dg-final { scan-assembler-times "vsxh.v" 16 } } */
/* { dg-final { scan-assembler-times "vsxw.v" 8 } } */

/* { dg-final { scan-assembler-times "vsuxe.v" 44 } } */
/* { dg-final { scan-assembler-times "vsuxb.v" 24 } } */
/* { dg-final { scan-assembler-times "vsuxh.v" 16 } } */
/* { dg-final { scan-assembler-times "vsuxw.v" 8 } } */
