/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)                                   \
  void vsloadstore##VCLASS##EM(size_t n, long stride, STYPE *x,                \
                               STYPE *y, STYPE z) {                            \
    v##VCLASST##EM##_t vx, vy, vz;                                           \
    vbool##MLEN##_t mask;                                                   \
    mask = MSET (MLEN);                                             \
    vx = VLOAD(VCLASS, SEW, EM, x);                                               \
    vy = vle##SEW##ff_v_##VCLASS##EM##_m(mask, vx, y);                            \
    vz = vx + vy;                                                              \
    VSTORE(VCLASS, SEW, EM, x, vz);                                                \
  }

RVV_INT_TEST(VSLOADSTORE)
RVV_UINT_TEST(VSLOADSTORE)
RVV_FLOAT_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vle8ff.v" 8 } } */
/* { dg-final { scan-assembler-times "vle16ff.v" 12 } } */
/* { dg-final { scan-assembler-times "vle32ff.v" 12 } } */
/* { dg-final { scan-assembler-times "vle64ff.v" 12 } } */
