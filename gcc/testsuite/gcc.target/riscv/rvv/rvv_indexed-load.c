/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

#define VSLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN, SEW, IEM, ISEW)       \
  void vsloadstore##ISEW##_##VCLASS##EM(size_t n, long stride, STYPE *x,    \
                               STYPE *y, STYPE z, uint##ISEW##_t *index) {  \
    v##VCLASST##EM##_t vx, vy, vz;                                          \
    vuint##IEM##_t vindex;                                                  \
    vbool##MLEN##_t mask;                                                   \
    vindex = VULOAD(ISEW, IEM, index);                                           \
    vx = vlxe##i##ISEW##_v_##VCLASS##EM(x, vindex);                            \
    vy = VLOAD(VCLASS, SEW, EM, y);                                             \
    vz = vx + vy;                                                           \
    VSTORE(VCLASS, SEW, EM, x, vz);                                             \
  }

RVV_INT_INDEX_TEST(VSLOADSTORE)
RVV_UINT_INDEX_TEST(VSLOADSTORE)
RVV_FLOAT_INDEX_TEST(VSLOADSTORE)

/* { dg-final { scan-assembler-times "vlxei8.v" 20 } } */
/* { dg-final { scan-assembler-times "vlxei16.v" 33 } } */
/* { dg-final { scan-assembler-times "vlxei32.v" 34 } } */
/* { dg-final { scan-assembler-times "vlxei64.v" 29 } } */
