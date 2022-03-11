/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vsoxseg6ei64_v_u8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg6ei64_v_u8m1x6_m_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x6_t v0)
{
  vsoxseg6ei64_v_u8m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsoxseg7ei64_v_u8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsoxseg7ei64_v_u8m1x7_vl32 (uint8_t *base, vuint64m8_t bindex, vuint8m1x7_t v0)
{
  vsoxseg7ei64_v_u8m1x7 (base, bindex, v0, 32);
}

/*
** test_vsoxseg7ei64_v_u8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg7ei64_v_u8m1x7_m_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x7_t v0)
{
  vsoxseg7ei64_v_u8m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsoxseg8ei64_v_u8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsoxseg8ei64_v_u8m1x8_vl32 (uint8_t *base, vuint64m8_t bindex, vuint8m1x8_t v0)
{
  vsoxseg8ei64_v_u8m1x8 (base, bindex, v0, 32);
}

/*
** test_vsoxseg8ei64_v_u8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg8ei64_v_u8m1x8_m_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x8_t v0)
{
  vsoxseg8ei64_v_u8m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsoxseg2ei64_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsoxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsoxseg2ei64_v_u16m2x2_vl32 (uint16_t *base, vuint64m8_t bindex, vuint16m2x2_t v0)
{
  vsoxseg2ei64_v_u16m2x2 (base, bindex, v0, 32);
}

/*
** test_vsoxseg2ei64_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsoxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg2ei64_v_u16m2x2_m_vl32 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x2_t v0)
{
  vsoxseg2ei64_v_u16m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsoxseg3ei64_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsoxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsoxseg3ei64_v_u16m2x3_vl32 (uint16_t *base, vuint64m8_t bindex, vuint16m2x3_t v0)
{
  vsoxseg3ei64_v_u16m2x3 (base, bindex, v0, 32);
}

/*
** test_vsoxseg3ei64_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsoxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg3ei64_v_u16m2x3_m_vl32 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x3_t v0)
{
  vsoxseg3ei64_v_u16m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsoxseg4ei64_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsoxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsoxseg4ei64_v_u16m2x4_vl32 (uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v0)
{
  vsoxseg4ei64_v_u16m2x4 (base, bindex, v0, 32);
}

/*
** test_vsoxseg4ei64_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsoxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg4ei64_v_u16m2x4_m_vl32 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v0)
{
  vsoxseg4ei64_v_u16m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsoxseg2ei64_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsoxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsoxseg2ei64_v_u32m4x2_vl32 (uint32_t *base, vuint64m8_t bindex, vuint32m4x2_t v0)
{
  vsoxseg2ei64_v_u32m4x2 (base, bindex, v0, 32);
}

/*
** test_vsoxseg2ei64_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsoxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsoxseg2ei64_v_u32m4x2_m_vl32 (vbool8_t mask, uint32_t *base, vuint64m8_t bindex, vuint32m4x2_t v0)
{
  vsoxseg2ei64_v_u32m4x2_m (mask, base, bindex, v0, 32);
}

