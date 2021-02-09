/* { dg-do compile } */
/* { dg-options "-O0 -march=rv64gcv -mabi=lp64d" } */

#include <riscv_vector.h>
#include <random>

__attribute__((noinline)) void NestedFunc(vbool32_t a, vbool32_t b) {
  return;
}

__attribute__((noinline)) void Crash() {
  std::mt19937 rng;
  const vuint32m1_t v0 = vmv_v_x_u32m1(0);
  const vbool32_t mask = vmseq_vv_u32m1_b32(v0, v0);
  NestedFunc(mask, mask);
}

int main() {
  Crash();
  return 0;
}

/* { dg-final { scan-assembler "mul\tt1,t1,t2" } } */
/* { dg-final { scan-assembler "li\tt2,-4096" } } */
/* { dg-final { scan-assembler "add\tt2,t2,t1" } } */
/* { dg-final { scan-assembler "addi\tt1,t2,1552" } } */
