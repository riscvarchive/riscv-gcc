/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

/*
https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc

=== Example using vector mask instructions

The following is an example of vectorizing a data-dependent exit loop.

----
  # char* strcpy(char *dst, const char* src)
strcpy:
      mv a2, a0             # Copy dst
loop:
    vsetvli x0, x0, e8   # Max length vectors of bytes
    vlbuff.v v1, (a1)       # Get src bytes
      csrr t1, vl           # Get number of bytes fetched
    vmseq.vi v0, v1, 0      # Flag zero bytes
    vfirst.m a3, v0         # Zero found?
      add a1, a1, t1        # Bump pointer
    vmsif.m v0, v0          # Set mask up to and including zero byte.
    vsb.v v1, (a2), v0.t    # Write out bytes
      add a2, a2, t1        # Bump pointer
      bltz a3, loop         # Zero byte not found, so loop

      ret
*/

char* strcpy(char *dst, const char* src) {
  char* old_dst = dst;
  int zero_find = -1;
  while (zero_find < 0) {
    rvv_setvlmax_8m1();
    rvv_uint8m1_t value;
    value = rvv_leff_uint8m1(src);
    size_t vl =rvv_readvl();
    rvv_bool8_t cmp;
    cmp = rvv_seq_vs_uint8m1(value, 0);
    zero_find = rvv_first_m_bool8(cmp); // if no zero than return -1
    rvv_bool8_t mask;
    mask = rvv_sif_m_bool8(cmp); // set mask up to and including zero byte
    rvv_se_uint8m1_mask(dst, mask, value);
    src+=vl;
    dst+=vl;
  }
  return old_dst;
}
