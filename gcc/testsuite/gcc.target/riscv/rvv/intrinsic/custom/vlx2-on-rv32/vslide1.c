/* { dg-do compile } */
/* { dg-options "-march=rv32gcv_zfh -mabi=ilp32d -O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/*
** test_vslide1down_vx_vl2: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+zero,4,e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl2 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 2);
}

/*
** test_vslide1down_vx_vl3: { target { no-opts "-mriscv-vector-bits=*" } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),3,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1down_vx_vl3: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetivli\s+zero,6,e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl3 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 3);
}

/*
** test_vslide1down_vx_vl8: { target { no-opts "-mriscv-vector-bits=*" } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),8,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1down_vx_vl8: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetivli\s+zero,16,e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl8 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 8);
}

/*
** test_vslide1down_vx_vl9: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),9,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl9 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 9);
}

/*
** test_vslide1down_vx_vl15: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),15,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl15 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 15);
}

/*
** test_vslide1down_vx_vl16: { target { no-opts "-mriscv-vector-bits=*" } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),16,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1down_vx_vl16: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl16 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 16);
}

/*
** test_vslide1down_vx_vl2047: { target { no-opts "-mriscv-vector-bits=*" } }
**  li\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),2047
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1down_vx_vl2047: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl2047 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 2047);
}

/*
** test_vslide1down_vx_vl2048: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx_vl2048 (vint64m1_t v, int64_t x)
{
  return vslide1down_vx_i64m1 (v, x, 2048);
}

/*
** test_vslide1down_vx: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1down.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1down_vx (vint64m1_t v, int64_t x, size_t vl)
{
  return vslide1down_vx_i64m1 (v, x, vl);
}

/*
** test_vslide1up_vx_vl2: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+zero,4,e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl2 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 2);
}

/*
** test_vslide1up_vx_vl3: { target { no-opts "-mriscv-vector-bits=*" } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),3,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1up_vx_vl3: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetivli\s+zero,6,e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl3 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 3);
}

/*
** test_vslide1up_vx_vl8: { target { no-opts "-mriscv-vector-bits=*" } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),8,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1up_vx_vl8: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetivli\s+zero,16,e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl8 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 8);
}

/*
** test_vslide1up_vx_vl9: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),9,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl9 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 9);
}

/*
** test_vslide1up_vx_vl15: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),15,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl15 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 15);
}

/*
** test_vslide1up_vx_vl16: { target { no-opts "-mriscv-vector-bits=*" } }
**  vsetivli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),16,e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1up_vx_vl16: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl16 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 16);
}

/*
** test_vslide1up_vx_vl2047: { target { no-opts "-mriscv-vector-bits=*" } }
**  li\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),2047
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
/*
** test_vslide1up_vx_vl2047: { target { any-opts "-mriscv-vector-bits=512" } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl2047 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 2047);
}

/*
** test_vslide1up_vx_vl2048: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),zero,e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx_vl2048 (vint64m1_t v, int64_t x)
{
  return vslide1up_vx_i64m1 (v, x, 2048);
}

/*
** test_vslide1up_vx: { target { { any-opts "-mriscv-vector-bits=512" } || { no-opts "-mriscv-vector-bits=*" } } }
**  vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e64,m1,t[au],m[au]
**  slli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),1
**  vsetvli\s+zero,(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),e32,m1,t[au],m[au]
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  vslide1up.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ret
*/
vint64m1_t
test_vslide1up_vx (vint64m1_t v, int64_t x, size_t vl)
{
  return vslide1up_vx_i64m1 (v, x, vl);
}