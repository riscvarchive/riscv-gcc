/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vredor_vs_i8mf8_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf8_i8m1(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf4_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf4_i8m1(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf2_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf2_i8m1(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m1_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m2_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m2_i8m1(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m4_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m4_i8m1(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m8_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m8_i8m1(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf4_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf4_i16m1(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf2_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf2_i16m1(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m1_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m1_i16m1(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m2_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m2_i16m1(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m4_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m4_i16m1(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m8_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m8_i16m1(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32mf2_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32mf2_i32m1(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m1_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m1_i32m1(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m2_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m2_i32m1(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m4_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m4_i32m1(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m8_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m8_i32m1(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m1_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m1_i64m1(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m2_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m2_i64m1(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m4_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m4_i64m1(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m8_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m8_i64m1(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf8_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf8_i8m1_m(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf4_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf4_i8m1_m(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf2_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf2_i8m1_m(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m1_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m1_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m2_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m4_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m4_i8m1_m(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m8_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m8_i8m1_m(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf4_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf4_i16m1_m(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf2_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf2_i16m1_m(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m1_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m1_i16m1_m(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m2_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m2_i16m1_m(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m4_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m4_i16m1_m(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m8_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m8_i16m1_m(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32mf2_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32mf2_i32m1_m(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m1_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m1_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m2_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m2_i32m1_m(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m4_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m4_i32m1_m(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m8_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m8_i32m1_m(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m1_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m1_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m2_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m2_i64m1_m(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m4_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m4_i64m1_m(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m8_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m8_i64m1_m(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf8_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf8_i8m1_tam(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf4_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf4_i8m1_tam(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf2_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf2_i8m1_tam(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8m1_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m1_i8m1_tam(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8m2_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m2_i8m1_tam(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8m4_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m4_i8m1_tam(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8m8_i8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m8_i8m1_tam(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf4_i16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf4_i16m1_tam(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf2_i16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf2_i16m1_tam(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i16m1_i16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m1_i16m1_tam(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i16m2_i16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m2_i16m1_tam(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i16m4_i16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m4_i16m1_tam(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i16m8_i16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m8_i16m1_tam(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i32mf2_i32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32mf2_i32m1_tam(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i32m1_i32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m1_i32m1_tam(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i32m2_i32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m2_i32m1_tam(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i32m4_i32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m4_i32m1_tam(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i32m8_i32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m8_i32m1_tam(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i64m1_i64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m1_i64m1_tam(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i64m2_i64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m2_i64m1_tam(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i64m4_i64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m4_i64m1_tam(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i64m8_i64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m8_i64m1_tam(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf8_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf8_i8m1_tum(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf4_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf4_i8m1_tum(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf2_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf2_i8m1_tum(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m1_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m1_i8m1_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m2_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m2_i8m1_tum(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m4_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m4_i8m1_tum(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8m8_i8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m8_i8m1_tum(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf4_i16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf4_i16m1_tum(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf2_i16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf2_i16m1_tum(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m1_i16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m1_i16m1_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m2_i16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m2_i16m1_tum(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m4_i16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m4_i16m1_tum(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i16m8_i16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m8_i16m1_tum(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32mf2_i32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32mf2_i32m1_tum(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m1_i32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m1_i32m1_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m2_i32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m2_i32m1_tum(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m4_i32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m4_i32m1_tum(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i32m8_i32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m8_i32m1_tum(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m1_i64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m1_i64m1_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m2_i64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m2_i64m1_tum(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m4_i64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m4_i64m1_tum(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i64m8_i64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m8_i64m1_tum(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf8_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf8_i8m1_ta(vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8mf4_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf4_i8m1_ta(vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8mf2_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf2_i8m1_ta(vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8m1_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m1_i8m1_ta(vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8m2_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m2_i8m1_ta(vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8m4_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m4_i8m1_ta(vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8m8_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m8_i8m1_ta(vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i16mf4_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf4_i16m1_ta(vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i16mf2_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf2_i16m1_ta(vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i16m1_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m1_i16m1_ta(vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i16m2_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m2_i16m1_ta(vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i16m4_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m4_i16m1_ta(vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i16m8_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m8_i16m1_ta(vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i32mf2_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32mf2_i32m1_ta(vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i32m1_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m1_i32m1_ta(vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i32m2_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m2_i32m1_ta(vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i32m4_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m4_i32m1_ta(vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i32m8_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m8_i32m1_ta(vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i64m1_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m1_i64m1_ta(vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i64m2_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m2_i64m1_ta(vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i64m4_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m4_i64m1_ta(vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i64m8_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m8_i64m1_ta(vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_i8mf8_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf8_i8m1_tu(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf4_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf4_i8m1_tu(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8mf2_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8mf2_i8m1_tu(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m1_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m1_i8m1_tu(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m2_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m2_i8m1_tu(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m4_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m4_i8m1_tu(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i8m8_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vredor_vs_i8m8_i8m1_tu(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf4_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf4_i16m1_tu(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16mf2_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16mf2_i16m1_tu(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m1_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m1_i16m1_tu(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m2_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m2_i16m1_tu(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m4_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m4_i16m1_tu(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i16m8_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vredor_vs_i16m8_i16m1_tu(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32mf2_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32mf2_i32m1_tu(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m1_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m1_i32m1_tu(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m2_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m2_i32m1_tu(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m4_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m4_i32m1_tu(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i32m8_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vredor_vs_i32m8_i32m1_tu(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m1_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m1_i64m1_tu(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m2_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m2_i64m1_tu(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m4_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m4_i64m1_tu(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_i64m8_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vredor_vs_i64m8_i64m1_tu(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf8_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf8_u8m1(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf4_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf4_u8m1(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf2_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf2_u8m1(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m1_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m1_u8m1(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m2_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m2_u8m1(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m4_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m4_u8m1(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m8_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m8_u8m1(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf4_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf4_u16m1(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf2_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf2_u16m1(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m1_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m1_u16m1(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m2_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m2_u16m1(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m4_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m4_u16m1(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m8_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m8_u16m1(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32mf2_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32mf2_u32m1(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m1_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m1_u32m1(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m2_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m2_u32m1(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m4_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m4_u32m1(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m8_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m8_u32m1(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m1_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m1_u64m1(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m2_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m2_u64m1(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m4_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m4_u64m1(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m8_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m8_u64m1(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf8_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf8_u8m1_m(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf4_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf4_u8m1_m(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf2_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf2_u8m1_m(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m1_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m1_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m2_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m2_u8m1_m(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m4_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m4_u8m1_m(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m8_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m8_u8m1_m(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf4_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf4_u16m1_m(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf2_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf2_u16m1_m(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m1_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m1_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m2_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m2_u16m1_m(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m4_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m4_u16m1_m(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m8_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m8_u16m1_m(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32mf2_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32mf2_u32m1_m(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m1_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m1_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m2_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m2_u32m1_m(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m4_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m4_u32m1_m(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m8_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m8_u32m1_m(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m1_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m1_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m2_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m2_u64m1_m(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m4_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m4_u64m1_m(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m8_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m8_u64m1_m(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf8_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf8_u8m1_tam(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf4_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf4_u8m1_tam(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf2_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf2_u8m1_tam(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8m1_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m1_u8m1_tam(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8m2_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m2_u8m1_tam(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8m4_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m4_u8m1_tam(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8m8_u8m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m8_u8m1_tam(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf4_u16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf4_u16m1_tam(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf2_u16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf2_u16m1_tam(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u16m1_u16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m1_u16m1_tam(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u16m2_u16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m2_u16m1_tam(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u16m4_u16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m4_u16m1_tam(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u16m8_u16m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m8_u16m1_tam(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u32mf2_u32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32mf2_u32m1_tam(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u32m1_u32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m1_u32m1_tam(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u32m2_u32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m2_u32m1_tam(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u32m4_u32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m4_u32m1_tam(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u32m8_u32m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m8_u32m1_tam(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u64m1_u64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m1_u64m1_tam(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u64m2_u64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m2_u64m1_tam(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u64m4_u64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m4_u64m1_tam(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u64m8_u64m1_tam:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m8_u64m1_tam(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tam(mask, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf8_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf8_u8m1_tum(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf4_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf4_u8m1_tum(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf2_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf2_u8m1_tum(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m1_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m1_u8m1_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m2_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m2_u8m1_tum(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m4_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m4_u8m1_tum(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8m8_u8m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m8_u8m1_tum(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf4_u16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf4_u16m1_tum(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf2_u16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf2_u16m1_tum(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m1_u16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m1_u16m1_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m2_u16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m2_u16m1_tum(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m4_u16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m4_u16m1_tum(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u16m8_u16m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m8_u16m1_tum(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32mf2_u32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32mf2_u32m1_tum(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m1_u32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m1_u32m1_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m2_u32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m2_u32m1_tum(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m4_u32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m4_u32m1_tum(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u32m8_u32m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m8_u32m1_tum(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m1_u64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m1_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m2_u64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m2_u64m1_tum(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m4_u64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m4_u64m1_tum(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u64m8_u64m1_tum:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m8_u64m1_tum(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tum(mask, maskedoff, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf8_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf8_u8m1_ta(vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8mf4_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf4_u8m1_ta(vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8mf2_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf2_u8m1_ta(vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8m1_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m1_u8m1_ta(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8m2_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m2_u8m1_ta(vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8m4_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m4_u8m1_ta(vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8m8_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m8_u8m1_ta(vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u16mf4_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf4_u16m1_ta(vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u16mf2_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf2_u16m1_ta(vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u16m1_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m1_u16m1_ta(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u16m2_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m2_u16m1_ta(vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u16m4_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m4_u16m1_ta(vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u16m8_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m8_u16m1_ta(vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u32mf2_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32mf2_u32m1_ta(vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u32m1_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m1_u32m1_ta(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u32m2_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m2_u32m1_ta(vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u32m4_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m4_u32m1_ta(vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u32m8_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m8_u32m1_ta(vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u64m1_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m1_u64m1_ta(vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u64m2_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m2_u64m1_ta(vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u64m4_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m4_u64m1_ta(vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u64m8_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m8_u64m1_ta(vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_ta(op1, op2, vl);
}


/*
** test_vredor_vs_u8mf8_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf8_u8m1_tu(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf4_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf4_u8m1_tu(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8mf2_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8mf2_u8m1_tu(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m1_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m1_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m2_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m2_u8m1_tu(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m4_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m4_u8m1_tu(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u8m8_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vredor_vs_u8m8_u8m1_tu(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf4_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf4_u16m1_tu(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16mf2_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16mf2_u16m1_tu(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m1_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m1_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m2_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m2_u16m1_tu(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m4_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m4_u16m1_tu(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u16m8_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vredor_vs_u16m8_u16m1_tu(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32mf2_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32mf2_u32m1_tu(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m1_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m1_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m2_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m2_u32m1_tu(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m4_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m4_u32m1_tu(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u32m8_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vredor_vs_u32m8_u32m1_tu(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m1_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m1_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m2_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m2_u64m1_tu(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m4_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m4_u64m1_tu(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}


/*
** test_vredor_vs_u64m8_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vredor_vs_u64m8_u64m1_tu(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredor_tu(dest, op1, op2, vl);
}

