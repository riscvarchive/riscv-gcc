
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

typedef int64_t scalar_type;

#include "rvv-e64-on-rv32.h"


void set_golden(struct data *a)
{
  for (size_t i = 0; i < a->vl; i += 1) {
    a->mem_golden[i] = a->x > a->mem[i] ? a->x : a->mem[i];
  }
}
int main()
{
  srand(1299343883);

  int64_t r = get_rand();
  size_t val = get_rand_vl();
  size_t vl = vsetvl_e64m1(val);
  printf("val: %d, vl: %d\n", val, vl);
  struct data* result = get_data(vl, r);
  vint64m4_t op1 = vle64_v_i64m4(result->mem, vl);
  vint64m4_t dest;
  dest = vmax_vx_i64m4(op1, r, vl);
  vse64_v_i64m4(result->mem, dest, vl);
  print_data("end:\n", result);
  check(result);
}
