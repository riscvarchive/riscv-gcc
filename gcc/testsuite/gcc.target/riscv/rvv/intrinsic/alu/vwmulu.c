/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vwmulu_vv_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_vl31(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_vl31(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_vl31(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_vl31(vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4(vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_vl31(vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8(vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_vl31(vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_vl31(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_vl31(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_vl31(vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4(vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_vl31(vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8(vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_vl31(vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_vl31(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_vl31(vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4(vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_vl31(vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8(vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_vl31(vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_m_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_m_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_m_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_m_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_m_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_m_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_m_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_m_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_m_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_m_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_m_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_m_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_m_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_m_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_m_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_m_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_m_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_m_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_m_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_m_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_m_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_m_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_m_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_m_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_m_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_m_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_m_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_m_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_m_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_m_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_ta(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_ta_vl31(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_ta(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_ta_vl31(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_ta(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_ta_vl31(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_ta(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_ta_vl31(vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_ta(vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_ta_vl31(vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_ta(vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_ta_vl31(vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_ta(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_ta_vl31(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_ta(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_ta_vl31(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_ta(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_ta_vl31(vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_ta(vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_ta_vl31(vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_ta(vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_ta_vl31(vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_ta(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_ta_vl31(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_ta(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_ta_vl31(vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_ta(vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_ta_vl31(vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_ta(vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_ta(op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_ta_vl31(vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_ta(op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tu(vuint16mf4_t dest, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tu_vl31(vuint16mf4_t dest, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tu(vuint16mf2_t dest, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tu_vl31(vuint16mf2_t dest, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tu(vuint16m1_t dest, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tu_vl31(vuint16m1_t dest, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tu(vuint16m2_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tu_vl31(vuint16m2_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tu(vuint16m4_t dest, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tu_vl31(vuint16m4_t dest, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tu(vuint16m8_t dest, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tu_vl31(vuint16m8_t dest, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tu(vuint32mf2_t dest, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tu_vl31(vuint32mf2_t dest, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tu(vuint32m1_t dest, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tu_vl31(vuint32m1_t dest, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tu(vuint32m2_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tu_vl31(vuint32m2_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tu(vuint32m4_t dest, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tu_vl31(vuint32m4_t dest, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tu(vuint32m8_t dest, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tu_vl31(vuint32m8_t dest, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tu(vuint64m1_t dest, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tu_vl31(vuint64m1_t dest, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tu(vuint64m2_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tu_vl31(vuint64m2_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tu(vuint64m4_t dest, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tu_vl31(vuint64m4_t dest, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tu(vuint64m8_t dest, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tu_vl31(vuint64m8_t dest, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tama_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tama_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tama_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tama_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tama_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tama_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tama_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tama_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tama_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tama_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tama_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tama_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tama_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tama_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tama_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tamu_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tamu_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tamu_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tamu_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tamu_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tamu_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tamu_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tamu_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tamu_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tamu_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tamu_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tamu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tamu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tamu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tamu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tuma_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tuma_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tuma_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tuma_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tuma_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tuma_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tuma_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tuma_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tuma_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tuma_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tuma_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tuma_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tuma_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tuma_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tuma_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwmulu_vv_u16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tumu_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwmulu_vv_u16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tumu_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwmulu_vv_u16m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tumu_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwmulu_vv_u16m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tumu_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwmulu_vv_u16m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tumu_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwmulu_vv_u16m8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u16m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tumu_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwmulu_vv_u32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tumu_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwmulu_vv_u32m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tumu_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwmulu_vv_u32m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tumu_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwmulu_vv_u32m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tumu_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwmulu_vv_u32m8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tumu_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwmulu_vv_u64m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tumu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwmulu_vv_u64m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tumu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwmulu_vv_u64m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tumu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwmulu_vv_u64m8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vv_u64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tumu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vv_u16mf4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tama_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tama_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tama_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tama_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tama_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tama_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tama_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tama_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tama_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tama_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tama_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tama_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tama_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tama_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tama_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tamu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tamu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tamu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tamu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tamu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tamu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tamu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tamu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tamu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tamu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tamu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tamu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tamu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tamu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tamu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tuma_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tuma_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tuma_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tuma_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tuma_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tuma_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tuma_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tuma_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tuma_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tuma_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tuma_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tuma_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tuma_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tuma_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tuma_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tumu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tumu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tumu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tumu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tumu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tumu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tumu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tumu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tumu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tumu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tumu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tumu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tumu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tumu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tumu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_ta_vl32(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_ta_vl32(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_ta_vl32(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_ta_vl32(vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_ta_vl32(vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_ta_vl32(vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_ta_vl32(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_ta_vl32(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_ta_vl32(vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_ta_vl32(vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_ta_vl32(vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_ta_vl32(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_ta_vl32(vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_ta_vl32(vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_ta_vl32(vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_ta(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_tu_vl32(vuint16mf4_t dest, vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_tu_vl32(vuint16mf2_t dest, vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_tu_vl32(vuint16m1_t dest, vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_tu_vl32(vuint16m2_t dest, vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_tu_vl32(vuint16m4_t dest, vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_tu_vl32(vuint16m8_t dest, vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_tu_vl32(vuint32mf2_t dest, vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_tu_vl32(vuint32m1_t dest, vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_tu_vl32(vuint32m2_t dest, vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_tu_vl32(vuint32m4_t dest, vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_tu_vl32(vuint32m8_t dest, vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_tu_vl32(vuint64m1_t dest, vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_tu_vl32(vuint64m2_t dest, vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_tu_vl32(vuint64m4_t dest, vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_tu_vl32(vuint64m8_t dest, vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vv_u16mf4_vl32(vuint8mf8_t op1, vuint8mf8_t op2)
{
  return vwmulu_vv_u16mf4(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vv_u16mf2_vl32(vuint8mf4_t op1, vuint8mf4_t op2)
{
  return vwmulu_vv_u16mf2(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vv_u16m1_vl32(vuint8mf2_t op1, vuint8mf2_t op2)
{
  return vwmulu_vv_u16m1(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vv_u16m2_vl32(vuint8m1_t op1, vuint8m1_t op2)
{
  return vwmulu_vv_u16m2(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vv_u16m4_vl32(vuint8m2_t op1, vuint8m2_t op2)
{
  return vwmulu_vv_u16m4(op1, op2, 32);
}

/*
** test_vwmulu_vv_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vv_u16m8_vl32(vuint8m4_t op1, vuint8m4_t op2)
{
  return vwmulu_vv_u16m8(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vv_u32mf2_vl32(vuint16mf4_t op1, vuint16mf4_t op2)
{
  return vwmulu_vv_u32mf2(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vv_u32m1_vl32(vuint16mf2_t op1, vuint16mf2_t op2)
{
  return vwmulu_vv_u32m1(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vv_u32m2_vl32(vuint16m1_t op1, vuint16m1_t op2)
{
  return vwmulu_vv_u32m2(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vv_u32m4_vl32(vuint16m2_t op1, vuint16m2_t op2)
{
  return vwmulu_vv_u32m4(op1, op2, 32);
}

/*
** test_vwmulu_vv_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vv_u32m8_vl32(vuint16m4_t op1, vuint16m4_t op2)
{
  return vwmulu_vv_u32m8(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vv_u64m1_vl32(vuint32mf2_t op1, vuint32mf2_t op2)
{
  return vwmulu_vv_u64m1(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vv_u64m2_vl32(vuint32m1_t op1, vuint32m1_t op2)
{
  return vwmulu_vv_u64m2(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vv_u64m4_vl32(vuint32m2_t op1, vuint32m2_t op2)
{
  return vwmulu_vv_u64m4(op1, op2, 32);
}

/*
** test_vwmulu_vv_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vv_u64m8_vl32(vuint32m4_t op1, vuint32m4_t op2)
{
  return vwmulu_vv_u64m8(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4(vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_vl31(vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2(vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_vl31(vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1(vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_vl31(vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2(vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_vl31(vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4(vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_vl31(vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8(vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_vl31(vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2(vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_vl31(vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1(vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_vl31(vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2(vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_vl31(vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4(vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_vl31(vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8(vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_vl31(vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1(vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_vl31(vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2(vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_vl31(vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4(vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_vl31(vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8(vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_vl31(vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_m_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_m_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_m_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_m_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_m_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_m_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_m_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_m_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_m_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_m_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_m_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_m_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_m_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_m_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_m_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_m_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_m_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_m_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_m_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_m_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_m_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_m_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_m_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_m_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_m_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_m_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_m_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_m_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_m_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_m_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_ta(vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_ta_vl31(vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_ta(vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_ta_vl31(vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_ta(vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_ta_vl31(vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_ta(vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_ta_vl31(vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_ta(vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_ta_vl31(vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_ta(vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_ta_vl31(vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_ta(vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_ta_vl31(vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_ta(vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_ta_vl31(vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_ta(vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_ta_vl31(vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_ta(vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_ta_vl31(vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_ta(vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_ta_vl31(vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_ta(vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_ta_vl31(vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_ta(vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_ta_vl31(vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_ta(vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_ta_vl31(vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_ta(vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_ta(op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_ta_vl31(vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_ta(op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tu(vuint16mf4_t dest, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tu_vl31(vuint16mf4_t dest, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tu(vuint16mf2_t dest, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tu_vl31(vuint16mf2_t dest, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tu(vuint16m1_t dest, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tu_vl31(vuint16m1_t dest, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tu(vuint16m2_t dest, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tu_vl31(vuint16m2_t dest, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tu(vuint16m4_t dest, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tu_vl31(vuint16m4_t dest, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tu(vuint16m8_t dest, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tu_vl31(vuint16m8_t dest, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tu(vuint32mf2_t dest, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tu_vl31(vuint32mf2_t dest, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tu(vuint32m1_t dest, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tu_vl31(vuint32m1_t dest, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tu(vuint32m2_t dest, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tu_vl31(vuint32m2_t dest, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tu(vuint32m4_t dest, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tu_vl31(vuint32m4_t dest, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tu(vuint32m8_t dest, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tu_vl31(vuint32m8_t dest, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tu(vuint64m1_t dest, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tu_vl31(vuint64m1_t dest, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tu(vuint64m2_t dest, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tu_vl31(vuint64m2_t dest, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tu(vuint64m4_t dest, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tu_vl31(vuint64m4_t dest, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tu(vuint64m8_t dest, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_tu(dest, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tu_vl31(vuint64m8_t dest, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tu(dest, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tama_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tama_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tama_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tama_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tama_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tama_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tama_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tama_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tama_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tama_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tama_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tama_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tama_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tama_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_tama(mask, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tama_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tama(mask, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tamu_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tamu_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tamu_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tamu_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tamu_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tamu_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tamu_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tamu_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tamu_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tamu_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tamu_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tamu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tamu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tamu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_tamu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tamu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tamu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tuma_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tuma_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tuma_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tuma_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tuma_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tuma_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tuma_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tuma_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tuma_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tuma_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tuma_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tuma_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tuma_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tuma_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_tuma(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tuma_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tuma(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tumu_vl31(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tumu_vl31(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tumu_vl31(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tumu_vl31(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tumu_vl31(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwmulu_vx_u16m8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u16m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tumu_vl31(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32mf2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tumu_vl31(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tumu_vl31(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tumu_vl31(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tumu_vl31(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwmulu_vx_u32m8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tumu_vl31(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m1_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tumu_vl31(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m2_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tumu_vl31(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m4_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tumu_vl31(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwmulu_vx_u64m8_tumu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vwmulu_vx_u64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tumu_vl31(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tumu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vwmulu_vx_u16mf4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tama_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tama_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tama_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tama_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tama_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tama_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tama_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tama_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tama_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tama_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tama_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tama_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tama_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tama_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tama_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tama(mask, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tamu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tamu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tamu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tamu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tamu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tamu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tamu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tamu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tamu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tamu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tamu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tamu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tamu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tamu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tamu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tamu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tuma_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tuma_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tuma_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tuma_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tuma_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tuma_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tuma_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tuma_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tuma_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tuma_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tuma_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tuma_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tuma_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tuma_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tuma_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tuma(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tumu_vl32(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tumu_vl32(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tumu_vl32(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tumu_vl32(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tumu_vl32(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tumu_vl32(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tumu_vl32(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tumu_vl32(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tumu_vl32(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tumu_vl32(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tumu_vl32(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tumu_vl32(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tumu_vl32(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tumu_vl32(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tumu_vl32(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tumu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_ta_vl32(vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_ta_vl32(vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_ta_vl32(vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_ta_vl32(vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_ta_vl32(vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_ta_vl32(vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_ta_vl32(vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_ta_vl32(vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_ta_vl32(vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_ta_vl32(vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_ta_vl32(vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_ta_vl32(vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_ta_vl32(vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_ta_vl32(vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_ta_vl32(vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_ta(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_tu_vl32(vuint16mf4_t dest, vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_tu_vl32(vuint16mf2_t dest, vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_tu_vl32(vuint16m1_t dest, vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_tu_vl32(vuint16m2_t dest, vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_tu_vl32(vuint16m4_t dest, vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_tu_vl32(vuint16m8_t dest, vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_tu_vl32(vuint32mf2_t dest, vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_tu_vl32(vuint32m1_t dest, vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_tu_vl32(vuint32m2_t dest, vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_tu_vl32(vuint32m4_t dest, vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_tu_vl32(vuint32m8_t dest, vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_tu_vl32(vuint64m1_t dest, vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_tu_vl32(vuint64m2_t dest, vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_tu_vl32(vuint64m4_t dest, vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_tu_vl32(vuint64m8_t dest, vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8_tu(dest, op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4_t 
test_vwmulu_vx_u16mf4_vl32(vuint8mf8_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf4(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2_t 
test_vwmulu_vx_u16mf2_vl32(vuint8mf4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16mf2(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1_t 
test_vwmulu_vx_u16m1_vl32(vuint8mf2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m1(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2_t 
test_vwmulu_vx_u16m2_vl32(vuint8m1_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m2(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4_t 
test_vwmulu_vx_u16m4_vl32(vuint8m2_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m4(op1, op2, 32);
}

/*
** test_vwmulu_vx_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m8_t 
test_vwmulu_vx_u16m8_vl32(vuint8m4_t op1, uint8_t op2)
{
  return vwmulu_vx_u16m8(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2_t 
test_vwmulu_vx_u32mf2_vl32(vuint16mf4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32mf2(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1_t 
test_vwmulu_vx_u32m1_vl32(vuint16mf2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m1(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2_t 
test_vwmulu_vx_u32m2_vl32(vuint16m1_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m2(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4_t 
test_vwmulu_vx_u32m4_vl32(vuint16m2_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m4(op1, op2, 32);
}

/*
** test_vwmulu_vx_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m8_t 
test_vwmulu_vx_u32m8_vl32(vuint16m4_t op1, uint16_t op2)
{
  return vwmulu_vx_u32m8(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1_t 
test_vwmulu_vx_u64m1_vl32(vuint32mf2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m1(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2_t 
test_vwmulu_vx_u64m2_vl32(vuint32m1_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m2(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4_t 
test_vwmulu_vx_u64m4_vl32(vuint32m2_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m4(op1, op2, 32);
}

/*
** test_vwmulu_vx_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwmulu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m8_t 
test_vwmulu_vx_u64m8_vl32(vuint32m4_t op1, uint32_t op2)
{
  return vwmulu_vx_u64m8(op1, op2, 32);
}

