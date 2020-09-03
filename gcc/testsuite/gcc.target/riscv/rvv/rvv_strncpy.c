/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

/*
https://github.com/riscv/riscv-v-spec/blob/master/v-spec.adoc

char* strncpy(char *dst, const char* src, size_t n)
strncpy:
      mv a3, a0             # Copy dst
loop:
    vsetvli x0, a2, e8   # Vectors of bytes.
    vlbuff.v v1, (a1)       # Get src bytes
    vmseq.vi v0, v1, 0      # Flag zero bytes
    vfirst.m a4, v0         # Zero found?
    vmsif.m v0, v0          # Set mask up to and including zero byte.
    vsb.v v1, (a3), v0.t    # Write out bytes
      csrr t1, vl           # Get number of bytes fetched
      sub a2, a2, t1        # Decrement count.
      bgez a4, zero_tail    # Zero remaining bytes.
      add a1, a1, t1        # Bump pointer
      add a3, a3, t1        # Bump pointer
      bnez a2, loop         # Anymore?

      ret

zero_tail:
    vsetvli x0, a2, e8,m8   # Vectors of bytes.
    vmv.v.i v0, 0           # Splat zero.

zero_loop:
    vsetvli t1, a2, e8,m8   # Vectors of bytes.
    vsb.v v0, (a3)          # Store zero.
      sub a2, a2, t1        # Decrement count.
      add a3, a3, t1        # Bump pointer
      bnez a2, zero_loop    # Anymore?

      ret

----
*/

char *strncpy(char *dst, const char *src, size_t n) {
  char *old_dst = dst;
  int zero_find = -1;
  size_t vl;
  while (zero_find < 0) {
    vsetvlmax_e8m1();
    vuint8m1_t value;
    value = vle8ff_v_u8m1((uint8_t *)src);
    size_t vl = vreadvl();
    vbool8_t cmp;
    cmp = vmseq_vx_u8m1_b8(value, 0);
    zero_find = vfirst_m_b8(cmp); // if no zero than return -1
    vbool8_t mask;
    mask = vmsif_m_b8(cmp); // set mask up to and including zero byte
    vse8_v_u8m1_m(mask, (uint8_t *)dst, value);
    n -= vl;
    src += vl;
    dst += vl;
  }
  // handle zero tail
  vsetvlmax_e8m8();
  vuint8m8_t zeros;
  zeros = vsplat_s_u8m8(0);
  for (; vl = vsetvl_e8m8(n); n -= vl) {
    *(vuint8m8_t *)dst = zeros;
    dst += vl;
  }
  return old_dst;
}
