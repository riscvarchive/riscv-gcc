/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlseg3e16ff_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_m_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16mf2x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e16ff_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf2x4 (base, new_vl, 32);
}

/*
** test_vlseg4e16ff_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_m_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16mf2x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg5e16ff_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf2x5 (base, new_vl, 32);
}

/*
** test_vlseg5e16ff_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_m_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16mf2x5_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg6e16ff_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf2x6 (base, new_vl, 32);
}

/*
** test_vlseg6e16ff_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_m_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16mf2x6_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg7e16ff_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf2x7 (base, new_vl, 32);
}

/*
** test_vlseg7e16ff_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_m_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16mf2x7_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg8e16ff_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf2x8 (base, new_vl, 32);
}

/*
** test_vlseg8e16ff_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_m_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16mf2x8_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e16ff_v_u16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m1x2 (base, new_vl, 32);
}

/*
** test_vlseg2e16ff_v_u16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_m_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m1x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e16ff_v_u16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m1x3 (base, new_vl, 32);
}

/*
** test_vlseg3e16ff_v_u16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_m_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m1x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e16ff_v_u16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m1x4 (base, new_vl, 32);
}

/*
** test_vlseg4e16ff_v_u16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_m_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m1x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg5e16ff_v_u16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16m1x5 (base, new_vl, 32);
}

/*
** test_vlseg5e16ff_v_u16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_m_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg5e16ff_v_u16m1x5_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg6e16ff_v_u16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16m1x6 (base, new_vl, 32);
}

/*
** test_vlseg6e16ff_v_u16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_m_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg6e16ff_v_u16m1x6_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg7e16ff_v_u16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16m1x7 (base, new_vl, 32);
}

/*
** test_vlseg7e16ff_v_u16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_m_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg7e16ff_v_u16m1x7_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg8e16ff_v_u16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16m1x8 (base, new_vl, 32);
}

/*
** test_vlseg8e16ff_v_u16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_m_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg8e16ff_v_u16m1x8_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e16ff_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m2x2 (base, new_vl, 32);
}

/*
** test_vlseg2e16ff_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_m_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m2x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e16ff_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m2x3 (base, new_vl, 32);
}

/*
** test_vlseg3e16ff_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_m_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg3e16ff_v_u16m2x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e16ff_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m2x4 (base, new_vl, 32);
}

/*
** test_vlseg4e16ff_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_m_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg4e16ff_v_u16m2x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e16ff_v_u16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_vl32 (uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m4x2 (base, new_vl, 32);
}

/*
** test_vlseg2e16ff_v_u16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_m_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl)
{
  return vlseg2e16ff_v_u16m4x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32mf2x2 (base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_m_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32mf2x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e32ff_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32mf2x3 (base, new_vl, 32);
}

/*
** test_vlseg3e32ff_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_m_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32mf2x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e32ff_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32mf2x4 (base, new_vl, 32);
}

/*
** test_vlseg4e32ff_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_m_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32mf2x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg5e32ff_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32mf2x5 (base, new_vl, 32);
}

/*
** test_vlseg5e32ff_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_m_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32mf2x5_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg6e32ff_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32mf2x6 (base, new_vl, 32);
}

/*
** test_vlseg6e32ff_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_m_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32mf2x6_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg7e32ff_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32mf2x7 (base, new_vl, 32);
}

/*
** test_vlseg7e32ff_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_m_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32mf2x7_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg8e32ff_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32mf2x8 (base, new_vl, 32);
}

/*
** test_vlseg8e32ff_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_m_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32mf2x8_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m1x2 (base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_m_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m1x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e32ff_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m1x3 (base, new_vl, 32);
}

/*
** test_vlseg3e32ff_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_m_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m1x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e32ff_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m1x4 (base, new_vl, 32);
}

/*
** test_vlseg4e32ff_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_m_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m1x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg5e32ff_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32m1x5 (base, new_vl, 32);
}

/*
** test_vlseg5e32ff_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_m_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg5e32ff_v_u32m1x5_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg6e32ff_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32m1x6 (base, new_vl, 32);
}

/*
** test_vlseg6e32ff_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_m_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg6e32ff_v_u32m1x6_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg7e32ff_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32m1x7 (base, new_vl, 32);
}

/*
** test_vlseg7e32ff_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_m_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg7e32ff_v_u32m1x7_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg8e32ff_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32m1x8 (base, new_vl, 32);
}

/*
** test_vlseg8e32ff_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_m_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg8e32ff_v_u32m1x8_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m2x2 (base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_m_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m2x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e32ff_v_u32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m2x3 (base, new_vl, 32);
}

/*
** test_vlseg3e32ff_v_u32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_m_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg3e32ff_v_u32m2x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e32ff_v_u32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m2x4 (base, new_vl, 32);
}

/*
** test_vlseg4e32ff_v_u32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_m_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg4e32ff_v_u32m2x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_vl32 (uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m4x2 (base, new_vl, 32);
}

/*
** test_vlseg2e32ff_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_m_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl)
{
  return vlseg2e32ff_v_u32m4x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e64ff_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m1x2 (base, new_vl, 32);
}

/*
** test_vlseg2e64ff_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_m_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m1x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e64ff_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m1x3 (base, new_vl, 32);
}

/*
** test_vlseg3e64ff_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_m_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m1x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e64ff_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m1x4 (base, new_vl, 32);
}

/*
** test_vlseg4e64ff_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_m_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m1x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg5e64ff_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_u64m1x5 (base, new_vl, 32);
}

/*
** test_vlseg5e64ff_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_m_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg5e64ff_v_u64m1x5_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg6e64ff_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_u64m1x6 (base, new_vl, 32);
}

/*
** test_vlseg6e64ff_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_m_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg6e64ff_v_u64m1x6_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg7e64ff_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_u64m1x7 (base, new_vl, 32);
}

/*
** test_vlseg7e64ff_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_m_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg7e64ff_v_u64m1x7_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg8e64ff_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_u64m1x8 (base, new_vl, 32);
}

/*
** test_vlseg8e64ff_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_m_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg8e64ff_v_u64m1x8_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e64ff_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m2x2 (base, new_vl, 32);
}

/*
** test_vlseg2e64ff_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_m_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m2x2_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg3e64ff_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m2x3 (base, new_vl, 32);
}

/*
** test_vlseg3e64ff_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_m_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg3e64ff_v_u64m2x3_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg4e64ff_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m2x4 (base, new_vl, 32);
}

/*
** test_vlseg4e64ff_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_m_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg4e64ff_v_u64m2x4_m (mask, dest, base, new_vl, 32);
}

/*
** test_vlseg2e64ff_v_u64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_vl32 (uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m4x2 (base, new_vl, 32);
}

/*
** test_vlseg2e64ff_v_u64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_m_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl)
{
  return vlseg2e64ff_v_u64m4x2_m (mask, dest, base, new_vl, 32);
}

