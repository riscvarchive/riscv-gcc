
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmslt_vv_i8mf8_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64(vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmslt_vv_i8mf8_b64(op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf8_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_vl31(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64(op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf8_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_vl32(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64(op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf4_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32(vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmslt_vv_i8mf4_b32(op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf4_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_vl31(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32(op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf4_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_vl32(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32(op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf2_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16(vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmslt_vv_i8mf2_b16(op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf2_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_vl31(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16(op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf2_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_vl32(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16(op1, op2, 32);
}

/*
** test_vmslt_vv_i8m1_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8(vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmslt_vv_i8m1_b8(op1, op2, vl);
}

/*
** test_vmslt_vv_i8m1_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_vl31(vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8(op1, op2, 31);
}

/*
** test_vmslt_vv_i8m1_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_vl32(vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8(op1, op2, 32);
}

/*
** test_vmslt_vv_i8m2_b4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4(vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmslt_vv_i8m2_b4(op1, op2, vl);
}

/*
** test_vmslt_vv_i8m2_b4_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_vl31(vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4(op1, op2, 31);
}

/*
** test_vmslt_vv_i8m2_b4_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_vl32(vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4(op1, op2, 32);
}

/*
** test_vmslt_vv_i8m4_b2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2(vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmslt_vv_i8m4_b2(op1, op2, vl);
}

/*
** test_vmslt_vv_i8m4_b2_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_vl31(vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2(op1, op2, 31);
}

/*
** test_vmslt_vv_i8m4_b2_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_vl32(vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2(op1, op2, 32);
}

/*
** test_vmslt_vv_i8m8_b1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1(vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmslt_vv_i8m8_b1(op1, op2, vl);
}

/*
** test_vmslt_vv_i8m8_b1_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_vl31(vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1(op1, op2, 31);
}

/*
** test_vmslt_vv_i8m8_b1_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_vl32(vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1(op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf4_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64(vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmslt_vv_i16mf4_b64(op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf4_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_vl31(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64(op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf4_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_vl32(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64(op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf2_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32(vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmslt_vv_i16mf2_b32(op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf2_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_vl31(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32(op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf2_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_vl32(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32(op1, op2, 32);
}

/*
** test_vmslt_vv_i16m1_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16(vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmslt_vv_i16m1_b16(op1, op2, vl);
}

/*
** test_vmslt_vv_i16m1_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_vl31(vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16(op1, op2, 31);
}

/*
** test_vmslt_vv_i16m1_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_vl32(vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16(op1, op2, 32);
}

/*
** test_vmslt_vv_i16m2_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8(vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmslt_vv_i16m2_b8(op1, op2, vl);
}

/*
** test_vmslt_vv_i16m2_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_vl31(vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8(op1, op2, 31);
}

/*
** test_vmslt_vv_i16m2_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_vl32(vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8(op1, op2, 32);
}

/*
** test_vmslt_vv_i16m4_b4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4(vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmslt_vv_i16m4_b4(op1, op2, vl);
}

/*
** test_vmslt_vv_i16m4_b4_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_vl31(vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4(op1, op2, 31);
}

/*
** test_vmslt_vv_i16m4_b4_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_vl32(vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4(op1, op2, 32);
}

/*
** test_vmslt_vv_i16m8_b2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2(vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmslt_vv_i16m8_b2(op1, op2, vl);
}

/*
** test_vmslt_vv_i16m8_b2_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_vl31(vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2(op1, op2, 31);
}

/*
** test_vmslt_vv_i16m8_b2_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_vl32(vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2(op1, op2, 32);
}

/*
** test_vmslt_vv_i32mf2_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64(vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmslt_vv_i32mf2_b64(op1, op2, vl);
}

/*
** test_vmslt_vv_i32mf2_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_vl31(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64(op1, op2, 31);
}

/*
** test_vmslt_vv_i32mf2_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_vl32(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64(op1, op2, 32);
}

/*
** test_vmslt_vv_i32m1_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32(vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmslt_vv_i32m1_b32(op1, op2, vl);
}

/*
** test_vmslt_vv_i32m1_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_vl31(vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32(op1, op2, 31);
}

/*
** test_vmslt_vv_i32m1_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_vl32(vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32(op1, op2, 32);
}

/*
** test_vmslt_vv_i32m2_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16(vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmslt_vv_i32m2_b16(op1, op2, vl);
}

/*
** test_vmslt_vv_i32m2_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_vl31(vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16(op1, op2, 31);
}

/*
** test_vmslt_vv_i32m2_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_vl32(vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16(op1, op2, 32);
}

/*
** test_vmslt_vv_i32m4_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8(vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmslt_vv_i32m4_b8(op1, op2, vl);
}

/*
** test_vmslt_vv_i32m4_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_vl31(vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8(op1, op2, 31);
}

/*
** test_vmslt_vv_i32m4_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_vl32(vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8(op1, op2, 32);
}

/*
** test_vmslt_vv_i32m8_b4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4(vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmslt_vv_i32m8_b4(op1, op2, vl);
}

/*
** test_vmslt_vv_i32m8_b4_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_vl31(vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4(op1, op2, 31);
}

/*
** test_vmslt_vv_i32m8_b4_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_vl32(vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4(op1, op2, 32);
}

/*
** test_vmslt_vv_i64m1_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64(vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmslt_vv_i64m1_b64(op1, op2, vl);
}

/*
** test_vmslt_vv_i64m1_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_vl31(vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64(op1, op2, 31);
}

/*
** test_vmslt_vv_i64m1_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_vl32(vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64(op1, op2, 32);
}

/*
** test_vmslt_vv_i64m2_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32(vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmslt_vv_i64m2_b32(op1, op2, vl);
}

/*
** test_vmslt_vv_i64m2_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_vl31(vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32(op1, op2, 31);
}

/*
** test_vmslt_vv_i64m2_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_vl32(vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32(op1, op2, 32);
}

/*
** test_vmslt_vv_i64m4_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16(vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmslt_vv_i64m4_b16(op1, op2, vl);
}

/*
** test_vmslt_vv_i64m4_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_vl31(vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16(op1, op2, 31);
}

/*
** test_vmslt_vv_i64m4_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_vl32(vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16(op1, op2, 32);
}

/*
** test_vmslt_vv_i64m8_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8(vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmslt_vv_i64m8_b8(op1, op2, vl);
}

/*
** test_vmslt_vv_i64m8_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_vl31(vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8(op1, op2, 31);
}

/*
** test_vmslt_vv_i64m8_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_vl32(vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8(op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf8_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmslt_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf8_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf8_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf4_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmslt_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf4_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf4_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf2_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmslt_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf2_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf2_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m1_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmslt_vv_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m1_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m1_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m2_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmslt_vv_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m2_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m2_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m4_b2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmslt_vv_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m4_b2_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m4_b2_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m8_b1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmslt_vv_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m8_b1_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m8_b1_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf4_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmslt_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf4_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf4_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf2_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmslt_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf2_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf2_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m1_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmslt_vv_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m1_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m1_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m2_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmslt_vv_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m2_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m2_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m4_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmslt_vv_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m4_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m4_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m8_b2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmslt_vv_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m8_b2_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m8_b2_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32mf2_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmslt_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32mf2_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32mf2_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m1_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmslt_vv_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m1_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m1_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m2_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmslt_vv_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m2_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m2_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m4_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmslt_vv_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m4_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m4_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m8_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmslt_vv_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m8_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m8_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m1_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmslt_vv_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m1_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m1_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m2_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmslt_vv_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m2_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m2_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m4_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmslt_vv_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m4_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m4_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m8_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmslt_vv_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m8_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m8_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf8_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmslt_vv_i8mf8_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf8_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf8_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf4_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmslt_vv_i8mf4_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf4_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf4_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf2_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmslt_vv_i8mf2_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf2_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf2_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m1_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmslt_vv_i8m1_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m1_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m1_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m2_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_ma(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmslt_vv_i8m2_b4_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m2_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m2_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m4_b2_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_ma(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmslt_vv_i8m4_b2_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m4_b2_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_ma_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m4_b2_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_ma_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m8_b1_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_ma(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmslt_vv_i8m8_b1_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m8_b1_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_ma_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m8_b1_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_ma_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf4_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmslt_vv_i16mf4_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf4_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf4_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf2_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmslt_vv_i16mf2_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf2_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf2_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m1_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmslt_vv_i16m1_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m1_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m1_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m2_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmslt_vv_i16m2_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m2_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m2_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m4_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_ma(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmslt_vv_i16m4_b4_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m4_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m4_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m8_b2_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_ma(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmslt_vv_i16m8_b2_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m8_b2_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_ma_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m8_b2_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_ma_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i32mf2_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmslt_vv_i32mf2_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i32mf2_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i32mf2_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m1_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmslt_vv_i32m1_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m1_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m1_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m2_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmslt_vv_i32m2_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m2_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m2_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m4_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmslt_vv_i32m4_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m4_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m4_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m8_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_ma(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmslt_vv_i32m8_b4_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m8_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m8_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m1_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmslt_vv_i64m1_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m1_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m1_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m2_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmslt_vv_i64m2_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m2_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m2_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m4_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmslt_vv_i64m4_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m4_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m4_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m8_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmslt_vv_i64m8_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m8_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m8_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf8_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmslt_vv_i8mf8_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf8_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf8_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i8mf8_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmslt_vv_i8mf8_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf4_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmslt_vv_i8mf4_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf4_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf4_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i8mf4_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmslt_vv_i8mf4_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8mf2_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmslt_vv_i8mf2_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8mf2_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8mf2_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i8mf2_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmslt_vv_i8mf2_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m1_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmslt_vv_i8m1_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m1_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m1_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i8m1_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmslt_vv_i8m1_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m2_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmslt_vv_i8m2_b4_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m2_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m2_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i8m2_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmslt_vv_i8m2_b4_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m4_b2_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmslt_vv_i8m4_b2_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m4_b2_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_mu_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m4_b2_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i8m4_b2_mu_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmslt_vv_i8m4_b2_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i8m8_b1_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_mu(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmslt_vv_i8m8_b1_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i8m8_b1_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_mu_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i8m8_b1_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vv_i8m8_b1_mu_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmslt_vv_i8m8_b1_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf4_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmslt_vv_i16mf4_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf4_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf4_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i16mf4_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmslt_vv_i16mf4_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16mf2_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmslt_vv_i16mf2_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16mf2_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16mf2_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i16mf2_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmslt_vv_i16mf2_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m1_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmslt_vv_i16m1_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m1_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m1_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i16m1_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmslt_vv_i16m1_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m2_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmslt_vv_i16m2_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m2_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m2_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i16m2_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmslt_vv_i16m2_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m4_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmslt_vv_i16m4_b4_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m4_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m4_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i16m4_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmslt_vv_i16m4_b4_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i16m8_b2_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmslt_vv_i16m8_b2_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i16m8_b2_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_mu_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i16m8_b2_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vv_i16m8_b2_mu_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmslt_vv_i16m8_b2_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32mf2_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmslt_vv_i32mf2_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32mf2_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32mf2_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i32mf2_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmslt_vv_i32mf2_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m1_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmslt_vv_i32m1_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m1_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m1_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i32m1_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmslt_vv_i32m1_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m2_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmslt_vv_i32m2_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m2_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m2_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i32m2_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmslt_vv_i32m2_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m4_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmslt_vv_i32m4_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m4_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m4_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i32m4_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmslt_vv_i32m4_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i32m8_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmslt_vv_i32m8_b4_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i32m8_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i32m8_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vv_i32m8_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmslt_vv_i32m8_b4_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m1_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmslt_vv_i64m1_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m1_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m1_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vv_i64m1_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmslt_vv_i64m1_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m2_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmslt_vv_i64m2_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m2_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m2_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vv_i64m2_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmslt_vv_i64m2_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m4_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmslt_vv_i64m4_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m4_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m4_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vv_i64m4_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmslt_vv_i64m4_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vv_i64m8_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmslt_vv_i64m8_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vv_i64m8_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vv_i64m8_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vv_i64m8_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmslt_vv_i64m8_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf8_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64(vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf8_b64(op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_vl31(vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64(op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_vl32(vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64(op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf4_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32(vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf4_b32(op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_vl31(vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32(op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_vl32(vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32(op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf2_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16(vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf2_b16(op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_vl31(vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16(op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_vl32(vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16(op1, op2, 32);
}

/*
** test_vmslt_vx_i8m1_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8(vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m1_b8(op1, op2, vl);
}

/*
** test_vmslt_vx_i8m1_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_vl31(vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8(op1, op2, 31);
}

/*
** test_vmslt_vx_i8m1_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_vl32(vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8(op1, op2, 32);
}

/*
** test_vmslt_vx_i8m2_b4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4(vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m2_b4(op1, op2, vl);
}

/*
** test_vmslt_vx_i8m2_b4_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_vl31(vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4(op1, op2, 31);
}

/*
** test_vmslt_vx_i8m2_b4_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_vl32(vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4(op1, op2, 32);
}

/*
** test_vmslt_vx_i8m4_b2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2(vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m4_b2(op1, op2, vl);
}

/*
** test_vmslt_vx_i8m4_b2_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_vl31(vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2(op1, op2, 31);
}

/*
** test_vmslt_vx_i8m4_b2_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_vl32(vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2(op1, op2, 32);
}

/*
** test_vmslt_vx_i8m8_b1: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1(vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m8_b1(op1, op2, vl);
}

/*
** test_vmslt_vx_i8m8_b1_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_vl31(vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1(op1, op2, 31);
}

/*
** test_vmslt_vx_i8m8_b1_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_vl32(vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1(op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf4_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64(vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf4_b64(op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_vl31(vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64(op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_vl32(vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64(op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf2_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32(vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf2_b32(op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_vl31(vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32(op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_vl32(vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32(op1, op2, 32);
}

/*
** test_vmslt_vx_i16m1_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16(vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m1_b16(op1, op2, vl);
}

/*
** test_vmslt_vx_i16m1_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_vl31(vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16(op1, op2, 31);
}

/*
** test_vmslt_vx_i16m1_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_vl32(vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16(op1, op2, 32);
}

/*
** test_vmslt_vx_i16m2_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8(vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m2_b8(op1, op2, vl);
}

/*
** test_vmslt_vx_i16m2_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_vl31(vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8(op1, op2, 31);
}

/*
** test_vmslt_vx_i16m2_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_vl32(vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8(op1, op2, 32);
}

/*
** test_vmslt_vx_i16m4_b4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4(vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m4_b4(op1, op2, vl);
}

/*
** test_vmslt_vx_i16m4_b4_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_vl31(vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4(op1, op2, 31);
}

/*
** test_vmslt_vx_i16m4_b4_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_vl32(vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4(op1, op2, 32);
}

/*
** test_vmslt_vx_i16m8_b2: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2(vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m8_b2(op1, op2, vl);
}

/*
** test_vmslt_vx_i16m8_b2_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_vl31(vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2(op1, op2, 31);
}

/*
** test_vmslt_vx_i16m8_b2_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_vl32(vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2(op1, op2, 32);
}

/*
** test_vmslt_vx_i32mf2_b64: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64(vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32mf2_b64(op1, op2, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_vl31(vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64(op1, op2, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_vl32(vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64(op1, op2, 32);
}

/*
** test_vmslt_vx_i32m1_b32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32(vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m1_b32(op1, op2, vl);
}

/*
** test_vmslt_vx_i32m1_b32_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_vl31(vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32(op1, op2, 31);
}

/*
** test_vmslt_vx_i32m1_b32_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_vl32(vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32(op1, op2, 32);
}

/*
** test_vmslt_vx_i32m2_b16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16(vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m2_b16(op1, op2, vl);
}

/*
** test_vmslt_vx_i32m2_b16_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_vl31(vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16(op1, op2, 31);
}

/*
** test_vmslt_vx_i32m2_b16_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_vl32(vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16(op1, op2, 32);
}

/*
** test_vmslt_vx_i32m4_b8: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8(vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m4_b8(op1, op2, vl);
}

/*
** test_vmslt_vx_i32m4_b8_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_vl31(vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8(op1, op2, 31);
}

/*
** test_vmslt_vx_i32m4_b8_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_vl32(vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8(op1, op2, 32);
}

/*
** test_vmslt_vx_i32m8_b4: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4(vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m8_b4(op1, op2, vl);
}

/*
** test_vmslt_vx_i32m8_b4_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_vl31(vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4(op1, op2, 31);
}

/*
** test_vmslt_vx_i32m8_b4_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_vl32(vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4(op1, op2, 32);
}

/*
** test_vmslt_vx_i64m1_b64: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64(vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m1_b64(op1, op2, vl);
}

/*
** test_vmslt_vx_i64m1_b64_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_vl31(vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64(op1, op2, 31);
}

/*
** test_vmslt_vx_i64m1_b64_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_vl32(vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64(op1, op2, 32);
}

/*
** test_vmslt_vx_i64m2_b32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32(vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m2_b32(op1, op2, vl);
}

/*
** test_vmslt_vx_i64m2_b32_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_vl31(vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32(op1, op2, 31);
}

/*
** test_vmslt_vx_i64m2_b32_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_vl32(vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32(op1, op2, 32);
}

/*
** test_vmslt_vx_i64m4_b16: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16(vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m4_b16(op1, op2, vl);
}

/*
** test_vmslt_vx_i64m4_b16_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_vl31(vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16(op1, op2, 31);
}

/*
** test_vmslt_vx_i64m4_b16_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_vl32(vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16(op1, op2, 32);
}

/*
** test_vmslt_vx_i64m8_b8: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8(vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m8_b8(op1, op2, vl);
}

/*
** test_vmslt_vx_i64m8_b8_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_vl31(vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8(op1, op2, 31);
}

/*
** test_vmslt_vx_i64m8_b8_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_vl32(vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8(op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m1_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m1_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m1_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m2_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m2_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m2_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m4_b2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m4_b2_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m4_b2_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m8_b1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m8_b1_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m8_b1_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m1_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m1_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m1_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m2_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m2_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m2_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m4_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m4_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m4_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m8_b2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m8_b2_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m8_b2_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m1_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m1_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m1_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m2_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m2_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m2_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m4_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m4_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m4_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m8_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m8_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m8_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m1_b64_m: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m1_b64_m_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m1_b64_m_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m2_b32_m: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m2_b32_m_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m2_b32_m_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m4_b16_m: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m4_b16_m_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m4_b16_m_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m8_b8_m: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m8_b8_m_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m8_b8_m_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m1_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m1_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m1_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m2_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m2_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m2_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m4_b2_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m4_b2_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m4_b2_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m8_b1_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m8_b1_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m8_b1_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m1_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m1_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m1_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m2_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m2_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m2_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m4_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m4_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m4_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m8_b2_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m8_b2_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m8_b2_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m1_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m1_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m1_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m2_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m2_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m2_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m4_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m4_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m4_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m8_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m8_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m8_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m1_b64_ma: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m1_b64_ma_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m1_b64_ma_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m2_b32_ma: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m2_b32_ma_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m2_b32_ma_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m4_b16_ma: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m4_b16_ma_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m4_b16_ma_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m8_b8_ma: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m8_b8_ma_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m8_b8_ma_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m1_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m1_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m1_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m2_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m2_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m2_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m4_b2_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m4_b2_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m4_b2_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8m8_b1_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i8m8_b1_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i8m8_b1_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m1_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m1_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m1_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m2_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m2_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m2_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m4_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m4_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m4_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i16m8_b2_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i16m8_b2_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i16m8_b2_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m1_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m1_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m1_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m2_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m2_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m2_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m4_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m4_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m4_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i32m8_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i32m8_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i32m8_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m1_b64_mu: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m1_b64_mu_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m1_b64_mu_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m2_b32_mu: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m2_b32_mu_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m2_b32_mu_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m4_b16_mu: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m4_b16_mu_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m4_b16_mu_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i64m8_b8_mu: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmslt_vx_i64m8_b8_mu_vl31: {target riscv64-*-*}
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmslt_vx_i64m8_b8_mu_vl32: {target riscv64-*-*}
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m15(vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64(op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_16(vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64(op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_vl31_m15(vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64(op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_vl31_16(vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64(op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_vl32_m15(vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64(op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_vl32_16(vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64(op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m15(vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32(op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_16(vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32(op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_vl31_m15(vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32(op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_vl31_16(vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32(op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_vl32_m15(vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32(op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_vl32_16(vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32(op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m15(vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16(op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_16(vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16(op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_vl31_m15(vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16(op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_vl31_16(vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16(op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_vl32_m15(vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16(op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_vl32_16(vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16(op1, 16, 32);
}

/*
** test_vmslt_vx_i8m1_b8_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m15(vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8(op1, -15, vl);
}

/*
** test_vmslt_vx_i8m1_b8_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_16(vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8(op1, 16, vl);
}

/*
** test_vmslt_vx_i8m1_b8_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_vl31_m15(vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8(op1, -15, 31);
}

/*
** test_vmslt_vx_i8m1_b8_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_vl31_16(vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8(op1, 16, 31);
}

/*
** test_vmslt_vx_i8m1_b8_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_vl32_m15(vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8(op1, -15, 32);
}

/*
** test_vmslt_vx_i8m1_b8_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_vl32_16(vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8(op1, 16, 32);
}

/*
** test_vmslt_vx_i8m2_b4_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m15(vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4(op1, -15, vl);
}

/*
** test_vmslt_vx_i8m2_b4_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_16(vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4(op1, 16, vl);
}

/*
** test_vmslt_vx_i8m2_b4_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_vl31_m15(vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4(op1, -15, 31);
}

/*
** test_vmslt_vx_i8m2_b4_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_vl31_16(vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4(op1, 16, 31);
}

/*
** test_vmslt_vx_i8m2_b4_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_vl32_m15(vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4(op1, -15, 32);
}

/*
** test_vmslt_vx_i8m2_b4_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_vl32_16(vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4(op1, 16, 32);
}

/*
** test_vmslt_vx_i8m4_b2_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m15(vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2(op1, -15, vl);
}

/*
** test_vmslt_vx_i8m4_b2_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_16(vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2(op1, 16, vl);
}

/*
** test_vmslt_vx_i8m4_b2_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_vl31_m15(vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2(op1, -15, 31);
}

/*
** test_vmslt_vx_i8m4_b2_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_vl31_16(vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2(op1, 16, 31);
}

/*
** test_vmslt_vx_i8m4_b2_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_vl32_m15(vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2(op1, -15, 32);
}

/*
** test_vmslt_vx_i8m4_b2_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_vl32_16(vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2(op1, 16, 32);
}

/*
** test_vmslt_vx_i8m8_b1_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m15(vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1(op1, -15, vl);
}

/*
** test_vmslt_vx_i8m8_b1_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_16(vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1(op1, 16, vl);
}

/*
** test_vmslt_vx_i8m8_b1_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_vl31_m15(vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1(op1, -15, 31);
}

/*
** test_vmslt_vx_i8m8_b1_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_vl31_16(vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1(op1, 16, 31);
}

/*
** test_vmslt_vx_i8m8_b1_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_vl32_m15(vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1(op1, -15, 32);
}

/*
** test_vmslt_vx_i8m8_b1_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_vl32_16(vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1(op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m15(vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64(op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_16(vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64(op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_vl31_m15(vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64(op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_vl31_16(vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64(op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_vl32_m15(vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64(op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_vl32_16(vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64(op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m15(vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32(op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_16(vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32(op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_vl31_m15(vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32(op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_vl31_16(vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32(op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_vl32_m15(vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32(op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_vl32_16(vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32(op1, 16, 32);
}

/*
** test_vmslt_vx_i16m1_b16_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m15(vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16(op1, -15, vl);
}

/*
** test_vmslt_vx_i16m1_b16_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_16(vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16(op1, 16, vl);
}

/*
** test_vmslt_vx_i16m1_b16_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_vl31_m15(vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16(op1, -15, 31);
}

/*
** test_vmslt_vx_i16m1_b16_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_vl31_16(vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16(op1, 16, 31);
}

/*
** test_vmslt_vx_i16m1_b16_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_vl32_m15(vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16(op1, -15, 32);
}

/*
** test_vmslt_vx_i16m1_b16_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_vl32_16(vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16(op1, 16, 32);
}

/*
** test_vmslt_vx_i16m2_b8_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m15(vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8(op1, -15, vl);
}

/*
** test_vmslt_vx_i16m2_b8_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_16(vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8(op1, 16, vl);
}

/*
** test_vmslt_vx_i16m2_b8_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_vl31_m15(vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8(op1, -15, 31);
}

/*
** test_vmslt_vx_i16m2_b8_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_vl31_16(vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8(op1, 16, 31);
}

/*
** test_vmslt_vx_i16m2_b8_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_vl32_m15(vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8(op1, -15, 32);
}

/*
** test_vmslt_vx_i16m2_b8_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_vl32_16(vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8(op1, 16, 32);
}

/*
** test_vmslt_vx_i16m4_b4_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m15(vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4(op1, -15, vl);
}

/*
** test_vmslt_vx_i16m4_b4_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_16(vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4(op1, 16, vl);
}

/*
** test_vmslt_vx_i16m4_b4_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_vl31_m15(vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4(op1, -15, 31);
}

/*
** test_vmslt_vx_i16m4_b4_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_vl31_16(vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4(op1, 16, 31);
}

/*
** test_vmslt_vx_i16m4_b4_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_vl32_m15(vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4(op1, -15, 32);
}

/*
** test_vmslt_vx_i16m4_b4_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_vl32_16(vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4(op1, 16, 32);
}

/*
** test_vmslt_vx_i16m8_b2_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m15(vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2(op1, -15, vl);
}

/*
** test_vmslt_vx_i16m8_b2_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_16(vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2(op1, 16, vl);
}

/*
** test_vmslt_vx_i16m8_b2_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_vl31_m15(vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2(op1, -15, 31);
}

/*
** test_vmslt_vx_i16m8_b2_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_vl31_16(vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2(op1, 16, 31);
}

/*
** test_vmslt_vx_i16m8_b2_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_vl32_m15(vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2(op1, -15, 32);
}

/*
** test_vmslt_vx_i16m8_b2_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_vl32_16(vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2(op1, 16, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m15(vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64(op1, -15, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_16(vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64(op1, 16, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_vl31_m15(vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64(op1, -15, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_vl31_16(vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64(op1, 16, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_vl32_m15(vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64(op1, -15, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_vl32_16(vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64(op1, 16, 32);
}

/*
** test_vmslt_vx_i32m1_b32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m15(vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32(op1, -15, vl);
}

/*
** test_vmslt_vx_i32m1_b32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_16(vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32(op1, 16, vl);
}

/*
** test_vmslt_vx_i32m1_b32_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_vl31_m15(vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32(op1, -15, 31);
}

/*
** test_vmslt_vx_i32m1_b32_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_vl31_16(vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32(op1, 16, 31);
}

/*
** test_vmslt_vx_i32m1_b32_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_vl32_m15(vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32(op1, -15, 32);
}

/*
** test_vmslt_vx_i32m1_b32_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_vl32_16(vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32(op1, 16, 32);
}

/*
** test_vmslt_vx_i32m2_b16_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m15(vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16(op1, -15, vl);
}

/*
** test_vmslt_vx_i32m2_b16_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_16(vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16(op1, 16, vl);
}

/*
** test_vmslt_vx_i32m2_b16_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_vl31_m15(vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16(op1, -15, 31);
}

/*
** test_vmslt_vx_i32m2_b16_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_vl31_16(vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16(op1, 16, 31);
}

/*
** test_vmslt_vx_i32m2_b16_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_vl32_m15(vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16(op1, -15, 32);
}

/*
** test_vmslt_vx_i32m2_b16_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_vl32_16(vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16(op1, 16, 32);
}

/*
** test_vmslt_vx_i32m4_b8_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m15(vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8(op1, -15, vl);
}

/*
** test_vmslt_vx_i32m4_b8_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_16(vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8(op1, 16, vl);
}

/*
** test_vmslt_vx_i32m4_b8_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_vl31_m15(vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8(op1, -15, 31);
}

/*
** test_vmslt_vx_i32m4_b8_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_vl31_16(vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8(op1, 16, 31);
}

/*
** test_vmslt_vx_i32m4_b8_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_vl32_m15(vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8(op1, -15, 32);
}

/*
** test_vmslt_vx_i32m4_b8_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_vl32_16(vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8(op1, 16, 32);
}

/*
** test_vmslt_vx_i32m8_b4_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m15(vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4(op1, -15, vl);
}

/*
** test_vmslt_vx_i32m8_b4_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_16(vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4(op1, 16, vl);
}

/*
** test_vmslt_vx_i32m8_b4_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_vl31_m15(vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4(op1, -15, 31);
}

/*
** test_vmslt_vx_i32m8_b4_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_vl31_16(vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4(op1, 16, 31);
}

/*
** test_vmslt_vx_i32m8_b4_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_vl32_m15(vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4(op1, -15, 32);
}

/*
** test_vmslt_vx_i32m8_b4_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_vl32_16(vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4(op1, 16, 32);
}

/*
** test_vmslt_vx_i64m1_b64_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m15(vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64(op1, -15, vl);
}

/*
** test_vmslt_vx_i64m1_b64_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_16(vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64(op1, 16, vl);
}

/*
** test_vmslt_vx_i64m1_b64_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_vl31_m15(vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64(op1, -15, 31);
}

/*
** test_vmslt_vx_i64m1_b64_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_vl31_16(vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64(op1, 16, 31);
}

/*
** test_vmslt_vx_i64m1_b64_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_vl32_m15(vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64(op1, -15, 32);
}

/*
** test_vmslt_vx_i64m1_b64_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_vl32_16(vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64(op1, 16, 32);
}

/*
** test_vmslt_vx_i64m2_b32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m15(vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32(op1, -15, vl);
}

/*
** test_vmslt_vx_i64m2_b32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_16(vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32(op1, 16, vl);
}

/*
** test_vmslt_vx_i64m2_b32_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_vl31_m15(vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32(op1, -15, 31);
}

/*
** test_vmslt_vx_i64m2_b32_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_vl31_16(vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32(op1, 16, 31);
}

/*
** test_vmslt_vx_i64m2_b32_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_vl32_m15(vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32(op1, -15, 32);
}

/*
** test_vmslt_vx_i64m2_b32_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_vl32_16(vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32(op1, 16, 32);
}

/*
** test_vmslt_vx_i64m4_b16_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m15(vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16(op1, -15, vl);
}

/*
** test_vmslt_vx_i64m4_b16_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_16(vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16(op1, 16, vl);
}

/*
** test_vmslt_vx_i64m4_b16_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_vl31_m15(vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16(op1, -15, 31);
}

/*
** test_vmslt_vx_i64m4_b16_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_vl31_16(vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16(op1, 16, 31);
}

/*
** test_vmslt_vx_i64m4_b16_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_vl32_m15(vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16(op1, -15, 32);
}

/*
** test_vmslt_vx_i64m4_b16_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_vl32_16(vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16(op1, 16, 32);
}

/*
** test_vmslt_vx_i64m8_b8_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m15(vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8(op1, -15, vl);
}

/*
** test_vmslt_vx_i64m8_b8_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_16(vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8(op1, 16, vl);
}

/*
** test_vmslt_vx_i64m8_b8_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_vl31_m15(vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8(op1, -15, 31);
}

/*
** test_vmslt_vx_i64m8_b8_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_vl31_16(vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8(op1, 16, 31);
}

/*
** test_vmslt_vx_i64m8_b8_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_vl32_m15(vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8(op1, -15, 32);
}

/*
** test_vmslt_vx_i64m8_b8_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_vl32_16(vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8(op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m1_b8_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m1_b8_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m1_b8_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m1_b8_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m1_b8_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m1_b8_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m2_b4_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m2_b4_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m2_b4_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m2_b4_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m2_b4_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m2_b4_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_m_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m4_b2_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m4_b2_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m4_b2_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_vl31_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m4_b2_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_vl31_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m4_b2_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m4_b2_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_m_vl32_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m8_b1_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m8_b1_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m8_b1_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_vl31_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m8_b1_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_vl31_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m8_b1_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_vl32_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m8_b1_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_m_vl32_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m1_b16_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m1_b16_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m1_b16_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m1_b16_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m1_b16_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m1_b16_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m2_b8_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m2_b8_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m2_b8_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m2_b8_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m2_b8_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m2_b8_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m4_b4_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m4_b4_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m4_b4_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m4_b4_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m4_b4_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m4_b4_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_m_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m8_b2_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m8_b2_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m8_b2_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_vl31_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m8_b2_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_vl31_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m8_b2_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m8_b2_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_m_vl32_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m1_b32_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m1_b32_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m1_b32_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m1_b32_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m1_b32_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m1_b32_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m2_b16_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m2_b16_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m2_b16_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m2_b16_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m2_b16_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m2_b16_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m4_b8_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m4_b8_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m4_b8_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m4_b8_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m4_b8_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m4_b8_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m8_b4_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m8_b4_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m8_b4_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m8_b4_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m8_b4_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m8_b4_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_m_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m1_b64_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m1_b64_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m1_b64_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m1_b64_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m1_b64_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m1_b64_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_m_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m2_b32_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m2_b32_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m2_b32_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m2_b32_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m2_b32_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m2_b32_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_m_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m4_b16_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m4_b16_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m4_b16_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m4_b16_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m4_b16_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m4_b16_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_m_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m8_b8_m_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m8_b8_m_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m8_b8_m_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m8_b8_m_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m8_b8_m_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m8_b8_m_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_m_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_m(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_ma_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_ma_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_ma_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m1_b8_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m1_b8_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m1_b8_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m1_b8_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m1_b8_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m1_b8_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_ma_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m2_b4_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m2_b4_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m2_b4_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m2_b4_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m2_b4_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m2_b4_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_ma_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m4_b2_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m4_b2_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m4_b2_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_vl31_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m4_b2_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_vl31_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m4_b2_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m4_b2_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_ma_vl32_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m8_b1_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m8_b1_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m8_b1_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_vl31_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m8_b1_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_vl31_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m8_b1_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_vl32_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m8_b1_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_ma_vl32_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_ma_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_ma_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m1_b16_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m1_b16_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m1_b16_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m1_b16_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m1_b16_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m1_b16_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_ma_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m2_b8_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m2_b8_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m2_b8_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m2_b8_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m2_b8_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m2_b8_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_ma_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m4_b4_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m4_b4_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m4_b4_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m4_b4_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m4_b4_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m4_b4_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_ma_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m8_b2_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m8_b2_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m8_b2_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_vl31_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m8_b2_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_vl31_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m8_b2_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m8_b2_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_ma_vl32_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_ma_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m1_b32_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m1_b32_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m1_b32_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m1_b32_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m1_b32_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m1_b32_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_ma_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m2_b16_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m2_b16_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m2_b16_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m2_b16_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m2_b16_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m2_b16_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_ma_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m4_b8_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m4_b8_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m4_b8_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m4_b8_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m4_b8_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m4_b8_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_ma_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m8_b4_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m8_b4_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m8_b4_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m8_b4_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m8_b4_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m8_b4_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_ma_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m1_b64_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m1_b64_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m1_b64_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m1_b64_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m1_b64_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m1_b64_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_ma_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m2_b32_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m2_b32_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m2_b32_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m2_b32_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m2_b32_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m2_b32_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_ma_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m4_b16_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m4_b16_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m4_b16_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m4_b16_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m4_b16_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m4_b16_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_ma_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m8_b8_ma_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m8_b8_ma_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m8_b8_ma_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m8_b8_ma_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m8_b8_ma_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m8_b8_ma_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*ma
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_ma_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_ma(mask, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf8_b64_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i8mf8_b64_mu_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmslt_vx_i8mf8_b64_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf4_b32_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i8mf4_b32_mu_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmslt_vx_i8mf4_b32_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8mf2_b16_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i8mf2_b16_mu_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmslt_vx_i8mf2_b16_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m1_b8_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m1_b8_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m1_b8_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m1_b8_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m1_b8_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m1_b8_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i8m1_b8_mu_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmslt_vx_i8m1_b8_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m2_b4_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m2_b4_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m2_b4_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m2_b4_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m2_b4_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m2_b4_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i8m2_b4_mu_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmslt_vx_i8m2_b4_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m4_b2_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m4_b2_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m4_b2_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_vl31_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m4_b2_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_vl31_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m4_b2_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m4_b2_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i8m4_b2_mu_vl32_16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmslt_vx_i8m4_b2_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i8m8_b1_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i8m8_b1_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i8m8_b1_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_vl31_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i8m8_b1_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_vl31_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i8m8_b1_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_vl32_m15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i8m8_b1_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool1_t 
test_vmslt_vx_i8m8_b1_mu_vl32_16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmslt_vx_i8m8_b1_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf4_b64_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i16mf4_b64_mu_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmslt_vx_i16mf4_b64_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16mf2_b32_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i16mf2_b32_mu_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmslt_vx_i16mf2_b32_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m1_b16_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m1_b16_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m1_b16_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m1_b16_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m1_b16_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m1_b16_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i16m1_b16_mu_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmslt_vx_i16m1_b16_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m2_b8_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m2_b8_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m2_b8_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m2_b8_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m2_b8_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m2_b8_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i16m2_b8_mu_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmslt_vx_i16m2_b8_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m4_b4_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m4_b4_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m4_b4_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m4_b4_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m4_b4_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m4_b4_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i16m4_b4_mu_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmslt_vx_i16m4_b4_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i16m8_b2_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i16m8_b2_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i16m8_b2_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_vl31_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i16m8_b2_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_vl31_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i16m8_b2_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_vl32_m15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i16m8_b2_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool2_t 
test_vmslt_vx_i16m8_b2_mu_vl32_16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmslt_vx_i16m8_b2_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32mf2_b64_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i32mf2_b64_mu_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmslt_vx_i32mf2_b64_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m1_b32_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m1_b32_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m1_b32_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m1_b32_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m1_b32_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m1_b32_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i32m1_b32_mu_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmslt_vx_i32m1_b32_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m2_b16_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m2_b16_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m2_b16_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m2_b16_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m2_b16_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m2_b16_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i32m2_b16_mu_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmslt_vx_i32m2_b16_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m4_b8_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m4_b8_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m4_b8_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m4_b8_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m4_b8_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m4_b8_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i32m4_b8_mu_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmslt_vx_i32m4_b8_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i32m8_b4_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i32m8_b4_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i32m8_b4_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_vl31_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i32m8_b4_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_vl31_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i32m8_b4_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_vl32_m15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i32m8_b4_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool4_t 
test_vmslt_vx_i32m8_b4_mu_vl32_16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmslt_vx_i32m8_b4_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m1_b64_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m1_b64_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m1_b64_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_vl31_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m1_b64_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_vl31_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m1_b64_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-15,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_vl32_m15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m1_b64_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*16,\s*v0\.t
**   ...
*/
vbool64_t 
test_vmslt_vx_i64m1_b64_mu_vl32_16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmslt_vx_i64m1_b64_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m2_b32_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m2_b32_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m2_b32_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_vl31_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m2_b32_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_vl31_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m2_b32_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-15,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_vl32_m15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m2_b32_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*16,\s*v0\.t
**   ...
*/
vbool32_t 
test_vmslt_vx_i64m2_b32_mu_vl32_16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmslt_vx_i64m2_b32_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m4_b16_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m4_b16_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m4_b16_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_vl31_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m4_b16_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_vl31_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m4_b16_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-15,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_vl32_m15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m4_b16_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*16,\s*v0\.t
**   ...
*/
vbool16_t 
test_vmslt_vx_i64m4_b16_mu_vl32_16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmslt_vx_i64m4_b16_mu(mask, maskedoff, op1, 16, 32);
}

/*
** test_vmslt_vx_i64m8_b8_mu_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, -15, vl);
}

/*
** test_vmslt_vx_i64m8_b8_mu_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, 16, vl);
}

/*
** test_vmslt_vx_i64m8_b8_mu_vl31_m15: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_vl31_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, -15, 31);
}

/*
** test_vmslt_vx_i64m8_b8_mu_vl31_16: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_vl31_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, 16, 31);
}

/*
** test_vmslt_vx_i64m8_b8_mu_vl32_m15: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-15,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_vl32_m15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, -15, 32);
}

/*
** test_vmslt_vx_i64m8_b8_mu_vl32_16: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**   ...
**   vmslt\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*16,\s*v0\.t
**   ...
*/
vbool8_t 
test_vmslt_vx_i64m8_b8_mu_vl32_16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmslt_vx_i64m8_b8_mu(mask, maskedoff, op1, 16, 32);
}
