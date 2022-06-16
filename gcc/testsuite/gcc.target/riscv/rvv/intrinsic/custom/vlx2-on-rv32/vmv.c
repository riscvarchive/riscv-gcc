/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_zfh -mabi=ilp32d -O3 -frename-registers" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>


/*
** test_vmv_s_x_vl2: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+zero,4,e32,m1,t[au],m[au]
**  vslidedown.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),2
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vmv_s_x_vl2 (vint64m1_t v, int64_t x)
{
  return vmv_s_x_i64m1 (v, x, 2);
}

/*
** test_vmv_s_x_vl15: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),15,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslidedown.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),2
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vmv_s_x_vl15 (vint64m1_t v, int64_t x)
{
  return vmv_s_x_i64m1 (v, x, 15);
}

/*
** test_vmv_s_x: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslidedown.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),2
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vmv_s_x (vint64m1_t v, int64_t x, size_t vl)
{
  return vmv_s_x_i64m1 (v, x, vl);
}
