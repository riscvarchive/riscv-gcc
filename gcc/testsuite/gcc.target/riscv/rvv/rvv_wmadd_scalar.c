/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>

void wsaxpy(size_t n, const float16_t a, const float16_t *x, float *y) {
  size_t l;

  vfloat16m4_t vx;
  vfloat32m8_t vy;

  for (; (l = vsetvl_e16m4(n)) > 0; n -= l) {
    vx = vle16_v_f16m4(x, l); /* setvl x0, x0, e16, m4; vlde.v vx, (xx) */
    x += l;
    vy = vle32_v_f32m8(y, l); /* setvl x0, x0, e32, m8; vlde.v vy, (xy) */
    vy = vfwmacc_vf_f32m8(vy, a, vx, l);
    vse32_v_f32m8(y, vy, l); /* setvl x0, x0, e32, m8; vste.v vy, (xy) */
    y += l;
  }
}

/* { dg-final { scan-assembler-times "vsetvli\ta\[0-9\],a\[0-9\],e16,m4" 4} } */
/* { dg-final { scan-assembler "vle16.v" } } */
/* { dg-final { scan-assembler "vle32.v" } } */
/* { dg-final { scan-assembler-times "vsetvli\ta\[0-9\],a\[0-9\],e32,m8" 2} } */
/* { dg-final { scan-assembler "vfwmacc.vf" } } */
/* { dg-final { scan-assembler "vse32.v" } } */
