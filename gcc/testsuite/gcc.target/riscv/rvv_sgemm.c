/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

// https://github.com/riscv/riscv-v-spec/blob/master/vector-examples.adoc
// == Vector Assembly Code Examples

/*
=== SGEMM example
----
# RV64IDV system
#
# void
# sgemm_nn(size_t n,
#          size_t m,
#          size_t k,
#          const float*a,   // m * k matrix
#          size_t lda,
#          const float*b,   // k * n matrix
#          size_t ldb,
#          float*c,         // m * n matrix
#          size_t ldc)
#
#  c += a*b (alpha=1, no transpose on input matrices)
#  matrices stored in C row-major order

*/
void segmm_nn(size_t size_n, size_t size_m, size_t size_k,
              const double *a, // m * k matrix
              size_t lda,
              const double *b, // k * n matrix
              size_t ldb,
              double *c, // m * n matrix
              size_t ldc) {
  int i, j, k;
  size_t vl;
  rvv_float64m1_t vec_c;
  for (int i = 0; i < size_m; ++i) {
    j = size_n;
    const double *bnp = b;
    double *cnp = c;
    for (; vl = rvv_setvl_64m1(j);) {
      const double *akp = a;
      const double *bkp = bnp;
      vec_c = *(rvv_float64m1_t *)cnp;
      for (k = 0; k < size_k; ++k) {
        vec_c = rvv_macc_sv_float64m1(vec_c, *akp, *(rvv_float64m1_t *)bkp);
        bkp += ldb;
        akp++;
      }
      *(rvv_float64m1_t *)cnp = vec_c;
      j -= vl;
      cnp += vl;
      bnp += vl;
    }
    a += lda;
    c += ldc;
  }
}
