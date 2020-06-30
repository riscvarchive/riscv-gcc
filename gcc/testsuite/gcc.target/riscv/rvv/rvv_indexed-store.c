/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VSLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, IEM, ISEW)             \
  void vsloadstore##ISEW##VCLASS##EM(size_t n, long stride, STYPE *x,             \
                                     STYPE *y, STYPE z, uint##ISEW##_t *index) {  \
    v##VCLASST##EM##_t vx, vy, vz;                                                \
    vuint##IEM##_t vindex;                                                        \
    vbool##MLEN##_t mask;                                                         \
    vindex = VULOAD(ISEW, IEM, index);                                                 \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                   \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                   \
    vz = vx + vy;                                                                 \
    vsxe##i##ISEW##_v_##VCLASS##EM(x, vindex, vz);                                   \
  }									          \
  void vsuloadstore##ISEW##VCLASS##EM(size_t n, long stride, STYPE *x,            \
                                      STYPE *y, STYPE z, uint##ISEW##_t *index) { \
    v##VCLASST##EM##_t vx, vy, vz;                                                \
    vuint##IEM##_t vindex;                                                        \
    vbool##MLEN##_t mask;                                                         \
    vindex = VULOAD(ISEW, IEM, index);                                                 \
    vx = VLOAD(VCLASS, SEW, EM, x);                                                   \
    vy = VLOAD(VCLASS, SEW, EM, y);                                                   \
    vz = vx + vy;                                                                 \
    vsuxe##i##ISEW##_v_##VCLASS##EM(x, vindex, vz);                                  \
  }

RVV_INT_INDEX_TEST(VSLOADSTORE)
RVV_UINT_INDEX_TEST(VSLOADSTORE)
RVV_FLOAT_INDEX_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vsxei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vsxei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vsxei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vsxei64.v" 29 } } */

/* { dg-final { scan-assembler-times "vsuxei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vsuxei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vsuxei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vsuxei64.v" 29 } } */
