/* { dg-do compile } */

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
  vsetvlmax_e64m1();
  vfloat64m1_t vec_t, vec_zero, vec_x, vec_y;
  vbool64_t mask;
  vec_t = vsplat_s_f64m1(0.0f);
  vec_zero = vsplat_s_f64m1(0.0f);
  for (; vl = vsetvl_e64m1(n); n -= vl) {
    vec_x = vle64_v_f64m1(x);
    mask = vmfne_vf_f64m1_b64 (vec_x, 0.0f);
    vec_y = vle64_v_f64m1_m(mask, vec_zero /*maskoffed*/, y);
    vec_t = vfmacc_vv_f64m1_m(mask, vec_x, vec_y, vec_t);
    count = count + vpopc_m_b64(mask);
    x += vl;
    y += vl;
  }
  /* set vlmax */
  vsetvlmax_e64m1();
  vfloat64m1_t vec_sum;
  vec_sum = vfmv_s_f_f64m1 (vec_sum, 0.0f); /* move scalar to vec_sum[0] */
  vec_sum = vfredsum_vs_f64m1_f64m1(vec_sum, vec_t, vec_sum);  /* vec_sum[0] = sum(vec_sum[0] , vec_t[*] ) */
  double t = vfmv_f_s_f64m1_f64 (vec_sum);  /*rd = vs2[0]*/
  printf("sum=%lf\n", t);
  return count;
}
