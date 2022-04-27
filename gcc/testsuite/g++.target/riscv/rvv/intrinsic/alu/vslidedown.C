/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vslidedown_vx_i8mf8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8(vint8mf8_t dest, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4(vint8mf4_t dest, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2(vint8mf2_t dest, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1(vint8m1_t dest, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2(vint8m2_t dest, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4(vint8m4_t dest, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8(vint8m8_t dest, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4(vint16mf4_t dest, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2(vint16mf2_t dest, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1(vint16m1_t dest, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2(vint16m2_t dest, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4(vint16m4_t dest, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8(vint16m8_t dest, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2(vint32mf2_t dest, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1(vint32m1_t dest, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2(vint32m2_t dest, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4(vint32m4_t dest, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8(vint32m8_t dest, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1(vint64m1_t dest, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2(vint64m2_t dest, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4(vint64m4_t dest, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8(vint64m8_t dest, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_m(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_m(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_m(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_m(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_m(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_m(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_m(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_m(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_m(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_m(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_m(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_m(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_m(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_m(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_m(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_m(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_ta(vint8mf8_t dest, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_ta(vint8mf4_t dest, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_ta(vint8mf2_t dest, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_ta(vint8m1_t dest, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_ta(vint8m2_t dest, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_ta(vint8m4_t dest, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_ta(vint8m8_t dest, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_ta(vint16mf4_t dest, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_ta(vint16mf2_t dest, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_ta(vint16m1_t dest, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_ta(vint16m2_t dest, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_ta(vint16m4_t dest, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_ta(vint16m8_t dest, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_ta(vint32mf2_t dest, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_ta(vint32m1_t dest, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_ta(vint32m2_t dest, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_ta(vint32m4_t dest, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_ta(vint32m8_t dest, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_ta(vint64m1_t dest, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_ta(vint64m2_t dest, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_ta(vint64m4_t dest, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_ta(vint64m8_t dest, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_tu(vint8mf8_t dest, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_tu(vint8mf4_t dest, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_tu(vint8mf2_t dest, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_tu(vint8m1_t dest, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_tu(vint8m2_t dest, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_tu(vint8m4_t dest, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_tu(vint8m8_t dest, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_tu(vint16mf4_t dest, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_tu(vint16mf2_t dest, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_tu(vint16m1_t dest, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_tu(vint16m2_t dest, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_tu(vint16m4_t dest, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_tu(vint16m8_t dest, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_tu(vint32mf2_t dest, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_tu(vint32m1_t dest, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_tu(vint32m2_t dest, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_tu(vint32m4_t dest, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_tu(vint32m8_t dest, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_tu(vint64m1_t dest, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_tu(vint64m2_t dest, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_tu(vint64m4_t dest, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_tu(vint64m8_t dest, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_tama(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_tama(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_tama(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_tama(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_tama(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_tama(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_tama(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_tama(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_tama(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_tama(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_tama(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_tama(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_tama(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_tama(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_tama(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_tama(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_tama(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_tama(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_tama(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_tama(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_tama(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_tama(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_tamu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_tamu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_tamu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_tuma(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_tuma(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_tuma(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf8_t 
test_vslidedown_vx_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf4_t 
test_vslidedown_vx_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8mf2_t 
test_vslidedown_vx_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m1_t 
test_vslidedown_vx_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m2_t 
test_vslidedown_vx_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m4_t 
test_vslidedown_vx_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i8m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint8m8_t 
test_vslidedown_vx_i8m8_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf4_t 
test_vslidedown_vx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16mf2_t 
test_vslidedown_vx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m1_t 
test_vslidedown_vx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m2_t 
test_vslidedown_vx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m4_t 
test_vslidedown_vx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i16m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint16m8_t 
test_vslidedown_vx_i16m8_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32mf2_t 
test_vslidedown_vx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m1_t 
test_vslidedown_vx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m2_t 
test_vslidedown_vx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m4_t 
test_vslidedown_vx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i32m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint32m8_t 
test_vslidedown_vx_i32m8_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m1_t 
test_vslidedown_vx_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m2_t 
test_vslidedown_vx_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m4_t 
test_vslidedown_vx_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_i64m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vint64m8_t 
test_vslidedown_vx_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8(vuint8mf8_t dest, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4(vuint8mf4_t dest, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2(vuint8mf2_t dest, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1(vuint8m1_t dest, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2(vuint8m2_t dest, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4(vuint8m4_t dest, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8(vuint8m8_t dest, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4(vuint16mf4_t dest, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2(vuint16mf2_t dest, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1(vuint16m1_t dest, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2(vuint16m2_t dest, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4(vuint16m4_t dest, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8(vuint16m8_t dest, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2(vuint32mf2_t dest, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1(vuint32m1_t dest, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2(vuint32m2_t dest, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4(vuint32m4_t dest, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8(vuint32m8_t dest, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1(vuint64m1_t dest, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2(vuint64m2_t dest, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4(vuint64m4_t dest, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8(vuint64m8_t dest, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_m(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_m(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_m(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_m(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_m(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_m(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_ta(vuint8mf8_t dest, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_ta(vuint8mf4_t dest, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_ta(vuint8mf2_t dest, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_ta(vuint8m1_t dest, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_ta(vuint8m2_t dest, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_ta(vuint8m4_t dest, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_ta(vuint8m8_t dest, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_ta(vuint16mf4_t dest, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_ta(vuint16mf2_t dest, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_ta(vuint16m1_t dest, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_ta(vuint16m2_t dest, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_ta(vuint16m4_t dest, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_ta(vuint16m8_t dest, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_ta(vuint32mf2_t dest, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_ta(vuint32m1_t dest, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_ta(vuint32m2_t dest, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_ta(vuint32m4_t dest, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_ta(vuint32m8_t dest, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_ta(vuint64m1_t dest, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_ta(vuint64m2_t dest, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_ta(vuint64m4_t dest, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_ta(vuint64m8_t dest, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_tu(vuint8mf8_t dest, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_tu(vuint8mf4_t dest, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_tu(vuint8mf2_t dest, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_tu(vuint8m2_t dest, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_tu(vuint8m4_t dest, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_tu(vuint8m8_t dest, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_tama(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_tama(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_tama(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_tama(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_tama(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_tama(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_tama(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf8_t 
test_vslidedown_vx_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf4_t 
test_vslidedown_vx_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8mf2_t 
test_vslidedown_vx_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m1_t 
test_vslidedown_vx_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m2_t 
test_vslidedown_vx_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m4_t 
test_vslidedown_vx_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u8m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint8m8_t 
test_vslidedown_vx_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf4_t 
test_vslidedown_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16mf2_t 
test_vslidedown_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m1_t 
test_vslidedown_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m2_t 
test_vslidedown_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m4_t 
test_vslidedown_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u16m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint16m8_t 
test_vslidedown_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32mf2_t 
test_vslidedown_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m1_t 
test_vslidedown_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m2_t 
test_vslidedown_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m4_t 
test_vslidedown_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u32m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint32m8_t 
test_vslidedown_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m1_t 
test_vslidedown_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m2_t 
test_vslidedown_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m4_t 
test_vslidedown_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_u64m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vuint64m8_t 
test_vslidedown_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4(vfloat16mf4_t dest, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2(vfloat16mf2_t dest, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1(vfloat16m1_t dest, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2(vfloat16m2_t dest, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4(vfloat16m4_t dest, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8(vfloat16m8_t dest, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2(vfloat32mf2_t dest, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1(vfloat32m1_t dest, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2(vfloat32m2_t dest, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4(vfloat32m4_t dest, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8(vfloat32m8_t dest, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1(vfloat64m1_t dest, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2(vfloat64m2_t dest, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4(vfloat64m4_t dest, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8(vfloat64m8_t dest, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_m(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_m(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_m(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_m(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_m(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_ta(vfloat16mf4_t dest, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_ta(vfloat16mf2_t dest, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_ta(vfloat16m1_t dest, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_ta(vfloat16m2_t dest, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_ta(vfloat16m4_t dest, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_ta(vfloat16m8_t dest, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_ta(vfloat32mf2_t dest, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_ta(vfloat32m1_t dest, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_ta(vfloat32m2_t dest, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_ta(vfloat32m4_t dest, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_ta(vfloat32m8_t dest, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_ta(vfloat64m1_t dest, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_ta(vfloat64m2_t dest, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_ta(vfloat64m4_t dest, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_ta: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_ta(vfloat64m8_t dest, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_ta(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_tu(vfloat16mf4_t dest, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_tu(vfloat16mf2_t dest, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_tu(vfloat16m1_t dest, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_tu(vfloat16m2_t dest, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_tu(vfloat16m4_t dest, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_tu(vfloat16m8_t dest, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_tu(vfloat32mf2_t dest, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_tu(vfloat32m1_t dest, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_tu(vfloat32m2_t dest, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_tu(vfloat32m4_t dest, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_tu(vfloat32m8_t dest, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_tu(vfloat64m1_t dest, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_tu(vfloat64m2_t dest, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_tu(vfloat64m4_t dest, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_tu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_tu(vfloat64m8_t dest, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tu(dest, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_tama(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_tama(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_tama(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_tama(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_tama(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_tama(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_tama(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_tama(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_tama(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_tama(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_tama(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_tama(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_tama(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_tama(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_tama: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_tama(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tama(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_tamu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_tamu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_tamu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_tamu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_tamu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_tamu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_tamu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_tamu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_tamu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_tamu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_tamu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_tuma(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_tuma(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_tuma(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_tuma(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_tuma(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_tuma(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_tuma(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_tuma(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_tuma(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_tuma(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_tuma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf4_t 
test_vslidedown_vx_f16mf4_tumu(vbool64_t mask, vfloat16mf4_t maskedoff, vfloat16mf4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16mf2_t 
test_vslidedown_vx_f16mf2_tumu(vbool32_t mask, vfloat16mf2_t maskedoff, vfloat16mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m1_t 
test_vslidedown_vx_f16m1_tumu(vbool16_t mask, vfloat16m1_t maskedoff, vfloat16m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m2_t 
test_vslidedown_vx_f16m2_tumu(vbool8_t mask, vfloat16m2_t maskedoff, vfloat16m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m4_t 
test_vslidedown_vx_f16m4_tumu(vbool4_t mask, vfloat16m4_t maskedoff, vfloat16m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f16m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat16m8_t 
test_vslidedown_vx_f16m8_tumu(vbool2_t mask, vfloat16m8_t maskedoff, vfloat16m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32mf2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32mf2_t 
test_vslidedown_vx_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m1_t 
test_vslidedown_vx_f32m1_tumu(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m2_t 
test_vslidedown_vx_f32m2_tumu(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m4_t 
test_vslidedown_vx_f32m4_tumu(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f32m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat32m8_t 
test_vslidedown_vx_f32m8_tumu(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m1_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m1_t 
test_vslidedown_vx_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m2_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m2_t 
test_vslidedown_vx_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m4_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m4_t 
test_vslidedown_vx_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vslidedown_vx_f64m8_tumu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**   ...
**   vslidedown\.vx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
extern "C" vfloat64m8_t 
test_vslidedown_vx_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, size_t op2, size_t vl)
{
  return vslidedown_tumu(mask, maskedoff, op1, op2, vl);
}



