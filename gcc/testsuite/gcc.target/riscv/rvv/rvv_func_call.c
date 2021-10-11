/* { dg-do compile } */
/* { dg-skip-if "test rvv" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-additional-options "-O0 -g" } */

#include <riscv_vector.h>

vfloat32m8_t foo(vfloat32m8_t op0, const float a, vfloat32m8_t op1, word_type vl) {
  return vfmacc_vf_f32m8(op0, a, op1, vl);
}

void saxpy_vec(size_t n, const float a, const float *x, float *y) {
  size_t l;
  vfloat32m8_t vx, vy;
  for (; (l = vsetvl_e32m8(n)) > 0; n -= l) {
    vx = vle32_v_f32m8(x, l);
    x += l;
    vy = vle32_v_f32m8(y, l);
    foo(vx, a, vy, l);
    vy = vfmacc_vf_f32m8(vy, a, vx, l);
    vse32_v_f32m8 (y, vy, l);
    y += l;
  }
}
