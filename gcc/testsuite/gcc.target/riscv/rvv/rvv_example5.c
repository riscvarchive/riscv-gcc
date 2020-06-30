/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// sample intrinsic functions for exploration

/* foo4
#define N (1000)
double a[N], b[N], c[N], d[N], e[N];
Int n, i;

for (i = 0; i < n; i++) {
  a[I] = a[I] + ((b[I] + c[I]) / 2) +
         (((d[I] + e[I]) / 2) + (b[I] - e[I]) / 2); // With LMUL = 8
}
*/

void foo4(int n, double *a, double *b, double *c, double *d, double *e) {
  size_t vl;
  for (; vl = vsetvl_e64m8(n); n -= vl) {
    vfloat64m8_t vec_a;
    // implicitly div is unsupported not.
    // vec_a = vec_a + ((vec_b + vec_c) / 2) +
    //        (((vec_d + vec_e) / 2) + ((vec_b - vec_e) / 2));
    vec_a = *(vfloat64m8_t *)a +
            vfdiv_vf_f64m8(*(vfloat64m8_t *)b + *(vfloat64m8_t *)c, 2) +
            vfdiv_vf_f64m8(*(vfloat64m8_t *)d + *(vfloat64m8_t *)e, 2) +
            vfdiv_vf_f64m8(*(vfloat64m8_t *)b - *(vfloat64m8_t *)e, 2);
    *(vfloat64m8_t *)a = vec_a;
    a += vl;
    b += vl;
    c += vl;
    d += vl;
    e += vl;
  }
}
