/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlseg5e16ff_v_u16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tu (vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tu (vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tu (vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tu (vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tu (vuint16m1x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tu (vuint16m1x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tu (vuint16m1x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tu (vuint16m1x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tu (vuint16m1x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tu (vuint16m1x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tu (vuint16m1x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tu (vuint16m2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tu (vuint16m2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tu (vuint16m2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tu (vuint16m4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tu (vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tu (vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tu (vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tu (vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tu (vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tu (vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tu (vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tu (vuint32m1x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tu (vuint32m1x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tu (vuint32m1x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tu (vuint32m1x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tu (vuint32m1x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tu (vuint32m1x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tu (vuint32m1x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tu (vuint32m2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tu (vuint32m2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tu (vuint32m2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tu (vuint32m4x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tu (vuint64m1x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tu (vuint64m1x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tu (vuint64m1x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_u64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tu (vuint64m1x5_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_u64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tu (vuint64m1x6_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_u64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tu (vuint64m1x7_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_u64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tu (vuint64m1x8_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tu (vuint64m2x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tu (vuint64m2x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tu (vuint64m2x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tu (vuint64m4x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff (mask, dest, base, new_vl, vl);
}



