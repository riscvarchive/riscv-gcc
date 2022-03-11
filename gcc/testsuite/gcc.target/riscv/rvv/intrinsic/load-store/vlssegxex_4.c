/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlsseg5e16_v_u16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_ta (base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_ta (base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tu (vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tu_vl31 (vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_ta (base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_ta (base, bstride, 31);
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
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tu (vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tu_vl31 (vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_ta (base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_ta (base, bstride, 31);
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
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tu (vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tu_vl31 (vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_ta (base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_ta (base, bstride, 31);
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
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tu (vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tu_vl31 (vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_ta (base, bstride, 31);
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
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tu (vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tu_vl31 (vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_ta (base, bstride, 31);
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
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tu (vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tu_vl31 (vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_ta (base, bstride, 31);
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
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tu (vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tu_vl31 (vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_ta (base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_ta (base, bstride, 31);
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
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tu (vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tu_vl31 (vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_ta (base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_ta (base, bstride, 31);
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
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tu (vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tu_vl31 (vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_ta (base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_ta (base, bstride, 31);
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
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tu (vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tu_vl31 (vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_ta (base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_ta (base, bstride, 31);
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
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tu (vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tu_vl31 (vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_ta (base, bstride, 31);
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
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tu (vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tu_vl31 (vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_ta (base, bstride, 31);
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
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tu (vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tu_vl31 (vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_ta (base, bstride, 31);
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
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tu (vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tu_vl31 (vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_ta (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_ta_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_ta (base, bstride, 31);
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
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tu (vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tu_vl31 (vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_ta (base, bstride, 31);
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
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tu (vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tu_vl31 (vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_ta (base, bstride, 31);
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
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tu (vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tu_vl31 (vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_ta (base, bstride, 31);
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
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tu (vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tu_vl31 (vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_ta (base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_ta (base, bstride, 31);
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
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tu (vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tu_vl31 (vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_ta (base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_ta (base, bstride, 31);
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
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tu (vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tu_vl31 (vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_ta (base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_ta (base, bstride, 31);
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
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tu (vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tu_vl31 (vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_ta (base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_ta (base, bstride, 31);
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
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tu (vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tu_vl31 (vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_ta (base, bstride, 31);
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
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tu (vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tu_vl31 (vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_ta (base, bstride, 31);
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
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tu (vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tu_vl31 (vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_ta (base, bstride, 31);
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
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tu (vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tu_vl31 (vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_ta (base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_ta (base, bstride, 31);
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
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tu (vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tu_vl31 (vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_ta (base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_ta (base, bstride, 31);
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
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tu (vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tu_vl31 (vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_ta (base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_ta (base, bstride, 31);
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
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tu (vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tu_vl31 (vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_ta (base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_ta (base, bstride, 31);
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
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tu (vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tu_vl31 (vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_ta (base, bstride, 31);
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
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tu (vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tu_vl31 (vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_ta (base, bstride, 31);
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
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tu (vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tu_vl31 (vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_ta (base, bstride, 31);
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
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tu (vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tu_vl31 (vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_ta (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_ta_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_ta (base, bstride, 31);
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
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tu (vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tu_vl31 (vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_ta (base, bstride, 31);
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
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tu (vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tu_vl31 (vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_ta (base, bstride, 31);
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
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tu (vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tu_vl31 (vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_ta (base, bstride, 31);
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
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tu (vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tu_vl31 (vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_u64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_ta (base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_ta (base, bstride, 31);
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
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tu (vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tu_vl31 (vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_u64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_ta (base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_ta (base, bstride, 31);
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
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tu (vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tu_vl31 (vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_u64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_ta (base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_ta (base, bstride, 31);
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
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tu (vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tu_vl31 (vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_u64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_ta (base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_ta (base, bstride, 31);
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
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tu (vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tu_vl31 (vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_ta (base, bstride, 31);
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
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tu (vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tu_vl31 (vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_ta (base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_ta (base, bstride, 31);
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
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tu (vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tu_vl31 (vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_ta (base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_ta (base, bstride, 31);
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
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tu (vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tu_vl31 (vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_ta (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_ta (base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_ta_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_ta (base, bstride, 31);
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
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tu (vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_tu (dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tu_vl31 (vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tu (dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_f16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_tu_vl32 (vfloat16mf4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_tu_vl32 (vfloat16mf4x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_tu_vl32 (vfloat16mf4x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_tu_vl32 (vfloat16mf4x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_tu_vl32 (vfloat16mf4x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_tu_vl32 (vfloat16mf4x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_tu_vl32 (vfloat16mf4x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_tu_vl32 (vfloat16mf2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_tu_vl32 (vfloat16mf2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_tu_vl32 (vfloat16mf2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_tu_vl32 (vfloat16mf2x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_tu_vl32 (vfloat16mf2x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_tu_vl32 (vfloat16mf2x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_tu_vl32 (vfloat16mf2x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_tu_vl32 (vfloat16m1x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_tu_vl32 (vfloat16m1x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_tu_vl32 (vfloat16m1x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_tu_vl32 (vfloat16m1x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_tu_vl32 (vfloat16m1x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_tu_vl32 (vfloat16m1x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_tu_vl32 (vfloat16m1x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_tu_vl32 (vfloat16m2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_tu_vl32 (vfloat16m2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_tu_vl32 (vfloat16m2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_ta_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_tu_vl32 (vfloat16m4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_tu_vl32 (vfloat32mf2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_tu_vl32 (vfloat32mf2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_tu_vl32 (vfloat32mf2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_tu_vl32 (vfloat32mf2x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_tu_vl32 (vfloat32mf2x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_tu_vl32 (vfloat32mf2x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_tu_vl32 (vfloat32mf2x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_tu_vl32 (vfloat32m1x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_tu_vl32 (vfloat32m1x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_tu_vl32 (vfloat32m1x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_tu_vl32 (vfloat32m1x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_tu_vl32 (vfloat32m1x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_tu_vl32 (vfloat32m1x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_tu_vl32 (vfloat32m1x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_tu_vl32 (vfloat32m2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_tu_vl32 (vfloat32m2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_tu_vl32 (vfloat32m2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_ta_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_tu_vl32 (vfloat32m4x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_tu_vl32 (vfloat64m1x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_tu_vl32 (vfloat64m1x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_tu_vl32 (vfloat64m1x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_tu_vl32 (vfloat64m1x5_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_tu_vl32 (vfloat64m1x6_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_tu_vl32 (vfloat64m1x7_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_tu_vl32 (vfloat64m1x8_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_tu_vl32 (vfloat64m2x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_tu_vl32 (vfloat64m2x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_tu_vl32 (vfloat64m2x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_ta_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_tu_vl32 (vfloat64m4x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_tu_vl32 (vint8mf8x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_tu_vl32 (vint8mf8x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_tu_vl32 (vint8mf8x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_tu_vl32 (vint8mf8x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_tu_vl32 (vint8mf8x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_tu_vl32 (vint8mf8x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_tu_vl32 (vint8mf8x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_tu_vl32 (vint8mf4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_tu_vl32 (vint8mf4x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_tu_vl32 (vint8mf4x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_tu_vl32 (vint8mf4x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_tu_vl32 (vint8mf4x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_tu_vl32 (vint8mf4x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_tu_vl32 (vint8mf4x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_tu_vl32 (vint8mf2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_tu_vl32 (vint8mf2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_tu_vl32 (vint8mf2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_tu_vl32 (vint8mf2x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_tu_vl32 (vint8mf2x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_tu_vl32 (vint8mf2x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_tu_vl32 (vint8mf2x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x2_t
test_vlsseg2e8_v_i8m1x2_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x2_t
test_vlsseg2e8_v_i8m1x2_tu_vl32 (vint8m1x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x3_t
test_vlsseg3e8_v_i8m1x3_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x3_t
test_vlsseg3e8_v_i8m1x3_tu_vl32 (vint8m1x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x4_t
test_vlsseg4e8_v_i8m1x4_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x4_t
test_vlsseg4e8_v_i8m1x4_tu_vl32 (vint8m1x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x5_t
test_vlsseg5e8_v_i8m1x5_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x5_t
test_vlsseg5e8_v_i8m1x5_tu_vl32 (vint8m1x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x6_t
test_vlsseg6e8_v_i8m1x6_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x6_t
test_vlsseg6e8_v_i8m1x6_tu_vl32 (vint8m1x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x7_t
test_vlsseg7e8_v_i8m1x7_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x7_t
test_vlsseg7e8_v_i8m1x7_tu_vl32 (vint8m1x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x8_t
test_vlsseg8e8_v_i8m1x8_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x8_t
test_vlsseg8e8_v_i8m1x8_tu_vl32 (vint8m1x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x2_t
test_vlsseg2e8_v_i8m2x2_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x2_t
test_vlsseg2e8_v_i8m2x2_tu_vl32 (vint8m2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x3_t
test_vlsseg3e8_v_i8m2x3_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x3_t
test_vlsseg3e8_v_i8m2x3_tu_vl32 (vint8m2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x4_t
test_vlsseg4e8_v_i8m2x4_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x4_t
test_vlsseg4e8_v_i8m2x4_tu_vl32 (vint8m2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4x2_t
test_vlsseg2e8_v_i8m4x2_ta_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4x2_t
test_vlsseg2e8_v_i8m4x2_tu_vl32 (vint8m4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x2_t
test_vlsseg2e16_v_i16mf4x2_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x2_t
test_vlsseg2e16_v_i16mf4x2_tu_vl32 (vint16mf4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x3_t
test_vlsseg3e16_v_i16mf4x3_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf4x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x3_t
test_vlsseg3e16_v_i16mf4x3_tu_vl32 (vint16mf4x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf4x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x4_t
test_vlsseg4e16_v_i16mf4x4_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf4x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x4_t
test_vlsseg4e16_v_i16mf4x4_tu_vl32 (vint16mf4x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf4x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x5_t
test_vlsseg5e16_v_i16mf4x5_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf4x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x5_t
test_vlsseg5e16_v_i16mf4x5_tu_vl32 (vint16mf4x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf4x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x6_t
test_vlsseg6e16_v_i16mf4x6_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf4x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x6_t
test_vlsseg6e16_v_i16mf4x6_tu_vl32 (vint16mf4x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf4x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x7_t
test_vlsseg7e16_v_i16mf4x7_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf4x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x7_t
test_vlsseg7e16_v_i16mf4x7_tu_vl32 (vint16mf4x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf4x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x8_t
test_vlsseg8e16_v_i16mf4x8_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf4x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x8_t
test_vlsseg8e16_v_i16mf4x8_tu_vl32 (vint16mf4x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf4x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x2_t
test_vlsseg2e16_v_i16mf2x2_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x2_t
test_vlsseg2e16_v_i16mf2x2_tu_vl32 (vint16mf2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x3_t
test_vlsseg3e16_v_i16mf2x3_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x3_t
test_vlsseg3e16_v_i16mf2x3_tu_vl32 (vint16mf2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x4_t
test_vlsseg4e16_v_i16mf2x4_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x4_t
test_vlsseg4e16_v_i16mf2x4_tu_vl32 (vint16mf2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_tu_vl32 (vint16mf2x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tu_vl32 (vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tu_vl32 (vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tu_vl32 (vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tu_vl32 (vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tu_vl32 (vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tu_vl32 (vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tu_vl32 (vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tu_vl32 (vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tu_vl32 (vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tu_vl32 (vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tu_vl32 (vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tu_vl32 (vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tu_vl32 (vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_ta_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tu_vl32 (vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tu_vl32 (vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tu_vl32 (vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tu_vl32 (vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tu_vl32 (vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tu_vl32 (vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tu_vl32 (vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tu_vl32 (vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tu_vl32 (vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tu_vl32 (vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tu_vl32 (vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tu_vl32 (vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tu_vl32 (vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tu_vl32 (vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tu_vl32 (vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tu_vl32 (vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tu_vl32 (vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tu_vl32 (vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_ta_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tu_vl32 (vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tu_vl32 (vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tu_vl32 (vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tu_vl32 (vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_i64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e64_v_i64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tu_vl32 (vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_i64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e64_v_i64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tu_vl32 (vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_i64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e64_v_i64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tu_vl32 (vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_i64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e64_v_i64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tu_vl32 (vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tu_vl32 (vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tu_vl32 (vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tu_vl32 (vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_ta_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tu_vl32 (vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_ta_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tu_vl32 (vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_ta_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_u32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_u32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_u32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_u32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_u32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_u32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_ta_vl32 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_u32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_u64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_ta (base, bstride, 32);
}

/*
** test_vlsseg5e64_v_u64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_u64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_ta (base, bstride, 32);
}

/*
** test_vlsseg6e64_v_u64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_u64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_ta (base, bstride, 32);
}

/*
** test_vlsseg7e64_v_u64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_u64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_ta (base, bstride, 32);
}

/*
** test_vlsseg8e64_v_u64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_ta (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_u64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_ta (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_u64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_ta_vl32 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_ta (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_u64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tu (dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2 (base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2 (base, bstride, 31);
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
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3 (base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3 (base, bstride, 31);
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
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4 (base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4 (base, bstride, 31);
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
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5 (base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5 (base, bstride, 31);
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
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6 (base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6 (base, bstride, 31);
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
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7 (base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7 (base, bstride, 31);
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
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8 (base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8 (base, bstride, 31);
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
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2 (base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2 (base, bstride, 31);
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
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_m_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3 (base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3 (base, bstride, 31);
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
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_m_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4 (base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4 (base, bstride, 31);
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
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_m_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5 (base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5 (base, bstride, 31);
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
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_m_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6 (base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6 (base, bstride, 31);
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
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_m_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7 (base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7 (base, bstride, 31);
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
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_m_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8 (base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8 (base, bstride, 31);
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
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_m_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2 (base, bstride, 31);
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
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_m_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3 (base, bstride, 31);
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
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_m_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4 (base, bstride, 31);
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
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_m_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5 (base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5 (base, bstride, 31);
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
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_m_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6 (base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6 (base, bstride, 31);
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
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_m_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7 (base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7 (base, bstride, 31);
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
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_m_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8 (base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8 (base, bstride, 31);
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
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_m_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2 (base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2 (base, bstride, 31);
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
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_m_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3 (base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3 (base, bstride, 31);
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
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_m_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4 (base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4 (base, bstride, 31);
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
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_m_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5 (base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5 (base, bstride, 31);
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
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_m_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6 (base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6 (base, bstride, 31);
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
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_m_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7 (base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7 (base, bstride, 31);
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
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_m_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8 (base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8 (base, bstride, 31);
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
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_m_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2 (base, bstride, 31);
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
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_m_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3 (base, bstride, 31);
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
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_m_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4 (base, bstride, 31);
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
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_m_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2 (uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2 (base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_vl31 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2 (base, bstride, 31);
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
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_m_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2 (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2 (base, bstride, 31);
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
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3 (base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3 (base, bstride, 31);
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
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4 (base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4 (base, bstride, 31);
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
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5 (base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5 (base, bstride, 31);
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
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6 (base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6 (base, bstride, 31);
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
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7 (base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7 (base, bstride, 31);
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
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8 (base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8 (base, bstride, 31);
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
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2 (base, bstride, 31);
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
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_m_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3 (base, bstride, 31);
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
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_m_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4 (base, bstride, 31);
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
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_m_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5 (base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5 (base, bstride, 31);
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
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_m_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6 (base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6 (base, bstride, 31);
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
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_m_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7 (base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7 (base, bstride, 31);
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
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_m_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8 (base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8 (base, bstride, 31);
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
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_m_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2 (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2 (base, bstride, 31);
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
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_m_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3 (base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3 (base, bstride, 31);
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
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_m_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4 (base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4 (base, bstride, 31);
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
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_m_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5 (base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5 (base, bstride, 31);
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
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_m_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6 (base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6 (base, bstride, 31);
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
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_m_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7 (base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7 (base, bstride, 31);
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
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_m_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8 (base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8 (base, bstride, 31);
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
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_m_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2 (base, bstride, 31);
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
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_m_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3 (base, bstride, 31);
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
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_m_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4 (base, bstride, 31);
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
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_m_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2 (uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2 (base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_vl31 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2 (base, bstride, 31);
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
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_m_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2 (base, bstride, 31);
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
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3 (base, bstride, 31);
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
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4 (base, bstride, 31);
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
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5 (base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5 (base, bstride, 31);
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
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6 (base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6 (base, bstride, 31);
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
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_m_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7 (base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7 (base, bstride, 31);
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
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_m_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8 (base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8 (base, bstride, 31);
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
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_m_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2 (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2 (base, bstride, 31);
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
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_m_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3 (base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3 (base, bstride, 31);
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
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_m_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4 (base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4 (base, bstride, 31);
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
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_m_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5 (base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5 (base, bstride, 31);
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
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_m_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6 (base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6 (base, bstride, 31);
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
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_m_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7 (base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7 (base, bstride, 31);
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
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_m_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8 (base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8 (base, bstride, 31);
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
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_m_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2 (base, bstride, 31);
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
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_m_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3 (base, bstride, 31);
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
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_m_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4 (base, bstride, 31);
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
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_m_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2 (uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2 (base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_vl31 (uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2 (base, bstride, 31);
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
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_m_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2 (base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2 (base, bstride, 31);
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
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_m_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3 (base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3 (base, bstride, 31);
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
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_m_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4 (base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4 (base, bstride, 31);
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
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_m_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_u64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5 (base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5 (base, bstride, 31);
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
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_m_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_u64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6 (base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6 (base, bstride, 31);
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
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_m_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_u64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7 (base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7 (base, bstride, 31);
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
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_m_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_u64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8 (base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8 (base, bstride, 31);
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
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_m_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2 (base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2 (base, bstride, 31);
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
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_m_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3 (base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3 (base, bstride, 31);
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
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_m_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4 (base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4 (base, bstride, 31);
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
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_m_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2 (uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2 (base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_vl31 (uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2 (base, bstride, 31);
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
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_m (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_m_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_m (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_f16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_m_vl32 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_m_vl32 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_m_vl32 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_m_vl32 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_m_vl32 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_m_vl32 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_m_vl32 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_m_vl32 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_m_vl32 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_m_vl32 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_m_vl32 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_m_vl32 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_m_vl32 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_m_vl32 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_m_vl32 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_m_vl32 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_m_vl32 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_m_vl32 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_m_vl32 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_m_vl32 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_m_vl32 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_m_vl32 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_m_vl32 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_m_vl32 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_vl32 (float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_m_vl32 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_m_vl32 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_m_vl32 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_m_vl32 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_m_vl32 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_m_vl32 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_m_vl32 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_m_vl32 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_m_vl32 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_m_vl32 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_m_vl32 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_m_vl32 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_m_vl32 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_m_vl32 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_m_vl32 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_m_vl32 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_m_vl32 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_m_vl32 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_vl32 (float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_m_vl32 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_m_vl32 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_m_vl32 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_m_vl32 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_m_vl32 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_m_vl32 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_m_vl32 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_m_vl32 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_m_vl32 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_m_vl32 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_m_vl32 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_vl32 (float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_m_vl32 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_m_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_m_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_m_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_m_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_m_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_m_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_m_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_m_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_m_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_m_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_m_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_m_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_m_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_m_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_m_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_m_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_m_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_m_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_m_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_m_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_m_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x2_t
test_vlsseg2e8_v_i8m1x2_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vlsseg2e8_v_i8m1x2_m_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x3_t
test_vlsseg3e8_v_i8m1x3_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vlsseg3e8_v_i8m1x3_m_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x4_t
test_vlsseg4e8_v_i8m1x4_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vlsseg4e8_v_i8m1x4_m_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x5_t
test_vlsseg5e8_v_i8m1x5_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vlsseg5e8_v_i8m1x5_m_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x6_t
test_vlsseg6e8_v_i8m1x6_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vlsseg6e8_v_i8m1x6_m_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x7_t
test_vlsseg7e8_v_i8m1x7_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vlsseg7e8_v_i8m1x7_m_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m1x8_t
test_vlsseg8e8_v_i8m1x8_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vlsseg8e8_v_i8m1x8_m_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x2_t
test_vlsseg2e8_v_i8m2x2_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vlsseg2e8_v_i8m2x2_m_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x3_t
test_vlsseg3e8_v_i8m2x3_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vlsseg3e8_v_i8m2x3_m_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m2x4_t
test_vlsseg4e8_v_i8m2x4_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vlsseg4e8_v_i8m2x4_m_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint8m4x2_t
test_vlsseg2e8_v_i8m4x2_vl32 (int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vlsseg2e8_v_i8m4x2_m_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x2_t
test_vlsseg2e16_v_i16mf4x2_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vlsseg2e16_v_i16mf4x2_m_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x3_t
test_vlsseg3e16_v_i16mf4x3_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf4x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vlsseg3e16_v_i16mf4x3_m_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf4x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x4_t
test_vlsseg4e16_v_i16mf4x4_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf4x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vlsseg4e16_v_i16mf4x4_m_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf4x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x5_t
test_vlsseg5e16_v_i16mf4x5_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf4x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vlsseg5e16_v_i16mf4x5_m_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf4x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x6_t
test_vlsseg6e16_v_i16mf4x6_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf4x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vlsseg6e16_v_i16mf4x6_m_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf4x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x7_t
test_vlsseg7e16_v_i16mf4x7_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf4x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vlsseg7e16_v_i16mf4x7_m_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf4x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf4x8_t
test_vlsseg8e16_v_i16mf4x8_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf4x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vlsseg8e16_v_i16mf4x8_m_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf4x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x2_t
test_vlsseg2e16_v_i16mf2x2_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vlsseg2e16_v_i16mf2x2_m_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x3_t
test_vlsseg3e16_v_i16mf2x3_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vlsseg3e16_v_i16mf2x3_m_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x4_t
test_vlsseg4e16_v_i16mf2x4_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vlsseg4e16_v_i16mf2x4_m_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_m_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_m_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_m_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_m_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_m_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_m_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_m_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_i16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_m_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_i16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_m_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_i16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_m_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_i16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_m_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_m_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_i16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_m_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_i16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_m_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_vl32 (int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_i16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_m_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_m_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_m_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_m_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_m_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_m_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_m_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_m_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_m_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_m_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_m_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e32_v_i32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_m_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e32_v_i32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_m_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e32_v_i32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_m_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e32_v_i32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_m_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_m_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e32_v_i32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_m_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e32_v_i32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_m_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_vl32 (int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e32_v_i32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_m_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_m_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_m_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_m_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_i64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e64_v_i64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_m_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_i64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e64_v_i64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_m_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_i64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e64_v_i64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_m_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_i64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e64_v_i64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_m_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_m_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e64_v_i64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_m_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e64_v_i64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_m_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_vl32 (int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e64_v_i64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_m_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_m_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_m_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_m_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_m_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_m_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_m_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_m_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_m_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_m_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_m_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_m_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_m_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_m_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_m_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_m_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_m_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_m_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_m_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_m_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_m_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_m_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_m_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_m_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_m_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5 (base, bstride, 32);
}

/*
** test_vlsseg5e8_v_u8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_m_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6 (base, bstride, 32);
}

/*
** test_vlsseg6e8_v_u8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_m_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7 (base, bstride, 32);
}

/*
** test_vlsseg7e8_v_u8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_m_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8 (base, bstride, 32);
}

/*
** test_vlsseg8e8_v_u8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_m_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_m_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3 (base, bstride, 32);
}

/*
** test_vlsseg3e8_v_u8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_m_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4 (base, bstride, 32);
}

/*
** test_vlsseg4e8_v_u8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_m_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_vl32 (uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e8_v_u8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_m_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_m_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3 (base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_m_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4 (base, bstride, 32);
}

/*
** test_vlsseg4e16_v_u16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_m_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5 (base, bstride, 32);
}

/*
** test_vlsseg5e16_v_u16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_m_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6 (base, bstride, 32);
}

/*
** test_vlsseg6e16_v_u16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_m_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7 (base, bstride, 32);
}

/*
** test_vlsseg7e16_v_u16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_m_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8 (base, bstride, 32);
}

/*
** test_vlsseg8e16_v_u16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_m_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2 (base, bstride, 32);
}

/*
** test_vlsseg2e16_v_u16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_m_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_m (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_u16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_vl32 (uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3 (base, bstride, 32);
}
