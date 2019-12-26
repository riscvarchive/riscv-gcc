/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#define float64_t double

int foo(double *x, double *y, int n) {
  int count=0;
  double t=0;
  for(int i=0; i<n; ++i) {
    if (*x!= 0.0) {
      t += *x * *y;
      count++;
    }
    x++;
    y++;
  }
  printf("sum=%lf\n", t);
  return count;
}

int foo_rvv(float64_t *x, float64_t *y, int n) {
  int count = 0;
  size_t vl;
  /* set vlmax */
  rvv_setvlmax_64m1();
  vfloat64m1_t vec_t, vec_zero, vec_x, vec_y;
  vbool64_t mask;
  vec_t = rvv_splat_s_float64m1(0.0);
  vec_zero = rvv_splat_s_float64m1(0.0);
  for (;vl=rvv_setvl_64m1(n);) {
     vec_x = rvv_le_float64m1(x);
     mask = rvv_ne_vs_float64m1(vec_x, 0.0);
     vec_y = rvv_le_float64m1_mask(mask, vec_zero /*maskoffed*/, y);
     vec_t = rvv_macc_vv_float64m1_mask(mask, vec_x, vec_y, vec_t);
     count = count + rvv_popc_m_bool64(mask);
     n-=vl;
     x+=vl;
     y+=vl;
  }
  /* set vlmax */
  rvv_setvlmax_64m1();
  vfloat64m1_t vec_sum;
  vec_sum = rvv_mv_s_float64m1(vec_sum, 0.0); /* move scalar to vec_sum[0] */
  vec_sum = rvv_redsum_vs_float64m1(vec_t, vec_sum);  /* vec_sum[0] = sum(vec_sum[0] , vec_t[*] ) */
  double t = rvv_mv_v_float64m1(vec_sum);  /*rd = vs2[0]*/
  printf("sum=%lf\n", t);
  return count;
}
