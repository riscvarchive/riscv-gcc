
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

typedef uint64_t scalar_type;

#include "rvv-e64-on-rv32.h"


void set_golden(struct data *a)
{
  for (size_t i = 0; i < a->vl; i += 1) {
    a->mem_golden[i] = a->mem[i];
  }
  a->mem_golden[0] = a->x;
}
int main()
{
  srand(1299343883);

  uint64_t r = get_rand();
  size_t val = get_rand_vl();
  size_t vl = vsetvl_e64m1(val);
  printf("val: %d, vl: %d\n", val, vl);
  struct data* result = get_data(vl, r);
  vuint64m2_t dest = vle64_v_u64m2(result->mem, vl);
  dest = vmv_s_x_u64m2_tu(dest, result->x, vl);
  vse64_v_u64m2(result->mem, dest, vl);
  print_data("end:\n", result);
  check(result);
}
