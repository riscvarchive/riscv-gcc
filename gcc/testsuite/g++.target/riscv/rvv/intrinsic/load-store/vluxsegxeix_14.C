/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vluxseg2ei8_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vluxseg2ei8_v_u8mf8x2 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vluxseg2ei8_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vluxseg3ei8_v_u8mf8x3 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vluxseg3ei8_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vluxseg4ei8_v_u8mf8x4 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vluxseg4ei8_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vluxseg5ei8_v_u8mf8x5 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vluxseg5ei8_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vluxseg6ei8_v_u8mf8x6 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vluxseg6ei8_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vluxseg7ei8_v_u8mf8x7 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vluxseg7ei8_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vluxseg8ei8_v_u8mf8x8 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vluxseg8ei8_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vluxseg2ei8_v_u16mf4x2 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vluxseg2ei8_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vluxseg3ei8_v_u16mf4x3 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vluxseg3ei8_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vluxseg4ei8_v_u16mf4x4 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vluxseg4ei8_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vluxseg5ei8_v_u16mf4x5 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vluxseg5ei8_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vluxseg6ei8_v_u16mf4x6 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vluxseg6ei8_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vluxseg7ei8_v_u16mf4x7 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vluxseg7ei8_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vluxseg8ei8_v_u16mf4x8 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vluxseg8ei8_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vluxseg2ei8_v_u32mf2x2 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vluxseg2ei8_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vluxseg3ei8_v_u32mf2x3 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vluxseg3ei8_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vluxseg4ei8_v_u32mf2x4 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vluxseg4ei8_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vluxseg5ei8_v_u32mf2x5 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vluxseg5ei8_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vluxseg6ei8_v_u32mf2x6 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vluxseg6ei8_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vluxseg7ei8_v_u32mf2x7 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vluxseg7ei8_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vluxseg8ei8_v_u32mf2x8 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vluxseg8ei8_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vluxseg2ei8_v_u64m1x2 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vluxseg2ei8_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vluxseg3ei8_v_u64m1x3 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vluxseg3ei8_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vluxseg4ei8_v_u64m1x4 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vluxseg4ei8_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vluxseg5ei8_v_u64m1x5 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vluxseg5ei8_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vluxseg6ei8_v_u64m1x6 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vluxseg6ei8_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vluxseg7ei8_v_u64m1x7 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vluxseg7ei8_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vluxseg8ei8_v_u64m1x8 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vluxseg8ei8_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vluxseg2ei8_v_u8mf4x2 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vluxseg2ei8_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vluxseg3ei8_v_u8mf4x3 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vluxseg3ei8_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vluxseg4ei8_v_u8mf4x4 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vluxseg4ei8_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vluxseg5ei8_v_u8mf4x5 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vluxseg5ei8_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vluxseg6ei8_v_u8mf4x6 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vluxseg6ei8_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vluxseg7ei8_v_u8mf4x7 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vluxseg7ei8_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vluxseg8ei8_v_u8mf4x8 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vluxseg8ei8_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vluxseg2ei8_v_u16mf2x2 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vluxseg2ei8_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vluxseg3ei8_v_u16mf2x3 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vluxseg3ei8_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vluxseg4ei8_v_u16mf2x4 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vluxseg4ei8_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vluxseg5ei8_v_u16mf2x5 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vluxseg5ei8_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vluxseg6ei8_v_u16mf2x6 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vluxseg6ei8_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vluxseg7ei8_v_u16mf2x7 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vluxseg7ei8_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vluxseg8ei8_v_u16mf2x8 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vluxseg8ei8_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vluxseg2ei8_v_u32m1x2 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vluxseg2ei8_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vluxseg3ei8_v_u32m1x3 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vluxseg3ei8_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vluxseg4ei8_v_u32m1x4 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vluxseg4ei8_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vluxseg5ei8_v_u32m1x5 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vluxseg5ei8_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vluxseg6ei8_v_u32m1x6 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vluxseg6ei8_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vluxseg7ei8_v_u32m1x7 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vluxseg7ei8_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vluxseg8ei8_v_u32m1x8 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vluxseg8ei8_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vluxseg2ei8_v_u64m2x2 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vluxseg2ei8_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vluxseg3ei8_v_u64m2x3 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vluxseg3ei8_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vluxseg4ei8_v_u64m2x4 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vluxseg4ei8_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vluxseg2ei8_v_u8mf2x2 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vluxseg2ei8_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vluxseg3ei8_v_u8mf2x3 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vluxseg3ei8_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vluxseg4ei8_v_u8mf2x4 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vluxseg4ei8_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vluxseg5ei8_v_u8mf2x5 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vluxseg5ei8_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vluxseg6ei8_v_u8mf2x6 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vluxseg6ei8_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vluxseg7ei8_v_u8mf2x7 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vluxseg7ei8_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vluxseg8ei8_v_u8mf2x8 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vluxseg8ei8_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vluxseg2ei8_v_u16m1x2 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vluxseg2ei8_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vluxseg3ei8_v_u16m1x3 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vluxseg3ei8_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vluxseg4ei8_v_u16m1x4 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vluxseg4ei8_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vluxseg5ei8_v_u16m1x5 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vluxseg5ei8_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vluxseg6ei8_v_u16m1x6 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vluxseg6ei8_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vluxseg7ei8_v_u16m1x7 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vluxseg7ei8_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vluxseg8ei8_v_u16m1x8 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vluxseg8ei8_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vluxseg2ei8_v_u32m2x2 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vluxseg2ei8_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vluxseg3ei8_v_u32m2x3 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vluxseg3ei8_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vluxseg4ei8_v_u32m2x4 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vluxseg4ei8_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vluxseg2ei8_v_u64m4x2 (uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vluxseg2ei8_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vluxseg2ei8_v_u8m1x2 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vluxseg2ei8_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vluxseg3ei8_v_u8m1x3 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vluxseg3ei8_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vluxseg4ei8_v_u8m1x4 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vluxseg4ei8_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vluxseg5ei8_v_u8m1x5 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg5ei8 (base, bindex, vl);
}


/*
** test_vluxseg5ei8_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vluxseg5ei8_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vluxseg6ei8_v_u8m1x6 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg6ei8 (base, bindex, vl);
}


/*
** test_vluxseg6ei8_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vluxseg6ei8_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vluxseg7ei8_v_u8m1x7 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg7ei8 (base, bindex, vl);
}


/*
** test_vluxseg7ei8_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vluxseg7ei8_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vluxseg8ei8_v_u8m1x8 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg8ei8 (base, bindex, vl);
}


/*
** test_vluxseg8ei8_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vluxseg8ei8_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vluxseg2ei8_v_u16m2x2 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vluxseg2ei8_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vluxseg3ei8_v_u16m2x3 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vluxseg3ei8_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vluxseg4ei8_v_u16m2x4 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vluxseg4ei8_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vluxseg2ei8_v_u32m4x2 (uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vluxseg2ei8_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vluxseg2ei8_v_u8m2x2 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vluxseg2ei8_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vluxseg3ei8_v_u8m2x3 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg3ei8 (base, bindex, vl);
}


/*
** test_vluxseg3ei8_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vluxseg3ei8_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vluxseg4ei8_v_u8m2x4 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg4ei8 (base, bindex, vl);
}


/*
** test_vluxseg4ei8_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vluxseg4ei8_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vluxseg2ei8_v_u16m4x2 (uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vluxseg2ei8_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vluxseg2ei8_v_u8m4x2 (uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vluxseg2ei8 (base, bindex, vl);
}


/*
** test_vluxseg2ei8_v_u8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vluxseg2ei8_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vluxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei16_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vluxseg2ei16_v_u8mf8x2 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16 (base, bindex, vl);
}


/*
** test_vluxseg2ei16_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vluxseg2ei16_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei16_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vluxseg3ei16_v_u8mf8x3 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16 (base, bindex, vl);
}


/*
** test_vluxseg3ei16_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vluxseg3ei16_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei16_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vluxseg4ei16_v_u8mf8x4 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16 (base, bindex, vl);
}


/*
** test_vluxseg4ei16_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vluxseg4ei16_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei16_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vluxseg5ei16_v_u8mf8x5 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16 (base, bindex, vl);
}


/*
** test_vluxseg5ei16_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vluxseg5ei16_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei16_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vluxseg6ei16_v_u8mf8x6 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16 (base, bindex, vl);
}


/*
** test_vluxseg6ei16_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vluxseg6ei16_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei16_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vluxseg7ei16_v_u8mf8x7 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16 (base, bindex, vl);
}


/*
** test_vluxseg7ei16_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vluxseg7ei16_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei16_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vluxseg8ei16_v_u8mf8x8 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16 (base, bindex, vl);
}


/*
** test_vluxseg8ei16_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vluxseg8ei16_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei16_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vluxseg2ei16_v_u16mf4x2 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16 (base, bindex, vl);
}


/*
** test_vluxseg2ei16_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vluxseg2ei16_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei16_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vluxseg3ei16_v_u16mf4x3 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16 (base, bindex, vl);
}


/*
** test_vluxseg3ei16_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vluxseg3ei16_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei16_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vluxseg4ei16_v_u16mf4x4 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16 (base, bindex, vl);
}


/*
** test_vluxseg4ei16_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vluxseg4ei16_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei16_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vluxseg5ei16_v_u16mf4x5 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16 (base, bindex, vl);
}


/*
** test_vluxseg5ei16_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vluxseg5ei16_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei16_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vluxseg6ei16_v_u16mf4x6 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16 (base, bindex, vl);
}


/*
** test_vluxseg6ei16_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vluxseg6ei16_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg7ei16_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vluxseg7ei16_v_u16mf4x7 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16 (base, bindex, vl);
}


/*
** test_vluxseg7ei16_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vluxseg7ei16_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg8ei16_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vluxseg8ei16_v_u16mf4x8 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16 (base, bindex, vl);
}


/*
** test_vluxseg8ei16_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vluxseg8ei16_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei16_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vluxseg2ei16_v_u32mf2x2 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16 (base, bindex, vl);
}


/*
** test_vluxseg2ei16_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vluxseg2ei16_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg3ei16_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vluxseg3ei16_v_u32mf2x3 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16 (base, bindex, vl);
}


/*
** test_vluxseg3ei16_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vluxseg3ei16_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg4ei16_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vluxseg4ei16_v_u32mf2x4 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16 (base, bindex, vl);
}


/*
** test_vluxseg4ei16_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vluxseg4ei16_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg5ei16_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vluxseg5ei16_v_u32mf2x5 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16 (base, bindex, vl);
}


/*
** test_vluxseg5ei16_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vluxseg5ei16_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg6ei16_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vluxseg6ei16_v_u32mf2x6 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16 (base, bindex, vl);
}


