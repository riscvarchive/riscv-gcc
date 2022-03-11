/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vnsra_wx_i8mf8_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_0(vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8(op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_31(vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8(op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_vl31_0(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8(op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_vl31_31(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8(op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_0(vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4(op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_31(vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4(op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_vl31_0(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4(op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_vl31_31(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4(op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_0(vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2(op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_31(vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2(op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_vl31_0(vint16m1_t op1)
{
  return vnsra_wx_i8mf2(op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_vl31_31(vint16m1_t op1)
{
  return vnsra_wx_i8mf2(op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_0(vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1(op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_31(vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1(op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_vl31_0(vint16m2_t op1)
{
  return vnsra_wx_i8m1(op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_vl31_31(vint16m2_t op1)
{
  return vnsra_wx_i8m1(op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_0(vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2(op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_31(vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2(op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_vl31_0(vint16m4_t op1)
{
  return vnsra_wx_i8m2(op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_vl31_31(vint16m4_t op1)
{
  return vnsra_wx_i8m2(op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_0(vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4(op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_31(vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4(op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_vl31_0(vint16m8_t op1)
{
  return vnsra_wx_i8m4(op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_vl31_31(vint16m8_t op1)
{
  return vnsra_wx_i8m4(op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_0(vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4(op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_31(vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4(op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_vl31_0(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4(op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_vl31_31(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4(op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_0(vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2(op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_31(vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2(op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_vl31_0(vint32m1_t op1)
{
  return vnsra_wx_i16mf2(op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_vl31_31(vint32m1_t op1)
{
  return vnsra_wx_i16mf2(op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_0(vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1(op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_31(vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1(op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_vl31_0(vint32m2_t op1)
{
  return vnsra_wx_i16m1(op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_vl31_31(vint32m2_t op1)
{
  return vnsra_wx_i16m1(op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_0(vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2(op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_31(vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2(op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_vl31_0(vint32m4_t op1)
{
  return vnsra_wx_i16m2(op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_vl31_31(vint32m4_t op1)
{
  return vnsra_wx_i16m2(op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_0(vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4(op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_31(vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4(op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_vl31_0(vint32m8_t op1)
{
  return vnsra_wx_i16m4(op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_vl31_31(vint32m8_t op1)
{
  return vnsra_wx_i16m4(op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_0(vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2(op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_31(vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2(op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_vl31_0(vint64m1_t op1)
{
  return vnsra_wx_i32mf2(op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_vl31_31(vint64m1_t op1)
{
  return vnsra_wx_i32mf2(op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_0(vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1(op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_31(vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1(op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_vl31_0(vint64m2_t op1)
{
  return vnsra_wx_i32m1(op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_vl31_31(vint64m2_t op1)
{
  return vnsra_wx_i32m1(op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_0(vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2(op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_31(vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2(op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_vl31_0(vint64m4_t op1)
{
  return vnsra_wx_i32m2(op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_vl31_31(vint64m4_t op1)
{
  return vnsra_wx_i32m2(op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_0(vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4(op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_31(vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4(op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_vl31_0(vint64m8_t op1)
{
  return vnsra_wx_i32m4(op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_vl31_31(vint64m8_t op1)
{
  return vnsra_wx_i32m4(op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_vl31_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_vl31_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_vl31_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_vl31_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_vl31_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_vl31_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_vl31_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_vl31_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_vl31_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_vl31_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_vl31_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_vl31_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_vl31_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_vl31_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_vl31_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_vl31_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_vl31_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_vl31_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_vl31_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_vl31_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_vl31_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_vl31_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_vl31_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_vl31_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_vl31_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_vl31_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_vl31_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_vl31_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_m_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_m_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_m_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_vl31_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_m_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_vl31_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_m_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_m_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf8_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_0(vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_31(vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_vl31_0(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_vl31_31(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_0(vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_31(vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_vl31_0(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_vl31_31(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_0(vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_31(vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_vl31_0(vint16m1_t op1)
{
  return vnsra_wx_i8mf2_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_vl31_31(vint16m1_t op1)
{
  return vnsra_wx_i8mf2_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_0(vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_31(vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_vl31_0(vint16m2_t op1)
{
  return vnsra_wx_i8m1_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_vl31_31(vint16m2_t op1)
{
  return vnsra_wx_i8m1_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_0(vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_31(vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_vl31_0(vint16m4_t op1)
{
  return vnsra_wx_i8m2_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_vl31_31(vint16m4_t op1)
{
  return vnsra_wx_i8m2_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_0(vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_31(vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_vl31_0(vint16m8_t op1)
{
  return vnsra_wx_i8m4_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_vl31_31(vint16m8_t op1)
{
  return vnsra_wx_i8m4_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_0(vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_31(vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_vl31_0(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_vl31_31(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_0(vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_31(vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_vl31_0(vint32m1_t op1)
{
  return vnsra_wx_i16mf2_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_vl31_31(vint32m1_t op1)
{
  return vnsra_wx_i16mf2_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_0(vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_31(vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_vl31_0(vint32m2_t op1)
{
  return vnsra_wx_i16m1_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_vl31_31(vint32m2_t op1)
{
  return vnsra_wx_i16m1_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_0(vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_31(vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_vl31_0(vint32m4_t op1)
{
  return vnsra_wx_i16m2_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_vl31_31(vint32m4_t op1)
{
  return vnsra_wx_i16m2_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_0(vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_31(vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_vl31_0(vint32m8_t op1)
{
  return vnsra_wx_i16m4_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_vl31_31(vint32m8_t op1)
{
  return vnsra_wx_i16m4_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_0(vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_31(vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_vl31_0(vint64m1_t op1)
{
  return vnsra_wx_i32mf2_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_vl31_31(vint64m1_t op1)
{
  return vnsra_wx_i32mf2_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_0(vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_31(vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_vl31_0(vint64m2_t op1)
{
  return vnsra_wx_i32m1_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_vl31_31(vint64m2_t op1)
{
  return vnsra_wx_i32m1_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_0(vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_31(vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_vl31_0(vint64m4_t op1)
{
  return vnsra_wx_i32m2_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_vl31_31(vint64m4_t op1)
{
  return vnsra_wx_i32m2_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_ta_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_0(vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_ta(op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_ta_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_31(vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_ta(op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_ta_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_vl31_0(vint64m8_t op1)
{
  return vnsra_wx_i32m4_ta(op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_ta_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_vl31_31(vint64m8_t op1)
{
  return vnsra_wx_i32m4_ta(op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_0(vint8mf8_t dest, vint16mf4_t op1, size_t vl)
{
  dest = vnsra_wx_i8mf8_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i8mf8_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_31(vint8mf8_t dest, vint16mf4_t op1, size_t vl)
{
  dest = vnsra_wx_i8mf8_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i8mf8_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_vl31_0(vint8mf8_t dest, vint16mf4_t op1)
{
  dest = vnsra_wx_i8mf8_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i8mf8_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_vl31_31(vint8mf8_t dest, vint16mf4_t op1)
{
  dest = vnsra_wx_i8mf8_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i8mf4_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_0(vint8mf4_t dest, vint16mf2_t op1, size_t vl)
{
  dest = vnsra_wx_i8mf4_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i8mf4_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_31(vint8mf4_t dest, vint16mf2_t op1, size_t vl)
{
  dest = vnsra_wx_i8mf4_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i8mf4_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_vl31_0(vint8mf4_t dest, vint16mf2_t op1)
{
  dest = vnsra_wx_i8mf4_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i8mf4_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_vl31_31(vint8mf4_t dest, vint16mf2_t op1)
{
  dest = vnsra_wx_i8mf4_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i8mf2_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_0(vint8mf2_t dest, vint16m1_t op1, size_t vl)
{
  dest = vnsra_wx_i8mf2_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i8mf2_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_31(vint8mf2_t dest, vint16m1_t op1, size_t vl)
{
  dest = vnsra_wx_i8mf2_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i8mf2_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_vl31_0(vint8mf2_t dest, vint16m1_t op1)
{
  dest = vnsra_wx_i8mf2_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i8mf2_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_vl31_31(vint8mf2_t dest, vint16m1_t op1)
{
  dest = vnsra_wx_i8mf2_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i8m1_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_0(vint8m1_t dest, vint16m2_t op1, size_t vl)
{
  dest = vnsra_wx_i8m1_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i8m1_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_31(vint8m1_t dest, vint16m2_t op1, size_t vl)
{
  dest = vnsra_wx_i8m1_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i8m1_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_vl31_0(vint8m1_t dest, vint16m2_t op1)
{
  dest = vnsra_wx_i8m1_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i8m1_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_vl31_31(vint8m1_t dest, vint16m2_t op1)
{
  dest = vnsra_wx_i8m1_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i8m2_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_0(vint8m2_t dest, vint16m4_t op1, size_t vl)
{
  dest = vnsra_wx_i8m2_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i8m2_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_31(vint8m2_t dest, vint16m4_t op1, size_t vl)
{
  dest = vnsra_wx_i8m2_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i8m2_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_vl31_0(vint8m2_t dest, vint16m4_t op1)
{
  dest = vnsra_wx_i8m2_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i8m2_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_vl31_31(vint8m2_t dest, vint16m4_t op1)
{
  dest = vnsra_wx_i8m2_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i8m4_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_0(vint8m4_t dest, vint16m8_t op1, size_t vl)
{
  dest = vnsra_wx_i8m4_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i8m4_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_31(vint8m4_t dest, vint16m8_t op1, size_t vl)
{
  dest = vnsra_wx_i8m4_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i8m4_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_vl31_0(vint8m4_t dest, vint16m8_t op1)
{
  dest = vnsra_wx_i8m4_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i8m4_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_vl31_31(vint8m4_t dest, vint16m8_t op1)
{
  dest = vnsra_wx_i8m4_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i16mf4_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_0(vint16mf4_t dest, vint32mf2_t op1, size_t vl)
{
  dest = vnsra_wx_i16mf4_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i16mf4_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_31(vint16mf4_t dest, vint32mf2_t op1, size_t vl)
{
  dest = vnsra_wx_i16mf4_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i16mf4_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_vl31_0(vint16mf4_t dest, vint32mf2_t op1)
{
  dest = vnsra_wx_i16mf4_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i16mf4_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_vl31_31(vint16mf4_t dest, vint32mf2_t op1)
{
  dest = vnsra_wx_i16mf4_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i16mf2_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_0(vint16mf2_t dest, vint32m1_t op1, size_t vl)
{
  dest = vnsra_wx_i16mf2_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i16mf2_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_31(vint16mf2_t dest, vint32m1_t op1, size_t vl)
{
  dest = vnsra_wx_i16mf2_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i16mf2_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_vl31_0(vint16mf2_t dest, vint32m1_t op1)
{
  dest = vnsra_wx_i16mf2_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i16mf2_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_vl31_31(vint16mf2_t dest, vint32m1_t op1)
{
  dest = vnsra_wx_i16mf2_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i16m1_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_0(vint16m1_t dest, vint32m2_t op1, size_t vl)
{
  dest = vnsra_wx_i16m1_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i16m1_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_31(vint16m1_t dest, vint32m2_t op1, size_t vl)
{
  dest = vnsra_wx_i16m1_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i16m1_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_vl31_0(vint16m1_t dest, vint32m2_t op1)
{
  dest = vnsra_wx_i16m1_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i16m1_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_vl31_31(vint16m1_t dest, vint32m2_t op1)
{
  dest = vnsra_wx_i16m1_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i16m2_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_0(vint16m2_t dest, vint32m4_t op1, size_t vl)
{
  dest = vnsra_wx_i16m2_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i16m2_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_31(vint16m2_t dest, vint32m4_t op1, size_t vl)
{
  dest = vnsra_wx_i16m2_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i16m2_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_vl31_0(vint16m2_t dest, vint32m4_t op1)
{
  dest = vnsra_wx_i16m2_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i16m2_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_vl31_31(vint16m2_t dest, vint32m4_t op1)
{
  dest = vnsra_wx_i16m2_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i16m4_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_0(vint16m4_t dest, vint32m8_t op1, size_t vl)
{
  dest = vnsra_wx_i16m4_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i16m4_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_31(vint16m4_t dest, vint32m8_t op1, size_t vl)
{
  dest = vnsra_wx_i16m4_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i16m4_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_vl31_0(vint16m4_t dest, vint32m8_t op1)
{
  dest = vnsra_wx_i16m4_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i16m4_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_vl31_31(vint16m4_t dest, vint32m8_t op1)
{
  dest = vnsra_wx_i16m4_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i32mf2_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_0(vint32mf2_t dest, vint64m1_t op1, size_t vl)
{
  dest = vnsra_wx_i32mf2_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i32mf2_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_31(vint32mf2_t dest, vint64m1_t op1, size_t vl)
{
  dest = vnsra_wx_i32mf2_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i32mf2_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_vl31_0(vint32mf2_t dest, vint64m1_t op1)
{
  dest = vnsra_wx_i32mf2_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i32mf2_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_vl31_31(vint32mf2_t dest, vint64m1_t op1)
{
  dest = vnsra_wx_i32mf2_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i32m1_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_0(vint32m1_t dest, vint64m2_t op1, size_t vl)
{
  dest = vnsra_wx_i32m1_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i32m1_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_31(vint32m1_t dest, vint64m2_t op1, size_t vl)
{
  dest = vnsra_wx_i32m1_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i32m1_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_vl31_0(vint32m1_t dest, vint64m2_t op1)
{
  dest = vnsra_wx_i32m1_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i32m1_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_vl31_31(vint32m1_t dest, vint64m2_t op1)
{
  dest = vnsra_wx_i32m1_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i32m2_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_0(vint32m2_t dest, vint64m4_t op1, size_t vl)
{
  dest = vnsra_wx_i32m2_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i32m2_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_31(vint32m2_t dest, vint64m4_t op1, size_t vl)
{
  dest = vnsra_wx_i32m2_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i32m2_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_vl31_0(vint32m2_t dest, vint64m4_t op1)
{
  dest = vnsra_wx_i32m2_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i32m2_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_vl31_31(vint32m2_t dest, vint64m4_t op1)
{
  dest = vnsra_wx_i32m2_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i32m4_tu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_0(vint32m4_t dest, vint64m8_t op1, size_t vl)
{
  dest = vnsra_wx_i32m4_tu(dest, op1, 0, vl);
  return dest;
}

/*
** test_vnsra_wx_i32m4_tu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_31(vint32m4_t dest, vint64m8_t op1, size_t vl)
{
  dest = vnsra_wx_i32m4_tu(dest, op1, 31, vl);
  return dest;
}

/*
** test_vnsra_wx_i32m4_tu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_vl31_0(vint32m4_t dest, vint64m8_t op1)
{
  dest = vnsra_wx_i32m4_tu(dest, op1, 0, 31);
  return dest;
}

/*
** test_vnsra_wx_i32m4_tu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_vl31_31(vint32m4_t dest, vint64m8_t op1)
{
  dest = vnsra_wx_i32m4_tu(dest, op1, 31, 31);
  return dest;
}

/*
** test_vnsra_wx_i8mf8_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_vl31_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_vl31_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_vl31_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_vl31_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_vl31_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_vl31_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_vl31_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_vl31_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_vl31_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_vl31_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_vl31_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_vl31_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_vl31_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_vl31_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_vl31_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_vl31_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_vl31_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_vl31_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_vl31_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_vl31_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_vl31_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_vl31_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_vl31_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_vl31_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_vl31_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_vl31_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_vl31_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_vl31_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_tama_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tama(mask, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_tama_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tama(mask, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_tama_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_vl31_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tama(mask, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_tama_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_vl31_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tama(mask, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_vl31_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_vl31_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_vl31_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_vl31_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_vl31_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_vl31_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_vl31_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_vl31_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_vl31_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_vl31_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_vl31_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_vl31_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_vl31_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_vl31_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_vl31_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_vl31_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_vl31_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_vl31_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_vl31_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_vl31_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_vl31_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_vl31_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_vl31_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_vl31_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_vl31_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_vl31_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_vl31_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_vl31_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_tamu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_tamu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_tamu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_vl31_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_tamu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_vl31_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_vl31_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_vl31_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_vl31_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_vl31_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_vl31_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_vl31_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_vl31_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_vl31_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_vl31_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_vl31_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_vl31_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_vl31_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_vl31_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_vl31_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_vl31_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_vl31_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_vl31_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_vl31_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_vl31_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_vl31_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_vl31_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_vl31_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_vl31_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_vl31_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_vl31_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_vl31_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_vl31_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_vl31_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_tuma_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_tuma_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_tuma_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_vl31_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_tuma_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_vl31_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf8_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf8_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_vl31_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf8_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_vl31_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf4_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf4_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf4_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_vl31_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf4_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_vl31_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf2_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8mf2_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8mf2_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_vl31_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8mf2_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_vl31_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m1_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m1_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m1_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_vl31_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m1_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_vl31_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m2_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m2_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m2_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_vl31_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m2_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_vl31_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8m4_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i8m4_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i8m4_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_vl31_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i8m4_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_vl31_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf4_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf4_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf4_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_vl31_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf4_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_vl31_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16mf2_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16mf2_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16mf2_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_vl31_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16mf2_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_vl31_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m1_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m1_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m1_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_vl31_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m1_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_vl31_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m2_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m2_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m2_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_vl31_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m2_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_vl31_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i16m4_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i16m4_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i16m4_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_vl31_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i16m4_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_vl31_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32mf2_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32mf2_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32mf2_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_vl31_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32mf2_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_vl31_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m1_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m1_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m1_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_vl31_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m1_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_vl31_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m2_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m2_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m2_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_vl31_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m2_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_vl31_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i32m4_tumu_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, 0, vl);
}

/*
** test_vnsra_wx_i32m4_tumu_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, 31, vl);
}

/*
** test_vnsra_wx_i32m4_tumu_vl31_0:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_vl31_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, 0, 31);
}

/*
** test_vnsra_wx_i32m4_tumu_vl31_31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_vl31_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, 31, 31);
}

/*
** test_vnsra_wx_i8mf8_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_tama_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tama(mask, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_tama_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tama(mask, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf8_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_tamu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_tamu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf8_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_tuma_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_tuma_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf8_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_vl32_0(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_vl32_31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_vl32_0(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_vl32_31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_vl32_0(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_vl32_31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_vl32_0(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_vl32_31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_vl32_0(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_vl32_31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_vl32_0(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_vl32_31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_vl32_0(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_vl32_31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_vl32_0(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_vl32_31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_vl32_0(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_vl32_31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_vl32_0(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_vl32_31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_vl32_0(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_vl32_31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_vl32_0(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_vl32_31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_vl32_0(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_vl32_31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_vl32_0(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_vl32_31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_tumu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_vl32_0(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_tumu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31,\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_vl32_31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf8_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_vl32_0(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_vl32_31(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_vl32_0(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_vl32_31(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_vl32_0(vint16m1_t op1)
{
  return vnsra_wx_i8mf2_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_vl32_31(vint16m1_t op1)
{
  return vnsra_wx_i8mf2_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_vl32_0(vint16m2_t op1)
{
  return vnsra_wx_i8m1_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_vl32_31(vint16m2_t op1)
{
  return vnsra_wx_i8m1_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_vl32_0(vint16m4_t op1)
{
  return vnsra_wx_i8m2_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_vl32_31(vint16m4_t op1)
{
  return vnsra_wx_i8m2_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_vl32_0(vint16m8_t op1)
{
  return vnsra_wx_i8m4_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_vl32_31(vint16m8_t op1)
{
  return vnsra_wx_i8m4_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_vl32_0(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_vl32_31(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_vl32_0(vint32m1_t op1)
{
  return vnsra_wx_i16mf2_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_vl32_31(vint32m1_t op1)
{
  return vnsra_wx_i16mf2_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_vl32_0(vint32m2_t op1)
{
  return vnsra_wx_i16m1_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_vl32_31(vint32m2_t op1)
{
  return vnsra_wx_i16m1_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_vl32_0(vint32m4_t op1)
{
  return vnsra_wx_i16m2_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_vl32_31(vint32m4_t op1)
{
  return vnsra_wx_i16m2_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_vl32_0(vint32m8_t op1)
{
  return vnsra_wx_i16m4_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_vl32_31(vint32m8_t op1)
{
  return vnsra_wx_i16m4_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_vl32_0(vint64m1_t op1)
{
  return vnsra_wx_i32mf2_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_vl32_31(vint64m1_t op1)
{
  return vnsra_wx_i32mf2_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_vl32_0(vint64m2_t op1)
{
  return vnsra_wx_i32m1_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_vl32_31(vint64m2_t op1)
{
  return vnsra_wx_i32m1_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_vl32_0(vint64m4_t op1)
{
  return vnsra_wx_i32m2_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_vl32_31(vint64m4_t op1)
{
  return vnsra_wx_i32m2_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_ta_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_vl32_0(vint64m8_t op1)
{
  return vnsra_wx_i32m4_ta(op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_ta_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_vl32_31(vint64m8_t op1)
{
  return vnsra_wx_i32m4_ta(op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf8_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_vl32_0(vint8mf8_t dest, vint16mf4_t op1)
{
  dest = vnsra_wx_i8mf8_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i8mf8_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_vl32_31(vint8mf8_t dest, vint16mf4_t op1)
{
  dest = vnsra_wx_i8mf8_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i8mf4_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_vl32_0(vint8mf4_t dest, vint16mf2_t op1)
{
  dest = vnsra_wx_i8mf4_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i8mf4_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_vl32_31(vint8mf4_t dest, vint16mf2_t op1)
{
  dest = vnsra_wx_i8mf4_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i8mf2_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_vl32_0(vint8mf2_t dest, vint16m1_t op1)
{
  dest = vnsra_wx_i8mf2_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i8mf2_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_vl32_31(vint8mf2_t dest, vint16m1_t op1)
{
  dest = vnsra_wx_i8mf2_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i8m1_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_vl32_0(vint8m1_t dest, vint16m2_t op1)
{
  dest = vnsra_wx_i8m1_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i8m1_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_vl32_31(vint8m1_t dest, vint16m2_t op1)
{
  dest = vnsra_wx_i8m1_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i8m2_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_vl32_0(vint8m2_t dest, vint16m4_t op1)
{
  dest = vnsra_wx_i8m2_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i8m2_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_vl32_31(vint8m2_t dest, vint16m4_t op1)
{
  dest = vnsra_wx_i8m2_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i8m4_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_vl32_0(vint8m4_t dest, vint16m8_t op1)
{
  dest = vnsra_wx_i8m4_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i8m4_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_vl32_31(vint8m4_t dest, vint16m8_t op1)
{
  dest = vnsra_wx_i8m4_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i16mf4_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_vl32_0(vint16mf4_t dest, vint32mf2_t op1)
{
  dest = vnsra_wx_i16mf4_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i16mf4_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_vl32_31(vint16mf4_t dest, vint32mf2_t op1)
{
  dest = vnsra_wx_i16mf4_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i16mf2_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_vl32_0(vint16mf2_t dest, vint32m1_t op1)
{
  dest = vnsra_wx_i16mf2_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i16mf2_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_vl32_31(vint16mf2_t dest, vint32m1_t op1)
{
  dest = vnsra_wx_i16mf2_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i16m1_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_vl32_0(vint16m1_t dest, vint32m2_t op1)
{
  dest = vnsra_wx_i16m1_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i16m1_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_vl32_31(vint16m1_t dest, vint32m2_t op1)
{
  dest = vnsra_wx_i16m1_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i16m2_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_vl32_0(vint16m2_t dest, vint32m4_t op1)
{
  dest = vnsra_wx_i16m2_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i16m2_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_vl32_31(vint16m2_t dest, vint32m4_t op1)
{
  dest = vnsra_wx_i16m2_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i16m4_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_vl32_0(vint16m4_t dest, vint32m8_t op1)
{
  dest = vnsra_wx_i16m4_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i16m4_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_vl32_31(vint16m4_t dest, vint32m8_t op1)
{
  dest = vnsra_wx_i16m4_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i32mf2_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_vl32_0(vint32mf2_t dest, vint64m1_t op1)
{
  dest = vnsra_wx_i32mf2_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i32mf2_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_vl32_31(vint32mf2_t dest, vint64m1_t op1)
{
  dest = vnsra_wx_i32mf2_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i32m1_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_vl32_0(vint32m1_t dest, vint64m2_t op1)
{
  dest = vnsra_wx_i32m1_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i32m1_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_vl32_31(vint32m1_t dest, vint64m2_t op1)
{
  dest = vnsra_wx_i32m1_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i32m2_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_vl32_0(vint32m2_t dest, vint64m4_t op1)
{
  dest = vnsra_wx_i32m2_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i32m2_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_vl32_31(vint32m2_t dest, vint64m4_t op1)
{
  dest = vnsra_wx_i32m2_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i32m4_tu_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_vl32_0(vint32m4_t dest, vint64m8_t op1)
{
  dest = vnsra_wx_i32m4_tu(dest, op1, 0, 32);
  return dest;
}

/*
** test_vnsra_wx_i32m4_tu_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_vl32_31(vint32m4_t dest, vint64m8_t op1)
{
  dest = vnsra_wx_i32m4_tu(dest, op1, 31, 32);
  return dest;
}

/*
** test_vnsra_wx_i8mf8_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_vl32_0(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8(op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf8_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_vl32_31(vint16mf4_t op1)
{
  return vnsra_wx_i8mf8(op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf4_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_vl32_0(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4(op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf4_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_vl32_31(vint16mf2_t op1)
{
  return vnsra_wx_i8mf4(op1, 31, 32);
}

/*
** test_vnsra_wx_i8mf2_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_vl32_0(vint16m1_t op1)
{
  return vnsra_wx_i8mf2(op1, 0, 32);
}

/*
** test_vnsra_wx_i8mf2_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_vl32_31(vint16m1_t op1)
{
  return vnsra_wx_i8mf2(op1, 31, 32);
}

/*
** test_vnsra_wx_i8m1_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_vl32_0(vint16m2_t op1)
{
  return vnsra_wx_i8m1(op1, 0, 32);
}

/*
** test_vnsra_wx_i8m1_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_vl32_31(vint16m2_t op1)
{
  return vnsra_wx_i8m1(op1, 31, 32);
}

/*
** test_vnsra_wx_i8m2_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_vl32_0(vint16m4_t op1)
{
  return vnsra_wx_i8m2(op1, 0, 32);
}

/*
** test_vnsra_wx_i8m2_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_vl32_31(vint16m4_t op1)
{
  return vnsra_wx_i8m2(op1, 31, 32);
}

/*
** test_vnsra_wx_i8m4_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_vl32_0(vint16m8_t op1)
{
  return vnsra_wx_i8m4(op1, 0, 32);
}

/*
** test_vnsra_wx_i8m4_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_vl32_31(vint16m8_t op1)
{
  return vnsra_wx_i8m4(op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf4_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_vl32_0(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4(op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf4_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_vl32_31(vint32mf2_t op1)
{
  return vnsra_wx_i16mf4(op1, 31, 32);
}

/*
** test_vnsra_wx_i16mf2_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_vl32_0(vint32m1_t op1)
{
  return vnsra_wx_i16mf2(op1, 0, 32);
}

/*
** test_vnsra_wx_i16mf2_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_vl32_31(vint32m1_t op1)
{
  return vnsra_wx_i16mf2(op1, 31, 32);
}

/*
** test_vnsra_wx_i16m1_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_vl32_0(vint32m2_t op1)
{
  return vnsra_wx_i16m1(op1, 0, 32);
}

/*
** test_vnsra_wx_i16m1_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_vl32_31(vint32m2_t op1)
{
  return vnsra_wx_i16m1(op1, 31, 32);
}

/*
** test_vnsra_wx_i16m2_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_vl32_0(vint32m4_t op1)
{
  return vnsra_wx_i16m2(op1, 0, 32);
}

/*
** test_vnsra_wx_i16m2_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_vl32_31(vint32m4_t op1)
{
  return vnsra_wx_i16m2(op1, 31, 32);
}

/*
** test_vnsra_wx_i16m4_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_vl32_0(vint32m8_t op1)
{
  return vnsra_wx_i16m4(op1, 0, 32);
}

/*
** test_vnsra_wx_i16m4_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_vl32_31(vint32m8_t op1)
{
  return vnsra_wx_i16m4(op1, 31, 32);
}

/*
** test_vnsra_wx_i32mf2_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*0
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_vl32_0(vint64m1_t op1)
{
  return vnsra_wx_i32mf2(op1, 0, 32);
}

/*
** test_vnsra_wx_i32mf2_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*31
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_vl32_31(vint64m1_t op1)
{
  return vnsra_wx_i32mf2(op1, 31, 32);
}

/*
** test_vnsra_wx_i32m1_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*0
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_vl32_0(vint64m2_t op1)
{
  return vnsra_wx_i32m1(op1, 0, 32);
}

/*
** test_vnsra_wx_i32m1_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*31
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_vl32_31(vint64m2_t op1)
{
  return vnsra_wx_i32m1(op1, 31, 32);
}

/*
** test_vnsra_wx_i32m2_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*0
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_vl32_0(vint64m4_t op1)
{
  return vnsra_wx_i32m2(op1, 0, 32);
}

/*
** test_vnsra_wx_i32m2_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*31
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_vl32_31(vint64m4_t op1)
{
  return vnsra_wx_i32m2(op1, 31, 32);
}

/*
** test_vnsra_wx_i32m4_vl32_0:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*0
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_vl32_0(vint64m8_t op1)
{
  return vnsra_wx_i32m4(op1, 0, 32);
}

/*
** test_vnsra_wx_i32m4_vl32_31:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wi\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*31
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_vl32_31(vint64m8_t op1)
{
  return vnsra_wx_i32m4(op1, 31, 32);
}

/*
** test_vnsra_wv_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8(vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8(op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_vl31(vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8(op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4(vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4(op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_vl31(vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4(op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2(vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2(op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_vl31(vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2(op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1(vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1(op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_vl31(vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1(op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2(vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2(op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_vl31(vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2(op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4(vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4(op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_vl31(vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4(op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4(vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4(op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_vl31(vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4(op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2(vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2(op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_vl31(vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2(op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1(vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1(op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_vl31(vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1(op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2(vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2(op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_vl31(vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2(op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4(vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4(op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_vl31(vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4(op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2(vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2(op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_vl31(vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2(op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1(vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1(op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_vl31(vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1(op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2(vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2(op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_vl31(vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2(op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4(vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4(op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_vl31(vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4(op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_m(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_m_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_m(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_m_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_m(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_m_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_m_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_m(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_m_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_m(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_m_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_m(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_m_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_m(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_m_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_m(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_m_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_m(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_m_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_m(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_m_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_m_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_m_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_m_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_m_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_m_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_m_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_m_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_m_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_m_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_m_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_m_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_m_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_m_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_m_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_m_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_m_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_m_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_m_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_m_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_ta(vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_ta_vl31(vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_ta(vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_ta_vl31(vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_ta(vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_ta_vl31(vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_ta(vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_ta_vl31(vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_ta(vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_ta_vl31(vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_ta(vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_ta_vl31(vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_ta(vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_ta_vl31(vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_ta(vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_ta_vl31(vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_ta(vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_ta_vl31(vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_ta(vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_ta_vl31(vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_ta(vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_ta_vl31(vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_ta(vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_ta_vl31(vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_ta(vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_ta_vl31(vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_ta(vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_ta_vl31(vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_ta(vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_ta(op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_ta_vl31(vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_ta(op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tu(vint8mf8_t dest, vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tu_vl31(vint8mf8_t dest, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tu(vint8mf4_t dest, vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tu_vl31(vint8mf4_t dest, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tu(vint8mf2_t dest, vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tu_vl31(vint8mf2_t dest, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tu(vint8m1_t dest, vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tu_vl31(vint8m1_t dest, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tu(vint8m2_t dest, vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tu_vl31(vint8m2_t dest, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tu(vint8m4_t dest, vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tu_vl31(vint8m4_t dest, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tu(vint16mf4_t dest, vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tu_vl31(vint16mf4_t dest, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tu(vint16mf2_t dest, vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tu_vl31(vint16mf2_t dest, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tu(vint16m1_t dest, vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tu_vl31(vint16m1_t dest, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tu(vint16m2_t dest, vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tu_vl31(vint16m2_t dest, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tu(vint16m4_t dest, vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tu_vl31(vint16m4_t dest, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tu(vint32mf2_t dest, vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tu_vl31(vint32mf2_t dest, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tu(vint32m1_t dest, vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tu_vl31(vint32m1_t dest, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tu(vint32m2_t dest, vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tu_vl31(vint32m2_t dest, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tu(vint32m4_t dest, vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tu_vl31(vint32m4_t dest, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tama(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tama_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tama(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tama_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tama(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tama_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tama(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tama_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tama(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tama_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tama(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tama_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tama(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tama_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tama(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tama_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tama(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tama_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tama(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tama_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tama(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tama_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tama(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tama_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tama(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tama_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tama(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tama_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tama(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tama_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tamu_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tamu_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tamu_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tamu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tamu_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tamu_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tamu_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tamu_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tamu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tamu_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tamu_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tamu_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tamu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tamu_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tamu_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tuma_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tuma_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tuma_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tuma_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tuma_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tuma_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tuma_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tuma_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tuma_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tuma_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tuma_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tuma_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tuma_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tuma_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tuma_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vnsra_wv_i8mf8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tumu_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vnsra_wv_i8mf4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tumu_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vnsra_wv_i8mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tumu_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vnsra_wv_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tumu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vnsra_wv_i8m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tumu_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vnsra_wv_i8m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i8m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tumu_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vnsra_wv_i16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tumu_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vnsra_wv_i16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tumu_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vnsra_wv_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tumu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vnsra_wv_i16m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tumu_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vnsra_wv_i16m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tumu_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vnsra_wv_i32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tumu_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vnsra_wv_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tumu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vnsra_wv_i32m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tumu_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vnsra_wv_i32m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wv_i32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tumu_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wv_i8mf8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tama_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tama_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tama_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tama_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tama_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tama_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tama_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tama_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tama_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tama_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tama_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tama_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tama_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tama_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tama_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tamu_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tamu_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tamu_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tamu_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tamu_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tamu_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tamu_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tamu_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tamu_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tamu_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tamu_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tamu_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tamu_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tamu_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tamu_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tuma_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tuma_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tuma_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tuma_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tuma_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tuma_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tuma_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tuma_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tuma_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tuma_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tuma_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tuma_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tuma_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tuma_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tuma_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tumu_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tumu_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tumu_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tumu_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tumu_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tumu_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tumu_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tumu_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tumu_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tumu_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tumu_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tumu_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tumu_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tumu_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tumu_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_ta_vl32(vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_ta_vl32(vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_ta_vl32(vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_ta_vl32(vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_ta_vl32(vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_ta_vl32(vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_ta_vl32(vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_ta_vl32(vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_ta_vl32(vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_ta_vl32(vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_ta_vl32(vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_ta_vl32(vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_ta_vl32(vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_ta_vl32(vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_ta_vl32(vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_ta(op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_tu_vl32(vint8mf8_t dest, vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_tu_vl32(vint8mf4_t dest, vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_tu_vl32(vint8mf2_t dest, vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_tu_vl32(vint8m1_t dest, vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_tu_vl32(vint8m2_t dest, vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_tu_vl32(vint8m4_t dest, vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_tu_vl32(vint16mf4_t dest, vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_tu_vl32(vint16mf2_t dest, vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_tu_vl32(vint16m1_t dest, vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_tu_vl32(vint16m2_t dest, vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_tu_vl32(vint16m4_t dest, vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_tu_vl32(vint32mf2_t dest, vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_tu_vl32(vint32m1_t dest, vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_tu_vl32(vint32m2_t dest, vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_tu_vl32(vint32m4_t dest, vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wv_i8mf8_vl32(vint16mf4_t op1, vuint8mf8_t op2)
{
  return vnsra_wv_i8mf8(op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wv_i8mf4_vl32(vint16mf2_t op1, vuint8mf4_t op2)
{
  return vnsra_wv_i8mf4(op1, op2, 32);
}

/*
** test_vnsra_wv_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wv_i8mf2_vl32(vint16m1_t op1, vuint8mf2_t op2)
{
  return vnsra_wv_i8mf2(op1, op2, 32);
}

/*
** test_vnsra_wv_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wv_i8m1_vl32(vint16m2_t op1, vuint8m1_t op2)
{
  return vnsra_wv_i8m1(op1, op2, 32);
}

/*
** test_vnsra_wv_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wv_i8m2_vl32(vint16m4_t op1, vuint8m2_t op2)
{
  return vnsra_wv_i8m2(op1, op2, 32);
}

/*
** test_vnsra_wv_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wv_i8m4_vl32(vint16m8_t op1, vuint8m4_t op2)
{
  return vnsra_wv_i8m4(op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wv_i16mf4_vl32(vint32mf2_t op1, vuint16mf4_t op2)
{
  return vnsra_wv_i16mf4(op1, op2, 32);
}

/*
** test_vnsra_wv_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wv_i16mf2_vl32(vint32m1_t op1, vuint16mf2_t op2)
{
  return vnsra_wv_i16mf2(op1, op2, 32);
}

/*
** test_vnsra_wv_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wv_i16m1_vl32(vint32m2_t op1, vuint16m1_t op2)
{
  return vnsra_wv_i16m1(op1, op2, 32);
}

/*
** test_vnsra_wv_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wv_i16m2_vl32(vint32m4_t op1, vuint16m2_t op2)
{
  return vnsra_wv_i16m2(op1, op2, 32);
}

/*
** test_vnsra_wv_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wv_i16m4_vl32(vint32m8_t op1, vuint16m4_t op2)
{
  return vnsra_wv_i16m4(op1, op2, 32);
}

/*
** test_vnsra_wv_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wv_i32mf2_vl32(vint64m1_t op1, vuint32mf2_t op2)
{
  return vnsra_wv_i32mf2(op1, op2, 32);
}

/*
** test_vnsra_wv_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wv_i32m1_vl32(vint64m2_t op1, vuint32m1_t op2)
{
  return vnsra_wv_i32m1(op1, op2, 32);
}

/*
** test_vnsra_wv_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wv_i32m2_vl32(vint64m4_t op1, vuint32m2_t op2)
{
  return vnsra_wv_i32m2(op1, op2, 32);
}

/*
** test_vnsra_wv_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wv_i32m4_vl32(vint64m8_t op1, vuint32m4_t op2)
{
  return vnsra_wv_i32m4(op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8(vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8(op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_vl31(vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8(op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4(vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4(op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_vl31(vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4(op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2(vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2(op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_vl31(vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2(op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1(vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1(op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_vl31(vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1(op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2(vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2(op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_vl31(vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2(op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4(vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4(op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_vl31(vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4(op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4(vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4(op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_vl31(vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4(op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2(vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2(op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_vl31(vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2(op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1(vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1(op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_vl31(vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1(op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2(vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2(op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_vl31(vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2(op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4(vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4(op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_vl31(vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4(op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2(vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2(op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_vl31(vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2(op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1(vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1(op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_vl31(vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1(op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2(vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2(op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_vl31(vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2(op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4(vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4(op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_vl31(vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4(op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_m_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_m_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_m_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_m_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_m_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_m_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_m_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_m_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_m_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_m_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_m_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_m_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_m_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_m_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_m_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta(vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_vl31(vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta(vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_vl31(vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta(vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_vl31(vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta(vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_vl31(vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta(vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_vl31(vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta(vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_vl31(vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta(vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_vl31(vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta(vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_vl31(vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta(vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_vl31(vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta(vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_vl31(vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta(vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_vl31(vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta(vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_vl31(vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta(vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_vl31(vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta(vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_vl31(vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta(vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_ta(op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_vl31(vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_ta(op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu(vint8mf8_t dest, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_vl31(vint8mf8_t dest, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu(vint8mf4_t dest, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_vl31(vint8mf4_t dest, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu(vint8mf2_t dest, vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_vl31(vint8mf2_t dest, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu(vint8m1_t dest, vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_vl31(vint8m1_t dest, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu(vint8m2_t dest, vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_vl31(vint8m2_t dest, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu(vint8m4_t dest, vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_vl31(vint8m4_t dest, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu(vint16mf4_t dest, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_vl31(vint16mf4_t dest, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu(vint16mf2_t dest, vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_vl31(vint16mf2_t dest, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu(vint16m1_t dest, vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_vl31(vint16m1_t dest, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu(vint16m2_t dest, vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_vl31(vint16m2_t dest, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu(vint16m4_t dest, vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_vl31(vint16m4_t dest, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu(vint32mf2_t dest, vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_vl31(vint32mf2_t dest, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu(vint32m1_t dest, vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_vl31(vint32m1_t dest, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu(vint32m2_t dest, vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_vl31(vint32m2_t dest, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu(vint32m4_t dest, vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_tu(dest, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_vl31(vint32m4_t dest, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tu(dest, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_tama(mask, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tama(mask, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_vl31(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_vl31(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_vl31(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_vl31(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i8m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_vl31(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_vl31(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_vl31(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_vl31(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_vl31(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_vl31(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_vl31(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2, size_t vl)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vnsra_wx_i32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_vl31(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vnsra_wx_i8mf8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tama_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tama_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tama_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tama_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tama_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tama_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tama_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tama_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tama_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tama_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tama_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tama_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tama_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tama_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tama_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tama(mask, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tamu_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tamu_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tamu_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tamu_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tamu_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tamu_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tamu_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tamu_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tamu_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tamu_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tamu_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tamu_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tamu_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tamu_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tamu_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tuma_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tuma_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tuma_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tuma_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tuma_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tuma_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tuma_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tuma_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tuma_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tuma_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tuma_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tuma_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tuma_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tuma_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tuma_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tumu_vl32(vbool64_t mask, vint8mf8_t maskedoff, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tumu_vl32(vbool32_t mask, vint8mf4_t maskedoff, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tumu_vl32(vbool16_t mask, vint8mf2_t maskedoff, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tumu_vl32(vbool8_t mask, vint8m1_t maskedoff, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tumu_vl32(vbool4_t mask, vint8m2_t maskedoff, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tumu_vl32(vbool2_t mask, vint8m4_t maskedoff, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tumu_vl32(vbool64_t mask, vint16mf4_t maskedoff, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tumu_vl32(vbool32_t mask, vint16mf2_t maskedoff, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tumu_vl32(vbool16_t mask, vint16m1_t maskedoff, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tumu_vl32(vbool8_t mask, vint16m2_t maskedoff, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tumu_vl32(vbool4_t mask, vint16m4_t maskedoff, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tumu_vl32(vbool64_t mask, vint32mf2_t maskedoff, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tumu_vl32(vbool32_t mask, vint32m1_t maskedoff, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tumu_vl32(vbool16_t mask, vint32m2_t maskedoff, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tumu_vl32(vbool8_t mask, vint32m4_t maskedoff, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_ta_vl32(vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_ta_vl32(vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_ta_vl32(vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_ta_vl32(vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_ta_vl32(vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_ta_vl32(vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_ta_vl32(vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_ta_vl32(vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_ta_vl32(vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_ta_vl32(vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_ta_vl32(vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_ta_vl32(vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_ta_vl32(vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_ta_vl32(vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_ta_vl32(vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_ta(op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_tu_vl32(vint8mf8_t dest, vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_tu_vl32(vint8mf4_t dest, vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_tu_vl32(vint8mf2_t dest, vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_tu_vl32(vint8m1_t dest, vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_tu_vl32(vint8m2_t dest, vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_tu_vl32(vint8m4_t dest, vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_tu_vl32(vint16mf4_t dest, vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_tu_vl32(vint16mf2_t dest, vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_tu_vl32(vint16m1_t dest, vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_tu_vl32(vint16m2_t dest, vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_tu_vl32(vint16m4_t dest, vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_tu_vl32(vint32mf2_t dest, vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_tu_vl32(vint32m1_t dest, vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_tu_vl32(vint32m2_t dest, vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_tu_vl32(vint32m4_t dest, vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4_tu(dest, op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8_t 
test_vnsra_wx_i8mf8_vl32(vint16mf4_t op1, size_t op2)
{
  return vnsra_wx_i8mf8(op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4_t 
test_vnsra_wx_i8mf4_vl32(vint16mf2_t op1, size_t op2)
{
  return vnsra_wx_i8mf4(op1, op2, 32);
}

/*
** test_vnsra_wx_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2_t 
test_vnsra_wx_i8mf2_vl32(vint16m1_t op1, size_t op2)
{
  return vnsra_wx_i8mf2(op1, op2, 32);
}

/*
** test_vnsra_wx_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1_t 
test_vnsra_wx_i8m1_vl32(vint16m2_t op1, size_t op2)
{
  return vnsra_wx_i8m1(op1, op2, 32);
}

/*
** test_vnsra_wx_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2_t 
test_vnsra_wx_i8m2_vl32(vint16m4_t op1, size_t op2)
{
  return vnsra_wx_i8m2(op1, op2, 32);
}

/*
** test_vnsra_wx_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4_t 
test_vnsra_wx_i8m4_vl32(vint16m8_t op1, size_t op2)
{
  return vnsra_wx_i8m4(op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4_t 
test_vnsra_wx_i16mf4_vl32(vint32mf2_t op1, size_t op2)
{
  return vnsra_wx_i16mf4(op1, op2, 32);
}

/*
** test_vnsra_wx_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2_t 
test_vnsra_wx_i16mf2_vl32(vint32m1_t op1, size_t op2)
{
  return vnsra_wx_i16mf2(op1, op2, 32);
}

/*
** test_vnsra_wx_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1_t 
test_vnsra_wx_i16m1_vl32(vint32m2_t op1, size_t op2)
{
  return vnsra_wx_i16m1(op1, op2, 32);
}

/*
** test_vnsra_wx_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2_t 
test_vnsra_wx_i16m2_vl32(vint32m4_t op1, size_t op2)
{
  return vnsra_wx_i16m2(op1, op2, 32);
}

/*
** test_vnsra_wx_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4_t 
test_vnsra_wx_i16m4_vl32(vint32m8_t op1, size_t op2)
{
  return vnsra_wx_i16m4(op1, op2, 32);
}

/*
** test_vnsra_wx_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2_t 
test_vnsra_wx_i32mf2_vl32(vint64m1_t op1, size_t op2)
{
  return vnsra_wx_i32mf2(op1, op2, 32);
}

/*
** test_vnsra_wx_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1_t 
test_vnsra_wx_i32m1_vl32(vint64m2_t op1, size_t op2)
{
  return vnsra_wx_i32m1(op1, op2, 32);
}

/*
** test_vnsra_wx_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2_t 
test_vnsra_wx_i32m2_vl32(vint64m4_t op1, size_t op2)
{
  return vnsra_wx_i32m2(op1, op2, 32);
}

/*
** test_vnsra_wx_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vnsra\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4_t 
test_vnsra_wx_i32m4_vl32(vint64m8_t op1, size_t op2)
{
  return vnsra_wx_i32m4(op1, op2, 32);
}

