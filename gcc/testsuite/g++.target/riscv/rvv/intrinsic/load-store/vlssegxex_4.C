/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlsseg5e16_v_u16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tu (vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg6e16_v_u16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tu (vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg7e16_v_u16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tu (vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg8e16_v_u16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tu (vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tu (vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e16_v_u16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tu (vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e16_v_u16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tu (vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg5e16_v_u16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tu (vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg6e16_v_u16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tu (vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg7e16_v_u16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tu (vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg8e16_v_u16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tu (vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tu (vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e16_v_u16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tu (vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e16_v_u16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tu (vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tu (vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tu (vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e32_v_u32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tu (vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e32_v_u32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tu (vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg5e32_v_u32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tu (vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg6e32_v_u32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tu (vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg7e32_v_u32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tu (vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg8e32_v_u32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tu (vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tu (vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e32_v_u32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tu (vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e32_v_u32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tu (vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg5e32_v_u32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tu (vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg6e32_v_u32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tu (vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg7e32_v_u32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tu (vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg8e32_v_u32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tu (vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tu (vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e32_v_u32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tu (vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e32_v_u32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tu (vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tu (vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e64_v_u64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tu (vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e64_v_u64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tu (vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e64_v_u64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tu (vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg5e64_v_u64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tu (vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg6e64_v_u64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tu (vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg7e64_v_u64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tu (vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg8e64_v_u64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tu (vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e64_v_u64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tu (vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg3e64_v_u64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tu (vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg4e64_v_u64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tu (vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e64_v_u64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tu (vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_tu (dest, base, bstride, vl);
}


/*
** test_vlsseg2e8_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e8_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e8_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e8_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e8_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e8_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e8_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e8_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e8_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e8_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e8_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e8_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e8_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e8_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e8_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e8_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e8_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e8_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e8_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e8_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e8_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e8_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e8_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e8_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e8_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e8_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e8_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e8_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e8_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e8_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e8_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e8_v_u8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e16_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e16_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e16_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e16_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e16_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e16_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e16_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e16_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e16_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e16_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e16_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e16_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e16_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e16_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e16_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e16_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e16_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e16_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e16_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e16_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e16_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e32_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e32_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e32_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e32_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e32_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e32_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e32_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e32_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e32_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e32_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e32_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e32_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e32_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e32_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e32_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e64_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e64_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e64_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg5e64_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg6e64_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg7e64_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg8e64_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e64_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg3e64_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg4e64_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64 (mask, dest, base, bstride, vl);
}


/*
** test_vlsseg2e64_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64 (mask, dest, base, bstride, vl);
}



