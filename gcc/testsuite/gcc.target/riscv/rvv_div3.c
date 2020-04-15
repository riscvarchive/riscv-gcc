/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS for int, and
   the e and m value.  */
#define INT_VDIV(STYPE, VCLASST, VCLASS, EM, MLEN)			\
  void vdiv##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {	\
    v##VCLASST##EM##_t vx, vy;						\
    vbool##MLEN##_t mask;						\
    vx = vload_##VCLASS##EM(x);						\
    vy = vload_##VCLASS##EM(y);						\
    mask = vset_b##MLEN ();						\
    vy = vdiv_vv_##VCLASS##EM##_mask(mask, vy, vx, vy);			\
    vy = vdiv_vs_##VCLASS##EM##_mask(mask, vy, vy, z);			\
    vstore_##VCLASS##EM(y, vy);						\
  }

/* Takes the scalar type STYPE, vector class VCLASS for float, and
   the e and m value.  */
#define FLOAT_VDIV(STYPE, VCLASST, VCLASS, EM, MLEN)			\
  void vfdiv##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {	\
    v##VCLASST##EM##_t vx, vy;						\
    vbool##MLEN##_t mask;						\
    vx = vload_##VCLASS##EM(x);						\
    vy = vload_##VCLASS##EM(y);						\
    mask = vset_b##MLEN ();						\
    vy = vdiv_vv_##VCLASS##EM##_mask(mask, vy, vx, vy);			\
    vy = vdiv_vs_##VCLASS##EM##_mask(mask, vy, vy, z);			\
    vy = vrdiv_vs_##VCLASS##EM##_mask(mask, vy, vy, z);			\
    vstore_##VCLASS##EM(y, vy);						\
  }

RVV_INT_TEST(INT_VDIV)
RVV_UINT_TEST(INT_VDIV)
RVV_FLOAT_TEST(FLOAT_VDIV)

/* { dg-final { scan-assembler-times "vdiv.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vfdiv.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfdiv.vf" 12 } } */
/* { dg-final { scan-assembler-times "vfrdiv.vf" 12 } } */
