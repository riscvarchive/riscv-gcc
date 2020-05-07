/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VDIV(STYPE, VCLASST, VCLASS, EM, MLEN)				\
  void vdiv##VCLASS##EM(size_t n, STYPE *x, STYPE *y, STYPE z) {	\
    v##VCLASST##EM##_t vx, vy;						\
    vx = vload_##VCLASS##EM(x);						\
    vy = vload_##VCLASS##EM(y);						\
    vy = vx / vy;							\
    vy = vy / z;							\
    vstore_##VCLASS##EM(y, vy);						\
  }

RVV_INT_TEST(VDIV)
RVV_UINT_TEST(VDIV)
RVV_FLOAT_TEST(VDIV)

/* { dg-final { scan-assembler-times "vdiv.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdiv.vx" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vv" 16 } } */
/* { dg-final { scan-assembler-times "vdivu.vx" 16 } } */
/* { dg-final { scan-assembler-times "vfdiv.vv" 12 } } */
/* { dg-final { scan-assembler-times "vfdiv.vf" 12 } } */
