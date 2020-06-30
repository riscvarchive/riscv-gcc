/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// https://github.com/riscv/riscv-v-spec/blob/master/vector-examples.adoc
// == Vector Assembly Code Examples

/*
=== Example with mixed-width mask and compute.

----
# Code using one width for predicate and different width for masked
# compute.
#   int8_t a[]; int32_t b[], c[];
#   for (i=0;  i<n; i++) { b[i] =  (a[i] < 5) ? c[i] : 1; }
#
# Mixed-width code that keeps SEW/LMUL=8
  loop:
    vsetvli a4, a0, e8,m1  # Byte vector for predicate calc
    vlb.v v1, (a1)                # Load a[i]
      add a1, a1, a4              # Bump pointer.
    vmslt.vi v0, v1, 5            # a[i] < 5?

    vsetvli x0, a0, e32,m4 # Vector of 32-bit values.
      sub a0, a0, a4              # Decrement count
    vmv.v.i v4, 1                 # Splat immediate to destination
    vlw.v v4, (a3), v0.t          # Load requested elements of C.
      sll t1, a4, 2
      add a3, a3, t1              # Bump pointer.
    vsw.v v4, (a2)                # Store b[i].
      add a2, a2, t1              # Bump pointer.
      bnez a0, loop               # Any more?
----
*/

void mixedwidth_m(int8_t *a, int32_t * b, int32_t* c, size_t n) {
  size_t vl;
  vbool8_t mask;
  vint32m4_t const_one, vec_c;
  for (; vl = vsetvl_e8m1(n); n -= vl) {
    mask = vmslt_vx_i8m1_b8(*(vint8m1_t *)a, 5);
    const_one = vsplat_s_i32m4(1);
    vec_c = vle32_v_i32m4_m(mask, const_one /*maskedoff*/, c);
    *(vint32m4_t *)b = vec_c;
    /* in Jim's test case,
     https://github.com/sifive/riscv-gcc-internal/pull/3/commits/6afe672655fb05d7472147b617edf8ef6cccc459#diff-0c8f8f39238398a98aca2cee450facc9R57
     it looks like we support below implicit operations
     vint8m1_t const_five = vsplat_s_i8m1(5);
     *(vint32m4_t *)b = (*(vint8m1 *)a < const_five) ? *(vint32m4_t*)c : const_one;
     */
    a += vl;
    b += vl;
    c += vl;
  }
}
