/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vloxseg2ei32_v_u64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_ta (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_tu (vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_ta (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_tu (vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_ta (uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_tu (vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_tu (vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_tu (vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_tu (vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_tu (vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_tu (vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_tu (vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_ta (uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_tu (vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_tu (vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_tu (vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_tu (vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_tu (vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_tu (vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_tu (vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_ta (uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_tu (vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_ta (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_tu (vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_ta (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_tu (vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_ta (uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_tu (vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_ta (uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_tu (vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_tu (vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_tu (vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_tu (vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_u8m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_tu (vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg5ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_u8m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_tu (vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg6ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_u8m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_tu (vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg7ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_ta (uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_u8m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_tu (vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg8ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_ta (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_tu (vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_ta (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_tu (vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_ta (uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_tu (vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_ta (uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_tu (vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_ta (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u8m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_tu (vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_ta (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_u8m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_tu (vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg3ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_ta (uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_u8m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_tu (vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg4ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_ta (uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_u16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_tu (vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf8x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf8x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_tu (vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf8x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf8x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_tu (vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf8x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf8x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_tu (vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf8x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf8x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_tu (vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf8x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf8x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_tu (vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf8x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf8x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_tu (vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf8x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_ta (uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf8x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_tu (vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_tu (vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_tu (vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_tu (vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_tu (vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_tu (vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_tu (vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_ta (uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_tu (vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_tu (vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_tu (vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_tu (vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_tu (vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_tu (vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_tu (vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_ta (uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_tu (vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_tu (vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_tu (vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_tu (vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_tu (vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_tu (vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_tu (vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_ta (uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_tu (vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_tu (vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_tu (vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_tu (vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_tu (vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_tu (vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_tu (vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_ta (uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_tu (vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_tu (vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_tu (vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_tu (vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_tu (vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_tu (vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_tu (vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_ta (uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_tu (vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_tu (vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_tu (vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_tu (vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_tu (vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_tu (vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_tu (vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_ta (uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_tu (vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_ta (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_tu (vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_ta (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_tu (vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_ta (uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_tu (vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_tu (vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_tu (vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_tu (vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_tu (vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_tu (vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_tu (vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_ta (uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_tu (vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_tu (vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_tu (vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_tu (vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_tu (vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_tu (vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_tu (vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_ta (uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_tu (vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_ta (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_tu (vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_ta (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_tu (vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_ta (uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_tu (vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_ta (uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_tu (vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u8m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_tu (vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u8m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_tu (vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u8m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_tu (vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_u8m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_tu (vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg5ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_u8m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_tu (vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg6ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_u8m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_tu (vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg7ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_ta (uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_u8m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_tu (vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg8ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_ta (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_tu (vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_ta (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_u16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_tu (vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_ta (uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_u16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_tu (vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_ta (uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_u32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_tu (vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64_tu (dest, base, bindex, vl);
}



