/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>

void wsaxpy(size_t n, const float16_t a, const float16_t *x, float *y) {
  size_t l;

  vfloat16m4_t vx;
  vfloat32m8_t vy;

  for (; (l = vsetvl_16m4(n)) > 0; n -= l) {
    vx = vload_float16m4(x); /* setvl x0, x0, e16, m4; vlde.v vx, (xx) */
    x += l;
    vy = vload_float32m8(y); /* setvl x0, x0, e32, m8; vlde.v vy, (xy) */
    vy = vwmadd_vs_float16m4(vx, a, vy);
    vstore_float32m8(y, vy); /* setvl x0, x0, e32, m8; vste.v vy, (xy) */
    y += l;
  }
}

/* { dg-final { scan-assembler-times "vsetvli\tx0,x0,e16,m4" 2} } */
/* { dg-final { scan-assembler-times "vle.v" 2 } } */
/* { dg-final { scan-assembler "vsetvli\tx0,x0,e32,m8"} } */
/* { dg-final { scan-assembler "vfwmacc.vf" } } */
/* { dg-final { scan-assembler "vse.v" } } */
/* { dg-final { scan-assembler "vsetvli\ta\[0-9\],a\[0-9\],e16,m4"} } */
