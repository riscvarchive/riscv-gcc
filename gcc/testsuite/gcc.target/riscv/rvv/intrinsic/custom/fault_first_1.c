/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "riscv_vector.h"

vbool2_t foo (const signed char* a, size_t new_vl, size_t vl) {
  vint8m4_t vec_src1 = vle8ff_v_i8m4(a, &new_vl, vl);
  vbool2_t mask1 = vmseq_vx_i8m4_b2(vec_src1, 0, new_vl);
  mask1 = vmxor_mm_b2 (mask1, mask1, new_vl);
  return mask1;
}

/* { dg-final { scan-assembler-times {vsetvli} 1 } } */
/* { dg-final { scan-assembler-not {csrr} } } */