/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlsseg3e16_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_m_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_m_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_m_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_m_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_m_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_m_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_m_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_m_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_m_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_m_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_m_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_m_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_m_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_m_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_m_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_m_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_m_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_m_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_m_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_m_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_m_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_m_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_m_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_m_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_m_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_m_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_m_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_m_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_m_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_m_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_m_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_m_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_m_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_m_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_m_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_m_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_m_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_m_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e64_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_m_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e64_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_m_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e64_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_m_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e64_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_m_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_m_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_m_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_m_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_m_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_m (mask, dest, base, bstride, 32);
}

