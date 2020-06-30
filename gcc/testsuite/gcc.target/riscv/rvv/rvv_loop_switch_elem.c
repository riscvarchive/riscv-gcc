/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

/*
https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc

=== Examples

The SEW and LMUL settings can be changed dynamically to provide high
throughput on mixed-width operations in a single loop.


# Loop using only widest elements: vloop_widest_elem.c

# Alternative loop that switches element widths.

loop:
    vsetvli a3, a0, e16,m4  # vtype = 16-bit integer vectors
    vlh.v v4, (a1)          # Get 16b vector
      slli t1, a3, 1        # Multiply length by two bytes/element
      add a1, a1, t1        # Bump pointer
    vwmul.vx v8, v4, x10    # 32b in <v8--v15>

    vsetvli x0, a0, e32,m8  # Operate on 32b values
    vsrl.vi v8, v8, 3
    vsw.v v8, (a2)          # Store vector of 32b
      slli t1, a3, 2        # Multiply length by four bytes/element
      add a2, a2, t1        # Bump pointer
      sub a0, a0, a3        # Decrement count
      bnez a0, loop         # Any more?
----
*/

void foo2(int16_t *a1, int32_t *a2, int32_t x10, int n) {
  size_t vl;
  for (; vl = vsetvl_e16m4(n); n -= vl) {
    vint16m4_t v4;
    v4 = vle16_v_i16m4(a1);
    vint32m8_t v8;
    v8 = vwmul_vx_i32m8(v4, x10);
    v8 = vsra_vx_i32m8(v8, 3);
    vse32_v_i32m8(a2, v8);
    a1 += vl;
    a2 += vl;
  }
}
