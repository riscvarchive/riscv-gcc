/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vadc_vvm_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vadc_vvm_i8mf8(vint8mf8_t op1, vint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vadc_vvm_i8mf4(vint8mf4_t op1, vint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vadc_vvm_i8mf2(vint8mf2_t op1, vint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vadc_vvm_i8m1(vint8m1_t op1, vint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vadc_vvm_i8m2(vint8m2_t op1, vint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vadc_vvm_i8m4(vint8m4_t op1, vint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vadc_vvm_i8m8(vint8m8_t op1, vint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vadc_vvm_i16mf4(vint16mf4_t op1, vint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vadc_vvm_i16mf2(vint16mf2_t op1, vint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vadc_vvm_i16m1(vint16m1_t op1, vint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vadc_vvm_i16m2(vint16m2_t op1, vint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vadc_vvm_i16m4(vint16m4_t op1, vint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vadc_vvm_i16m8(vint16m8_t op1, vint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vadc_vvm_i32mf2(vint32mf2_t op1, vint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vadc_vvm_i32m1(vint32m1_t op1, vint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vadc_vvm_i32m2(vint32m2_t op1, vint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vadc_vvm_i32m4(vint32m4_t op1, vint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vadc_vvm_i32m8(vint32m8_t op1, vint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vadc_vvm_i64m1(vint64m1_t op1, vint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vadc_vvm_i64m2(vint64m2_t op1, vint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vadc_vvm_i64m4(vint64m4_t op1, vint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vadc_vvm_i64m8(vint64m8_t op1, vint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vadc_vvm_i8mf8_ta(vint8mf8_t op1, vint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vadc_vvm_i8mf4_ta(vint8mf4_t op1, vint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vadc_vvm_i8mf2_ta(vint8mf2_t op1, vint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vadc_vvm_i8m1_ta(vint8m1_t op1, vint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vadc_vvm_i8m2_ta(vint8m2_t op1, vint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vadc_vvm_i8m4_ta(vint8m4_t op1, vint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vadc_vvm_i8m8_ta(vint8m8_t op1, vint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vadc_vvm_i16mf4_ta(vint16mf4_t op1, vint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vadc_vvm_i16mf2_ta(vint16mf2_t op1, vint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vadc_vvm_i16m1_ta(vint16m1_t op1, vint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vadc_vvm_i16m2_ta(vint16m2_t op1, vint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vadc_vvm_i16m4_ta(vint16m4_t op1, vint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vadc_vvm_i16m8_ta(vint16m8_t op1, vint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vadc_vvm_i32mf2_ta(vint32mf2_t op1, vint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vadc_vvm_i32m1_ta(vint32m1_t op1, vint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vadc_vvm_i32m2_ta(vint32m2_t op1, vint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vadc_vvm_i32m4_ta(vint32m4_t op1, vint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vadc_vvm_i32m8_ta(vint32m8_t op1, vint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vadc_vvm_i64m1_ta(vint64m1_t op1, vint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vadc_vvm_i64m2_ta(vint64m2_t op1, vint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vadc_vvm_i64m4_ta(vint64m4_t op1, vint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vadc_vvm_i64m8_ta(vint64m8_t op1, vint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vadc_vvm_i8mf8_tu(vint8mf8_t dest, vint8mf8_t op1, vint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vadc_vvm_i8mf4_tu(vint8mf4_t dest, vint8mf4_t op1, vint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vadc_vvm_i8mf2_tu(vint8mf2_t dest, vint8mf2_t op1, vint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vadc_vvm_i8m1_tu(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vadc_vvm_i8m2_tu(vint8m2_t dest, vint8m2_t op1, vint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vadc_vvm_i8m4_tu(vint8m4_t dest, vint8m4_t op1, vint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vadc_vvm_i8m8_tu(vint8m8_t dest, vint8m8_t op1, vint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vadc_vvm_i16mf4_tu(vint16mf4_t dest, vint16mf4_t op1, vint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vadc_vvm_i16mf2_tu(vint16mf2_t dest, vint16mf2_t op1, vint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vadc_vvm_i16m1_tu(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vadc_vvm_i16m2_tu(vint16m2_t dest, vint16m2_t op1, vint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vadc_vvm_i16m4_tu(vint16m4_t dest, vint16m4_t op1, vint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vadc_vvm_i16m8_tu(vint16m8_t dest, vint16m8_t op1, vint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vadc_vvm_i32mf2_tu(vint32mf2_t dest, vint32mf2_t op1, vint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vadc_vvm_i32m1_tu(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vadc_vvm_i32m2_tu(vint32m2_t dest, vint32m2_t op1, vint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vadc_vvm_i32m4_tu(vint32m4_t dest, vint32m4_t op1, vint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vadc_vvm_i32m8_tu(vint32m8_t dest, vint32m8_t op1, vint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vadc_vvm_i64m1_tu(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vadc_vvm_i64m2_tu(vint64m2_t dest, vint64m2_t op1, vint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vadc_vvm_i64m4_tu(vint64m4_t dest, vint64m4_t op1, vint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_i64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vadc_vvm_i64m8_tu(vint64m8_t dest, vint64m8_t op1, vint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vadc_vvm_u8mf8(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vadc_vvm_u8mf4(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vadc_vvm_u8mf2(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vadc_vvm_u8m1(vuint8m1_t op1, vuint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vadc_vvm_u8m2(vuint8m2_t op1, vuint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vadc_vvm_u8m4(vuint8m4_t op1, vuint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vadc_vvm_u8m8(vuint8m8_t op1, vuint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vadc_vvm_u16mf4(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vadc_vvm_u16mf2(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vadc_vvm_u16m1(vuint16m1_t op1, vuint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vadc_vvm_u16m2(vuint16m2_t op1, vuint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vadc_vvm_u16m4(vuint16m4_t op1, vuint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vadc_vvm_u16m8(vuint16m8_t op1, vuint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vadc_vvm_u32mf2(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vadc_vvm_u32m1(vuint32m1_t op1, vuint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vadc_vvm_u32m2(vuint32m2_t op1, vuint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vadc_vvm_u32m4(vuint32m4_t op1, vuint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vadc_vvm_u32m8(vuint32m8_t op1, vuint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vadc_vvm_u64m1(vuint64m1_t op1, vuint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vadc_vvm_u64m2(vuint64m2_t op1, vuint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vadc_vvm_u64m4(vuint64m4_t op1, vuint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vadc_vvm_u64m8(vuint64m8_t op1, vuint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vadc_vvm_u8mf8_ta(vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vadc_vvm_u8mf4_ta(vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vadc_vvm_u8mf2_ta(vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vadc_vvm_u8m1_ta(vuint8m1_t op1, vuint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vadc_vvm_u8m2_ta(vuint8m2_t op1, vuint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vadc_vvm_u8m4_ta(vuint8m4_t op1, vuint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vadc_vvm_u8m8_ta(vuint8m8_t op1, vuint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vadc_vvm_u16mf4_ta(vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vadc_vvm_u16mf2_ta(vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vadc_vvm_u16m1_ta(vuint16m1_t op1, vuint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vadc_vvm_u16m2_ta(vuint16m2_t op1, vuint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vadc_vvm_u16m4_ta(vuint16m4_t op1, vuint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vadc_vvm_u16m8_ta(vuint16m8_t op1, vuint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vadc_vvm_u32mf2_ta(vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vadc_vvm_u32m1_ta(vuint32m1_t op1, vuint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vadc_vvm_u32m2_ta(vuint32m2_t op1, vuint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vadc_vvm_u32m4_ta(vuint32m4_t op1, vuint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vadc_vvm_u32m8_ta(vuint32m8_t op1, vuint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vadc_vvm_u64m1_ta(vuint64m1_t op1, vuint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vadc_vvm_u64m2_ta(vuint64m2_t op1, vuint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vadc_vvm_u64m4_ta(vuint64m4_t op1, vuint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vadc_vvm_u64m8_ta(vuint64m8_t op1, vuint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vadc_vvm_u8mf8_tu(vuint8mf8_t dest, vuint8mf8_t op1, vuint8mf8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vadc_vvm_u8mf4_tu(vuint8mf4_t dest, vuint8mf4_t op1, vuint8mf4_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vadc_vvm_u8mf2_tu(vuint8mf2_t dest, vuint8mf2_t op1, vuint8mf2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vadc_vvm_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vadc_vvm_u8m2_tu(vuint8m2_t dest, vuint8m2_t op1, vuint8m2_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vadc_vvm_u8m4_tu(vuint8m4_t dest, vuint8m4_t op1, vuint8m4_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vadc_vvm_u8m8_tu(vuint8m8_t dest, vuint8m8_t op1, vuint8m8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vadc_vvm_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, vuint16mf4_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vadc_vvm_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, vuint16mf2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vadc_vvm_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vadc_vvm_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, vuint16m2_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vadc_vvm_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, vuint16m4_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vadc_vvm_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, vuint16m8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vadc_vvm_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, vuint32mf2_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vadc_vvm_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vadc_vvm_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, vuint32m2_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vadc_vvm_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, vuint32m4_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vadc_vvm_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, vuint32m8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vadc_vvm_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vadc_vvm_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, vuint64m2_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vadc_vvm_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, vuint64m4_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vvm_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vadc_vvm_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, vuint64m8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vadc_vxm_i8mf8(vint8mf8_t op1, int8_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vadc_vxm_i8mf4(vint8mf4_t op1, int8_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vadc_vxm_i8mf2(vint8mf2_t op1, int8_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vadc_vxm_i8m1(vint8m1_t op1, int8_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vadc_vxm_i8m2(vint8m2_t op1, int8_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vadc_vxm_i8m4(vint8m4_t op1, int8_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vadc_vxm_i8m8(vint8m8_t op1, int8_t op2, vbool1_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vadc_vxm_i16mf4(vint16mf4_t op1, int16_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vadc_vxm_i16mf2(vint16mf2_t op1, int16_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vadc_vxm_i16m1(vint16m1_t op1, int16_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vadc_vxm_i16m2(vint16m2_t op1, int16_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vadc_vxm_i16m4(vint16m4_t op1, int16_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vadc_vxm_i16m8(vint16m8_t op1, int16_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vadc_vxm_i32mf2(vint32mf2_t op1, int32_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vadc_vxm_i32m1(vint32m1_t op1, int32_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vadc_vxm_i32m2(vint32m2_t op1, int32_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vadc_vxm_i32m4(vint32m4_t op1, int32_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vadc_vxm_i32m8(vint32m8_t op1, int32_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vadc_vxm_i64m1(vint64m1_t op1, int64_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vadc_vxm_i64m2(vint64m2_t op1, int64_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vadc_vxm_i64m4(vint64m4_t op1, int64_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vadc_vxm_i64m8(vint64m8_t op1, int64_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vadc_vxm_i8mf8_ta(vint8mf8_t op1, int8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vadc_vxm_i8mf4_ta(vint8mf4_t op1, int8_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vadc_vxm_i8mf2_ta(vint8mf2_t op1, int8_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vadc_vxm_i8m1_ta(vint8m1_t op1, int8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vadc_vxm_i8m2_ta(vint8m2_t op1, int8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vadc_vxm_i8m4_ta(vint8m4_t op1, int8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vadc_vxm_i8m8_ta(vint8m8_t op1, int8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vadc_vxm_i16mf4_ta(vint16mf4_t op1, int16_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vadc_vxm_i16mf2_ta(vint16mf2_t op1, int16_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vadc_vxm_i16m1_ta(vint16m1_t op1, int16_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vadc_vxm_i16m2_ta(vint16m2_t op1, int16_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vadc_vxm_i16m4_ta(vint16m4_t op1, int16_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vadc_vxm_i16m8_ta(vint16m8_t op1, int16_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vadc_vxm_i32mf2_ta(vint32mf2_t op1, int32_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vadc_vxm_i32m1_ta(vint32m1_t op1, int32_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vadc_vxm_i32m2_ta(vint32m2_t op1, int32_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vadc_vxm_i32m4_ta(vint32m4_t op1, int32_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vadc_vxm_i32m8_ta(vint32m8_t op1, int32_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vadc_vxm_i64m1_ta(vint64m1_t op1, int64_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vadc_vxm_i64m2_ta(vint64m2_t op1, int64_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vadc_vxm_i64m4_ta(vint64m4_t op1, int64_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vadc_vxm_i64m8_ta(vint64m8_t op1, int64_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf8_t 
test_vadc_vxm_i8mf8_tu(vint8mf8_t dest, vint8mf8_t op1, int8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf4_t 
test_vadc_vxm_i8mf4_tu(vint8mf4_t dest, vint8mf4_t op1, int8_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8mf2_t 
test_vadc_vxm_i8mf2_tu(vint8mf2_t dest, vint8mf2_t op1, int8_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vadc_vxm_i8m1_tu(vint8m1_t dest, vint8m1_t op1, int8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m2_t 
test_vadc_vxm_i8m2_tu(vint8m2_t dest, vint8m2_t op1, int8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vadc_vxm_i8m4_tu(vint8m4_t dest, vint8m4_t op1, int8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vadc_vxm_i8m8_tu(vint8m8_t dest, vint8m8_t op1, int8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf4_t 
test_vadc_vxm_i16mf4_tu(vint16mf4_t dest, vint16mf4_t op1, int16_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16mf2_t 
test_vadc_vxm_i16mf2_tu(vint16mf2_t dest, vint16mf2_t op1, int16_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vadc_vxm_i16m1_tu(vint16m1_t dest, vint16m1_t op1, int16_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m2_t 
test_vadc_vxm_i16m2_tu(vint16m2_t dest, vint16m2_t op1, int16_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vadc_vxm_i16m4_tu(vint16m4_t dest, vint16m4_t op1, int16_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vadc_vxm_i16m8_tu(vint16m8_t dest, vint16m8_t op1, int16_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32mf2_t 
test_vadc_vxm_i32mf2_tu(vint32mf2_t dest, vint32mf2_t op1, int32_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vadc_vxm_i32m1_tu(vint32m1_t dest, vint32m1_t op1, int32_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m2_t 
test_vadc_vxm_i32m2_tu(vint32m2_t dest, vint32m2_t op1, int32_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vadc_vxm_i32m4_tu(vint32m4_t dest, vint32m4_t op1, int32_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vadc_vxm_i32m8_tu(vint32m8_t dest, vint32m8_t op1, int32_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vadc_vxm_i64m1_tu(vint64m1_t dest, vint64m1_t op1, int64_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m2_t 
test_vadc_vxm_i64m2_tu(vint64m2_t dest, vint64m2_t op1, int64_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vadc_vxm_i64m4_tu(vint64m4_t dest, vint64m4_t op1, int64_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_i64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vadc_vxm_i64m8_tu(vint64m8_t dest, vint64m8_t op1, int64_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vadc_vxm_u8mf8(vuint8mf8_t op1, uint8_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vadc_vxm_u8mf4(vuint8mf4_t op1, uint8_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vadc_vxm_u8mf2(vuint8mf2_t op1, uint8_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vadc_vxm_u8m1(vuint8m1_t op1, uint8_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vadc_vxm_u8m2(vuint8m2_t op1, uint8_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vadc_vxm_u8m4(vuint8m4_t op1, uint8_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vadc_vxm_u8m8(vuint8m8_t op1, uint8_t op2, vbool1_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vadc_vxm_u16mf4(vuint16mf4_t op1, uint16_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vadc_vxm_u16mf2(vuint16mf2_t op1, uint16_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vadc_vxm_u16m1(vuint16m1_t op1, uint16_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vadc_vxm_u16m2(vuint16m2_t op1, uint16_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vadc_vxm_u16m4(vuint16m4_t op1, uint16_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vadc_vxm_u16m8(vuint16m8_t op1, uint16_t op2, vbool2_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vadc_vxm_u32mf2(vuint32mf2_t op1, uint32_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vadc_vxm_u32m1(vuint32m1_t op1, uint32_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vadc_vxm_u32m2(vuint32m2_t op1, uint32_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vadc_vxm_u32m4(vuint32m4_t op1, uint32_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vadc_vxm_u32m8(vuint32m8_t op1, uint32_t op2, vbool4_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m1:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vadc_vxm_u64m1(vuint64m1_t op1, uint64_t op2, vbool64_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m2:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vadc_vxm_u64m2(vuint64m2_t op1, uint64_t op2, vbool32_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m4:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vadc_vxm_u64m4(vuint64m4_t op1, uint64_t op2, vbool16_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m8:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vadc_vxm_u64m8(vuint64m8_t op1, uint64_t op2, vbool8_t op3, size_t vl)
{
  return vadc(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vadc_vxm_u8mf8_ta(vuint8mf8_t op1, uint8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vadc_vxm_u8mf4_ta(vuint8mf4_t op1, uint8_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vadc_vxm_u8mf2_ta(vuint8mf2_t op1, uint8_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vadc_vxm_u8m1_ta(vuint8m1_t op1, uint8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vadc_vxm_u8m2_ta(vuint8m2_t op1, uint8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vadc_vxm_u8m4_ta(vuint8m4_t op1, uint8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vadc_vxm_u8m8_ta(vuint8m8_t op1, uint8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vadc_vxm_u16mf4_ta(vuint16mf4_t op1, uint16_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vadc_vxm_u16mf2_ta(vuint16mf2_t op1, uint16_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vadc_vxm_u16m1_ta(vuint16m1_t op1, uint16_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vadc_vxm_u16m2_ta(vuint16m2_t op1, uint16_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vadc_vxm_u16m4_ta(vuint16m4_t op1, uint16_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vadc_vxm_u16m8_ta(vuint16m8_t op1, uint16_t op2, vbool2_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vadc_vxm_u32mf2_ta(vuint32mf2_t op1, uint32_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vadc_vxm_u32m1_ta(vuint32m1_t op1, uint32_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vadc_vxm_u32m2_ta(vuint32m2_t op1, uint32_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vadc_vxm_u32m4_ta(vuint32m4_t op1, uint32_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vadc_vxm_u32m8_ta(vuint32m8_t op1, uint32_t op2, vbool4_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m1_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vadc_vxm_u64m1_ta(vuint64m1_t op1, uint64_t op2, vbool64_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m2_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vadc_vxm_u64m2_ta(vuint64m2_t op1, uint64_t op2, vbool32_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m4_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vadc_vxm_u64m4_ta(vuint64m4_t op1, uint64_t op2, vbool16_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m8_ta:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vadc_vxm_u64m8_ta(vuint64m8_t op1, uint64_t op2, vbool8_t op3, size_t vl)
{
  return vadc_ta(op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf8_t 
test_vadc_vxm_u8mf8_tu(vuint8mf8_t dest, vuint8mf8_t op1, uint8_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf4_t 
test_vadc_vxm_u8mf4_tu(vuint8mf4_t dest, vuint8mf4_t op1, uint8_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8mf2_t 
test_vadc_vxm_u8mf2_tu(vuint8mf2_t dest, vuint8mf2_t op1, uint8_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vadc_vxm_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, uint8_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m2_t 
test_vadc_vxm_u8m2_tu(vuint8m2_t dest, vuint8m2_t op1, uint8_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vadc_vxm_u8m4_tu(vuint8m4_t dest, vuint8m4_t op1, uint8_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vadc_vxm_u8m8_tu(vuint8m8_t dest, vuint8m8_t op1, uint8_t op2, vbool1_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vadc_vxm_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, uint16_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vadc_vxm_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, uint16_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vadc_vxm_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, uint16_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vadc_vxm_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, uint16_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vadc_vxm_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, uint16_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vadc_vxm_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, uint16_t op2, vbool2_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vadc_vxm_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, uint32_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vadc_vxm_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, uint32_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vadc_vxm_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, uint32_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vadc_vxm_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, uint32_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vadc_vxm_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, uint32_t op2, vbool4_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m1_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vadc_vxm_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, uint64_t op2, vbool64_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m2_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vadc_vxm_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, uint64_t op2, vbool32_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m4_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vadc_vxm_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, uint64_t op2, vbool16_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}


/*
** test_vadc_vxm_u64m8_tu:  { target riscv64-*-* }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vadc\.vxm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vadc_vxm_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, uint64_t op2, vbool8_t op3, size_t vl)
{
  return vadc_tu(dest, op1, op2, op3, vl);
}

