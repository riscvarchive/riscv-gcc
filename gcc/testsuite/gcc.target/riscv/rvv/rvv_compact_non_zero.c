/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

/*
https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc

----
    # Compact non-zero elements from input memory array to output memory array
    #
    # size_t compact_non_zero(size_t n, const int* in, int* out)
    # {
    #   size_t i;
    #   size_t count = 0;
    #   int *p = out;
    #
    #   for (i=0; i<n; i++)
    #   {
    #       const int v = *in++;
    #       if (v != 0)
    #           *p++ = v;
    #   }
    #
    #   return (size_t) (p - out);
    # }
    #
    # a0 = n
    # a1 = &in
    # a2 = &out

compact_non_zero:
    li a6, 0                      # Clear count of non-zero elements
loop:
    vsetvli a5, a0, e32,m8  # 32-bit integers
    vlw.v v8, (a1)                # Load input vector
      sub a0, a0, a5              # Decrement number done
      slli a5, a5, 2              # Multiply by four bytes
    vmsne.vi v0, v8, 0            # Locate non-zero values
      add a1, a1, a5              # Bump input pointer
    vpopc.m a5, v0                # Count number of elements set in v0
    viota.m v16, v0               # Get destination offsets of active elements
      add a6, a6, a5              # Accumulate number of elements
    vsll.vi v16, v16, 2, v0.t     # Multiply offsets by four bytes
      slli a5, a5, 2              # Multiply number of non-zero elements by four bytes
    vsuxw.v v8, (a2), v16, v0.t   # Scatter using scaled viota results under mask
      add a2, a2, a5              # Bump output pointer
      bnez a0, loop               # Any more?

      mv a0, a6                   # Return count
      ret
----
*/

size_t compact_non_zero(size_t n, const int32_t* in, int32_t* out) {
  size_t count = 0;
  size_t vl;
  for (; vl = vsetvl_e32m8(n); n -= vl) {
    vint32m8_t value;
    value = *(vint32m8_t*) in;
    vbool4_t non_zeros_m;
    non_zeros_m = vmsne_vx_i32m8_b4(value, 0);
    int32_t non_zeros_count = vpopc_m_b4(non_zeros_m);
    count += non_zeros_count;
    vuint32m8_t offset;
    offset = viota_m_u32m8(non_zeros_m);
    // example:
    // mask is           1,1,0,1
    // offset is         2,1,1,0
    // active offset is  ^ ^   ^
    offset = vsll_vx_u32m8_m(non_zeros_m, offset, offset, 2); // Multiply offsets by four bytes
    vsuxei32_v_i32m8_m(non_zeros_m, out, offset, value);
    in+=vl;
    out+=non_zeros_count;
  }
  return count;
}
