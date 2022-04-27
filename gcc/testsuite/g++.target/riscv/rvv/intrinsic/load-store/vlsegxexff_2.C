/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlseg5e16ff_v_i16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x5_t
test_vlseg5e16ff_v_i16mf2x5_tumu (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_tamu (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_tuma (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_tumu (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_tamu (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_tuma (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_tumu (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_tamu (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_tuma (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_tumu (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_tamu (vbool16_t mask, vint16m1x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_tuma (vbool16_t mask, vint16m1x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_tumu (vbool16_t mask, vint16m1x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_tamu (vbool16_t mask, vint16m1x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_tuma (vbool16_t mask, vint16m1x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_tumu (vbool16_t mask, vint16m1x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_tamu (vbool16_t mask, vint16m1x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_tuma (vbool16_t mask, vint16m1x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_tumu (vbool16_t mask, vint16m1x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_i16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_tamu (vbool16_t mask, vint16m1x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_i16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_tuma (vbool16_t mask, vint16m1x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_i16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_tumu (vbool16_t mask, vint16m1x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_tamu (vbool16_t mask, vint16m1x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_tuma (vbool16_t mask, vint16m1x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_tumu (vbool16_t mask, vint16m1x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_tamu (vbool16_t mask, vint16m1x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_tuma (vbool16_t mask, vint16m1x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_tumu (vbool16_t mask, vint16m1x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_tamu (vbool16_t mask, vint16m1x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_tuma (vbool16_t mask, vint16m1x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_tumu (vbool16_t mask, vint16m1x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_tamu (vbool8_t mask, vint16m2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_tuma (vbool8_t mask, vint16m2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_tumu (vbool8_t mask, vint16m2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_tamu (vbool8_t mask, vint16m2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_tuma (vbool8_t mask, vint16m2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_tumu (vbool8_t mask, vint16m2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_tamu (vbool8_t mask, vint16m2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_tuma (vbool8_t mask, vint16m2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_tumu (vbool8_t mask, vint16m2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_tamu (vbool4_t mask, vint16m4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_tuma (vbool4_t mask, vint16m4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_tumu (vbool4_t mask, vint16m4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_tamu (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_tuma (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_tumu (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_tamu (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_tuma (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_tumu (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_tamu (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_tuma (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_tumu (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_tamu (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_tuma (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_tumu (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_tamu (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_tuma (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_tumu (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_tamu (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_tuma (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_tumu (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_tamu (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_tuma (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_tumu (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_tamu (vbool32_t mask, vint32m1x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_tuma (vbool32_t mask, vint32m1x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_tumu (vbool32_t mask, vint32m1x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_tamu (vbool32_t mask, vint32m1x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_tuma (vbool32_t mask, vint32m1x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_tumu (vbool32_t mask, vint32m1x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_tamu (vbool32_t mask, vint32m1x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_tuma (vbool32_t mask, vint32m1x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_tumu (vbool32_t mask, vint32m1x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_tamu (vbool32_t mask, vint32m1x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_tuma (vbool32_t mask, vint32m1x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_tumu (vbool32_t mask, vint32m1x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_tamu (vbool32_t mask, vint32m1x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_tuma (vbool32_t mask, vint32m1x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_tumu (vbool32_t mask, vint32m1x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_tamu (vbool32_t mask, vint32m1x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_tuma (vbool32_t mask, vint32m1x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_tumu (vbool32_t mask, vint32m1x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_tamu (vbool32_t mask, vint32m1x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_tuma (vbool32_t mask, vint32m1x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_tumu (vbool32_t mask, vint32m1x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_tamu (vbool16_t mask, vint32m2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_tuma (vbool16_t mask, vint32m2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_tumu (vbool16_t mask, vint32m2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_tamu (vbool16_t mask, vint32m2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_tuma (vbool16_t mask, vint32m2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_tumu (vbool16_t mask, vint32m2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_tamu (vbool16_t mask, vint32m2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_tuma (vbool16_t mask, vint32m2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_tumu (vbool16_t mask, vint32m2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_tamu (vbool8_t mask, vint32m4x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_tuma (vbool8_t mask, vint32m4x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_tumu (vbool8_t mask, vint32m4x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_tamu (vbool64_t mask, vint64m1x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_tuma (vbool64_t mask, vint64m1x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_tumu (vbool64_t mask, vint64m1x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_tamu (vbool64_t mask, vint64m1x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_tuma (vbool64_t mask, vint64m1x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_tumu (vbool64_t mask, vint64m1x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_tamu (vbool64_t mask, vint64m1x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_tuma (vbool64_t mask, vint64m1x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_tumu (vbool64_t mask, vint64m1x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_i64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_tamu (vbool64_t mask, vint64m1x5_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_i64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_tuma (vbool64_t mask, vint64m1x5_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_i64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_tumu (vbool64_t mask, vint64m1x5_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_i64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_tamu (vbool64_t mask, vint64m1x6_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_i64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_tuma (vbool64_t mask, vint64m1x6_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_i64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_tumu (vbool64_t mask, vint64m1x6_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_i64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_tamu (vbool64_t mask, vint64m1x7_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_i64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_tuma (vbool64_t mask, vint64m1x7_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_i64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_tumu (vbool64_t mask, vint64m1x7_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_i64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_tamu (vbool64_t mask, vint64m1x8_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_i64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_tuma (vbool64_t mask, vint64m1x8_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_i64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_tumu (vbool64_t mask, vint64m1x8_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_tamu (vbool32_t mask, vint64m2x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_tuma (vbool32_t mask, vint64m2x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_tumu (vbool32_t mask, vint64m2x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_tamu (vbool32_t mask, vint64m2x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_tuma (vbool32_t mask, vint64m2x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_tumu (vbool32_t mask, vint64m2x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_tamu (vbool32_t mask, vint64m2x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_tuma (vbool32_t mask, vint64m2x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_tumu (vbool32_t mask, vint64m2x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_tamu (vbool16_t mask, vint64m4x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_tuma (vbool16_t mask, vint64m4x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_tumu (vbool16_t mask, vint64m4x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf8x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tamu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf8x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tuma (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf8x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tumu (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf8x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tamu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf8x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tuma (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf8x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tumu (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf8x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tamu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf8x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tuma (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf8x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tumu (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf8x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tamu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf8x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tuma (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf8x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tumu (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf8x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tamu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf8x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tuma (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf8x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tumu (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf8x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tamu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf8x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tuma (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf8x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tumu (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf8x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tamu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf8x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tuma (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf8x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tumu (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tamu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tuma (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tumu (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tamu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tuma (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tumu (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tamu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tuma (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tumu (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tamu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tuma (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tumu (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tamu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tuma (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tumu (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tamu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tuma (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tumu (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tamu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tuma (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tumu (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tamu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tuma (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tumu (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tamu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tuma (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tumu (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tamu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tuma (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tumu (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tamu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tuma (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tumu (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tamu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tuma (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tumu (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tamu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tuma (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tumu (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tamu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tuma (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tumu (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tamu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tuma (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tumu (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tamu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tuma (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tumu (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tamu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tuma (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tumu (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tamu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tuma (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tumu (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tamu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tuma (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tumu (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tamu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tuma (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tumu (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tamu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tuma (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tumu (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tamu (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tuma (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tumu (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tamu (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tuma (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tumu (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tamu (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tuma (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tumu (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tamu (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tuma (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tumu (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tamu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tuma (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tumu (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tamu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tuma (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tumu (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tamu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tuma (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tumu (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tamu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tuma (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tumu (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tamu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tuma (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tumu (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tamu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tuma (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tumu (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tamu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tuma (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tumu (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tamu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tuma (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tumu (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tamu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tuma (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tumu (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tamu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tuma (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tumu (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tamu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tuma (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x5_t
test_vlseg5e16ff_v_u16mf2x5_tumu (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tamu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tuma (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x6_t
test_vlseg6e16ff_v_u16mf2x6_tumu (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tamu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tuma (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x7_t
test_vlseg7e16ff_v_u16mf2x7_tumu (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tamu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tuma (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2x8_t
test_vlseg8e16ff_v_u16mf2x8_tumu (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tamu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tuma (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x2_t
test_vlseg2e16ff_v_u16m1x2_tumu (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tamu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tuma (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x3_t
test_vlseg3e16ff_v_u16m1x3_tumu (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tamu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tuma (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x4_t
test_vlseg4e16ff_v_u16m1x4_tumu (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tamu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tuma (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x5_t
test_vlseg5e16ff_v_u16m1x5_tumu (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tamu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tuma (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x6_t
test_vlseg6e16ff_v_u16m1x6_tumu (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tamu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tuma (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x7_t
test_vlseg7e16ff_v_u16m1x7_tumu (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tamu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tuma (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1x8_t
test_vlseg8e16ff_v_u16m1x8_tumu (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tamu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tuma (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x2_t
test_vlseg2e16ff_v_u16m2x2_tumu (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tamu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tuma (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x3_t
test_vlseg3e16ff_v_u16m2x3_tumu (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tamu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tuma (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2x4_t
test_vlseg4e16ff_v_u16m2x4_tumu (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tamu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tuma (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4x2_t
test_vlseg2e16ff_v_u16m4x2_tumu (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tamu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tuma (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x2_t
test_vlseg2e32ff_v_u32mf2x2_tumu (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tamu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tuma (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x3_t
test_vlseg3e32ff_v_u32mf2x3_tumu (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tamu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tuma (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x4_t
test_vlseg4e32ff_v_u32mf2x4_tumu (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tamu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tuma (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x5_t
test_vlseg5e32ff_v_u32mf2x5_tumu (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tamu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tuma (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x6_t
test_vlseg6e32ff_v_u32mf2x6_tumu (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tamu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tuma (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x7_t
test_vlseg7e32ff_v_u32mf2x7_tumu (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tamu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tuma (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2x8_t
test_vlseg8e32ff_v_u32mf2x8_tumu (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tamu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tuma (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x2_t
test_vlseg2e32ff_v_u32m1x2_tumu (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tamu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tuma (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x3_t
test_vlseg3e32ff_v_u32m1x3_tumu (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tamu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tuma (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x4_t
test_vlseg4e32ff_v_u32m1x4_tumu (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tamu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tuma (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_u32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x5_t
test_vlseg5e32ff_v_u32m1x5_tumu (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tamu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tuma (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_u32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x6_t
test_vlseg6e32ff_v_u32m1x6_tumu (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tamu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tuma (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_u32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x7_t
test_vlseg7e32ff_v_u32m1x7_tumu (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tamu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tuma (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_u32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1x8_t
test_vlseg8e32ff_v_u32m1x8_tumu (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tamu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tuma (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x2_t
test_vlseg2e32ff_v_u32m2x2_tumu (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tamu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tuma (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_u32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x3_t
test_vlseg3e32ff_v_u32m2x3_tumu (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tamu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tuma (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_u32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2x4_t
test_vlseg4e32ff_v_u32m2x4_tumu (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tamu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tuma (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_u32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vlseg2e32ff_v_u32m4x2_tumu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tamu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tuma (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x2_t
test_vlseg2e64ff_v_u64m1x2_tumu (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tamu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tuma (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x3_t
test_vlseg3e64ff_v_u64m1x3_tumu (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tamu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tuma (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x4_t
test_vlseg4e64ff_v_u64m1x4_tumu (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_u64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tamu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_u64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tuma (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_u64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x5_t
test_vlseg5e64ff_v_u64m1x5_tumu (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_u64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tamu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_u64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tuma (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_u64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x6_t
test_vlseg6e64ff_v_u64m1x6_tumu (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_u64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tamu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_u64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tuma (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_u64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x7_t
test_vlseg7e64ff_v_u64m1x7_tumu (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_u64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tamu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_u64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tuma (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_u64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1x8_t
test_vlseg8e64ff_v_u64m1x8_tumu (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tamu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tuma (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x2_t
test_vlseg2e64ff_v_u64m2x2_tumu (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tamu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tuma (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_u64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x3_t
test_vlseg3e64ff_v_u64m2x3_tumu (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tamu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tuma (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_u64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2x4_t
test_vlseg4e64ff_v_u64m2x4_tumu (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tumu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tamu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tamu (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tuma (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tuma (mask, dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_u64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4x2_t
test_vlseg2e64ff_v_u64m4x2_tumu (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tumu (mask, dest, base, new_vl, vl);
}



