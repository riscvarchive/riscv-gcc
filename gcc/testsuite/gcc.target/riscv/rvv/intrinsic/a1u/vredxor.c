/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vredxor_vs_i8mf8_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf8_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf8_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_vl31(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf4_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf4_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf4_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_vl31(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf2_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf2_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf2_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_vl31(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m1_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m1_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m1_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_vl31(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m2_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m2_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m2_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_vl31(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m4_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m4_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m4_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_vl31(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m8_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m8_i8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m8_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_vl31(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf4_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf4_i16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf4_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_vl31(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf2_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf2_i16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf2_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_vl31(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m1_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m1_i16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m1_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_vl31(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m2_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m2_i16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m2_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_vl31(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m4_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m4_i16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m4_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_vl31(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m8_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m8_i16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m8_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_vl31(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32mf2_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32mf2_i32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32mf2_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_vl31(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m1_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m1_i32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m1_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_vl31(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m2_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m2_i32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m2_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_vl31(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m4_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m4_i32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m4_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_vl31(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m8_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m8_i32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m8_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_vl31(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m1_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m1_i64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m1_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_vl31(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m2_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m2_i64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m2_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_vl31(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m4_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m4_i64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m4_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_vl31(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m8_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m8_i64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m8_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_vl31(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf8_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf4_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf2_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m1_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m1_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m2_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m2_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m4_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m4_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m8_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m8_i8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf4_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf2_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m1_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m1_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m2_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m2_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m4_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m4_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m8_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m8_i16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32mf2_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m1_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m1_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m2_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m2_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m4_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m4_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m8_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m8_i32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m1_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m1_i64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m2_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m2_i64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m4_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m4_i64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m8_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m8_i64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_vl32(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_vl32(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_vl32(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_vl32(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_vl32(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_vl32(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_vl32(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_vl32(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_vl32(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_vl32(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_vl32(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_vl32(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_vl32(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_vl32(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_vl32(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_vl32(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_vl32(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_vl32(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_vl32(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_vl32(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_vl32(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_vl32(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_ta(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf8_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_ta_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_ta(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf4_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_ta_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_ta(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf2_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_ta_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_ta(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m1_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_ta_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_ta(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m2_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_ta_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_ta(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m4_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_ta_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_ta(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m8_i8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_ta_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_ta(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf4_i16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_ta_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_ta(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf2_i16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_ta_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_ta(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m1_i16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_ta_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_ta(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m2_i16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_ta_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_ta(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m4_i16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_ta_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_ta(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m8_i16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_ta_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_ta(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32mf2_i32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_ta_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_ta(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m1_i32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_ta_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_ta(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m2_i32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_ta_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_ta(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m4_i32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_ta_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_ta(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m8_i32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_ta_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_ta(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m1_i64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_ta_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_ta(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m2_i64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_ta_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_ta(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m4_i64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_ta_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_ta(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m8_i64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_ta_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_ta_vl32(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_ta_vl32(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_ta_vl32(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_ta_vl32(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_ta_vl32(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_ta_vl32(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_ta_vl32(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_ta_vl32(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_ta_vl32(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_ta_vl32(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_ta_vl32(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_ta_vl32(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_ta_vl32(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_ta_vl32(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_ta_vl32(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_ta_vl32(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_ta_vl32(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_ta_vl32(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_ta_vl32(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_ta_vl32(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_ta_vl32(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_ta_vl32(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_tu(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf8_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_tu_vl31(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_tu(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf4_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_tu_vl31(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_tu(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf2_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_tu_vl31(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_tu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m1_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_tu_vl31(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_tu(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m2_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_tu_vl31(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_tu(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m4_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_tu_vl31(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_tu(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m8_i8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_tu_vl31(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_tu(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf4_i16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_tu_vl31(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_tu(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf2_i16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_tu_vl31(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_tu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m1_i16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_tu_vl31(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_tu(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m2_i16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_tu_vl31(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_tu(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m4_i16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_tu_vl31(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_tu(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m8_i16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_tu_vl31(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_tu(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32mf2_i32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_tu_vl31(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_tu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m1_i32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_tu_vl31(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_tu(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m2_i32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_tu_vl31(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_tu(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m4_i32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_tu_vl31(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_tu(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m8_i32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_tu_vl31(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_tu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m1_i64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_tu_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_tu(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m2_i64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_tu_vl31(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_tu(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m4_i64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_tu_vl31(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_tu(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m8_i64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_tu_vl31(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf8_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_m_tu_vl32(vbool64_t mask, vint8m1_t maskedoff, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf4_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_m_tu_vl32(vbool32_t mask, vint8m1_t maskedoff, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf2_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_m_tu_vl32(vbool16_t mask, vint8m1_t maskedoff, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m1_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_m_tu_vl32(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m2_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_m_tu_vl32(vbool4_t mask, vint8m1_t maskedoff, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m4_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_m_tu_vl32(vbool2_t mask, vint8m1_t maskedoff, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m8_i8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_m_tu_vl32(vbool1_t mask, vint8m1_t maskedoff, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf4_i16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_m_tu_vl32(vbool64_t mask, vint16m1_t maskedoff, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf2_i16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_m_tu_vl32(vbool32_t mask, vint16m1_t maskedoff, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m1_i16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_m_tu_vl32(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m2_i16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_m_tu_vl32(vbool8_t mask, vint16m1_t maskedoff, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m4_i16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_m_tu_vl32(vbool4_t mask, vint16m1_t maskedoff, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m8_i16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_m_tu_vl32(vbool2_t mask, vint16m1_t maskedoff, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32mf2_i32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_m_tu_vl32(vbool64_t mask, vint32m1_t maskedoff, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m1_i32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_m_tu_vl32(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m2_i32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_m_tu_vl32(vbool16_t mask, vint32m1_t maskedoff, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m4_i32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_m_tu_vl32(vbool8_t mask, vint32m1_t maskedoff, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m8_i32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_m_tu_vl32(vbool4_t mask, vint32m1_t maskedoff, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m1_i64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_m_tu_vl32(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m2_i64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_m_tu_vl32(vbool32_t mask, vint64m1_t maskedoff, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m4_i64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_m_tu_vl32(vbool16_t mask, vint64m1_t maskedoff, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m8_i64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_m_tu_vl32(vbool8_t mask, vint64m1_t maskedoff, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf8_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_ta(vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf8_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf8_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_ta_vl31(vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf4_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_ta(vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf4_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf4_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_ta_vl31(vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf2_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_ta(vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf2_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf2_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_ta_vl31(vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8m1_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_ta(vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m1_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8m1_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_ta_vl31(vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8m2_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_ta(vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m2_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8m2_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_ta_vl31(vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8m4_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_ta(vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m4_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8m4_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_ta_vl31(vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8m8_i8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_ta(vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m8_i8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i8m8_i8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_ta_vl31(vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf4_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_ta(vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf4_i16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf4_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_ta_vl31(vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf2_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_ta(vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf2_i16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf2_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_ta_vl31(vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i16m1_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_ta(vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m1_i16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i16m1_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_ta_vl31(vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i16m2_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_ta(vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m2_i16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i16m2_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_ta_vl31(vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i16m4_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_ta(vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m4_i16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i16m4_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_ta_vl31(vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i16m8_i16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_ta(vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m8_i16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i16m8_i16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_ta_vl31(vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i32mf2_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_ta(vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32mf2_i32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i32mf2_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_ta_vl31(vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i32m1_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_ta(vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m1_i32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i32m1_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_ta_vl31(vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i32m2_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_ta(vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m2_i32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i32m2_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_ta_vl31(vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i32m4_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_ta(vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m4_i32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i32m4_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_ta_vl31(vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i32m8_i32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_ta(vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m8_i32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i32m8_i32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_ta_vl31(vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i64m1_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_ta(vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m1_i64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i64m1_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_ta_vl31(vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i64m2_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_ta(vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m2_i64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i64m2_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_ta_vl31(vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i64m4_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_ta(vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m4_i64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i64m4_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_ta_vl31(vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i64m8_i64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_ta(vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m8_i64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_i64m8_i64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_ta_vl31(vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf8_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_tu(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf8_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf8_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_tu_vl31(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf4_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_tu(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf4_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf4_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_tu_vl31(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf2_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_tu(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8mf2_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8mf2_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_tu_vl31(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m1_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_tu(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m1_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m1_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_tu_vl31(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m2_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_tu(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m2_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m2_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_tu_vl31(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m4_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_tu(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m4_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m4_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_tu_vl31(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8m8_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_tu(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2, size_t vl)
{
  return vredxor_vs_i8m8_i8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i8m8_i8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_tu_vl31(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf4_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_tu(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf4_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf4_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_tu_vl31(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16mf2_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_tu(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16mf2_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16mf2_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_tu_vl31(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m1_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_tu(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m1_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m1_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_tu_vl31(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m2_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_tu(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m2_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m2_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_tu_vl31(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m4_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_tu(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m4_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m4_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_tu_vl31(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i16m8_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_tu(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2, size_t vl)
{
  return vredxor_vs_i16m8_i16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i16m8_i16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_tu_vl31(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32mf2_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_tu(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32mf2_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32mf2_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_tu_vl31(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m1_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_tu(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m1_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m1_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_tu_vl31(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m2_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_tu(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m2_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m2_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_tu_vl31(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m4_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_tu(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m4_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m4_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_tu_vl31(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i32m8_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_tu(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2, size_t vl)
{
  return vredxor_vs_i32m8_i32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i32m8_i32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_tu_vl31(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m1_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_tu(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m1_i64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m1_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_tu_vl31(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m2_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_tu(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m2_i64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m2_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_tu_vl31(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m4_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_tu(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m4_i64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m4_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_tu_vl31(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i64m8_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_tu(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2, size_t vl)
{
  return vredxor_vs_i64m8_i64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_i64m8_i64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_tu_vl31(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_i8mf8_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_ta_vl32(vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf4_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_ta_vl32(vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf2_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_ta_vl32(vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8m1_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_ta_vl32(vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8m2_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_ta_vl32(vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8m4_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_ta_vl32(vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8m8_i8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_ta_vl32(vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf4_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_ta_vl32(vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf2_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_ta_vl32(vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i16m1_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_ta_vl32(vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i16m2_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_ta_vl32(vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i16m4_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_ta_vl32(vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i16m8_i16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_ta_vl32(vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i32mf2_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_ta_vl32(vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i32m1_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_ta_vl32(vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i32m2_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_ta_vl32(vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i32m4_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_ta_vl32(vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i32m8_i32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_ta_vl32(vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i64m1_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_ta_vl32(vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i64m2_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_ta_vl32(vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i64m4_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_ta_vl32(vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i64m8_i64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_ta_vl32(vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf8_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_tu_vl32(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf4_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_tu_vl32(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf2_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_tu_vl32(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m1_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_tu_vl32(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m2_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_tu_vl32(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m4_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_tu_vl32(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m8_i8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_tu_vl32(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf4_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_tu_vl32(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf2_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_tu_vl32(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m1_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_tu_vl32(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m2_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_tu_vl32(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m4_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_tu_vl32(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m8_i16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_tu_vl32(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32mf2_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_tu_vl32(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m1_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_tu_vl32(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m2_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_tu_vl32(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m4_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_tu_vl32(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m8_i32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_tu_vl32(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m1_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_tu_vl32(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m2_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_tu_vl32(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m4_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_tu_vl32(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m8_i64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_tu_vl32(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf8_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf8_i8m1_vl32(vint8m1_t dest, vint8mf8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf8_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf4_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf4_i8m1_vl32(vint8m1_t dest, vint8mf4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf4_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8mf2_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8mf2_i8m1_vl32(vint8m1_t dest, vint8mf2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8mf2_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m1_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m1_i8m1_vl32(vint8m1_t dest, vint8m1_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m1_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m2_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m2_i8m1_vl32(vint8m1_t dest, vint8m2_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m2_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m4_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m4_i8m1_vl32(vint8m1_t dest, vint8m4_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m4_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i8m8_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1_t 
test_vredxor_vs_i8m8_i8m1_vl32(vint8m1_t dest, vint8m8_t op1, vint8m1_t op2)
{
  return vredxor_vs_i8m8_i8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf4_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf4_i16m1_vl32(vint16m1_t dest, vint16mf4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf4_i16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16mf2_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16mf2_i16m1_vl32(vint16m1_t dest, vint16mf2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16mf2_i16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m1_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m1_i16m1_vl32(vint16m1_t dest, vint16m1_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m1_i16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m2_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m2_i16m1_vl32(vint16m1_t dest, vint16m2_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m2_i16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m4_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m4_i16m1_vl32(vint16m1_t dest, vint16m4_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m4_i16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i16m8_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1_t 
test_vredxor_vs_i16m8_i16m1_vl32(vint16m1_t dest, vint16m8_t op1, vint16m1_t op2)
{
  return vredxor_vs_i16m8_i16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32mf2_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32mf2_i32m1_vl32(vint32m1_t dest, vint32mf2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32mf2_i32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m1_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m1_i32m1_vl32(vint32m1_t dest, vint32m1_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m1_i32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m2_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m2_i32m1_vl32(vint32m1_t dest, vint32m2_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m2_i32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m4_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m4_i32m1_vl32(vint32m1_t dest, vint32m4_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m4_i32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i32m8_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1_t 
test_vredxor_vs_i32m8_i32m1_vl32(vint32m1_t dest, vint32m8_t op1, vint32m1_t op2)
{
  return vredxor_vs_i32m8_i32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m1_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m1_i64m1_vl32(vint64m1_t dest, vint64m1_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m1_i64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m2_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m2_i64m1_vl32(vint64m1_t dest, vint64m2_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m2_i64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m4_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m4_i64m1_vl32(vint64m1_t dest, vint64m4_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m4_i64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_i64m8_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1_t 
test_vredxor_vs_i64m8_i64m1_vl32(vint64m1_t dest, vint64m8_t op1, vint64m1_t op2)
{
  return vredxor_vs_i64m8_i64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf8_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf8_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf8_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_vl31(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf4_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf4_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf4_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_vl31(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf2_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf2_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf2_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_vl31(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m1_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m1_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m1_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_vl31(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m2_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m2_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m2_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_vl31(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m4_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m4_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m4_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_vl31(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m8_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m8_u8m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m8_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_vl31(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf4_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf4_u16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf4_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_vl31(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf2_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf2_u16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf2_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_vl31(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m1_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m1_u16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m1_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_vl31(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m2_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m2_u16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m2_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_vl31(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m4_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m4_u16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m4_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_vl31(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m8_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m8_u16m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m8_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_vl31(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32mf2_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32mf2_u32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32mf2_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_vl31(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m1_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m1_u32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m1_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_vl31(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m2_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m2_u32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m2_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_vl31(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m4_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m4_u32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m4_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_vl31(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m8_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m8_u32m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m8_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_vl31(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m1_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m1_u64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m1_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_vl31(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m2_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m2_u64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m2_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_vl31(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m4_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m4_u64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m4_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_vl31(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m8_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m8_u64m1(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m8_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_vl31(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf8_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_vl31(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf4_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_vl31(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf2_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_vl31(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m1_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m1_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_vl31(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m2_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m2_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_vl31(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m4_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m4_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_vl31(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m8_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m8_u8m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_vl31(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf4_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_vl31(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf2_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_vl31(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m1_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m1_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m2_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m2_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_vl31(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m4_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m4_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_vl31(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m8_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m8_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_vl31(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32mf2_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_vl31(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m1_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m1_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m2_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m2_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_vl31(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m4_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m4_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_vl31(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m8_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m8_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_vl31(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m1_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m1_u64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m2_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m2_u64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_vl31(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m4_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m4_u64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_vl31(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m8_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m8_u64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_vl31(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_vl32(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_vl32(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_vl32(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_vl32(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_vl32(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_vl32(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_vl32(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_vl32(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_vl32(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_vl32(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_vl32(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_vl32(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_vl32(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_vl32(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_vl32(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_vl32(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_vl32(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_vl32(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_ta(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf8_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_ta_vl31(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_ta(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf4_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_ta_vl31(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_ta(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf2_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_ta_vl31(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_ta(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m1_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_ta_vl31(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_ta(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m2_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_ta_vl31(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_ta(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m4_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_ta_vl31(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_ta(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m8_u8m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_ta_vl31(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_ta(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf4_u16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_ta_vl31(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_ta(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf2_u16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_ta_vl31(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_ta(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m1_u16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_ta_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_ta(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m2_u16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_ta_vl31(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_ta(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m4_u16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_ta_vl31(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_ta(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m8_u16m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_ta_vl31(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_ta(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32mf2_u32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_ta_vl31(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_ta(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m1_u32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_ta_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_ta(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m2_u32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_ta_vl31(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_ta(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m4_u32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_ta_vl31(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_ta(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m8_u32m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_ta_vl31(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_ta(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m1_u64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_ta_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_ta(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m2_u64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_ta_vl31(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_ta(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m4_u64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_ta_vl31(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_ta(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m8_u64m1_m_ta(mask, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_ta_vl31(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_m_ta(mask, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_ta_vl32(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_ta_vl32(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_ta_vl32(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_ta_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_ta_vl32(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_ta_vl32(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_ta_vl32(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_ta_vl32(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_ta_vl32(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_ta_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_ta_vl32(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_ta_vl32(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_ta_vl32(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_ta_vl32(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_ta_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_ta_vl32(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_ta_vl32(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_ta_vl32(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_ta_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_ta_vl32(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_ta_vl32(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_ta_vl32(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_m_ta(mask, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_tu(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf8_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_tu_vl31(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_tu(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf4_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_tu_vl31(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_tu(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf2_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_tu_vl31(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_tu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m1_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_tu_vl31(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_tu(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m2_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_tu_vl31(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_tu(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m4_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_tu_vl31(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_tu(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m8_u8m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_tu_vl31(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_tu(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf4_u16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_tu_vl31(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_tu(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf2_u16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_tu_vl31(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_tu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m1_u16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_tu_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_tu(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m2_u16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_tu_vl31(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_tu(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m4_u16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_tu_vl31(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_tu(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m8_u16m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_tu_vl31(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_tu(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32mf2_u32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_tu_vl31(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_tu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m1_u32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_tu_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_tu(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m2_u32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_tu_vl31(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_tu(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m4_u32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_tu_vl31(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_tu(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m8_u32m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_tu_vl31(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_tu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m1_u64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_tu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_tu(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m2_u64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_tu_vl31(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_tu(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m4_u64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_tu_vl31(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_tu(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m8_u64m1_m_tu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_tu_vl31(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_m_tu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf8_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_m_tu_vl32(vbool64_t mask, vuint8m1_t maskedoff, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf4_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_m_tu_vl32(vbool32_t mask, vuint8m1_t maskedoff, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf2_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_m_tu_vl32(vbool16_t mask, vuint8m1_t maskedoff, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m1_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_m_tu_vl32(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m2_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_m_tu_vl32(vbool4_t mask, vuint8m1_t maskedoff, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m4_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_m_tu_vl32(vbool2_t mask, vuint8m1_t maskedoff, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m8_u8m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_m_tu_vl32(vbool1_t mask, vuint8m1_t maskedoff, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf4_u16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_m_tu_vl32(vbool64_t mask, vuint16m1_t maskedoff, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf2_u16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_m_tu_vl32(vbool32_t mask, vuint16m1_t maskedoff, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m1_u16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_m_tu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m2_u16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_m_tu_vl32(vbool8_t mask, vuint16m1_t maskedoff, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m4_u16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_m_tu_vl32(vbool4_t mask, vuint16m1_t maskedoff, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m8_u16m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_m_tu_vl32(vbool2_t mask, vuint16m1_t maskedoff, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32mf2_u32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_m_tu_vl32(vbool64_t mask, vuint32m1_t maskedoff, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m1_u32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_m_tu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m2_u32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_m_tu_vl32(vbool16_t mask, vuint32m1_t maskedoff, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m4_u32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_m_tu_vl32(vbool8_t mask, vuint32m1_t maskedoff, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m8_u32m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_m_tu_vl32(vbool4_t mask, vuint32m1_t maskedoff, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m1_u64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_m_tu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m2_u64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_m_tu_vl32(vbool32_t mask, vuint64m1_t maskedoff, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m4_u64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_m_tu_vl32(vbool16_t mask, vuint64m1_t maskedoff, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m8_u64m1_m_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_m_tu_vl32(vbool8_t mask, vuint64m1_t maskedoff, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_m_tu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf8_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_ta(vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf8_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf8_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_ta_vl31(vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf4_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_ta(vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf4_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf4_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_ta_vl31(vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf2_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_ta(vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf2_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf2_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_ta_vl31(vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8m1_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_ta(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m1_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8m1_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_ta_vl31(vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8m2_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_ta(vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m2_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8m2_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_ta_vl31(vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8m4_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_ta(vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m4_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8m4_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_ta_vl31(vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8m8_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_ta(vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m8_u8m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u8m8_u8m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_ta_vl31(vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf4_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_ta(vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf4_u16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf4_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_ta_vl31(vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf2_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_ta(vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf2_u16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf2_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_ta_vl31(vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u16m1_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_ta(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m1_u16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u16m1_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_ta_vl31(vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u16m2_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_ta(vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m2_u16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u16m2_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_ta_vl31(vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u16m4_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_ta(vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m4_u16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u16m4_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_ta_vl31(vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u16m8_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_ta(vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m8_u16m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u16m8_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_ta_vl31(vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u32mf2_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_ta(vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32mf2_u32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u32mf2_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_ta_vl31(vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u32m1_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_ta(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m1_u32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u32m1_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_ta_vl31(vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u32m2_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_ta(vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m2_u32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u32m2_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_ta_vl31(vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u32m4_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_ta(vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m4_u32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u32m4_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_ta_vl31(vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u32m8_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_ta(vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m8_u32m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u32m8_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_ta_vl31(vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u64m1_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_ta(vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m1_u64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u64m1_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_ta_vl31(vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u64m2_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_ta(vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m2_u64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u64m2_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_ta_vl31(vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u64m4_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_ta(vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m4_u64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u64m4_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_ta_vl31(vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u64m8_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_ta(vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m8_u64m1_ta(op1, op2, vl);
}

/*
** test_vredxor_vs_u64m8_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_ta_vl31(vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_ta(op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf8_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_tu(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf8_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf8_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_tu_vl31(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf4_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_tu(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf4_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf4_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_tu_vl31(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf2_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_tu(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8mf2_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8mf2_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_tu_vl31(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m1_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_tu(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m1_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m1_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_tu_vl31(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m2_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_tu(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m2_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m2_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_tu_vl31(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m4_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_tu(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m4_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m4_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_tu_vl31(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8m8_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_tu(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2, size_t vl)
{
  return vredxor_vs_u8m8_u8m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u8m8_u8m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_tu_vl31(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf4_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_tu(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf4_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf4_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_tu_vl31(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16mf2_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_tu(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16mf2_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16mf2_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_tu_vl31(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m1_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m1_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m1_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_tu_vl31(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m2_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_tu(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m2_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m2_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_tu_vl31(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m4_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_tu(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m4_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m4_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_tu_vl31(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u16m8_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_tu(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2, size_t vl)
{
  return vredxor_vs_u16m8_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u16m8_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_tu_vl31(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32mf2_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_tu(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32mf2_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32mf2_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_tu_vl31(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m1_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m1_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m1_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_tu_vl31(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m2_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_tu(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m2_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m2_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_tu_vl31(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m4_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_tu(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m4_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m4_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_tu_vl31(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u32m8_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_tu(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2, size_t vl)
{
  return vredxor_vs_u32m8_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u32m8_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_tu_vl31(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m1_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m1_u64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m1_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_tu_vl31(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m2_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_tu(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m2_u64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m2_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_tu_vl31(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m4_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_tu(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m4_u64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m4_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_tu_vl31(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u64m8_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_tu(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2, size_t vl)
{
  return vredxor_vs_u64m8_u64m1_tu(dest, op1, op2, vl);
}

/*
** test_vredxor_vs_u64m8_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_tu_vl31(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_tu(dest, op1, op2, 31);
}

/*
** test_vredxor_vs_u8mf8_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_ta_vl32(vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf4_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_ta_vl32(vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf2_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_ta_vl32(vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8m1_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_ta_vl32(vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8m2_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_ta_vl32(vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8m4_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_ta_vl32(vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8m8_u8m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_ta_vl32(vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf4_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_ta_vl32(vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf2_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_ta_vl32(vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u16m1_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_ta_vl32(vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u16m2_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_ta_vl32(vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u16m4_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_ta_vl32(vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u16m8_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_ta_vl32(vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u32mf2_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_ta_vl32(vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u32m1_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_ta_vl32(vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u32m2_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_ta_vl32(vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u32m4_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_ta_vl32(vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u32m8_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_ta_vl32(vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u64m1_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_ta_vl32(vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u64m2_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_ta_vl32(vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u64m4_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_ta_vl32(vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u64m8_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_ta_vl32(vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_ta(op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf8_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_tu_vl32(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf4_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_tu_vl32(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf2_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_tu_vl32(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m1_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_tu_vl32(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m2_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_tu_vl32(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m4_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_tu_vl32(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m8_u8m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_tu_vl32(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf4_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_tu_vl32(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf2_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_tu_vl32(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m1_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_tu_vl32(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m2_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_tu_vl32(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m4_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_tu_vl32(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m8_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_tu_vl32(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32mf2_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_tu_vl32(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m1_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_tu_vl32(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m2_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_tu_vl32(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m4_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_tu_vl32(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m8_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_tu_vl32(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m1_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_tu_vl32(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m2_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_tu_vl32(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m4_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_tu_vl32(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m8_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_tu_vl32(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1_tu(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf8_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf8_u8m1_vl32(vuint8m1_t dest, vuint8mf8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf8_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf4_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf4_u8m1_vl32(vuint8m1_t dest, vuint8mf4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf4_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8mf2_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8mf2_u8m1_vl32(vuint8m1_t dest, vuint8mf2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8mf2_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m1_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m1_u8m1_vl32(vuint8m1_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m1_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m2_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m2_u8m1_vl32(vuint8m1_t dest, vuint8m2_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m2_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m4_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m4_u8m1_vl32(vuint8m1_t dest, vuint8m4_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m4_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u8m8_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1_t 
test_vredxor_vs_u8m8_u8m1_vl32(vuint8m1_t dest, vuint8m8_t op1, vuint8m1_t op2)
{
  return vredxor_vs_u8m8_u8m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf4_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf4_u16m1_vl32(vuint16m1_t dest, vuint16mf4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf4_u16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16mf2_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16mf2_u16m1_vl32(vuint16m1_t dest, vuint16mf2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16mf2_u16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m1_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m1_u16m1_vl32(vuint16m1_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m1_u16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m2_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m2_u16m1_vl32(vuint16m1_t dest, vuint16m2_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m2_u16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m4_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m4_u16m1_vl32(vuint16m1_t dest, vuint16m4_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m4_u16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u16m8_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vredxor_vs_u16m8_u16m1_vl32(vuint16m1_t dest, vuint16m8_t op1, vuint16m1_t op2)
{
  return vredxor_vs_u16m8_u16m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32mf2_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32mf2_u32m1_vl32(vuint32m1_t dest, vuint32mf2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32mf2_u32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m1_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m1_u32m1_vl32(vuint32m1_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m1_u32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m2_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m2_u32m1_vl32(vuint32m1_t dest, vuint32m2_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m2_u32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m4_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m4_u32m1_vl32(vuint32m1_t dest, vuint32m4_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m4_u32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u32m8_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vredxor_vs_u32m8_u32m1_vl32(vuint32m1_t dest, vuint32m8_t op1, vuint32m1_t op2)
{
  return vredxor_vs_u32m8_u32m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m1_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m1_u64m1_vl32(vuint64m1_t dest, vuint64m1_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m1_u64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m2_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m2_u64m1_vl32(vuint64m1_t dest, vuint64m2_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m2_u64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m4_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m4_u64m1_vl32(vuint64m1_t dest, vuint64m4_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m4_u64m1(dest, op1, op2, 32);
}

/*
** test_vredxor_vs_u64m8_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vredxor\.vs\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vredxor_vs_u64m8_u64m1_vl32(vuint64m1_t dest, vuint64m8_t op1, vuint64m1_t op2)
{
  return vredxor_vs_u64m8_u64m1(dest, op1, op2, 32);
}

