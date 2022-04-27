
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" "" } } */

#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmsif_m_b64: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool64_t 
test_vmsif_m_b64(vbool64_t op1, size_t vl)
{
  return vmsif_m_b64(op1, vl);
}

/*
** test_vmsif_m_b64_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool64_t 
test_vmsif_m_b64_vl31(vbool64_t op1)
{
  return vmsif_m_b64(op1, 31);
}

/*
** test_vmsif_m_b64_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool64_t 
test_vmsif_m_b64_vl32(vbool64_t op1)
{
  return vmsif_m_b64(op1, 32);
}

/*
** test_vmsif_m_b32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool32_t 
test_vmsif_m_b32(vbool32_t op1, size_t vl)
{
  return vmsif_m_b32(op1, vl);
}

/*
** test_vmsif_m_b32_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool32_t 
test_vmsif_m_b32_vl31(vbool32_t op1)
{
  return vmsif_m_b32(op1, 31);
}

/*
** test_vmsif_m_b32_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool32_t 
test_vmsif_m_b32_vl32(vbool32_t op1)
{
  return vmsif_m_b32(op1, 32);
}

/*
** test_vmsif_m_b16: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool16_t 
test_vmsif_m_b16(vbool16_t op1, size_t vl)
{
  return vmsif_m_b16(op1, vl);
}

/*
** test_vmsif_m_b16_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool16_t 
test_vmsif_m_b16_vl31(vbool16_t op1)
{
  return vmsif_m_b16(op1, 31);
}

/*
** test_vmsif_m_b16_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool16_t 
test_vmsif_m_b16_vl32(vbool16_t op1)
{
  return vmsif_m_b16(op1, 32);
}

/*
** test_vmsif_m_b8: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool8_t 
test_vmsif_m_b8(vbool8_t op1, size_t vl)
{
  return vmsif_m_b8(op1, vl);
}

/*
** test_vmsif_m_b8_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool8_t 
test_vmsif_m_b8_vl31(vbool8_t op1)
{
  return vmsif_m_b8(op1, 31);
}

/*
** test_vmsif_m_b8_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool8_t 
test_vmsif_m_b8_vl32(vbool8_t op1)
{
  return vmsif_m_b8(op1, 32);
}

/*
** test_vmsif_m_b4: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool4_t 
test_vmsif_m_b4(vbool4_t op1, size_t vl)
{
  return vmsif_m_b4(op1, vl);
}

/*
** test_vmsif_m_b4_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool4_t 
test_vmsif_m_b4_vl31(vbool4_t op1)
{
  return vmsif_m_b4(op1, 31);
}

/*
** test_vmsif_m_b4_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool4_t 
test_vmsif_m_b4_vl32(vbool4_t op1)
{
  return vmsif_m_b4(op1, 32);
}

/*
** test_vmsif_m_b2: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool2_t 
test_vmsif_m_b2(vbool2_t op1, size_t vl)
{
  return vmsif_m_b2(op1, vl);
}

/*
** test_vmsif_m_b2_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool2_t 
test_vmsif_m_b2_vl31(vbool2_t op1)
{
  return vmsif_m_b2(op1, 31);
}

/*
** test_vmsif_m_b2_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool2_t 
test_vmsif_m_b2_vl32(vbool2_t op1)
{
  return vmsif_m_b2(op1, 32);
}

/*
** test_vmsif_m_b1: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool1_t 
test_vmsif_m_b1(vbool1_t op1, size_t vl)
{
  return vmsif_m_b1(op1, vl);
}

/*
** test_vmsif_m_b1_vl31: 
**      ...
**      vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool1_t 
test_vmsif_m_b1_vl31(vbool1_t op1)
{
  return vmsif_m_b1(op1, 31);
}

/*
** test_vmsif_m_b1_vl32: 
**      ...
**      vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**      ...
**      vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**      ...
*/
vbool1_t 
test_vmsif_m_b1_vl32(vbool1_t op1)
{
  return vmsif_m_b1(op1, 32);
}

/*
** test_vmsif_m_b64_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_m(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl)
{
  return vmsif_m_b64_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b64_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b64_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b32_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_m(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl)
{
  return vmsif_m_b32_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b32_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b32_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b16_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_m(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl)
{
  return vmsif_m_b16_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b16_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b16_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b8_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_m(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl)
{
  return vmsif_m_b8_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b8_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b8_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b4_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_m(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl)
{
  return vmsif_m_b4_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b4_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b4_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b2_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_m(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl)
{
  return vmsif_m_b2_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b2_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b2_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b1_m: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_m(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl)
{
  return vmsif_m_b1_m(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b1_m_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_m(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b1_m_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_m(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b64_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_ma(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl)
{
  return vmsif_m_b64_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b64_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_ma_vl31(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b64_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_ma_vl32(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b32_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_ma(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl)
{
  return vmsif_m_b32_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b32_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_ma_vl31(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b32_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_ma_vl32(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b16_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_ma(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl)
{
  return vmsif_m_b16_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b16_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_ma_vl31(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b16_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_ma_vl32(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b8_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_ma(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl)
{
  return vmsif_m_b8_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b8_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_ma_vl31(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b8_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_ma_vl32(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b4_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_ma(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl)
{
  return vmsif_m_b4_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b4_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_ma_vl31(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b4_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_ma_vl32(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b2_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_ma(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl)
{
  return vmsif_m_b2_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b2_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_ma_vl31(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b2_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_ma_vl32(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b1_ma: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_ma(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl)
{
  return vmsif_m_b1_ma(mask, op1, vl);
}

/*
** test_vmsif_m_b1_ma_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_ma_vl31(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_ma(mask, op1, 31);
}

/*
** test_vmsif_m_b1_ma_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*ma
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_ma_vl32(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_ma(mask, op1, 32);
}

/*
** test_vmsif_m_b64_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_mu(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1, size_t vl)
{
  return vmsif_m_b64_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b64_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_mu_vl31(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b64_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool64_t 
test_vmsif_m_b64_mu_vl32(vbool64_t mask, vbool64_t maskedoff, vbool64_t op1)
{
  return vmsif_m_b64_mu(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b32_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_mu(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1, size_t vl)
{
  return vmsif_m_b32_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b32_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_mu_vl31(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b32_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool32_t 
test_vmsif_m_b32_mu_vl32(vbool32_t mask, vbool32_t maskedoff, vbool32_t op1)
{
  return vmsif_m_b32_mu(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b16_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_mu(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1, size_t vl)
{
  return vmsif_m_b16_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b16_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_mu_vl31(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b16_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool16_t 
test_vmsif_m_b16_mu_vl32(vbool16_t mask, vbool16_t maskedoff, vbool16_t op1)
{
  return vmsif_m_b16_mu(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b8_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_mu(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1, size_t vl)
{
  return vmsif_m_b8_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b8_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_mu_vl31(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b8_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool8_t 
test_vmsif_m_b8_mu_vl32(vbool8_t mask, vbool8_t maskedoff, vbool8_t op1)
{
  return vmsif_m_b8_mu(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b4_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_mu(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1, size_t vl)
{
  return vmsif_m_b4_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b4_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_mu_vl31(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b4_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool4_t 
test_vmsif_m_b4_mu_vl32(vbool4_t mask, vbool4_t maskedoff, vbool4_t op1)
{
  return vmsif_m_b4_mu(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b2_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_mu(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1, size_t vl)
{
  return vmsif_m_b2_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b2_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_mu_vl31(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b2_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool2_t 
test_vmsif_m_b2_mu_vl32(vbool2_t mask, vbool2_t maskedoff, vbool2_t op1)
{
  return vmsif_m_b2_mu(mask, maskedoff, op1, 32);
}

/*
** test_vmsif_m_b1_mu: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_mu(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1, size_t vl)
{
  return vmsif_m_b1_mu(mask, maskedoff, op1, vl);
}

/*
** test_vmsif_m_b1_mu_vl31: 
**   ...
**   vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_mu_vl31(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_mu(mask, maskedoff, op1, 31);
}

/*
** test_vmsif_m_b1_mu_vl32: 
**   ...
**   vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**   ...
**   vmsif\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**   ...
*/
vbool1_t 
test_vmsif_m_b1_mu_vl32(vbool1_t mask, vbool1_t maskedoff, vbool1_t op1)
{
  return vmsif_m_b1_mu(mask, maskedoff, op1, 32);
}
