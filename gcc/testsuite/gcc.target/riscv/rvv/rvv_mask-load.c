/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"

/* Takes the scalar type STYPE, vector class VCLASS (int or float), and
   the e and m value.  */
#define VMLOADSTORE(STYPE, VCLASST, VCLASS, EM, MLEN, STYPEC, SEW)			\
  void vmloadstore##VCLASS##EM(uint8_t *x, uint8_t *y, uint8_t *z, word_type vl) {	\
    vbool##MLEN##_t mask1, mask2, mask3;						\
    mask1 = vlm_v_b##MLEN(x, vl);							\
    mask2 = vlm_v_b##MLEN(y, vl);							\
    mask3 = vmor_mm_b##MLEN(mask1, mask2, vl);						\
    vsm_v_b##MLEN(z, mask3, vl);							\
  }

RVV_INT_TEST(VMLOADSTORE)

/* { dg-final { scan-assembler-times "vlm.v" 44 } } */
/* { dg-final { scan-assembler-times "vsm.v" 22 } } */
