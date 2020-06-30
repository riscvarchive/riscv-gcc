/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

void uninit(int16_t *x, int16_t *z, size_t n) {
  size_t vl;
  vint16m1_t v0, v1, v2;
  vbool16_t mask;
  for (; vl = vsetvl_e16m1(n); n -= vl) {
    v0 = vle16_v_i16m1(x);
    v1 = vadd_vv_i16m1 (v0, v2);
    *(vint16m1_t *)z = v1;
    z += vl;
    x += vl;
  }
}
