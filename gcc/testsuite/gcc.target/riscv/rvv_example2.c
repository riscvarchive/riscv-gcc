/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

// scalar code
#if 0
int foo(double *x, double *y, int n) {
  int count=0;
   t=0;
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
#endif

int foo_rvv(double *x, double *y, int n) {
  int count = 0;
  size_t vl;
  /* set vlmax */
  vsetvlmax_64m1();
  vfloat64m1_t vec_t, vec_zero, vec_x, vec_y;
  vbool64_t mask;
  vec_t = vsplat_s_f64m1(0.0f);
  vec_zero = vsplat_s_f64m1(0.0f);
  for (; vl = vsetvl_64m1(n); n -= vl) {
    vec_x = vload_f64m1(x);
    mask = vsetne_vs_f64m1(vec_x, 0.0f);
    vec_y = vload_f64m1_mask(mask, vec_zero /*maskoffed*/, y);
    vec_t = vmacc_vv_f64m1_mask(mask, vec_x, vec_y, vec_t);
    count = count + vpopc_m_b64(mask);
    x += vl;
    y += vl;
  }
  /* set vlmax */
  vsetvlmax_64m1();
  vfloat64m1_t vec_sum;
  vec_sum = vmv_s_f64m1(vec_sum, 0.0f); /* move scalar to vec_sum[0] */
  vec_sum = vredsum_vs_f64m1(vec_t, vec_sum);  /* vec_sum[0] = sum(vec_sum[0] , vec_t[*] ) */
  double t = vmv_v_f64m1(vec_sum);  /*rd = vs2[0]*/
  printf("sum=%lf\n", t);
  return count;
}
