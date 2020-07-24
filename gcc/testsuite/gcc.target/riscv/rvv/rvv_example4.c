/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

#define N 1000

// sample intrinsic functions for exploration
/* foo3
double a[N][N], b[N][N], c[N[N]];
Int n, i;
for I {
  for j {
          c[i][j] = 0; // Vectorize this loop — the j loop
          For k c[i][j] += a[i][k] * b[k][j];
        }
  }
*/

// This is not an optimized algorithm
double A[N][N], B[N][N], C[N][N];
void foo3() {
  int i, j, k;
  size_t vl;
  vfloat64m1_t vec_a, vec_b, vec_c, vec_sum;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      k = N;
      vsetvlmax_e64m1();
      vec_c = vsplat_s_f64m1(0.0); /* splat scalr to vec_c */
      for (; vl = vsetvl_e64m1(k); k -= vl) {
        vec_a = *(vfloat64m1_t *)&A[i][N - k];
        vec_b = *(vfloat64m1_t *)&B[N - k][j];
        vec_c = vec_a * vec_b + vec_c;
      }
      vsetvlmax_e64m1();
      vec_sum =
          vfmv_s_f_f64m1 (vec_sum, 0.0); /* move scalar to vec_sum[0] */
      vec_sum = vfredsum_vs_f64m1_f64m1(
          vec_sum, vec_c, vec_sum); /* vd[0] =  sum( vec_sum[0] , vec_c[*] ) */
      C[i][j] = vfmv_f_s_f64m1_f64 (vec_sum); /* rd = vec_sum[0] */
    }
  }
}
