/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

/*
https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc

=== Examples

*/
/*
strlen example using unit-stride fault-only-first instruction

# size_t strlen(const char *str)
# a0 holds *str

strlen:
    mv a3, a0             # Save start
loop:
    vsetvli a1, x0, e8  # Vector of bytes of maximum length
    vlbff.v v1, (a3)      # Load bytes
    csrr a1, vl           # Get bytes read
    vmseq.vi v0, v1, 0    # Set v0[i] where v1[i] = 0
    vfirst.m a2, v0       # Find first set bit
    add a3, a3, a1        # Bump pointer
    bltz a2, loop         # Not found?

    add a0, a0, a1        # Sum start + bump
    add a3, a3, a2        # Add index
    sub a0, a3, a0        # Subtract start address+bump

    ret
*/

size_t strlen(const char *str) {
  const char *start = str;
  int32_t first_set = -1;
  while (first_set < 0) {
    rvv_setvlmax_8m1(); // setvm max
    vint8m1_t value;
    value = rvv_leff_int8m1(str);
    size_t vl = rvv_readvl();
    vbool8_t cmp;
    cmp = rvv_seq_vs_int8m1(value, 0);
    first_set = rvv_first_m_bool8(cmp); /* reutrn -1 mean not found */
    str += vl;
  }
  return str - start;
}


