/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>
/*

=== Memcpy example

----
    # void *memcpy(void* dest, const void* src, size_t n)
    # a0=dest, a1=src, a2=n
    #
  memcpy:
      mv a3, a0 # Copy destination
  loop:
    vsetvli t0, a2, e8,m8  # Vectors of 8b
    vlb.v v0, (a1)                # Load bytes
      add a1, a1, t0              # Bump pointer
      sub a2, a2, t0              # Decrement count
    vsb.v v0, (a3)                # Store bytes
      add a3, a3, t0              # Bump pointer
      bnez a2, loop               # Any more?
      ret                         # Return
----
*/

void *memcpy(void *vdest, const void *vsrc, size_t n) {
  size_t vl;
  uint8_t *dest = (uint8_t *)vdest;
  uint8_t *src = (uint8_t *)vsrc;
  for (; vl = vsetvl_e8m8(n); n -= vl) {
    *(vint8m8_t *)dest = *(vint8m8_t *)src;
    src += vl;
    dest += vl;
  }
  return dest;
}

