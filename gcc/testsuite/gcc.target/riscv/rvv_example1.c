/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// sample intrinsic functions for exploration

/* foo1
#define N (1000)
double a[N], b[N], c[N];
Int n, I;

for (i = 0; I < N; i++) {
  a[i] = b[i] + (double)i * c[i];
}
*/

void foo1(double *a, double *b, double *c, int n) {
  size_t vl;
  vfloat64m2_t vec_n_double, vec_b, vec_c;
  vuint32m1_t vec_i;
  // set VLMAX and init vector arrary
  rvv_setvlmax_64m2();
  vec_i = rvv_id_32m1();
  for (; vl = rvv_setvl_64m2(n);) {
    vec_n_double = rvv_wcvt_ui32tof64_v_32m1(vec_i);
    vec_b = rvv_le_float64m2(b);
    vec_c = rvv_le_float64m2(c);
    *(vfloat64m2_t *)a = vec_b + vec_n_double * vec_c;
    vec_i = rvv_add_vs_uint32m1(vec_i, vl);
    n -= vl;
    a += vl;
    b += vl;
    c += vl;
  }
}

