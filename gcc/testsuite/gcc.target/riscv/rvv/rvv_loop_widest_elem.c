/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

/*
https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc

=== Examples

The SEW and LMUL settings can be changed dynamically to provide high
throughput on mixed-width operations in a single loop.


# Loop using only widest elements:

loop:
    vsetvli a3, a0, e32,m8  # Use only 32-bit elements
    vlh.v v8, (a1)          # Sign-extend 16b load values to 32b elements
      sll t1, a3, 1         # Multiply length by two bytes/element
      add a1, a1, t1        # Bump pointer
    vmul.vx  v8, v8, x10    # 32b multiply result
    vsrl.vi  v8, v8, 3      # Shift elements
    vsw.v v8, (a2)          # Store vector of 32b results
      sll t1, a3, 2         # Multiply length by four bytes/element
      add a2, a2, t1        # Bump pointer
      sub a0, a0, a3        # Decrement count
      bnez a0, loop         # Any more?
*/

void foo(int32_t *a1, int32_t *a2, int32_t x10, int n) {
  size_t vl;
  for (; vl = vsetvl_e32m8(n); n -= vl) {
    vint32m8_t v8;
    v8 = vle32_v_i32m8(a1);
    v8 = v8 * x10;
    v8 = vsra_vx_i32m8(v8, 3);
    vse32_v_i32m8(a2, v8);
    a1 += vl;
    a2 += vl;
  }
}
