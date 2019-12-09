/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

void uninit(int8_t *x, int16_t *z, size_t n) {
  size_t vl;
  rvv_int16m1_t v0, v1, v2;
  rvv_bool16_t mask;
  for (; vl = rvv_setvl_16m1(n);) {
    v0 = rvv_lb_int16m1(x);
    v1 = rvv_add_vv_int16m1 (v0, v2);
    *(rvv_int16m1_t *)z = v1;
    z += vl;
    x += vl;
    n -= vl;
  }
}
