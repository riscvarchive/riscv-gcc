/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vwaddu_vv_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4(vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8(vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4(vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8(vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4(vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8(vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_ta(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_ta(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_ta(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_ta(vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_ta(vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_ta(vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_ta(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_ta(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_ta(vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_ta(vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_ta(vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_ta(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_ta(vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_ta(vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_ta(vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv_ta(op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_tu(vuint16mf4_t dest, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_tu(vuint16mf2_t dest, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_tu(vuint16m1_t dest, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_tu(vuint16m2_t dest, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_tu(vuint16m4_t dest, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_tu(vuint16m8_t dest, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_tu(vuint32mf2_t dest, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_tu(vuint32m1_t dest, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_tu(vuint32m2_t dest, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_tu(vuint32m4_t dest, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_tu(vuint32m8_t dest, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_tu(vuint64m1_t dest, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_tu(vuint64m2_t dest, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_tu(vuint64m4_t dest, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_tu(vuint64m8_t dest, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vv_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vv_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vv_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vv_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vv_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vv_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vv_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vv_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vv_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vv_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vv_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vv_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vv_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_vv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4(vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2(vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1(vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2(vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4(vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8(vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2(vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1(vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2(vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4(vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8(vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1(vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2(vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4(vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8(vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_ta(vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_ta(vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_ta(vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_ta(vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_ta(vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_ta(vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_ta(vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_ta(vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_ta(vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_ta(vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_ta(vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_ta(vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_ta(vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_ta(vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_ta(vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_ta(op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_tu(vuint16mf4_t dest, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_tu(vuint16mf2_t dest, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_tu(vuint16m1_t dest, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_tu(vuint16m2_t dest, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_tu(vuint16m4_t dest, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_tu(vuint16m8_t dest, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_tu(vuint32mf2_t dest, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_tu(vuint32m1_t dest, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_tu(vuint32m2_t dest, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_tu(vuint32m4_t dest, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_tu(vuint32m8_t dest, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_tu(vuint64m1_t dest, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_tu(vuint64m2_t dest, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_tu(vuint64m4_t dest, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_tu(vuint64m8_t dest, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_vx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_vx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_vx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_vx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_vx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_vx_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_vx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_vx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_vx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_vx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_vx_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_vx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_vx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_vx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_vx_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.vx\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_vx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_vx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4(vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2(vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1(vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2(vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4(vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8(vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2(vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1(vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2(vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4(vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8(vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1(vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2(vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4(vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8(vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_ta(vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_ta(vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_ta(vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_ta(vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_ta(vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_ta(vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_ta(vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_ta(vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_ta(vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_ta(vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_ta(vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_ta(vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_ta(vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_ta(vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_ta(vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv_ta(op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wv_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint8mf8_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wv_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint8mf4_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wv_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint8mf2_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wv_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint8m1_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wv_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint8m2_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wv_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint8m4_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wv_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint16mf4_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wv_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint16mf2_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wv_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint16m1_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wv_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint16m2_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wv_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint16m4_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wv_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint32mf2_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wv_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint32m1_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wv_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint32m2_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wv_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.wv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wv_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint32m4_t op2, size_t vl)
{
  return vwaddu_wv_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4(vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2(vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1(vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2(vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4(vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8(vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2(vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1(vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2(vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4(vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8(vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1(vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2(vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4(vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8(vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_ta(vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_ta(vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_ta(vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_ta(vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_ta(vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_ta(vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_ta(vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_ta(vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_ta(vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_ta(vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_ta(vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_ta(vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_ta(vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_ta(vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_ta(vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_ta(op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_tu(vuint16mf4_t dest, vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_tu(vuint16mf2_t dest, vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_tu(vuint16m1_t dest, vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_tu(vuint16m2_t dest, vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_tu(vuint16m4_t dest, vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_tu(vuint16m8_t dest, vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_tu(vuint32mf2_t dest, vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_tu(vuint32m1_t dest, vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_tu(vuint32m2_t dest, vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_tu(vuint32m4_t dest, vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_tu(vuint32m8_t dest, vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_tu(vuint64m1_t dest, vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_tu(vuint64m2_t dest, vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_tu(vuint64m4_t dest, vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_tu(vuint64m8_t dest, vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tu(dest, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tama(mask, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tamu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tuma(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t 
test_vwaddu_wx_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t 
test_vwaddu_wx_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vwaddu_wx_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t 
test_vwaddu_wx_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vwaddu_wx_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vwaddu_wx_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint8_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t 
test_vwaddu_wx_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vwaddu_wx_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t 
test_vwaddu_wx_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vwaddu_wx_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vwaddu_wx_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint16_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vwaddu_wx_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t 
test_vwaddu_wx_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vwaddu_wx_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}


/*
** test_vwaddu_wx_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vwaddu\.wx\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vwaddu_wx_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint32_t op2, size_t vl)
{
  return vwaddu_wx_tumu(mask, maskedoff, op1, op2, vl);
}

