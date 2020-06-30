/* { dg-do compile } */

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
  // set VLMAX and init vector arrary
  vsetvlmax_e32m1();
  vuint32m1_t vec_i = vid_v_u32m1();
  for (; vl = vsetvl_e64m2(n); n -= vl) {
    vec_n_double = vfwcvt_f_xu_v_f64m2 (vec_i);
    vec_b = vle64_v_f64m2(b);
    vec_c = vle64_v_f64m2(c);
    *(vfloat64m2_t *)a = vec_b + vec_n_double * vec_c;
    vec_i = vadd_vx_u32m1(vec_i, vl);
    a += vl;
    b += vl;
    c += vl;
  }
}

