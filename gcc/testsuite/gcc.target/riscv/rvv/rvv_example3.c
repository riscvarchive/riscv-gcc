/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// sample intrinsic functions for exploration

/* foo2
#define N (1000)
double a[N], b[N], c[N];
Int n, i;

for (i = 0; i < n; i++) {
  if (a[i] != 0)
    b[i] = b[i] / a[i];
  else
    b[i] = (double)N;
}
*/

void foo2(double *a, double *b, double *c, int n) {
  vfloat64m1_t vec_n, vec_a, vec_b;
  vbool64_t mask;
  // set VLMAX and init vector arrary
  vsetvlmax_e64m1();
  vec_n = vsplat_s_f64m1((double)n);
  size_t vl;

  for (; vl = vsetvl_e64m1(n); n -= vl) {
    vec_a = vle64_v_f64m1(a);
    vec_b = vle64_v_f64m1(b);
    mask = vmfne_vf_f64m1_b64(vec_a, 0.0);
    vec_b = vfdiv_vv_f64m1_m(mask, vec_n /*maskedoff*/, vec_b, vec_a);
    *(vfloat64m1_t *)b = vec_b;
    a += vl;
    b += vl;
  }
}
