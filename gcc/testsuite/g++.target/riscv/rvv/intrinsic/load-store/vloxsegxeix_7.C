/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vloxseg2ei16_v_u16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_tuma (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_u16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_tumu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_u8m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_tama (vbool2_t mask, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxseg2ei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_u8m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_tamu (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxseg2ei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_u8m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_tuma (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxseg2ei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_u8m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_tumu (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxseg2ei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf8x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf8x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_tamu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf8x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_tuma (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf8x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_tumu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf8x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf8x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_tamu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf8x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_tuma (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf8x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_tumu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf8x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf8x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_tamu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf8x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_tuma (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf8x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_tumu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf8x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf8x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_tamu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf8x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_tuma (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf8x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_tumu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf8x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf8x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_tamu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf8x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_tuma (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf8x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_tumu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf8x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf8x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_tamu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf8x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_tuma (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf8x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_tumu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf8x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf8x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_tamu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf8x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_tuma (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf8x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_tumu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_tamu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_tuma (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_tumu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_tamu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_tuma (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_tumu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_tamu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_tuma (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_tumu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_tamu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_tuma (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_tumu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_tamu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_tuma (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_tumu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_tamu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_tuma (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_tumu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_tamu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_tuma (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_tumu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_tamu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_tuma (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_tumu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_tamu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_tuma (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_tumu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_tamu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_tuma (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_tumu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_tamu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_tuma (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_tumu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_tamu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_tuma (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_tumu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_tamu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_tuma (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_tumu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_tamu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_tuma (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_tumu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_tamu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_tuma (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_tumu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_tamu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_tuma (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_tumu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_tamu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_tuma (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_tumu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_tamu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_tuma (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_tumu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_tamu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_tuma (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_tumu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_tamu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_tuma (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_tumu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_tamu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_tuma (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_tumu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_tamu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_tuma (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_tumu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_tamu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_tuma (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_tumu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_tamu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_tuma (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_tumu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_tamu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_tuma (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_tumu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_tamu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_tuma (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_tumu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_tamu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_tuma (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_tumu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_tamu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_tuma (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_tumu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_tamu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_tuma (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_tumu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_tamu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_tuma (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_tumu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_tamu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_tuma (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_tumu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_tamu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_tuma (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_tumu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_tamu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_tuma (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_tumu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_tamu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_tuma (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_tumu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_tamu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_tuma (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_tumu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_tamu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_tuma (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_tumu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_tamu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_tuma (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_tumu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_tamu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_tuma (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_tumu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_tamu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_tuma (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_tumu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_tamu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_tuma (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_tumu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_tamu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_tuma (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_tumu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_tamu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_tuma (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_tumu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_tama (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_tamu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_tuma (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_tumu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_tama (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_tamu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_tuma (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_tumu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_tama (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_tamu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_tuma (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_tumu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_tamu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_tuma (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_tumu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_tamu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_tuma (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_tumu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_tamu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_tuma (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_tumu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_tamu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_tuma (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_tumu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_tamu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_tuma (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_tumu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_tamu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_tuma (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_tumu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_tamu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_tuma (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_tumu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_tamu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_tuma (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_tumu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_tamu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_tuma (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_tumu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_tamu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_tuma (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_tumu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_tamu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_tuma (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_tumu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_tamu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_tuma (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_tumu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_tamu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_tuma (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_tumu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_tamu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_tuma (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_tumu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_tama (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_tamu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_tuma (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_tumu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_tama (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_tamu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_tuma (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_tumu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_tama (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_tamu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_tuma (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_tumu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_tama (vbool16_t mask, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_tamu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_tuma (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_tumu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_tamu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_tuma (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_tumu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_tamu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_tuma (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_tumu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_tamu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_tuma (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_tumu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_tamu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_tuma (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_tumu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_tamu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_tuma (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_tumu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_tamu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_tuma (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_tumu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_tamu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_tuma (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_tumu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_tama (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_tamu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_tuma (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_tumu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_tama (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_tamu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_tuma (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_tumu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_tama (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_tamu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_tuma (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_tumu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_tama (vbool8_t mask, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_tamu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_tuma (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_tumu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_tama (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_tamu (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_tuma (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_tumu (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_tama (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_tamu (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_tuma (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_tumu (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_tama (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_tamu (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_tuma (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_tumu (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_tama (vbool4_t mask, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_tamu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_tuma (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_tumu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf8x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf8x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_tamu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf8x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_tuma (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf8x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_tumu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf8x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf8x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_tamu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf8x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_tuma (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf8x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_tumu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf8x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf8x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_tamu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf8x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_tuma (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf8x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_tumu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf8x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf8x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_tamu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf8x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_tuma (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf8x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_tumu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf8x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf8x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_tamu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf8x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_tuma (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf8x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_tumu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf8x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf8x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_tamu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf8x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_tuma (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf8x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_tumu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf8x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf8x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_tamu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf8x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_tuma (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf8x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_tumu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_tamu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_tuma (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_tumu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_tamu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_tuma (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_tumu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_tamu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_tuma (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_tumu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_tamu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_tuma (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_tumu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_tamu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_tuma (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_tumu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_tamu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_tuma (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_tumu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_tamu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_tuma (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_tumu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_tamu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_tuma (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_tumu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_tamu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_tuma (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_tumu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_tamu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_tuma (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_tumu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_tamu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_tuma (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_tumu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_tamu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_tuma (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_tumu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_tamu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_tuma (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_tumu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_tamu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_tuma (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_tumu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_tamu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_tuma (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_tumu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_tamu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_tuma (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_tumu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_tamu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_tuma (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_tumu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_tamu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_tuma (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_tumu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_tamu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_tuma (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_tumu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_tamu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_tuma (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_tumu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_tamu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_tuma (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_tumu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_tamu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_tuma (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_tumu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_tamu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_tuma (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_tumu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_tamu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_tuma (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_tumu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_tamu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_tuma (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_tumu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_tamu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_tuma (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_tumu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_tamu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_tuma (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_tumu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_tamu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_tuma (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_tumu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_tamu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_tuma (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_tumu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_tamu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_tuma (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_tumu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_tamu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_tuma (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_tumu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_tamu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_tuma (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_tumu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_tamu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_tuma (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_tumu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_tamu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_tuma (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_tumu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_tamu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_tuma (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_tumu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_tamu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_tuma (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_tumu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_tamu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_tuma (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_tumu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_tamu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_tuma (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_tumu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_tamu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_tuma (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_tumu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_tamu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_tuma (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_tumu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_tamu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_tuma (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_tumu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_tamu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_tuma (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_tumu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_tama (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_tamu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_tuma (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_tumu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_tama (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_tamu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_tuma (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_tumu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_tama (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_tamu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_tuma (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_tumu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_tamu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_tuma (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_tumu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_tamu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_tuma (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_tumu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_tamu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_tuma (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_tumu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_tamu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_tuma (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_tumu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_tamu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_tuma (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_tumu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_tamu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_tuma (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_tumu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_tamu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_tuma (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_tumu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_tamu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_tuma (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_tumu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_tamu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_tuma (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_tumu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_tamu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_tuma (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_tumu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_tamu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_tuma (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_tumu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_tamu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_tuma (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_tumu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_tamu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_tuma (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_tumu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_tamu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_tuma (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_tumu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_tama (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_tamu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_tuma (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_tumu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_tama (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_tamu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_tuma (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_tumu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_tama (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_tamu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_tuma (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_tumu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_tama (vbool16_t mask, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_tamu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_tuma (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_tumu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_tamu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_tuma (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_tumu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_tamu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_tuma (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_tumu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_tamu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_tuma (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_tumu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_tamu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_tuma (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_tumu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_tamu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_tuma (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_tumu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_tamu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_tuma (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_tumu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_tamu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_tuma (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_tumu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_tama (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_tamu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_tuma (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_tumu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_tama (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_tamu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_tuma (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_tumu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_tama (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_tamu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_tuma (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_tumu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_tama (vbool8_t mask, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tama (mask, base, bindex, vl);
}


