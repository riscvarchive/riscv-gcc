/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// https://github.com/riscv/riscv-v-spec/blob/master/vector-examples.adoc
// == Vector Assembly Code Examples

/*
=== Conditional example

----
# (int16) z[i] = ((int8) x[i] < 5) ? (int16) a[i] : (int16) b[i];
#
# Fixed 16b SEW:

loop:
    vsetvli t0, a0, e16  # Use 16b elements.
    vlb.v v0, (a1)          # Get x[i], sign-extended to 16b
      sub a0, a0, t0        # Decrement element count
      add a1, a1, t0        # x[i] Bump pointer
    vmslt.vi v0, v0, 5      # Set mask in v0
      slli t0, t0, 1        # Multiply by 2 bytes
    vlh.v v1, (a2), v0.t    # z[i] = a[i] case
    vmnot.m v0, v0          # Invert v0
      add a2, a2, t0        # a[i] bump pointer
    vlh.v v1, (a3), v0.t    # z[i] = b[i] case
      add a3, a3, t0        # b[i] bump pointer
    vsh.v v1, (a4)          # Store z
      add a4, a4, t0        # b[i] bump pointer
      bnez a0, loop
----
*/

void cond_example(int16_t *x, int16_t *a, int16_t *b, int16_t *z, size_t n) {
  size_t vl;
  vint16m1_t v0, maskedoff, result;
  vbool16_t mask;
  for (; vl = vsetvl_e16m1(n); n -= vl) {
    v0 = vle16_v_i16m1(x);
    mask = vmslt_vx_i16m1_b16(v0, 5);
    result = vle16_v_i16m1_m(mask, maskedoff, a);
    mask = vmnot_m_b16(mask);
    result = vle16_v_i16m1_m(mask, result, b);
    *(vint16m1_t *)z = result;
    a += vl;
    b += vl;
    z += vl;
    x += vl;
  }
}
