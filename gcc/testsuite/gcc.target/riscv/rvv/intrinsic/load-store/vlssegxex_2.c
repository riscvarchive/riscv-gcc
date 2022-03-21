/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlsseg5e16_v_i16mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_tuma_vl31 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf2x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_i16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_tumu (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_i16mf2x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_i16mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlsseg5e16_v_i16mf2x5_tumu_vl31 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16mf2x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tama (vbool32_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16mf2x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tama_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tamu (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16mf2x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tamu_vl31 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tuma (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16mf2x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tuma_vl31 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tumu (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16mf2x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlsseg6e16_v_i16mf2x6_tumu_vl31 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16mf2x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tama (vbool32_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16mf2x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tama_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tamu (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16mf2x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tamu_vl31 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tuma (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16mf2x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tuma_vl31 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tumu (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16mf2x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlsseg7e16_v_i16mf2x7_tumu_vl31 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16mf2x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tama (vbool32_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16mf2x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tama_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tamu (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16mf2x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tamu_vl31 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tuma (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16mf2x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tuma_vl31 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tumu (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16mf2x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlsseg8e16_v_i16mf2x8_tumu_vl31 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16mf2x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tamu (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tamu_vl31 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tuma (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tuma_vl31 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tumu (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg2e16_v_i16m1x2_tumu_vl31 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tamu (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tamu_vl31 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tuma (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tuma_vl31 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tumu (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlsseg3e16_v_i16m1x3_tumu_vl31 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tamu (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tamu_vl31 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tuma (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tuma_vl31 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tumu (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlsseg4e16_v_i16m1x4_tumu_vl31 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_i16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_i16m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_i16m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_i16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tamu (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_i16m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_i16m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tamu_vl31 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_i16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tuma (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_i16m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_i16m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tuma_vl31 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_i16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tumu (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_i16m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_i16m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlsseg5e16_v_i16m1x5_tumu_vl31 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_i16m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tamu (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tamu_vl31 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tuma (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tuma_vl31 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_i16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tumu (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_i16m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_i16m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlsseg6e16_v_i16m1x6_tumu_vl31 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_i16m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tamu (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tamu_vl31 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tuma (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tuma_vl31 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_i16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tumu (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_i16m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_i16m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlsseg7e16_v_i16m1x7_tumu_vl31 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_i16m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tama (vbool16_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tama_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tamu (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tamu_vl31 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tuma (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tuma_vl31 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_i16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tumu (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_i16m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_i16m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlsseg8e16_v_i16m1x8_tumu_vl31 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_i16m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tama (vbool8_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tama_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tamu (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tamu_vl31 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tuma (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tuma_vl31 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tumu (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlsseg2e16_v_i16m2x2_tumu_vl31 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tama (vbool8_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tama_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tamu (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tamu_vl31 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tuma (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tuma_vl31 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_i16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tumu (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_i16m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_i16m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlsseg3e16_v_i16m2x3_tumu_vl31 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_i16m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tama (vbool8_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tama_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tamu (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tamu_vl31 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tuma (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tuma_vl31 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_i16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tumu (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_i16m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_i16m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlsseg4e16_v_i16m2x4_tumu_vl31 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_i16m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tama (vbool4_t mask, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tama_vl31 (vbool4_t mask, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tamu (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tamu_vl31 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tuma (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tuma_vl31 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_i16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tumu (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_i16m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_i16m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlsseg2e16_v_i16m4x2_tumu_vl31 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_i16m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32mf2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tamu (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32mf2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tamu_vl31 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tuma (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32mf2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tuma_vl31 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tumu (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32mf2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlsseg2e32_v_i32mf2x2_tumu_vl31 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32mf2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32mf2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tamu (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32mf2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tamu_vl31 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tuma (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32mf2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tuma_vl31 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tumu (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32mf2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlsseg3e32_v_i32mf2x3_tumu_vl31 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32mf2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32mf2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tamu (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32mf2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tamu_vl31 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tuma (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32mf2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tuma_vl31 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tumu (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32mf2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlsseg4e32_v_i32mf2x4_tumu_vl31 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32mf2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32mf2x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tamu (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32mf2x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tamu_vl31 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tuma (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32mf2x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tuma_vl31 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tumu (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32mf2x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlsseg5e32_v_i32mf2x5_tumu_vl31 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32mf2x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32mf2x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tamu (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32mf2x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tamu_vl31 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tuma (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32mf2x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tuma_vl31 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tumu (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32mf2x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlsseg6e32_v_i32mf2x6_tumu_vl31 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32mf2x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32mf2x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tamu (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32mf2x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tamu_vl31 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tuma (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32mf2x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tuma_vl31 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tumu (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32mf2x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlsseg7e32_v_i32mf2x7_tumu_vl31 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32mf2x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tama (vbool64_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32mf2x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tama_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tamu (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32mf2x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tamu_vl31 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tuma (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32mf2x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tuma_vl31 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tumu (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32mf2x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlsseg8e32_v_i32mf2x8_tumu_vl31 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32mf2x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tamu (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tamu_vl31 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tuma (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tuma_vl31 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tumu (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlsseg2e32_v_i32m1x2_tumu_vl31 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tamu (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tamu_vl31 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tuma (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tuma_vl31 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tumu (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlsseg3e32_v_i32m1x3_tumu_vl31 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tamu (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tamu_vl31 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tuma (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tuma_vl31 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tumu (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlsseg4e32_v_i32m1x4_tumu_vl31 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tamu (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tamu_vl31 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tuma (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tuma_vl31 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_i32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tumu (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_i32m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_i32m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlsseg5e32_v_i32m1x5_tumu_vl31 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_i32m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tamu (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tamu_vl31 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tuma (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tuma_vl31 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_i32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tumu (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_i32m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_i32m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlsseg6e32_v_i32m1x6_tumu_vl31 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_i32m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tamu (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tamu_vl31 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tuma (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tuma_vl31 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_i32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tumu (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_i32m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_i32m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlsseg7e32_v_i32m1x7_tumu_vl31 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_i32m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tama (vbool32_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tama_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tamu (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tamu_vl31 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tuma (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tuma_vl31 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_i32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tumu (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_i32m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_i32m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlsseg8e32_v_i32m1x8_tumu_vl31 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_i32m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tama (vbool16_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tama_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tamu (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tamu_vl31 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tuma (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tuma_vl31 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tumu (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlsseg2e32_v_i32m2x2_tumu_vl31 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tama (vbool16_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tama_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tamu (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tamu_vl31 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tuma (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tuma_vl31 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_i32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tumu (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_i32m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_i32m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlsseg3e32_v_i32m2x3_tumu_vl31 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_i32m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tama (vbool16_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tama_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tamu (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tamu_vl31 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tuma (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tuma_vl31 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_i32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tumu (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_i32m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_i32m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlsseg4e32_v_i32m2x4_tumu_vl31 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_i32m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tama (vbool8_t mask, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tama_vl31 (vbool8_t mask, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tamu (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tamu_vl31 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tuma (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tuma_vl31 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_i32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tumu (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_i32m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_i32m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlsseg2e32_v_i32m4x2_tumu_vl31 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_i32m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tamu (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tamu_vl31 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tuma (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tuma_vl31 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tumu (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlsseg2e64_v_i64m1x2_tumu_vl31 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tamu (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tamu_vl31 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tuma (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tuma_vl31 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tumu (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlsseg3e64_v_i64m1x3_tumu_vl31 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tamu (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tamu_vl31 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tuma (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tuma_vl31 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tumu (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlsseg4e64_v_i64m1x4_tumu_vl31 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_i64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_i64m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_i64m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_i64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tamu (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_i64m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_i64m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tamu_vl31 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_i64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tuma (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_i64m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_i64m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tuma_vl31 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_i64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tumu (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_i64m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_i64m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlsseg5e64_v_i64m1x5_tumu_vl31 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_i64m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_i64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_i64m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_i64m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_i64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tamu (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_i64m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_i64m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tamu_vl31 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_i64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tuma (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_i64m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_i64m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tuma_vl31 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_i64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tumu (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_i64m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_i64m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlsseg6e64_v_i64m1x6_tumu_vl31 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_i64m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_i64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_i64m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_i64m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_i64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tamu (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_i64m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_i64m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tamu_vl31 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_i64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tuma (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_i64m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_i64m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tuma_vl31 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_i64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tumu (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_i64m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_i64m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlsseg7e64_v_i64m1x7_tumu_vl31 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_i64m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_i64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tama (vbool64_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_i64m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_i64m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tama_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_i64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tamu (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_i64m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_i64m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tamu_vl31 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_i64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tuma (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_i64m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_i64m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tuma_vl31 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_i64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tumu (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_i64m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_i64m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlsseg8e64_v_i64m1x8_tumu_vl31 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_i64m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tama (vbool32_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tama_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tamu (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tamu_vl31 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tuma (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tuma_vl31 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tumu (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlsseg2e64_v_i64m2x2_tumu_vl31 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tama (vbool32_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tama_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tamu (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tamu_vl31 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tuma (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tuma_vl31 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_i64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tumu (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_i64m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_i64m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlsseg3e64_v_i64m2x3_tumu_vl31 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_i64m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tama (vbool32_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tama_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tamu (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tamu_vl31 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tuma (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tuma_vl31 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_i64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tumu (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_i64m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_i64m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlsseg4e64_v_i64m2x4_tumu_vl31 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_i64m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tama (vbool16_t mask, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tama_vl31 (vbool16_t mask, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tamu (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tamu_vl31 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tuma (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tuma_vl31 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_i64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tumu (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_i64m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_i64m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlsseg2e64_v_i64m4x2_tumu_vl31 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_i64m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tamu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tamu_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tuma (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tuma_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tumu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf8x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf8x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlsseg2e8_v_u8mf8x2_tumu_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf8x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tamu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tamu_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tuma (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tuma_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tumu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf8x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf8x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlsseg3e8_v_u8mf8x3_tumu_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf8x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tamu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tamu_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tuma (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tuma_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tumu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf8x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf8x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlsseg4e8_v_u8mf8x4_tumu_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf8x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tamu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tamu_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tuma (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tuma_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tumu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf8x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf8x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlsseg5e8_v_u8mf8x5_tumu_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf8x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tamu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tamu_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tuma (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tuma_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tumu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf8x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf8x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlsseg6e8_v_u8mf8x6_tumu_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf8x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tamu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tamu_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tuma (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tuma_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tumu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf8x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf8x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlsseg7e8_v_u8mf8x7_tumu_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf8x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tama (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tama_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tamu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tamu_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tuma (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tuma_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tumu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf8x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf8x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlsseg8e8_v_u8mf8x8_tumu_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf8x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tamu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tamu_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tuma (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tuma_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tumu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlsseg2e8_v_u8mf4x2_tumu_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tamu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tamu_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tuma (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tuma_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tumu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf4x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf4x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlsseg3e8_v_u8mf4x3_tumu_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf4x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tamu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tamu_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tuma (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tuma_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tumu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf4x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf4x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlsseg4e8_v_u8mf4x4_tumu_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf4x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tamu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tamu_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tuma (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tuma_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tumu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf4x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf4x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlsseg5e8_v_u8mf4x5_tumu_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf4x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tamu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tamu_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tuma (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tuma_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tumu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf4x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf4x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlsseg6e8_v_u8mf4x6_tumu_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf4x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tamu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tamu_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tuma (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tuma_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tumu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf4x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf4x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlsseg7e8_v_u8mf4x7_tumu_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf4x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tama (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tama_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tamu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tamu_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tuma (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tuma_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tumu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf4x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf4x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlsseg8e8_v_u8mf4x8_tumu_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf4x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tamu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tamu_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tuma (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tuma_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tumu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8mf2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlsseg2e8_v_u8mf2x2_tumu_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8mf2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tamu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tamu_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tuma (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tuma_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tumu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8mf2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlsseg3e8_v_u8mf2x3_tumu_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8mf2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tamu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tamu_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tuma (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tuma_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tumu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8mf2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlsseg4e8_v_u8mf2x4_tumu_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8mf2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tamu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tamu_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tuma (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tuma_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tumu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8mf2x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlsseg5e8_v_u8mf2x5_tumu_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8mf2x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tamu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tamu_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tuma (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tuma_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tumu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8mf2x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlsseg6e8_v_u8mf2x6_tumu_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8mf2x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tamu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tamu_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tuma (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tuma_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tumu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8mf2x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlsseg7e8_v_u8mf2x7_tumu_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8mf2x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tama (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tama_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tamu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tamu_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tuma (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tuma_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tumu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8mf2x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlsseg8e8_v_u8mf2x8_tumu_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8mf2x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tamu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tamu_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tuma (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tuma_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tumu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlsseg2e8_v_u8m1x2_tumu_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tamu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tamu_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tuma (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tuma_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tumu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlsseg3e8_v_u8m1x3_tumu_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tamu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tamu_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tuma (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tuma_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tumu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlsseg4e8_v_u8m1x4_tumu_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tamu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tamu_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tuma (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tuma_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e8_v_u8m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tumu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e8_v_u8m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e8_v_u8m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlsseg5e8_v_u8m1x5_tumu_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_u8m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tamu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tamu_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tuma (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tuma_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e8_v_u8m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tumu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e8_v_u8m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e8_v_u8m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlsseg6e8_v_u8m1x6_tumu_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_u8m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tamu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tamu_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tuma (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tuma_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e8_v_u8m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tumu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e8_v_u8m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e8_v_u8m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlsseg7e8_v_u8m1x7_tumu_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_u8m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tama (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tama_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tamu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tamu_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tuma (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tuma_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e8_v_u8m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tumu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e8_v_u8m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e8_v_u8m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlsseg8e8_v_u8m1x8_tumu_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_u8m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tama (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tama_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tamu (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tamu_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tuma (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tuma_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tumu (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlsseg2e8_v_u8m2x2_tumu_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tama (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tama_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tamu (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tamu_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tuma (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tuma_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e8_v_u8m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tumu (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e8_v_u8m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e8_v_u8m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlsseg3e8_v_u8m2x3_tumu_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_u8m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tama (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tama_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tamu (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tamu_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tuma (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tuma_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e8_v_u8m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tumu (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e8_v_u8m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e8_v_u8m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlsseg4e8_v_u8m2x4_tumu_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_u8m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tama (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tama_vl31 (vbool2_t mask, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tamu (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tamu_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tuma (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tuma_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e8_v_u8m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tumu (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e8_v_u8m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e8_v_u8m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlsseg2e8_v_u8m4x2_tumu_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_u8m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tamu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tamu_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tuma (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tuma_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tumu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlsseg2e16_v_u16mf4x2_tumu_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tamu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tamu_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tuma (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tuma_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tumu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf4x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf4x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlsseg3e16_v_u16mf4x3_tumu_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf4x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tamu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tamu_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tuma (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tuma_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tumu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf4x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf4x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlsseg4e16_v_u16mf4x4_tumu_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf4x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tamu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tamu_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tuma (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tuma_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tumu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf4x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf4x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlsseg5e16_v_u16mf4x5_tumu_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf4x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tamu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tamu_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tuma (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tuma_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tumu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf4x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf4x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlsseg6e16_v_u16mf4x6_tumu_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf4x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tamu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tamu_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tuma (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tuma_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tumu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf4x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf4x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlsseg7e16_v_u16mf4x7_tumu_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf4x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tama (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tama_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tamu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tamu_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tuma (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tuma_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tumu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf4x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf4x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlsseg8e16_v_u16mf4x8_tumu_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf4x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tamu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tamu_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tuma (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tuma_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tumu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16mf2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlsseg2e16_v_u16mf2x2_tumu_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16mf2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tamu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tamu_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tuma (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tuma_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tumu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16mf2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlsseg3e16_v_u16mf2x3_tumu_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16mf2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tamu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tamu_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tuma (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tuma_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tumu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16mf2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlsseg4e16_v_u16mf2x4_tumu_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16mf2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tamu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tamu_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tuma (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tuma_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tumu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16mf2x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlsseg5e16_v_u16mf2x5_tumu_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16mf2x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tamu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tamu_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tuma (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tuma_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tumu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16mf2x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlsseg6e16_v_u16mf2x6_tumu_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16mf2x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tamu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tamu_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tuma (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tuma_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tumu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16mf2x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlsseg7e16_v_u16mf2x7_tumu_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16mf2x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tama (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tama_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tamu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tamu_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tuma (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tuma_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tumu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16mf2x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlsseg8e16_v_u16mf2x8_tumu_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16mf2x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tamu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tamu_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tuma (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tuma_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tumu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlsseg2e16_v_u16m1x2_tumu_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tamu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tamu_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tuma (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tuma_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tumu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlsseg3e16_v_u16m1x3_tumu_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tamu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tamu_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tuma (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tuma_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tumu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlsseg4e16_v_u16m1x4_tumu_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tamu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tamu_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tuma (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tuma_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e16_v_u16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tumu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e16_v_u16m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e16_v_u16m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlsseg5e16_v_u16m1x5_tumu_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_u16m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tamu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tamu_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tuma (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tuma_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e16_v_u16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tumu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e16_v_u16m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e16_v_u16m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlsseg6e16_v_u16m1x6_tumu_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_u16m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tamu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tamu_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tuma (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tuma_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e16_v_u16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tumu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e16_v_u16m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e16_v_u16m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlsseg7e16_v_u16m1x7_tumu_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_u16m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tama (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tama_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tamu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tamu_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tuma (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tuma_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e16_v_u16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tumu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e16_v_u16m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e16_v_u16m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlsseg8e16_v_u16m1x8_tumu_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_u16m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tama (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tama_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tamu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tamu_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tuma (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tuma_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tumu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlsseg2e16_v_u16m2x2_tumu_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tama (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tama_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tamu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tamu_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tuma (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tuma_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e16_v_u16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tumu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e16_v_u16m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e16_v_u16m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlsseg3e16_v_u16m2x3_tumu_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_u16m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tama (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tama_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tamu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tamu_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tuma (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tuma_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e16_v_u16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tumu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e16_v_u16m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e16_v_u16m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlsseg4e16_v_u16m2x4_tumu_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_u16m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tama (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tama_vl31 (vbool4_t mask, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tamu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tamu_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tuma (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tuma_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_u16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tumu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e16_v_u16m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e16_v_u16m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlsseg2e16_v_u16m4x2_tumu_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_u16m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tamu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tamu_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tuma (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tuma_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tumu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32mf2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlsseg2e32_v_u32mf2x2_tumu_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32mf2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tamu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tamu_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tuma (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tuma_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tumu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32mf2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlsseg3e32_v_u32mf2x3_tumu_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32mf2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tamu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tamu_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tuma (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tuma_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tumu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32mf2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlsseg4e32_v_u32mf2x4_tumu_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32mf2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tamu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tamu_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tuma (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tuma_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tumu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32mf2x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlsseg5e32_v_u32mf2x5_tumu_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32mf2x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tamu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tamu_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tuma (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tuma_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tumu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32mf2x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlsseg6e32_v_u32mf2x6_tumu_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32mf2x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tamu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tamu_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tuma (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tuma_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tumu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32mf2x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlsseg7e32_v_u32mf2x7_tumu_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32mf2x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tama (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tama_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tamu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tamu_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tuma (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tuma_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tumu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32mf2x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlsseg8e32_v_u32mf2x8_tumu_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32mf2x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tamu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tamu_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tuma (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tuma_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tumu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlsseg2e32_v_u32m1x2_tumu_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tamu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tamu_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tuma (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tuma_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tumu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlsseg3e32_v_u32m1x3_tumu_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tamu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tamu_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tuma (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tuma_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tumu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlsseg4e32_v_u32m1x4_tumu_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tamu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tamu_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tuma (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tuma_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e32_v_u32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tumu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e32_v_u32m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e32_v_u32m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlsseg5e32_v_u32m1x5_tumu_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_u32m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tamu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tamu_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tuma (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tuma_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e32_v_u32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tumu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e32_v_u32m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e32_v_u32m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlsseg6e32_v_u32m1x6_tumu_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_u32m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tamu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tamu_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tuma (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tuma_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e32_v_u32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tumu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e32_v_u32m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e32_v_u32m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlsseg7e32_v_u32m1x7_tumu_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_u32m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tama (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tama_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tamu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tamu_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tuma (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tuma_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e32_v_u32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tumu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e32_v_u32m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e32_v_u32m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlsseg8e32_v_u32m1x8_tumu_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_u32m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tama (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tama_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tamu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tamu_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tuma (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tuma_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tumu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlsseg2e32_v_u32m2x2_tumu_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tama (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tama_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tamu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tamu_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tuma (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tuma_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e32_v_u32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tumu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e32_v_u32m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e32_v_u32m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlsseg3e32_v_u32m2x3_tumu_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_u32m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tama (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tama_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tamu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tamu_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tuma (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tuma_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e32_v_u32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tumu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e32_v_u32m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e32_v_u32m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlsseg4e32_v_u32m2x4_tumu_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_u32m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tama (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tama_vl31 (vbool8_t mask, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tamu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tamu_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tuma (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tuma_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e32_v_u32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tumu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e32_v_u32m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e32_v_u32m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlsseg2e32_v_u32m4x2_tumu_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_u32m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tamu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tamu_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tuma (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tuma_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tumu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m1x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlsseg2e64_v_u64m1x2_tumu_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m1x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tamu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tamu_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tuma (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tuma_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tumu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m1x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlsseg3e64_v_u64m1x3_tumu_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m1x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tamu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tamu_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tuma (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tuma_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tumu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m1x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlsseg4e64_v_u64m1x4_tumu_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m1x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_u64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_u64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tamu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tamu_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_u64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tuma (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tuma_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg5e64_v_u64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tumu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg5e64_v_u64m1x5_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg5e64_v_u64m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlsseg5e64_v_u64m1x5_tumu_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_u64m1x5_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_u64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_u64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tamu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tamu_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_u64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tuma (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tuma_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg6e64_v_u64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tumu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg6e64_v_u64m1x6_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg6e64_v_u64m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlsseg6e64_v_u64m1x6_tumu_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_u64m1x6_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_u64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_u64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tamu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tamu_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_u64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tuma (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tuma_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg7e64_v_u64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tumu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg7e64_v_u64m1x7_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg7e64_v_u64m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlsseg7e64_v_u64m1x7_tumu_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_u64m1x7_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_u64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tama (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tama_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_u64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tamu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tamu_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_u64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tuma (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tuma_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg8e64_v_u64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tumu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg8e64_v_u64m1x8_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg8e64_v_u64m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlsseg8e64_v_u64m1x8_tumu_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_u64m1x8_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tama (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tama_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tamu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tamu_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tuma (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tuma_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tumu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m2x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlsseg2e64_v_u64m2x2_tumu_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m2x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tama (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tama_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tamu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tamu_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tuma (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tuma_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg3e64_v_u64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tumu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg3e64_v_u64m2x3_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg3e64_v_u64m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlsseg3e64_v_u64m2x3_tumu_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_u64m2x3_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tama (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tama_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tamu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tamu_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tuma (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tuma_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg4e64_v_u64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tumu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg4e64_v_u64m2x4_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg4e64_v_u64m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlsseg4e64_v_u64m2x4_tumu_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_u64m2x4_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tama (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_tama (mask, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tama_vl31 (vbool16_t mask, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tama (mask, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tamu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_tamu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tamu_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tamu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tuma (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_tuma (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tuma_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tuma (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e64_v_u64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tumu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride, size_t vl)
{
  return vlsseg2e64_v_u64m4x2_tumu (mask, dest, base, bstride, vl);
}

/*
** test_vlsseg2e64_v_u64m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlsseg2e64_v_u64m4x2_tumu_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_u64m4x2_tumu (mask, dest, base, bstride, 31);
}

/*
** test_vlsseg2e16_v_f16mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_tamu_vl32 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_tuma_vl32 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlsseg2e16_v_f16mf4x2_tumu_vl32 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf4x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_tamu_vl32 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_tuma_vl32 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlsseg3e16_v_f16mf4x3_tumu_vl32 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf4x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_tamu_vl32 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_tuma_vl32 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlsseg4e16_v_f16mf4x4_tumu_vl32 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf4x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_tamu_vl32 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_tuma_vl32 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlsseg5e16_v_f16mf4x5_tumu_vl32 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf4x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_tamu_vl32 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_tuma_vl32 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlsseg6e16_v_f16mf4x6_tumu_vl32 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf4x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_tamu_vl32 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_tuma_vl32 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlsseg7e16_v_f16mf4x7_tumu_vl32 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf4x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_tama_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_tamu_vl32 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_tuma_vl32 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlsseg8e16_v_f16mf4x8_tumu_vl32 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf4x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_tamu_vl32 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_tuma_vl32 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlsseg2e16_v_f16mf2x2_tumu_vl32 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16mf2x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_tamu_vl32 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_tuma_vl32 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlsseg3e16_v_f16mf2x3_tumu_vl32 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16mf2x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_tamu_vl32 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_tuma_vl32 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlsseg4e16_v_f16mf2x4_tumu_vl32 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16mf2x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_tamu_vl32 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_tuma_vl32 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlsseg5e16_v_f16mf2x5_tumu_vl32 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16mf2x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_tamu_vl32 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_tuma_vl32 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlsseg6e16_v_f16mf2x6_tumu_vl32 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16mf2x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_tamu_vl32 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_tuma_vl32 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlsseg7e16_v_f16mf2x7_tumu_vl32 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16mf2x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_tama_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_tamu_vl32 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_tuma_vl32 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlsseg8e16_v_f16mf2x8_tumu_vl32 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16mf2x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_tamu_vl32 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_tuma_vl32 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlsseg2e16_v_f16m1x2_tumu_vl32 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m1x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_tamu_vl32 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_tuma_vl32 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlsseg3e16_v_f16m1x3_tumu_vl32 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m1x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_tamu_vl32 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_tuma_vl32 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlsseg4e16_v_f16m1x4_tumu_vl32 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m1x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_tamu_vl32 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_tuma_vl32 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e16_v_f16m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlsseg5e16_v_f16m1x5_tumu_vl32 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg5e16_v_f16m1x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_tamu_vl32 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_tuma_vl32 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e16_v_f16m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlsseg6e16_v_f16m1x6_tumu_vl32 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg6e16_v_f16m1x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_tamu_vl32 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_tuma_vl32 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e16_v_f16m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlsseg7e16_v_f16m1x7_tumu_vl32 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg7e16_v_f16m1x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_tama_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_tamu_vl32 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_tuma_vl32 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e16_v_f16m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlsseg8e16_v_f16m1x8_tumu_vl32 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg8e16_v_f16m1x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_tama_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_tamu_vl32 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_tuma_vl32 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlsseg2e16_v_f16m2x2_tumu_vl32 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m2x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_tama_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_tamu_vl32 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_tuma_vl32 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e16_v_f16m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlsseg3e16_v_f16m2x3_tumu_vl32 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg3e16_v_f16m2x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_tama_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_tamu_vl32 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_tuma_vl32 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e16_v_f16m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlsseg4e16_v_f16m2x4_tumu_vl32 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg4e16_v_f16m2x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_tama_vl32 (vbool4_t mask, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_tamu_vl32 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_tuma_vl32 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e16_v_f16m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlsseg2e16_v_f16m4x2_tumu_vl32 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, ptrdiff_t bstride)
{
  return vlsseg2e16_v_f16m4x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_tamu_vl32 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_tuma_vl32 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlsseg2e32_v_f32mf2x2_tumu_vl32 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32mf2x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_tamu_vl32 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_tuma_vl32 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlsseg3e32_v_f32mf2x3_tumu_vl32 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32mf2x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_tamu_vl32 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_tuma_vl32 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlsseg4e32_v_f32mf2x4_tumu_vl32 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32mf2x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_tamu_vl32 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_tuma_vl32 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlsseg5e32_v_f32mf2x5_tumu_vl32 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32mf2x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_tamu_vl32 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_tuma_vl32 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlsseg6e32_v_f32mf2x6_tumu_vl32 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32mf2x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_tamu_vl32 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_tuma_vl32 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlsseg7e32_v_f32mf2x7_tumu_vl32 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32mf2x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_tama_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_tamu_vl32 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_tuma_vl32 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlsseg8e32_v_f32mf2x8_tumu_vl32 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32mf2x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_tamu_vl32 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_tuma_vl32 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlsseg2e32_v_f32m1x2_tumu_vl32 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m1x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_tamu_vl32 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_tuma_vl32 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlsseg3e32_v_f32m1x3_tumu_vl32 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m1x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_tamu_vl32 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_tuma_vl32 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlsseg4e32_v_f32m1x4_tumu_vl32 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m1x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_tamu_vl32 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_tuma_vl32 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e32_v_f32m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlsseg5e32_v_f32m1x5_tumu_vl32 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg5e32_v_f32m1x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_tamu_vl32 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_tuma_vl32 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e32_v_f32m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlsseg6e32_v_f32m1x6_tumu_vl32 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg6e32_v_f32m1x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_tamu_vl32 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_tuma_vl32 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e32_v_f32m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlsseg7e32_v_f32m1x7_tumu_vl32 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg7e32_v_f32m1x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_tama_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_tamu_vl32 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_tuma_vl32 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e32_v_f32m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlsseg8e32_v_f32m1x8_tumu_vl32 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg8e32_v_f32m1x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_tama_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_tamu_vl32 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_tuma_vl32 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlsseg2e32_v_f32m2x2_tumu_vl32 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m2x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_tama_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_tamu_vl32 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_tuma_vl32 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e32_v_f32m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlsseg3e32_v_f32m2x3_tumu_vl32 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg3e32_v_f32m2x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_tama_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_tamu_vl32 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_tuma_vl32 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e32_v_f32m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlsseg4e32_v_f32m2x4_tumu_vl32 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg4e32_v_f32m2x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_tama_vl32 (vbool8_t mask, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_tamu_vl32 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_tuma_vl32 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e32_v_f32m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlsseg2e32_v_f32m4x2_tumu_vl32 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, ptrdiff_t bstride)
{
  return vlsseg2e32_v_f32m4x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_tamu_vl32 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_tuma_vl32 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlsseg2e64_v_f64m1x2_tumu_vl32 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m1x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_tamu_vl32 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_tuma_vl32 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlsseg3e64_v_f64m1x3_tumu_vl32 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m1x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_tamu_vl32 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_tuma_vl32 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlsseg4e64_v_f64m1x4_tumu_vl32 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m1x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_tamu_vl32 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_tuma_vl32 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e64_v_f64m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlsseg5e64_v_f64m1x5_tumu_vl32 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg5e64_v_f64m1x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_tamu_vl32 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_tuma_vl32 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e64_v_f64m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlsseg6e64_v_f64m1x6_tumu_vl32 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg6e64_v_f64m1x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_tamu_vl32 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_tuma_vl32 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e64_v_f64m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlsseg7e64_v_f64m1x7_tumu_vl32 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg7e64_v_f64m1x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_tama_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_tamu_vl32 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_tuma_vl32 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e64_v_f64m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlsseg8e64_v_f64m1x8_tumu_vl32 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg8e64_v_f64m1x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_tama_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_tamu_vl32 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_tuma_vl32 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlsseg2e64_v_f64m2x2_tumu_vl32 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m2x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_tama_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_tamu_vl32 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_tuma_vl32 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e64_v_f64m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlsseg3e64_v_f64m2x3_tumu_vl32 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg3e64_v_f64m2x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_tama_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_tamu_vl32 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_tuma_vl32 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e64_v_f64m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlsseg4e64_v_f64m2x4_tumu_vl32 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg4e64_v_f64m2x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_tama_vl32 (vbool16_t mask, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_tamu_vl32 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_tuma_vl32 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e64_v_f64m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlsseg2e64_v_f64m4x2_tumu_vl32 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, ptrdiff_t bstride)
{
  return vlsseg2e64_v_f64m4x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_tamu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_tuma_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf8x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vlsseg2e8_v_i8mf8x2_tumu_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf8x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_tamu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_tuma_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf8x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vlsseg3e8_v_i8mf8x3_tumu_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf8x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_tamu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_tuma_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf8x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vlsseg4e8_v_i8mf8x4_tumu_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf8x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_tamu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_tuma_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf8x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vlsseg5e8_v_i8mf8x5_tumu_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf8x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_tamu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_tuma_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf8x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vlsseg6e8_v_i8mf8x6_tumu_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf8x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_tamu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_tuma_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf8x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vlsseg7e8_v_i8mf8x7_tumu_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf8x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_tama_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_tamu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_tuma_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf8x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vlsseg8e8_v_i8mf8x8_tumu_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf8x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_tamu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_tuma_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vlsseg2e8_v_i8mf4x2_tumu_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf4x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_tamu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_tuma_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vlsseg3e8_v_i8mf4x3_tumu_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf4x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_tamu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_tuma_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vlsseg4e8_v_i8mf4x4_tumu_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf4x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_tamu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_tuma_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vlsseg5e8_v_i8mf4x5_tumu_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf4x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_tamu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_tuma_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vlsseg6e8_v_i8mf4x6_tumu_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf4x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_tamu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_tuma_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vlsseg7e8_v_i8mf4x7_tumu_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf4x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_tama_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_tamu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_tuma_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vlsseg8e8_v_i8mf4x8_tumu_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf4x8_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_tamu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_tuma_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg2e8_v_i8mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vlsseg2e8_v_i8mf2x2_tumu_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg2e8_v_i8mf2x2_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_tamu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_tuma_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg3e8_v_i8mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vlsseg3e8_v_i8mf2x3_tumu_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg3e8_v_i8mf2x3_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_tamu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_tuma_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg4e8_v_i8mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vlsseg4e8_v_i8mf2x4_tumu_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg4e8_v_i8mf2x4_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_tamu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_tuma_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg5e8_v_i8mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vlsseg5e8_v_i8mf2x5_tumu_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg5e8_v_i8mf2x5_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_tamu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_tuma_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg6e8_v_i8mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vlsseg6e8_v_i8mf2x6_tumu_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg6e8_v_i8mf2x6_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_tamu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_tuma_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_tuma (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg7e8_v_i8mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vlsseg7e8_v_i8mf2x7_tumu_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg7e8_v_i8mf2x7_tumu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_tama_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8_tama (mask, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_tamu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8_tamu (mask, dest, base, bstride, 32);
}

/*
** test_vlsseg8e8_v_i8mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vlsseg8e8_v_i8mf2x8_tuma_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, ptrdiff_t bstride)
{
  return vlsseg8e8_v_i8mf2x8_tuma (mask, dest, base, bstride, 32);
}
