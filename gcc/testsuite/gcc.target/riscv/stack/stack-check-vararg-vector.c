/* { dg-do run } */
/* { dg-options "-std=c11" } */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <riscv_vector.h>
#include <stdarg.h>

vint8m1_t va_sum(vint8m1_t a, int count, ...)
{
  size_t vlmax = vsetvlmax_e8m1();
  va_list ap;
  va_start(ap, count);
  for (int i = count; i > 0; i--)
  {
    vint8m1_t arg = va_arg(ap, vint8m1_t);
    a = vadd_vv_i8m1(a, arg, vlmax);
  }
  va_end(ap);
  return a;
}

int main()
{
  size_t vlmax = vsetvlmax_e8m1();
  vint8m1_t sum = vmv_v_x_i8m1(0, vlmax);
  vint8m1_t a = vmv_v_x_i8m1(1, vlmax);
  vint8m1_t b = vmv_v_x_i8m1(2, vlmax);
  vint8m1_t c = vmv_v_x_i8m1(3, vlmax);
  vint8m1_t d = vmv_v_x_i8m1(4, vlmax);
  sum = va_sum(sum, 4, a, b, c, d);
  int8_t golden_sum = 10;

  for (size_t i = 0; i < vlmax; i += 1) {
    if (golden_sum != vmv_x_s_i8m1_i8(sum))
      {
        abort();
      }
    sum = vslide1down_vx_i8m1(sum, 0, vlmax);
  }
}