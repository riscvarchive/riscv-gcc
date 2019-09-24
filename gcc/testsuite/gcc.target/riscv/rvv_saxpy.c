/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>

void saxpy(size_t n, const float a, const float *x, float *y) {
  size_t l;

  rvvfloat32m8_t vx, vy;

  for (; (l = rvvsetvl32m8(n)) > 0; n -= l) {
    vx = rvvldfloat32m8(x);
    x += l;
    vy = rvvldfloat32m8(y);
    // vfmacc
    vy = a * vx + vy;
    rvvstfloat32m8(y, vy);
    y += l;
  }
}

/* { dg-final { scan-assembler-times "vsetvli\ta\[0-9\],a\[0-9\],e32,m8" 2 } } */
/* { dg-final { scan-assembler-times "vle.v" 2 } } */
/* { dg-final { scan-assembler "vsetvli\tx0,x0,e32,m8"} } */
/* { dg-final { scan-assembler "vfmacc.vv" } } */
/* { dg-final { scan-assembler "vse.v" } } */
