/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

void uninit(int8_t *x, int16_t *z, size_t n) {
  size_t vl;
  vint16m1_t v0, v1, v2;
  vbool16_t mask;
  for (; vl = vsetvl_16m1(n); n -= vl) {
    v0 = vload_i16m1((int16_t *)x);
    v1 = vadd_vv_i16m1 (v0, v2);
    *(vint16m1_t *)z = v1;
    z += vl;
    x += vl;
  }
}
