/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>

void saxpy_2(size_t n, const float a, const float *x, float *y) {
  size_t l;

  vfloat32m8_t vx, vy;

  for (; (l = vsetvl_32m8(n)) > 0; n -= l) {
    vx = vload_float32m8(x);
    x += l;
    vy = vload_float32m8(y);
    // vfmsac.vv
    vy = a * vx - vy;
    vstore_float32m8(y, vy);
    y += l;
  }
}

/* { dg-final { scan-assembler-times "vsetvli\ta\[0-9\],a\[0-9\],e32,m8" 2 } } */
/* { dg-final { scan-assembler-times "vle.v" 2 } } */
/* { dg-final { scan-assembler "vsetvli\tx0,x0,e32,m8"} } */
/* { dg-final { scan-assembler "vfmsac.vv" } } */
/* { dg-final { scan-assembler "vse.v" } } */
