/* Copy from https://github.com/riscv-collab/riscv-gcc. */
/* { dg-do compile } */
/* { dg-additional-options "-O0" } */

#include <riscv_vector.h>
#include <random>

__attribute__((noinline)) void NestedFunc(vbool32_t a, vbool32_t b) {
  return;
}

__attribute__((noinline)) void Crash() {
  std::mt19937 rng;
  size_t vlmax = vsetvlmax_e32m1();
  const vuint32m1_t v0 = vmv_v_x_u32m1(0, vlmax);
  const vbool32_t mask = vmseq_vv_u32m1_b32(v0, v0, vlmax);
  NestedFunc(mask, mask);
}

int main() {
  Crash();
  return 0;
}