/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_zfh -mabi=ilp32d -O3 -frename-registers" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/*
** test_vslide1up_vx_1: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_1 (vint64m1_t v, int64_t x, size_t vl)
{
  return vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
}

/*
** test_vslide1up_vx_2: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_2 (vint64m1_t v, int64_t x, size_t vl)
{
  v = vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
  return vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
}

/*
** test_vslide1up_vx_3: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_3 (vint64m1_t v, int64_t x, size_t vl)
{
  v = vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
  v = vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
  return vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
}

/*
** test_vslide1up_vx_4: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  li\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),12
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e64,m1,t[au],m[au]
**  vmv1r.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_4 (vint64m1_t v, int64_t x, size_t vl)
{
  v = vslide1up_vx_i64m1 (v, x, vsetvlmax_e64m1 ());
  return vslide1up_vx_i64m1 (v, 12, vsetvlmax_e64m1 ());
}

