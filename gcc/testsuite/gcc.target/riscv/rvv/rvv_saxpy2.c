/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>

void saxpy_2(size_t n, const float a, const float *x, float *y) {
  size_t l;

  vfloat32m8_t vx, vy;

  for (; (l = vsetvl_e32m8(n)) > 0; n -= l) {
    vx = vle32_v_f32m8(x);
    x += l;
    vy = vle32_v_f32m8(y);
    // vfmsac.vv
    vy = a * vx - vy;
    vse32_v_f32m8(y, vy);
    y += l;
  }
}

/* { dg-final { scan-assembler-times "vsetvli\ta\[0-9\],a\[0-9\],e32,m8" 2 } } */
/* { dg-final { scan-assembler-times "vle32.v" 2 } } */
/* { dg-final { scan-assembler "vsetvli\tx0,x0,e32,m8"} } */
/* { dg-final { scan-assembler "vf(?:msac|msub).vv" } } */
/* { dg-final { scan-assembler "vse32.v" } } */
