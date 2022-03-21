/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlseg8e8_v_i8mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vlseg8e8_v_i8mf2x8_tumu_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8mf2x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg2e8_v_i8m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_i8m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_tamu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_tuma_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_tumu_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_i8m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg3e8_v_i8m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_i8m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_tamu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_i8m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_tuma_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_i8m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_tumu_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_i8m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg4e8_v_i8m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_i8m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_tamu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_i8m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_tuma_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_i8m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_tumu_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_i8m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg5e8_v_i8m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e8_v_i8m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_tamu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_i8m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_tuma_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_i8m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_tumu_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_i8m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg6e8_v_i8m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e8_v_i8m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_tamu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_i8m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_tuma_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_i8m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_tumu_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_i8m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg7e8_v_i8m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e8_v_i8m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_tamu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_i8m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_tuma_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_i8m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_tumu_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_i8m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_tama_vl32 (vbool8_t mask, int8_t *base)
{
  return vlseg8e8_v_i8m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e8_v_i8m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_tamu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_i8m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_tuma_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_i8m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_tumu_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_tama_vl32 (vbool4_t mask, int8_t *base)
{
  return vlseg2e8_v_i8m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_i8m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_tamu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_tuma_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_tumu_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_i8m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_tama_vl32 (vbool4_t mask, int8_t *base)
{
  return vlseg3e8_v_i8m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_i8m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_tamu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_i8m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_tuma_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_i8m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_tumu_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_i8m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_tama_vl32 (vbool4_t mask, int8_t *base)
{
  return vlseg4e8_v_i8m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_i8m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_tamu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_i8m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_tuma_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_i8m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_tumu_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_tama_vl32 (vbool2_t mask, int8_t *base)
{
  return vlseg2e8_v_i8m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_i8m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_tamu_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_tuma_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_i8m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_tumu_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg2e16_v_i16mf4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_i16mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_tamu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_tuma_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_tumu_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg3e16_v_i16mf4x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_i16mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_tamu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf4x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_tuma_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf4x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_tumu_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf4x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg4e16_v_i16mf4x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_i16mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_tamu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf4x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_tuma_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf4x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_tumu_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf4x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg5e16_v_i16mf4x5_tama (mask, base, 32);
}

/*
** test_vlseg5e16_v_i16mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_tamu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf4x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_tuma_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf4x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_tumu_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf4x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg6e16_v_i16mf4x6_tama (mask, base, 32);
}

/*
** test_vlseg6e16_v_i16mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_tamu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf4x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_tuma_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf4x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_tumu_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf4x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg7e16_v_i16mf4x7_tama (mask, base, 32);
}

/*
** test_vlseg7e16_v_i16mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_tamu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf4x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_tuma_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf4x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_tumu_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf4x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_tama_vl32 (vbool64_t mask, int16_t *base)
{
  return vlseg8e16_v_i16mf4x8_tama (mask, base, 32);
}

/*
** test_vlseg8e16_v_i16mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_tamu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf4x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_tuma_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf4x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_tumu_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf4x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg2e16_v_i16mf2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_i16mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_tamu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_tuma_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_tumu_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg3e16_v_i16mf2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_i16mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_tamu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_tuma_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_tumu_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg4e16_v_i16mf2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_i16mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_tamu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_tuma_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_tumu_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg5e16_v_i16mf2x5_tama (mask, base, 32);
}

/*
** test_vlseg5e16_v_i16mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_tamu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf2x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_tuma_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf2x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_tumu_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf2x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg6e16_v_i16mf2x6_tama (mask, base, 32);
}

/*
** test_vlseg6e16_v_i16mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_tamu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf2x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_tuma_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf2x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_tumu_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf2x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg7e16_v_i16mf2x7_tama (mask, base, 32);
}

/*
** test_vlseg7e16_v_i16mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_tamu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf2x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_tuma_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf2x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_tumu_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf2x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_tama_vl32 (vbool32_t mask, int16_t *base)
{
  return vlseg8e16_v_i16mf2x8_tama (mask, base, 32);
}

/*
** test_vlseg8e16_v_i16mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_tamu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf2x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_tuma_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf2x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_tumu_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf2x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg2e16_v_i16m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_i16m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_tamu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_tuma_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_tumu_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg3e16_v_i16m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_i16m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_tamu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_tuma_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_tumu_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg4e16_v_i16m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_i16m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_tamu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_tuma_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_tumu_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg5e16_v_i16m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e16_v_i16m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_tamu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_tuma_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_i16m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_tumu_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg6e16_v_i16m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e16_v_i16m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_tamu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_tuma_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_i16m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_tumu_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg7e16_v_i16m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e16_v_i16m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_tamu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_tuma_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_i16m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_tumu_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_tama_vl32 (vbool16_t mask, int16_t *base)
{
  return vlseg8e16_v_i16m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e16_v_i16m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_tamu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_tuma_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_i16m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_tumu_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_tama_vl32 (vbool8_t mask, int16_t *base)
{
  return vlseg2e16_v_i16m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_i16m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_tamu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_tuma_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_tumu_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_tama_vl32 (vbool8_t mask, int16_t *base)
{
  return vlseg3e16_v_i16m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_i16m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_tamu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_tuma_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_i16m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_tumu_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_tama_vl32 (vbool8_t mask, int16_t *base)
{
  return vlseg4e16_v_i16m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_i16m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_tamu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_tuma_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_i16m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_tumu_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_tama_vl32 (vbool4_t mask, int16_t *base)
{
  return vlseg2e16_v_i16m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_i16m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_tamu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_tuma_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_i16m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_tumu_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg2e32_v_i32mf2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_i32mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_tamu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32mf2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_tuma_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32mf2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_tumu_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32mf2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg3e32_v_i32mf2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e32_v_i32mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_tamu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32mf2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_tuma_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32mf2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_tumu_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32mf2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg4e32_v_i32mf2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e32_v_i32mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_tamu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32mf2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_tuma_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32mf2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_tumu_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32mf2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_i32mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg5e32_v_i32mf2x5_tama (mask, base, 32);
}

/*
** test_vlseg5e32_v_i32mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_tamu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32mf2x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_i32mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_tuma_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32mf2x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_i32mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_tumu_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32mf2x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_i32mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg6e32_v_i32mf2x6_tama (mask, base, 32);
}

/*
** test_vlseg6e32_v_i32mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_tamu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32mf2x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_i32mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_tuma_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32mf2x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_i32mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_tumu_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32mf2x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_i32mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg7e32_v_i32mf2x7_tama (mask, base, 32);
}

/*
** test_vlseg7e32_v_i32mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_tamu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32mf2x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_i32mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_tuma_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32mf2x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_i32mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_tumu_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32mf2x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_i32mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_tama_vl32 (vbool64_t mask, int32_t *base)
{
  return vlseg8e32_v_i32mf2x8_tama (mask, base, 32);
}

/*
** test_vlseg8e32_v_i32mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_tamu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32mf2x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_i32mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_tuma_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32mf2x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_i32mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_tumu_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32mf2x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg2e32_v_i32m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_i32m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_tamu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_tuma_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_tumu_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg3e32_v_i32m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e32_v_i32m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_tamu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_tuma_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_tumu_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg4e32_v_i32m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e32_v_i32m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_tamu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_tuma_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_tumu_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_i32m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg5e32_v_i32m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e32_v_i32m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_tamu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_i32m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_tuma_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_i32m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_tumu_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_i32m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg6e32_v_i32m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e32_v_i32m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_tamu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_i32m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_tuma_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_i32m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_tumu_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_i32m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg7e32_v_i32m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e32_v_i32m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_tamu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_i32m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_tuma_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_i32m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_tumu_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_i32m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_tama_vl32 (vbool32_t mask, int32_t *base)
{
  return vlseg8e32_v_i32m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e32_v_i32m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_tamu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_i32m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_tuma_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_i32m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_tumu_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_tama_vl32 (vbool16_t mask, int32_t *base)
{
  return vlseg2e32_v_i32m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_i32m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_tamu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_tuma_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_tumu_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_tama_vl32 (vbool16_t mask, int32_t *base)
{
  return vlseg3e32_v_i32m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e32_v_i32m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_tamu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_tuma_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_i32m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_tumu_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_tama_vl32 (vbool16_t mask, int32_t *base)
{
  return vlseg4e32_v_i32m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e32_v_i32m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_tamu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_tuma_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_i32m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_tumu_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_tama_vl32 (vbool8_t mask, int32_t *base)
{
  return vlseg2e32_v_i32m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_i32m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_tamu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_tuma_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_i32m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_tumu_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg2e64_v_i64m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e64_v_i64m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_tamu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_tuma_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_tumu_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_i64m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg3e64_v_i64m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e64_v_i64m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_tamu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_i64m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_tuma_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_i64m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_tumu_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_i64m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg4e64_v_i64m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e64_v_i64m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_tamu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_i64m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_tuma_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_i64m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_tumu_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e64_v_i64m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg5e64_v_i64m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e64_v_i64m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_tamu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base)
{
  return vlseg5e64_v_i64m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e64_v_i64m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_tuma_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base)
{
  return vlseg5e64_v_i64m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e64_v_i64m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_tumu_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base)
{
  return vlseg5e64_v_i64m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e64_v_i64m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg6e64_v_i64m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e64_v_i64m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_tamu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base)
{
  return vlseg6e64_v_i64m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e64_v_i64m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_tuma_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base)
{
  return vlseg6e64_v_i64m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e64_v_i64m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_tumu_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base)
{
  return vlseg6e64_v_i64m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e64_v_i64m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg7e64_v_i64m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e64_v_i64m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_tamu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base)
{
  return vlseg7e64_v_i64m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e64_v_i64m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_tuma_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base)
{
  return vlseg7e64_v_i64m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e64_v_i64m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_tumu_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base)
{
  return vlseg7e64_v_i64m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e64_v_i64m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_tama_vl32 (vbool64_t mask, int64_t *base)
{
  return vlseg8e64_v_i64m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e64_v_i64m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_tamu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base)
{
  return vlseg8e64_v_i64m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e64_v_i64m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_tuma_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base)
{
  return vlseg8e64_v_i64m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e64_v_i64m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_tumu_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base)
{
  return vlseg8e64_v_i64m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_tama_vl32 (vbool32_t mask, int64_t *base)
{
  return vlseg2e64_v_i64m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e64_v_i64m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_tamu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_tuma_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_tumu_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_i64m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_tama_vl32 (vbool32_t mask, int64_t *base)
{
  return vlseg3e64_v_i64m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e64_v_i64m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_tamu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_i64m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_tuma_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_i64m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_tumu_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_i64m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_tama_vl32 (vbool32_t mask, int64_t *base)
{
  return vlseg4e64_v_i64m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e64_v_i64m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_tamu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_i64m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_tuma_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_i64m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_tumu_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_tama_vl32 (vbool16_t mask, int64_t *base)
{
  return vlseg2e64_v_i64m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e64_v_i64m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_tamu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_tuma_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_i64m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_tumu_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf8x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg2e8_v_u8mf8x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_u8mf8x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_tamu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf8x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf8x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_tuma_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf8x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf8x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_tumu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf8x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf8x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg3e8_v_u8mf8x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_u8mf8x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_tamu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf8x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf8x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_tuma_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf8x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf8x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_tumu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf8x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf8x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg4e8_v_u8mf8x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_u8mf8x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_tamu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf8x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf8x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_tuma_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf8x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf8x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_tumu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf8x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf8x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg5e8_v_u8mf8x5_tama (mask, base, 32);
}

/*
** test_vlseg5e8_v_u8mf8x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_tamu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf8x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf8x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_tuma_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf8x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf8x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_tumu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf8x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf8x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg6e8_v_u8mf8x6_tama (mask, base, 32);
}

/*
** test_vlseg6e8_v_u8mf8x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_tamu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf8x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf8x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_tuma_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf8x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf8x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_tumu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf8x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf8x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg7e8_v_u8mf8x7_tama (mask, base, 32);
}

/*
** test_vlseg7e8_v_u8mf8x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_tamu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf8x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf8x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_tuma_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf8x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf8x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_tumu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf8x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf8x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_tama_vl32 (vbool64_t mask, uint8_t *base)
{
  return vlseg8e8_v_u8mf8x8_tama (mask, base, 32);
}

/*
** test_vlseg8e8_v_u8mf8x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_tamu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf8x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf8x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_tuma_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf8x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf8x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_tumu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf8x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg2e8_v_u8mf4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_u8mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_tamu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_tuma_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_tumu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg3e8_v_u8mf4x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_u8mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_tamu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf4x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_tuma_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf4x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_tumu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf4x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg4e8_v_u8mf4x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_u8mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_tamu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf4x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_tuma_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf4x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_tumu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf4x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg5e8_v_u8mf4x5_tama (mask, base, 32);
}

/*
** test_vlseg5e8_v_u8mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_tamu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf4x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_tuma_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf4x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_tumu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf4x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg6e8_v_u8mf4x6_tama (mask, base, 32);
}

/*
** test_vlseg6e8_v_u8mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_tamu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf4x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_tuma_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf4x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_tumu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf4x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg7e8_v_u8mf4x7_tama (mask, base, 32);
}

/*
** test_vlseg7e8_v_u8mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_tamu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf4x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_tuma_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf4x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_tumu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf4x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_tama_vl32 (vbool32_t mask, uint8_t *base)
{
  return vlseg8e8_v_u8mf4x8_tama (mask, base, 32);
}

/*
** test_vlseg8e8_v_u8mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_tamu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf4x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_tuma_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf4x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_tumu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf4x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg2e8_v_u8mf2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_u8mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_tamu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_tuma_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_tumu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg3e8_v_u8mf2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_u8mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_tamu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_tuma_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_tumu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg4e8_v_u8mf2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_u8mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_tamu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_tuma_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_tumu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg5e8_v_u8mf2x5_tama (mask, base, 32);
}

/*
** test_vlseg5e8_v_u8mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_tamu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf2x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_tuma_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf2x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_tumu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf2x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg6e8_v_u8mf2x6_tama (mask, base, 32);
}

/*
** test_vlseg6e8_v_u8mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_tamu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf2x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_tuma_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf2x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_tumu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf2x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg7e8_v_u8mf2x7_tama (mask, base, 32);
}

/*
** test_vlseg7e8_v_u8mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_tamu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf2x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_tuma_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf2x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_tumu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf2x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_tama_vl32 (vbool16_t mask, uint8_t *base)
{
  return vlseg8e8_v_u8mf2x8_tama (mask, base, 32);
}

/*
** test_vlseg8e8_v_u8mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_tamu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf2x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_tuma_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf2x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_tumu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf2x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg2e8_v_u8m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_u8m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_tamu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_tuma_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_tumu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg3e8_v_u8m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_u8m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_tamu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_tuma_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_tumu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg4e8_v_u8m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_u8m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_tamu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_tuma_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_tumu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg5e8_v_u8m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e8_v_u8m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_tamu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_tuma_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e8_v_u8m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_tumu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg6e8_v_u8m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e8_v_u8m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_tamu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_tuma_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e8_v_u8m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_tumu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg7e8_v_u8m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e8_v_u8m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_tamu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_tuma_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e8_v_u8m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_tumu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_tama_vl32 (vbool8_t mask, uint8_t *base)
{
  return vlseg8e8_v_u8m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e8_v_u8m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_tamu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_tuma_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e8_v_u8m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_tumu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_tama_vl32 (vbool4_t mask, uint8_t *base)
{
  return vlseg2e8_v_u8m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_u8m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_tamu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_tuma_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_tumu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_tama_vl32 (vbool4_t mask, uint8_t *base)
{
  return vlseg3e8_v_u8m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e8_v_u8m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_tamu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_tuma_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e8_v_u8m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_tumu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_tama_vl32 (vbool4_t mask, uint8_t *base)
{
  return vlseg4e8_v_u8m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e8_v_u8m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_tamu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_tuma_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e8_v_u8m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_tumu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_tama_vl32 (vbool2_t mask, uint8_t *base)
{
  return vlseg2e8_v_u8m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e8_v_u8m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_tamu_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_tuma_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e8_v_u8m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_tumu_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg2e16_v_u16mf4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_u16mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_tamu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_tuma_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_tumu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg3e16_v_u16mf4x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_u16mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_tamu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf4x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_tuma_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf4x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_tumu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf4x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg4e16_v_u16mf4x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_u16mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_tamu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf4x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_tuma_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf4x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_tumu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf4x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg5e16_v_u16mf4x5_tama (mask, base, 32);
}

/*
** test_vlseg5e16_v_u16mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_tamu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf4x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_tuma_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf4x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_tumu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf4x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg6e16_v_u16mf4x6_tama (mask, base, 32);
}

/*
** test_vlseg6e16_v_u16mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_tamu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf4x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_tuma_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf4x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_tumu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf4x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg7e16_v_u16mf4x7_tama (mask, base, 32);
}

/*
** test_vlseg7e16_v_u16mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_tamu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf4x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_tuma_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf4x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_tumu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf4x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_tama_vl32 (vbool64_t mask, uint16_t *base)
{
  return vlseg8e16_v_u16mf4x8_tama (mask, base, 32);
}

/*
** test_vlseg8e16_v_u16mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_tamu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf4x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_tuma_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf4x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_tumu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf4x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg2e16_v_u16mf2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_u16mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_tamu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_tuma_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_tumu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg3e16_v_u16mf2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_u16mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_tamu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_tuma_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_tumu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg4e16_v_u16mf2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_u16mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_tamu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_tuma_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_tumu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlseg5e16_v_u16mf2x5_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg5e16_v_u16mf2x5_tama (mask, base, 32);
}

/*
** test_vlseg5e16_v_u16mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlseg5e16_v_u16mf2x5_tamu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf2x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlseg5e16_v_u16mf2x5_tuma_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf2x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vlseg5e16_v_u16mf2x5_tumu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf2x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlseg6e16_v_u16mf2x6_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg6e16_v_u16mf2x6_tama (mask, base, 32);
}

/*
** test_vlseg6e16_v_u16mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlseg6e16_v_u16mf2x6_tamu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf2x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlseg6e16_v_u16mf2x6_tuma_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf2x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vlseg6e16_v_u16mf2x6_tumu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf2x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlseg7e16_v_u16mf2x7_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg7e16_v_u16mf2x7_tama (mask, base, 32);
}

/*
** test_vlseg7e16_v_u16mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlseg7e16_v_u16mf2x7_tamu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf2x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlseg7e16_v_u16mf2x7_tuma_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf2x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vlseg7e16_v_u16mf2x7_tumu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf2x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlseg8e16_v_u16mf2x8_tama_vl32 (vbool32_t mask, uint16_t *base)
{
  return vlseg8e16_v_u16mf2x8_tama (mask, base, 32);
}

/*
** test_vlseg8e16_v_u16mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlseg8e16_v_u16mf2x8_tamu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf2x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlseg8e16_v_u16mf2x8_tuma_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf2x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vlseg8e16_v_u16mf2x8_tumu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf2x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlseg2e16_v_u16m1x2_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg2e16_v_u16m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_u16m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlseg2e16_v_u16m1x2_tamu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlseg2e16_v_u16m1x2_tuma_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vlseg2e16_v_u16m1x2_tumu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlseg3e16_v_u16m1x3_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg3e16_v_u16m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_u16m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlseg3e16_v_u16m1x3_tamu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlseg3e16_v_u16m1x3_tuma_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vlseg3e16_v_u16m1x3_tumu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlseg4e16_v_u16m1x4_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg4e16_v_u16m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_u16m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlseg4e16_v_u16m1x4_tamu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlseg4e16_v_u16m1x4_tuma_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vlseg4e16_v_u16m1x4_tumu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlseg5e16_v_u16m1x5_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg5e16_v_u16m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e16_v_u16m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlseg5e16_v_u16m1x5_tamu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlseg5e16_v_u16m1x5_tuma_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e16_v_u16m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vlseg5e16_v_u16m1x5_tumu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlseg6e16_v_u16m1x6_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg6e16_v_u16m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e16_v_u16m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlseg6e16_v_u16m1x6_tamu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlseg6e16_v_u16m1x6_tuma_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e16_v_u16m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vlseg6e16_v_u16m1x6_tumu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlseg7e16_v_u16m1x7_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg7e16_v_u16m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e16_v_u16m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlseg7e16_v_u16m1x7_tamu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlseg7e16_v_u16m1x7_tuma_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e16_v_u16m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vlseg7e16_v_u16m1x7_tumu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlseg8e16_v_u16m1x8_tama_vl32 (vbool16_t mask, uint16_t *base)
{
  return vlseg8e16_v_u16m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e16_v_u16m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlseg8e16_v_u16m1x8_tamu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlseg8e16_v_u16m1x8_tuma_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e16_v_u16m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vlseg8e16_v_u16m1x8_tumu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlseg2e16_v_u16m2x2_tama_vl32 (vbool8_t mask, uint16_t *base)
{
  return vlseg2e16_v_u16m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_u16m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlseg2e16_v_u16m2x2_tamu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlseg2e16_v_u16m2x2_tuma_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vlseg2e16_v_u16m2x2_tumu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlseg3e16_v_u16m2x3_tama_vl32 (vbool8_t mask, uint16_t *base)
{
  return vlseg3e16_v_u16m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e16_v_u16m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlseg3e16_v_u16m2x3_tamu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlseg3e16_v_u16m2x3_tuma_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e16_v_u16m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vlseg3e16_v_u16m2x3_tumu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlseg4e16_v_u16m2x4_tama_vl32 (vbool8_t mask, uint16_t *base)
{
  return vlseg4e16_v_u16m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e16_v_u16m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlseg4e16_v_u16m2x4_tamu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlseg4e16_v_u16m2x4_tuma_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e16_v_u16m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vlseg4e16_v_u16m2x4_tumu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlseg2e16_v_u16m4x2_tama_vl32 (vbool4_t mask, uint16_t *base)
{
  return vlseg2e16_v_u16m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e16_v_u16m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlseg2e16_v_u16m4x2_tamu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlseg2e16_v_u16m4x2_tuma_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_u16m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vlseg2e16_v_u16m4x2_tumu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlseg2e32_v_u32mf2x2_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg2e32_v_u32mf2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_u32mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlseg2e32_v_u32mf2x2_tamu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32mf2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlseg2e32_v_u32mf2x2_tuma_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32mf2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vlseg2e32_v_u32mf2x2_tumu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32mf2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlseg3e32_v_u32mf2x3_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg3e32_v_u32mf2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e32_v_u32mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlseg3e32_v_u32mf2x3_tamu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32mf2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlseg3e32_v_u32mf2x3_tuma_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32mf2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vlseg3e32_v_u32mf2x3_tumu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32mf2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlseg4e32_v_u32mf2x4_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg4e32_v_u32mf2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e32_v_u32mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlseg4e32_v_u32mf2x4_tamu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32mf2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlseg4e32_v_u32mf2x4_tuma_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32mf2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vlseg4e32_v_u32mf2x4_tumu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32mf2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_u32mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlseg5e32_v_u32mf2x5_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg5e32_v_u32mf2x5_tama (mask, base, 32);
}

/*
** test_vlseg5e32_v_u32mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlseg5e32_v_u32mf2x5_tamu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base)
{
  return vlseg5e32_v_u32mf2x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_u32mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlseg5e32_v_u32mf2x5_tuma_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base)
{
  return vlseg5e32_v_u32mf2x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_u32mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vlseg5e32_v_u32mf2x5_tumu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base)
{
  return vlseg5e32_v_u32mf2x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_u32mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlseg6e32_v_u32mf2x6_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg6e32_v_u32mf2x6_tama (mask, base, 32);
}

/*
** test_vlseg6e32_v_u32mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlseg6e32_v_u32mf2x6_tamu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base)
{
  return vlseg6e32_v_u32mf2x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_u32mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlseg6e32_v_u32mf2x6_tuma_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base)
{
  return vlseg6e32_v_u32mf2x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_u32mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vlseg6e32_v_u32mf2x6_tumu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base)
{
  return vlseg6e32_v_u32mf2x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_u32mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlseg7e32_v_u32mf2x7_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg7e32_v_u32mf2x7_tama (mask, base, 32);
}

/*
** test_vlseg7e32_v_u32mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlseg7e32_v_u32mf2x7_tamu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base)
{
  return vlseg7e32_v_u32mf2x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_u32mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlseg7e32_v_u32mf2x7_tuma_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base)
{
  return vlseg7e32_v_u32mf2x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_u32mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vlseg7e32_v_u32mf2x7_tumu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base)
{
  return vlseg7e32_v_u32mf2x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_u32mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlseg8e32_v_u32mf2x8_tama_vl32 (vbool64_t mask, uint32_t *base)
{
  return vlseg8e32_v_u32mf2x8_tama (mask, base, 32);
}

/*
** test_vlseg8e32_v_u32mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlseg8e32_v_u32mf2x8_tamu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base)
{
  return vlseg8e32_v_u32mf2x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_u32mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlseg8e32_v_u32mf2x8_tuma_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base)
{
  return vlseg8e32_v_u32mf2x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_u32mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vlseg8e32_v_u32mf2x8_tumu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base)
{
  return vlseg8e32_v_u32mf2x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlseg2e32_v_u32m1x2_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg2e32_v_u32m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_u32m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlseg2e32_v_u32m1x2_tamu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlseg2e32_v_u32m1x2_tuma_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vlseg2e32_v_u32m1x2_tumu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlseg3e32_v_u32m1x3_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg3e32_v_u32m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e32_v_u32m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlseg3e32_v_u32m1x3_tamu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlseg3e32_v_u32m1x3_tuma_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vlseg3e32_v_u32m1x3_tumu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlseg4e32_v_u32m1x4_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg4e32_v_u32m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e32_v_u32m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlseg4e32_v_u32m1x4_tamu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlseg4e32_v_u32m1x4_tuma_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vlseg4e32_v_u32m1x4_tumu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_u32m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlseg5e32_v_u32m1x5_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg5e32_v_u32m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e32_v_u32m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlseg5e32_v_u32m1x5_tamu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base)
{
  return vlseg5e32_v_u32m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_u32m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlseg5e32_v_u32m1x5_tuma_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base)
{
  return vlseg5e32_v_u32m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e32_v_u32m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vlseg5e32_v_u32m1x5_tumu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base)
{
  return vlseg5e32_v_u32m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_u32m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlseg6e32_v_u32m1x6_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg6e32_v_u32m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e32_v_u32m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlseg6e32_v_u32m1x6_tamu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base)
{
  return vlseg6e32_v_u32m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_u32m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlseg6e32_v_u32m1x6_tuma_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base)
{
  return vlseg6e32_v_u32m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e32_v_u32m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vlseg6e32_v_u32m1x6_tumu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base)
{
  return vlseg6e32_v_u32m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_u32m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlseg7e32_v_u32m1x7_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg7e32_v_u32m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e32_v_u32m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlseg7e32_v_u32m1x7_tamu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base)
{
  return vlseg7e32_v_u32m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_u32m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlseg7e32_v_u32m1x7_tuma_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base)
{
  return vlseg7e32_v_u32m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e32_v_u32m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vlseg7e32_v_u32m1x7_tumu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base)
{
  return vlseg7e32_v_u32m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_u32m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlseg8e32_v_u32m1x8_tama_vl32 (vbool32_t mask, uint32_t *base)
{
  return vlseg8e32_v_u32m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e32_v_u32m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlseg8e32_v_u32m1x8_tamu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base)
{
  return vlseg8e32_v_u32m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_u32m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlseg8e32_v_u32m1x8_tuma_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base)
{
  return vlseg8e32_v_u32m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e32_v_u32m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vlseg8e32_v_u32m1x8_tumu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base)
{
  return vlseg8e32_v_u32m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlseg2e32_v_u32m2x2_tama_vl32 (vbool16_t mask, uint32_t *base)
{
  return vlseg2e32_v_u32m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_u32m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlseg2e32_v_u32m2x2_tamu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlseg2e32_v_u32m2x2_tuma_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vlseg2e32_v_u32m2x2_tumu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlseg3e32_v_u32m2x3_tama_vl32 (vbool16_t mask, uint32_t *base)
{
  return vlseg3e32_v_u32m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e32_v_u32m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlseg3e32_v_u32m2x3_tamu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlseg3e32_v_u32m2x3_tuma_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e32_v_u32m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vlseg3e32_v_u32m2x3_tumu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base)
{
  return vlseg3e32_v_u32m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlseg4e32_v_u32m2x4_tama_vl32 (vbool16_t mask, uint32_t *base)
{
  return vlseg4e32_v_u32m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e32_v_u32m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlseg4e32_v_u32m2x4_tamu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlseg4e32_v_u32m2x4_tuma_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e32_v_u32m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vlseg4e32_v_u32m2x4_tumu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base)
{
  return vlseg4e32_v_u32m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlseg2e32_v_u32m4x2_tama_vl32 (vbool8_t mask, uint32_t *base)
{
  return vlseg2e32_v_u32m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e32_v_u32m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlseg2e32_v_u32m4x2_tamu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlseg2e32_v_u32m4x2_tuma_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e32_v_u32m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vlseg2e32_v_u32m4x2_tumu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base)
{
  return vlseg2e32_v_u32m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlseg2e64_v_u64m1x2_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg2e64_v_u64m1x2_tama (mask, base, 32);
}

/*
** test_vlseg2e64_v_u64m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlseg2e64_v_u64m1x2_tamu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m1x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlseg2e64_v_u64m1x2_tuma_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m1x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vlseg2e64_v_u64m1x2_tumu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m1x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_u64m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlseg3e64_v_u64m1x3_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg3e64_v_u64m1x3_tama (mask, base, 32);
}

/*
** test_vlseg3e64_v_u64m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlseg3e64_v_u64m1x3_tamu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base)
{
  return vlseg3e64_v_u64m1x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_u64m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlseg3e64_v_u64m1x3_tuma_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base)
{
  return vlseg3e64_v_u64m1x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_u64m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vlseg3e64_v_u64m1x3_tumu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base)
{
  return vlseg3e64_v_u64m1x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_u64m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlseg4e64_v_u64m1x4_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg4e64_v_u64m1x4_tama (mask, base, 32);
}

/*
** test_vlseg4e64_v_u64m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlseg4e64_v_u64m1x4_tamu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base)
{
  return vlseg4e64_v_u64m1x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_u64m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlseg4e64_v_u64m1x4_tuma_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base)
{
  return vlseg4e64_v_u64m1x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_u64m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vlseg4e64_v_u64m1x4_tumu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base)
{
  return vlseg4e64_v_u64m1x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg5e64_v_u64m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlseg5e64_v_u64m1x5_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg5e64_v_u64m1x5_tama (mask, base, 32);
}

/*
** test_vlseg5e64_v_u64m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlseg5e64_v_u64m1x5_tamu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base)
{
  return vlseg5e64_v_u64m1x5_tamu (mask, dest, base, 32);
}

/*
** test_vlseg5e64_v_u64m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlseg5e64_v_u64m1x5_tuma_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base)
{
  return vlseg5e64_v_u64m1x5_tuma (mask, dest, base, 32);
}

/*
** test_vlseg5e64_v_u64m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vlseg5e64_v_u64m1x5_tumu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base)
{
  return vlseg5e64_v_u64m1x5_tumu (mask, dest, base, 32);
}

/*
** test_vlseg6e64_v_u64m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlseg6e64_v_u64m1x6_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg6e64_v_u64m1x6_tama (mask, base, 32);
}

/*
** test_vlseg6e64_v_u64m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlseg6e64_v_u64m1x6_tamu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base)
{
  return vlseg6e64_v_u64m1x6_tamu (mask, dest, base, 32);
}

/*
** test_vlseg6e64_v_u64m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlseg6e64_v_u64m1x6_tuma_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base)
{
  return vlseg6e64_v_u64m1x6_tuma (mask, dest, base, 32);
}

/*
** test_vlseg6e64_v_u64m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vlseg6e64_v_u64m1x6_tumu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base)
{
  return vlseg6e64_v_u64m1x6_tumu (mask, dest, base, 32);
}

/*
** test_vlseg7e64_v_u64m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlseg7e64_v_u64m1x7_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg7e64_v_u64m1x7_tama (mask, base, 32);
}

/*
** test_vlseg7e64_v_u64m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlseg7e64_v_u64m1x7_tamu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base)
{
  return vlseg7e64_v_u64m1x7_tamu (mask, dest, base, 32);
}

/*
** test_vlseg7e64_v_u64m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlseg7e64_v_u64m1x7_tuma_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base)
{
  return vlseg7e64_v_u64m1x7_tuma (mask, dest, base, 32);
}

/*
** test_vlseg7e64_v_u64m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vlseg7e64_v_u64m1x7_tumu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base)
{
  return vlseg7e64_v_u64m1x7_tumu (mask, dest, base, 32);
}

/*
** test_vlseg8e64_v_u64m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlseg8e64_v_u64m1x8_tama_vl32 (vbool64_t mask, uint64_t *base)
{
  return vlseg8e64_v_u64m1x8_tama (mask, base, 32);
}

/*
** test_vlseg8e64_v_u64m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlseg8e64_v_u64m1x8_tamu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base)
{
  return vlseg8e64_v_u64m1x8_tamu (mask, dest, base, 32);
}

/*
** test_vlseg8e64_v_u64m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlseg8e64_v_u64m1x8_tuma_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base)
{
  return vlseg8e64_v_u64m1x8_tuma (mask, dest, base, 32);
}

/*
** test_vlseg8e64_v_u64m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vlseg8e64_v_u64m1x8_tumu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base)
{
  return vlseg8e64_v_u64m1x8_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlseg2e64_v_u64m2x2_tama_vl32 (vbool32_t mask, uint64_t *base)
{
  return vlseg2e64_v_u64m2x2_tama (mask, base, 32);
}

/*
** test_vlseg2e64_v_u64m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlseg2e64_v_u64m2x2_tamu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m2x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlseg2e64_v_u64m2x2_tuma_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m2x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vlseg2e64_v_u64m2x2_tumu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m2x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_u64m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlseg3e64_v_u64m2x3_tama_vl32 (vbool32_t mask, uint64_t *base)
{
  return vlseg3e64_v_u64m2x3_tama (mask, base, 32);
}

/*
** test_vlseg3e64_v_u64m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlseg3e64_v_u64m2x3_tamu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base)
{
  return vlseg3e64_v_u64m2x3_tamu (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_u64m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlseg3e64_v_u64m2x3_tuma_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base)
{
  return vlseg3e64_v_u64m2x3_tuma (mask, dest, base, 32);
}

/*
** test_vlseg3e64_v_u64m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vlseg3e64_v_u64m2x3_tumu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base)
{
  return vlseg3e64_v_u64m2x3_tumu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_u64m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlseg4e64_v_u64m2x4_tama_vl32 (vbool32_t mask, uint64_t *base)
{
  return vlseg4e64_v_u64m2x4_tama (mask, base, 32);
}

/*
** test_vlseg4e64_v_u64m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlseg4e64_v_u64m2x4_tamu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base)
{
  return vlseg4e64_v_u64m2x4_tamu (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_u64m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlseg4e64_v_u64m2x4_tuma_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base)
{
  return vlseg4e64_v_u64m2x4_tuma (mask, dest, base, 32);
}

/*
** test_vlseg4e64_v_u64m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vlseg4e64_v_u64m2x4_tumu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base)
{
  return vlseg4e64_v_u64m2x4_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlseg2e64_v_u64m4x2_tama_vl32 (vbool16_t mask, uint64_t *base)
{
  return vlseg2e64_v_u64m4x2_tama (mask, base, 32);
}

/*
** test_vlseg2e64_v_u64m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlseg2e64_v_u64m4x2_tamu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m4x2_tamu (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlseg2e64_v_u64m4x2_tuma_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m4x2_tuma (mask, dest, base, 32);
}

/*
** test_vlseg2e64_v_u64m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vlseg2e64_v_u64m4x2_tumu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base)
{
  return vlseg2e64_v_u64m4x2_tumu (mask, dest, base, 32);
}

/*
** test_vlseg2e16_v_f16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlseg2e16_v_f16mf4x2_ta (float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16mf4x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_f16mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlseg2e16_v_f16mf4x2_ta_vl31 (float16_t *base)
{
  return vlseg2e16_v_f16mf4x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_f16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlseg2e16_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16mf4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_f16mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vlseg2e16_v_f16mf4x2_tu_vl31 (vfloat16mf4x2_t dest, float16_t *base)
{
  return vlseg2e16_v_f16mf4x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_f16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlseg3e16_v_f16mf4x3_ta (float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16mf4x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_f16mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlseg3e16_v_f16mf4x3_ta_vl31 (float16_t *base)
{
  return vlseg3e16_v_f16mf4x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_f16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlseg3e16_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16mf4x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_f16mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vlseg3e16_v_f16mf4x3_tu_vl31 (vfloat16mf4x3_t dest, float16_t *base)
{
  return vlseg3e16_v_f16mf4x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_f16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlseg4e16_v_f16mf4x4_ta (float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16mf4x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_f16mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlseg4e16_v_f16mf4x4_ta_vl31 (float16_t *base)
{
  return vlseg4e16_v_f16mf4x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_f16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlseg4e16_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16mf4x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_f16mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vlseg4e16_v_f16mf4x4_tu_vl31 (vfloat16mf4x4_t dest, float16_t *base)
{
  return vlseg4e16_v_f16mf4x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_f16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlseg5e16_v_f16mf4x5_ta (float16_t *base, size_t vl)
{
  return vlseg5e16_v_f16mf4x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_f16mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlseg5e16_v_f16mf4x5_ta_vl31 (float16_t *base)
{
  return vlseg5e16_v_f16mf4x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_f16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlseg5e16_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, size_t vl)
{
  return vlseg5e16_v_f16mf4x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_f16mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vlseg5e16_v_f16mf4x5_tu_vl31 (vfloat16mf4x5_t dest, float16_t *base)
{
  return vlseg5e16_v_f16mf4x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_f16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlseg6e16_v_f16mf4x6_ta (float16_t *base, size_t vl)
{
  return vlseg6e16_v_f16mf4x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_f16mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlseg6e16_v_f16mf4x6_ta_vl31 (float16_t *base)
{
  return vlseg6e16_v_f16mf4x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_f16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlseg6e16_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, size_t vl)
{
  return vlseg6e16_v_f16mf4x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_f16mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vlseg6e16_v_f16mf4x6_tu_vl31 (vfloat16mf4x6_t dest, float16_t *base)
{
  return vlseg6e16_v_f16mf4x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_f16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlseg7e16_v_f16mf4x7_ta (float16_t *base, size_t vl)
{
  return vlseg7e16_v_f16mf4x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_f16mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlseg7e16_v_f16mf4x7_ta_vl31 (float16_t *base)
{
  return vlseg7e16_v_f16mf4x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_f16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlseg7e16_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, size_t vl)
{
  return vlseg7e16_v_f16mf4x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_f16mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vlseg7e16_v_f16mf4x7_tu_vl31 (vfloat16mf4x7_t dest, float16_t *base)
{
  return vlseg7e16_v_f16mf4x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_f16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlseg8e16_v_f16mf4x8_ta (float16_t *base, size_t vl)
{
  return vlseg8e16_v_f16mf4x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_f16mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlseg8e16_v_f16mf4x8_ta_vl31 (float16_t *base)
{
  return vlseg8e16_v_f16mf4x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_f16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlseg8e16_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, size_t vl)
{
  return vlseg8e16_v_f16mf4x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_f16mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vlseg8e16_v_f16mf4x8_tu_vl31 (vfloat16mf4x8_t dest, float16_t *base)
{
  return vlseg8e16_v_f16mf4x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_f16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlseg2e16_v_f16mf2x2_ta (float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16mf2x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_f16mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlseg2e16_v_f16mf2x2_ta_vl31 (float16_t *base)
{
  return vlseg2e16_v_f16mf2x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_f16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlseg2e16_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_f16mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vlseg2e16_v_f16mf2x2_tu_vl31 (vfloat16mf2x2_t dest, float16_t *base)
{
  return vlseg2e16_v_f16mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_f16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlseg3e16_v_f16mf2x3_ta (float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16mf2x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_f16mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlseg3e16_v_f16mf2x3_ta_vl31 (float16_t *base)
{
  return vlseg3e16_v_f16mf2x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_f16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlseg3e16_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_f16mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vlseg3e16_v_f16mf2x3_tu_vl31 (vfloat16mf2x3_t dest, float16_t *base)
{
  return vlseg3e16_v_f16mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_f16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlseg4e16_v_f16mf2x4_ta (float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16mf2x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_f16mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlseg4e16_v_f16mf2x4_ta_vl31 (float16_t *base)
{
  return vlseg4e16_v_f16mf2x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_f16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlseg4e16_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_f16mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vlseg4e16_v_f16mf2x4_tu_vl31 (vfloat16mf2x4_t dest, float16_t *base)
{
  return vlseg4e16_v_f16mf2x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_f16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlseg5e16_v_f16mf2x5_ta (float16_t *base, size_t vl)
{
  return vlseg5e16_v_f16mf2x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_f16mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlseg5e16_v_f16mf2x5_ta_vl31 (float16_t *base)
{
  return vlseg5e16_v_f16mf2x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_f16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlseg5e16_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, size_t vl)
{
  return vlseg5e16_v_f16mf2x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_f16mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vlseg5e16_v_f16mf2x5_tu_vl31 (vfloat16mf2x5_t dest, float16_t *base)
{
  return vlseg5e16_v_f16mf2x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_f16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlseg6e16_v_f16mf2x6_ta (float16_t *base, size_t vl)
{
  return vlseg6e16_v_f16mf2x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_f16mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlseg6e16_v_f16mf2x6_ta_vl31 (float16_t *base)
{
  return vlseg6e16_v_f16mf2x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_f16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlseg6e16_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, size_t vl)
{
  return vlseg6e16_v_f16mf2x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_f16mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vlseg6e16_v_f16mf2x6_tu_vl31 (vfloat16mf2x6_t dest, float16_t *base)
{
  return vlseg6e16_v_f16mf2x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_f16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlseg7e16_v_f16mf2x7_ta (float16_t *base, size_t vl)
{
  return vlseg7e16_v_f16mf2x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_f16mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlseg7e16_v_f16mf2x7_ta_vl31 (float16_t *base)
{
  return vlseg7e16_v_f16mf2x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_f16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlseg7e16_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, size_t vl)
{
  return vlseg7e16_v_f16mf2x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_f16mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vlseg7e16_v_f16mf2x7_tu_vl31 (vfloat16mf2x7_t dest, float16_t *base)
{
  return vlseg7e16_v_f16mf2x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_f16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlseg8e16_v_f16mf2x8_ta (float16_t *base, size_t vl)
{
  return vlseg8e16_v_f16mf2x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_f16mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlseg8e16_v_f16mf2x8_ta_vl31 (float16_t *base)
{
  return vlseg8e16_v_f16mf2x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_f16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlseg8e16_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, size_t vl)
{
  return vlseg8e16_v_f16mf2x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_f16mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vlseg8e16_v_f16mf2x8_tu_vl31 (vfloat16mf2x8_t dest, float16_t *base)
{
  return vlseg8e16_v_f16mf2x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_f16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlseg2e16_v_f16m1x2_ta (float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16m1x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_f16m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlseg2e16_v_f16m1x2_ta_vl31 (float16_t *base)
{
  return vlseg2e16_v_f16m1x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_f16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlseg2e16_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_f16m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x2_t
test_vlseg2e16_v_f16m1x2_tu_vl31 (vfloat16m1x2_t dest, float16_t *base)
{
  return vlseg2e16_v_f16m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_f16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlseg3e16_v_f16m1x3_ta (float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16m1x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_f16m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlseg3e16_v_f16m1x3_ta_vl31 (float16_t *base)
{
  return vlseg3e16_v_f16m1x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_f16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlseg3e16_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_f16m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x3_t
test_vlseg3e16_v_f16m1x3_tu_vl31 (vfloat16m1x3_t dest, float16_t *base)
{
  return vlseg3e16_v_f16m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_f16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlseg4e16_v_f16m1x4_ta (float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16m1x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_f16m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlseg4e16_v_f16m1x4_ta_vl31 (float16_t *base)
{
  return vlseg4e16_v_f16m1x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_f16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlseg4e16_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_f16m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x4_t
test_vlseg4e16_v_f16m1x4_tu_vl31 (vfloat16m1x4_t dest, float16_t *base)
{
  return vlseg4e16_v_f16m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_f16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlseg5e16_v_f16m1x5_ta (float16_t *base, size_t vl)
{
  return vlseg5e16_v_f16m1x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_f16m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlseg5e16_v_f16m1x5_ta_vl31 (float16_t *base)
{
  return vlseg5e16_v_f16m1x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_f16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlseg5e16_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, size_t vl)
{
  return vlseg5e16_v_f16m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_f16m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x5_t
test_vlseg5e16_v_f16m1x5_tu_vl31 (vfloat16m1x5_t dest, float16_t *base)
{
  return vlseg5e16_v_f16m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_f16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlseg6e16_v_f16m1x6_ta (float16_t *base, size_t vl)
{
  return vlseg6e16_v_f16m1x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_f16m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlseg6e16_v_f16m1x6_ta_vl31 (float16_t *base)
{
  return vlseg6e16_v_f16m1x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_f16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlseg6e16_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, size_t vl)
{
  return vlseg6e16_v_f16m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_f16m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x6_t
test_vlseg6e16_v_f16m1x6_tu_vl31 (vfloat16m1x6_t dest, float16_t *base)
{
  return vlseg6e16_v_f16m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_f16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlseg7e16_v_f16m1x7_ta (float16_t *base, size_t vl)
{
  return vlseg7e16_v_f16m1x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_f16m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlseg7e16_v_f16m1x7_ta_vl31 (float16_t *base)
{
  return vlseg7e16_v_f16m1x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_f16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlseg7e16_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, size_t vl)
{
  return vlseg7e16_v_f16m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_f16m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x7_t
test_vlseg7e16_v_f16m1x7_tu_vl31 (vfloat16m1x7_t dest, float16_t *base)
{
  return vlseg7e16_v_f16m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_f16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlseg8e16_v_f16m1x8_ta (float16_t *base, size_t vl)
{
  return vlseg8e16_v_f16m1x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_f16m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlseg8e16_v_f16m1x8_ta_vl31 (float16_t *base)
{
  return vlseg8e16_v_f16m1x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_f16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlseg8e16_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, size_t vl)
{
  return vlseg8e16_v_f16m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_f16m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m1x8_t
test_vlseg8e16_v_f16m1x8_tu_vl31 (vfloat16m1x8_t dest, float16_t *base)
{
  return vlseg8e16_v_f16m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_f16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlseg2e16_v_f16m2x2_ta (float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16m2x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_f16m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlseg2e16_v_f16m2x2_ta_vl31 (float16_t *base)
{
  return vlseg2e16_v_f16m2x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_f16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlseg2e16_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_f16m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vlseg2e16_v_f16m2x2_tu_vl31 (vfloat16m2x2_t dest, float16_t *base)
{
  return vlseg2e16_v_f16m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_f16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlseg3e16_v_f16m2x3_ta (float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16m2x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_f16m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlseg3e16_v_f16m2x3_ta_vl31 (float16_t *base)
{
  return vlseg3e16_v_f16m2x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_f16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlseg3e16_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, size_t vl)
{
  return vlseg3e16_v_f16m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_f16m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vlseg3e16_v_f16m2x3_tu_vl31 (vfloat16m2x3_t dest, float16_t *base)
{
  return vlseg3e16_v_f16m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_f16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlseg4e16_v_f16m2x4_ta (float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16m2x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_f16m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlseg4e16_v_f16m2x4_ta_vl31 (float16_t *base)
{
  return vlseg4e16_v_f16m2x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_f16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlseg4e16_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, size_t vl)
{
  return vlseg4e16_v_f16m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_f16m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vlseg4e16_v_f16m2x4_tu_vl31 (vfloat16m2x4_t dest, float16_t *base)
{
  return vlseg4e16_v_f16m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_f16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlseg2e16_v_f16m4x2_ta (float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16m4x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_f16m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlseg2e16_v_f16m4x2_ta_vl31 (float16_t *base)
{
  return vlseg2e16_v_f16m4x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_f16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlseg2e16_v_f16m4x2_tu (vfloat16m4x2_t dest, float16_t *base, size_t vl)
{
  return vlseg2e16_v_f16m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_f16m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vlseg2e16_v_f16m4x2_tu_vl31 (vfloat16m4x2_t dest, float16_t *base)
{
  return vlseg2e16_v_f16m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_f32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlseg2e32_v_f32mf2x2_ta (float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32mf2x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_f32mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlseg2e32_v_f32mf2x2_ta_vl31 (float32_t *base)
{
  return vlseg2e32_v_f32mf2x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_f32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlseg2e32_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_f32mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vlseg2e32_v_f32mf2x2_tu_vl31 (vfloat32mf2x2_t dest, float32_t *base)
{
  return vlseg2e32_v_f32mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e32_v_f32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlseg3e32_v_f32mf2x3_ta (float32_t *base, size_t vl)
{
  return vlseg3e32_v_f32mf2x3_ta (base, vl);
}

/*
** test_vlseg3e32_v_f32mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlseg3e32_v_f32mf2x3_ta_vl31 (float32_t *base)
{
  return vlseg3e32_v_f32mf2x3_ta (base, 31);
}

/*
** test_vlseg3e32_v_f32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlseg3e32_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, size_t vl)
{
  return vlseg3e32_v_f32mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e32_v_f32mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vlseg3e32_v_f32mf2x3_tu_vl31 (vfloat32mf2x3_t dest, float32_t *base)
{
  return vlseg3e32_v_f32mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e32_v_f32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlseg4e32_v_f32mf2x4_ta (float32_t *base, size_t vl)
{
  return vlseg4e32_v_f32mf2x4_ta (base, vl);
}

/*
** test_vlseg4e32_v_f32mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlseg4e32_v_f32mf2x4_ta_vl31 (float32_t *base)
{
  return vlseg4e32_v_f32mf2x4_ta (base, 31);
}

/*
** test_vlseg4e32_v_f32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlseg4e32_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, size_t vl)
{
  return vlseg4e32_v_f32mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e32_v_f32mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vlseg4e32_v_f32mf2x4_tu_vl31 (vfloat32mf2x4_t dest, float32_t *base)
{
  return vlseg4e32_v_f32mf2x4_tu (dest, base, 31);
}

/*
** test_vlseg5e32_v_f32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlseg5e32_v_f32mf2x5_ta (float32_t *base, size_t vl)
{
  return vlseg5e32_v_f32mf2x5_ta (base, vl);
}

/*
** test_vlseg5e32_v_f32mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlseg5e32_v_f32mf2x5_ta_vl31 (float32_t *base)
{
  return vlseg5e32_v_f32mf2x5_ta (base, 31);
}

/*
** test_vlseg5e32_v_f32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlseg5e32_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, size_t vl)
{
  return vlseg5e32_v_f32mf2x5_tu (dest, base, vl);
}

/*
** test_vlseg5e32_v_f32mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vlseg5e32_v_f32mf2x5_tu_vl31 (vfloat32mf2x5_t dest, float32_t *base)
{
  return vlseg5e32_v_f32mf2x5_tu (dest, base, 31);
}

/*
** test_vlseg6e32_v_f32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlseg6e32_v_f32mf2x6_ta (float32_t *base, size_t vl)
{
  return vlseg6e32_v_f32mf2x6_ta (base, vl);
}

/*
** test_vlseg6e32_v_f32mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlseg6e32_v_f32mf2x6_ta_vl31 (float32_t *base)
{
  return vlseg6e32_v_f32mf2x6_ta (base, 31);
}

/*
** test_vlseg6e32_v_f32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlseg6e32_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, size_t vl)
{
  return vlseg6e32_v_f32mf2x6_tu (dest, base, vl);
}

/*
** test_vlseg6e32_v_f32mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vlseg6e32_v_f32mf2x6_tu_vl31 (vfloat32mf2x6_t dest, float32_t *base)
{
  return vlseg6e32_v_f32mf2x6_tu (dest, base, 31);
}

/*
** test_vlseg7e32_v_f32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlseg7e32_v_f32mf2x7_ta (float32_t *base, size_t vl)
{
  return vlseg7e32_v_f32mf2x7_ta (base, vl);
}

/*
** test_vlseg7e32_v_f32mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlseg7e32_v_f32mf2x7_ta_vl31 (float32_t *base)
{
  return vlseg7e32_v_f32mf2x7_ta (base, 31);
}

/*
** test_vlseg7e32_v_f32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlseg7e32_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, size_t vl)
{
  return vlseg7e32_v_f32mf2x7_tu (dest, base, vl);
}

/*
** test_vlseg7e32_v_f32mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vlseg7e32_v_f32mf2x7_tu_vl31 (vfloat32mf2x7_t dest, float32_t *base)
{
  return vlseg7e32_v_f32mf2x7_tu (dest, base, 31);
}

/*
** test_vlseg8e32_v_f32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlseg8e32_v_f32mf2x8_ta (float32_t *base, size_t vl)
{
  return vlseg8e32_v_f32mf2x8_ta (base, vl);
}

/*
** test_vlseg8e32_v_f32mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlseg8e32_v_f32mf2x8_ta_vl31 (float32_t *base)
{
  return vlseg8e32_v_f32mf2x8_ta (base, 31);
}

/*
** test_vlseg8e32_v_f32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlseg8e32_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, size_t vl)
{
  return vlseg8e32_v_f32mf2x8_tu (dest, base, vl);
}

/*
** test_vlseg8e32_v_f32mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vlseg8e32_v_f32mf2x8_tu_vl31 (vfloat32mf2x8_t dest, float32_t *base)
{
  return vlseg8e32_v_f32mf2x8_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_f32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlseg2e32_v_f32m1x2_ta (float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32m1x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_f32m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlseg2e32_v_f32m1x2_ta_vl31 (float32_t *base)
{
  return vlseg2e32_v_f32m1x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_f32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlseg2e32_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_f32m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x2_t
test_vlseg2e32_v_f32m1x2_tu_vl31 (vfloat32m1x2_t dest, float32_t *base)
{
  return vlseg2e32_v_f32m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e32_v_f32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlseg3e32_v_f32m1x3_ta (float32_t *base, size_t vl)
{
  return vlseg3e32_v_f32m1x3_ta (base, vl);
}

/*
** test_vlseg3e32_v_f32m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlseg3e32_v_f32m1x3_ta_vl31 (float32_t *base)
{
  return vlseg3e32_v_f32m1x3_ta (base, 31);
}

/*
** test_vlseg3e32_v_f32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlseg3e32_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, size_t vl)
{
  return vlseg3e32_v_f32m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e32_v_f32m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x3_t
test_vlseg3e32_v_f32m1x3_tu_vl31 (vfloat32m1x3_t dest, float32_t *base)
{
  return vlseg3e32_v_f32m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e32_v_f32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlseg4e32_v_f32m1x4_ta (float32_t *base, size_t vl)
{
  return vlseg4e32_v_f32m1x4_ta (base, vl);
}

/*
** test_vlseg4e32_v_f32m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlseg4e32_v_f32m1x4_ta_vl31 (float32_t *base)
{
  return vlseg4e32_v_f32m1x4_ta (base, 31);
}

/*
** test_vlseg4e32_v_f32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlseg4e32_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, size_t vl)
{
  return vlseg4e32_v_f32m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e32_v_f32m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x4_t
test_vlseg4e32_v_f32m1x4_tu_vl31 (vfloat32m1x4_t dest, float32_t *base)
{
  return vlseg4e32_v_f32m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e32_v_f32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlseg5e32_v_f32m1x5_ta (float32_t *base, size_t vl)
{
  return vlseg5e32_v_f32m1x5_ta (base, vl);
}

/*
** test_vlseg5e32_v_f32m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlseg5e32_v_f32m1x5_ta_vl31 (float32_t *base)
{
  return vlseg5e32_v_f32m1x5_ta (base, 31);
}

/*
** test_vlseg5e32_v_f32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlseg5e32_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, size_t vl)
{
  return vlseg5e32_v_f32m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e32_v_f32m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x5_t
test_vlseg5e32_v_f32m1x5_tu_vl31 (vfloat32m1x5_t dest, float32_t *base)
{
  return vlseg5e32_v_f32m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e32_v_f32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlseg6e32_v_f32m1x6_ta (float32_t *base, size_t vl)
{
  return vlseg6e32_v_f32m1x6_ta (base, vl);
}

/*
** test_vlseg6e32_v_f32m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlseg6e32_v_f32m1x6_ta_vl31 (float32_t *base)
{
  return vlseg6e32_v_f32m1x6_ta (base, 31);
}

/*
** test_vlseg6e32_v_f32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlseg6e32_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, size_t vl)
{
  return vlseg6e32_v_f32m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e32_v_f32m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x6_t
test_vlseg6e32_v_f32m1x6_tu_vl31 (vfloat32m1x6_t dest, float32_t *base)
{
  return vlseg6e32_v_f32m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e32_v_f32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlseg7e32_v_f32m1x7_ta (float32_t *base, size_t vl)
{
  return vlseg7e32_v_f32m1x7_ta (base, vl);
}

/*
** test_vlseg7e32_v_f32m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlseg7e32_v_f32m1x7_ta_vl31 (float32_t *base)
{
  return vlseg7e32_v_f32m1x7_ta (base, 31);
}

/*
** test_vlseg7e32_v_f32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlseg7e32_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, size_t vl)
{
  return vlseg7e32_v_f32m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e32_v_f32m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x7_t
test_vlseg7e32_v_f32m1x7_tu_vl31 (vfloat32m1x7_t dest, float32_t *base)
{
  return vlseg7e32_v_f32m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e32_v_f32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlseg8e32_v_f32m1x8_ta (float32_t *base, size_t vl)
{
  return vlseg8e32_v_f32m1x8_ta (base, vl);
}

/*
** test_vlseg8e32_v_f32m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlseg8e32_v_f32m1x8_ta_vl31 (float32_t *base)
{
  return vlseg8e32_v_f32m1x8_ta (base, 31);
}

/*
** test_vlseg8e32_v_f32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlseg8e32_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, size_t vl)
{
  return vlseg8e32_v_f32m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e32_v_f32m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m1x8_t
test_vlseg8e32_v_f32m1x8_tu_vl31 (vfloat32m1x8_t dest, float32_t *base)
{
  return vlseg8e32_v_f32m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_f32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlseg2e32_v_f32m2x2_ta (float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32m2x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_f32m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlseg2e32_v_f32m2x2_ta_vl31 (float32_t *base)
{
  return vlseg2e32_v_f32m2x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_f32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlseg2e32_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_f32m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x2_t
test_vlseg2e32_v_f32m2x2_tu_vl31 (vfloat32m2x2_t dest, float32_t *base)
{
  return vlseg2e32_v_f32m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e32_v_f32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlseg3e32_v_f32m2x3_ta (float32_t *base, size_t vl)
{
  return vlseg3e32_v_f32m2x3_ta (base, vl);
}

/*
** test_vlseg3e32_v_f32m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlseg3e32_v_f32m2x3_ta_vl31 (float32_t *base)
{
  return vlseg3e32_v_f32m2x3_ta (base, 31);
}

/*
** test_vlseg3e32_v_f32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlseg3e32_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, size_t vl)
{
  return vlseg3e32_v_f32m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e32_v_f32m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x3_t
test_vlseg3e32_v_f32m2x3_tu_vl31 (vfloat32m2x3_t dest, float32_t *base)
{
  return vlseg3e32_v_f32m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e32_v_f32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlseg4e32_v_f32m2x4_ta (float32_t *base, size_t vl)
{
  return vlseg4e32_v_f32m2x4_ta (base, vl);
}

/*
** test_vlseg4e32_v_f32m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlseg4e32_v_f32m2x4_ta_vl31 (float32_t *base)
{
  return vlseg4e32_v_f32m2x4_ta (base, 31);
}

/*
** test_vlseg4e32_v_f32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlseg4e32_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, size_t vl)
{
  return vlseg4e32_v_f32m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e32_v_f32m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m2x4_t
test_vlseg4e32_v_f32m2x4_tu_vl31 (vfloat32m2x4_t dest, float32_t *base)
{
  return vlseg4e32_v_f32m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_f32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlseg2e32_v_f32m4x2_ta (float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32m4x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_f32m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlseg2e32_v_f32m4x2_ta_vl31 (float32_t *base)
{
  return vlseg2e32_v_f32m4x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_f32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlseg2e32_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, size_t vl)
{
  return vlseg2e32_v_f32m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_f32m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vlseg2e32_v_f32m4x2_tu_vl31 (vfloat32m4x2_t dest, float32_t *base)
{
  return vlseg2e32_v_f32m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e64_v_f64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlseg2e64_v_f64m1x2_ta (float64_t *base, size_t vl)
{
  return vlseg2e64_v_f64m1x2_ta (base, vl);
}

/*
** test_vlseg2e64_v_f64m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlseg2e64_v_f64m1x2_ta_vl31 (float64_t *base)
{
  return vlseg2e64_v_f64m1x2_ta (base, 31);
}

/*
** test_vlseg2e64_v_f64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlseg2e64_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, size_t vl)
{
  return vlseg2e64_v_f64m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e64_v_f64m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x2_t
test_vlseg2e64_v_f64m1x2_tu_vl31 (vfloat64m1x2_t dest, float64_t *base)
{
  return vlseg2e64_v_f64m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e64_v_f64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlseg3e64_v_f64m1x3_ta (float64_t *base, size_t vl)
{
  return vlseg3e64_v_f64m1x3_ta (base, vl);
}

/*
** test_vlseg3e64_v_f64m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlseg3e64_v_f64m1x3_ta_vl31 (float64_t *base)
{
  return vlseg3e64_v_f64m1x3_ta (base, 31);
}

/*
** test_vlseg3e64_v_f64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlseg3e64_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, size_t vl)
{
  return vlseg3e64_v_f64m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e64_v_f64m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x3_t
test_vlseg3e64_v_f64m1x3_tu_vl31 (vfloat64m1x3_t dest, float64_t *base)
{
  return vlseg3e64_v_f64m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e64_v_f64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlseg4e64_v_f64m1x4_ta (float64_t *base, size_t vl)
{
  return vlseg4e64_v_f64m1x4_ta (base, vl);
}

/*
** test_vlseg4e64_v_f64m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlseg4e64_v_f64m1x4_ta_vl31 (float64_t *base)
{
  return vlseg4e64_v_f64m1x4_ta (base, 31);
}

/*
** test_vlseg4e64_v_f64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlseg4e64_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, size_t vl)
{
  return vlseg4e64_v_f64m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e64_v_f64m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x4_t
test_vlseg4e64_v_f64m1x4_tu_vl31 (vfloat64m1x4_t dest, float64_t *base)
{
  return vlseg4e64_v_f64m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e64_v_f64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlseg5e64_v_f64m1x5_ta (float64_t *base, size_t vl)
{
  return vlseg5e64_v_f64m1x5_ta (base, vl);
}

/*
** test_vlseg5e64_v_f64m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlseg5e64_v_f64m1x5_ta_vl31 (float64_t *base)
{
  return vlseg5e64_v_f64m1x5_ta (base, 31);
}

/*
** test_vlseg5e64_v_f64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlseg5e64_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, size_t vl)
{
  return vlseg5e64_v_f64m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e64_v_f64m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x5_t
test_vlseg5e64_v_f64m1x5_tu_vl31 (vfloat64m1x5_t dest, float64_t *base)
{
  return vlseg5e64_v_f64m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e64_v_f64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlseg6e64_v_f64m1x6_ta (float64_t *base, size_t vl)
{
  return vlseg6e64_v_f64m1x6_ta (base, vl);
}

/*
** test_vlseg6e64_v_f64m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlseg6e64_v_f64m1x6_ta_vl31 (float64_t *base)
{
  return vlseg6e64_v_f64m1x6_ta (base, 31);
}

/*
** test_vlseg6e64_v_f64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlseg6e64_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, size_t vl)
{
  return vlseg6e64_v_f64m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e64_v_f64m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x6_t
test_vlseg6e64_v_f64m1x6_tu_vl31 (vfloat64m1x6_t dest, float64_t *base)
{
  return vlseg6e64_v_f64m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e64_v_f64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlseg7e64_v_f64m1x7_ta (float64_t *base, size_t vl)
{
  return vlseg7e64_v_f64m1x7_ta (base, vl);
}

/*
** test_vlseg7e64_v_f64m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlseg7e64_v_f64m1x7_ta_vl31 (float64_t *base)
{
  return vlseg7e64_v_f64m1x7_ta (base, 31);
}

/*
** test_vlseg7e64_v_f64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlseg7e64_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, size_t vl)
{
  return vlseg7e64_v_f64m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e64_v_f64m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x7_t
test_vlseg7e64_v_f64m1x7_tu_vl31 (vfloat64m1x7_t dest, float64_t *base)
{
  return vlseg7e64_v_f64m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e64_v_f64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlseg8e64_v_f64m1x8_ta (float64_t *base, size_t vl)
{
  return vlseg8e64_v_f64m1x8_ta (base, vl);
}

/*
** test_vlseg8e64_v_f64m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlseg8e64_v_f64m1x8_ta_vl31 (float64_t *base)
{
  return vlseg8e64_v_f64m1x8_ta (base, 31);
}

/*
** test_vlseg8e64_v_f64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlseg8e64_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, size_t vl)
{
  return vlseg8e64_v_f64m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e64_v_f64m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m1x8_t
test_vlseg8e64_v_f64m1x8_tu_vl31 (vfloat64m1x8_t dest, float64_t *base)
{
  return vlseg8e64_v_f64m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e64_v_f64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlseg2e64_v_f64m2x2_ta (float64_t *base, size_t vl)
{
  return vlseg2e64_v_f64m2x2_ta (base, vl);
}

/*
** test_vlseg2e64_v_f64m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlseg2e64_v_f64m2x2_ta_vl31 (float64_t *base)
{
  return vlseg2e64_v_f64m2x2_ta (base, 31);
}

/*
** test_vlseg2e64_v_f64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlseg2e64_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, size_t vl)
{
  return vlseg2e64_v_f64m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e64_v_f64m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x2_t
test_vlseg2e64_v_f64m2x2_tu_vl31 (vfloat64m2x2_t dest, float64_t *base)
{
  return vlseg2e64_v_f64m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e64_v_f64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlseg3e64_v_f64m2x3_ta (float64_t *base, size_t vl)
{
  return vlseg3e64_v_f64m2x3_ta (base, vl);
}

/*
** test_vlseg3e64_v_f64m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlseg3e64_v_f64m2x3_ta_vl31 (float64_t *base)
{
  return vlseg3e64_v_f64m2x3_ta (base, 31);
}

/*
** test_vlseg3e64_v_f64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlseg3e64_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, size_t vl)
{
  return vlseg3e64_v_f64m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e64_v_f64m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x3_t
test_vlseg3e64_v_f64m2x3_tu_vl31 (vfloat64m2x3_t dest, float64_t *base)
{
  return vlseg3e64_v_f64m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e64_v_f64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlseg4e64_v_f64m2x4_ta (float64_t *base, size_t vl)
{
  return vlseg4e64_v_f64m2x4_ta (base, vl);
}

/*
** test_vlseg4e64_v_f64m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlseg4e64_v_f64m2x4_ta_vl31 (float64_t *base)
{
  return vlseg4e64_v_f64m2x4_ta (base, 31);
}

/*
** test_vlseg4e64_v_f64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlseg4e64_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, size_t vl)
{
  return vlseg4e64_v_f64m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e64_v_f64m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m2x4_t
test_vlseg4e64_v_f64m2x4_tu_vl31 (vfloat64m2x4_t dest, float64_t *base)
{
  return vlseg4e64_v_f64m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e64_v_f64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlseg2e64_v_f64m4x2_ta (float64_t *base, size_t vl)
{
  return vlseg2e64_v_f64m4x2_ta (base, vl);
}

/*
** test_vlseg2e64_v_f64m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlseg2e64_v_f64m4x2_ta_vl31 (float64_t *base)
{
  return vlseg2e64_v_f64m4x2_ta (base, 31);
}

/*
** test_vlseg2e64_v_f64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlseg2e64_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, size_t vl)
{
  return vlseg2e64_v_f64m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e64_v_f64m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vfloat64m4x2_t
test_vlseg2e64_v_f64m4x2_tu_vl31 (vfloat64m4x2_t dest, float64_t *base)
{
  return vlseg2e64_v_f64m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_i8mf8x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x2_t
test_vlseg2e8_v_i8mf8x2_ta (int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8mf8x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_i8mf8x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x2_t
test_vlseg2e8_v_i8mf8x2_ta_vl31 (int8_t *base)
{
  return vlseg2e8_v_i8mf8x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_i8mf8x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x2_t
test_vlseg2e8_v_i8mf8x2_tu (vint8mf8x2_t dest, int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8mf8x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_i8mf8x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x2_t
test_vlseg2e8_v_i8mf8x2_tu_vl31 (vint8mf8x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8mf8x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_i8mf8x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x3_t
test_vlseg3e8_v_i8mf8x3_ta (int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8mf8x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_i8mf8x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x3_t
test_vlseg3e8_v_i8mf8x3_ta_vl31 (int8_t *base)
{
  return vlseg3e8_v_i8mf8x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_i8mf8x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x3_t
test_vlseg3e8_v_i8mf8x3_tu (vint8mf8x3_t dest, int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8mf8x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_i8mf8x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x3_t
test_vlseg3e8_v_i8mf8x3_tu_vl31 (vint8mf8x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8mf8x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_i8mf8x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x4_t
test_vlseg4e8_v_i8mf8x4_ta (int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8mf8x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_i8mf8x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x4_t
test_vlseg4e8_v_i8mf8x4_ta_vl31 (int8_t *base)
{
  return vlseg4e8_v_i8mf8x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_i8mf8x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x4_t
test_vlseg4e8_v_i8mf8x4_tu (vint8mf8x4_t dest, int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8mf8x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_i8mf8x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x4_t
test_vlseg4e8_v_i8mf8x4_tu_vl31 (vint8mf8x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8mf8x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_i8mf8x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x5_t
test_vlseg5e8_v_i8mf8x5_ta (int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8mf8x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_i8mf8x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x5_t
test_vlseg5e8_v_i8mf8x5_ta_vl31 (int8_t *base)
{
  return vlseg5e8_v_i8mf8x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_i8mf8x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x5_t
test_vlseg5e8_v_i8mf8x5_tu (vint8mf8x5_t dest, int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8mf8x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_i8mf8x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x5_t
test_vlseg5e8_v_i8mf8x5_tu_vl31 (vint8mf8x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8mf8x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_i8mf8x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x6_t
test_vlseg6e8_v_i8mf8x6_ta (int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8mf8x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_i8mf8x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x6_t
test_vlseg6e8_v_i8mf8x6_ta_vl31 (int8_t *base)
{
  return vlseg6e8_v_i8mf8x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_i8mf8x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x6_t
test_vlseg6e8_v_i8mf8x6_tu (vint8mf8x6_t dest, int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8mf8x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_i8mf8x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x6_t
test_vlseg6e8_v_i8mf8x6_tu_vl31 (vint8mf8x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8mf8x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_i8mf8x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x7_t
test_vlseg7e8_v_i8mf8x7_ta (int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8mf8x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_i8mf8x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x7_t
test_vlseg7e8_v_i8mf8x7_ta_vl31 (int8_t *base)
{
  return vlseg7e8_v_i8mf8x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_i8mf8x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x7_t
test_vlseg7e8_v_i8mf8x7_tu (vint8mf8x7_t dest, int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8mf8x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_i8mf8x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x7_t
test_vlseg7e8_v_i8mf8x7_tu_vl31 (vint8mf8x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8mf8x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_i8mf8x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x8_t
test_vlseg8e8_v_i8mf8x8_ta (int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8mf8x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_i8mf8x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x8_t
test_vlseg8e8_v_i8mf8x8_ta_vl31 (int8_t *base)
{
  return vlseg8e8_v_i8mf8x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_i8mf8x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x8_t
test_vlseg8e8_v_i8mf8x8_tu (vint8mf8x8_t dest, int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8mf8x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_i8mf8x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf8x8_t
test_vlseg8e8_v_i8mf8x8_tu_vl31 (vint8mf8x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8mf8x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_i8mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x2_t
test_vlseg2e8_v_i8mf4x2_ta (int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8mf4x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_i8mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x2_t
test_vlseg2e8_v_i8mf4x2_ta_vl31 (int8_t *base)
{
  return vlseg2e8_v_i8mf4x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_i8mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x2_t
test_vlseg2e8_v_i8mf4x2_tu (vint8mf4x2_t dest, int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8mf4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_i8mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x2_t
test_vlseg2e8_v_i8mf4x2_tu_vl31 (vint8mf4x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8mf4x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_i8mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x3_t
test_vlseg3e8_v_i8mf4x3_ta (int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8mf4x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_i8mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x3_t
test_vlseg3e8_v_i8mf4x3_ta_vl31 (int8_t *base)
{
  return vlseg3e8_v_i8mf4x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_i8mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x3_t
test_vlseg3e8_v_i8mf4x3_tu (vint8mf4x3_t dest, int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8mf4x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_i8mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x3_t
test_vlseg3e8_v_i8mf4x3_tu_vl31 (vint8mf4x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8mf4x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_i8mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x4_t
test_vlseg4e8_v_i8mf4x4_ta (int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8mf4x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_i8mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x4_t
test_vlseg4e8_v_i8mf4x4_ta_vl31 (int8_t *base)
{
  return vlseg4e8_v_i8mf4x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_i8mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x4_t
test_vlseg4e8_v_i8mf4x4_tu (vint8mf4x4_t dest, int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8mf4x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_i8mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x4_t
test_vlseg4e8_v_i8mf4x4_tu_vl31 (vint8mf4x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8mf4x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_i8mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x5_t
test_vlseg5e8_v_i8mf4x5_ta (int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8mf4x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_i8mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x5_t
test_vlseg5e8_v_i8mf4x5_ta_vl31 (int8_t *base)
{
  return vlseg5e8_v_i8mf4x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_i8mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x5_t
test_vlseg5e8_v_i8mf4x5_tu (vint8mf4x5_t dest, int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8mf4x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_i8mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x5_t
test_vlseg5e8_v_i8mf4x5_tu_vl31 (vint8mf4x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8mf4x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_i8mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x6_t
test_vlseg6e8_v_i8mf4x6_ta (int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8mf4x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_i8mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x6_t
test_vlseg6e8_v_i8mf4x6_ta_vl31 (int8_t *base)
{
  return vlseg6e8_v_i8mf4x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_i8mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x6_t
test_vlseg6e8_v_i8mf4x6_tu (vint8mf4x6_t dest, int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8mf4x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_i8mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x6_t
test_vlseg6e8_v_i8mf4x6_tu_vl31 (vint8mf4x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8mf4x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_i8mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x7_t
test_vlseg7e8_v_i8mf4x7_ta (int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8mf4x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_i8mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x7_t
test_vlseg7e8_v_i8mf4x7_ta_vl31 (int8_t *base)
{
  return vlseg7e8_v_i8mf4x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_i8mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x7_t
test_vlseg7e8_v_i8mf4x7_tu (vint8mf4x7_t dest, int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8mf4x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_i8mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x7_t
test_vlseg7e8_v_i8mf4x7_tu_vl31 (vint8mf4x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8mf4x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_i8mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x8_t
test_vlseg8e8_v_i8mf4x8_ta (int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8mf4x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_i8mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x8_t
test_vlseg8e8_v_i8mf4x8_ta_vl31 (int8_t *base)
{
  return vlseg8e8_v_i8mf4x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_i8mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x8_t
test_vlseg8e8_v_i8mf4x8_tu (vint8mf4x8_t dest, int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8mf4x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_i8mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf4x8_t
test_vlseg8e8_v_i8mf4x8_tu_vl31 (vint8mf4x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8mf4x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_i8mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x2_t
test_vlseg2e8_v_i8mf2x2_ta (int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8mf2x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_i8mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x2_t
test_vlseg2e8_v_i8mf2x2_ta_vl31 (int8_t *base)
{
  return vlseg2e8_v_i8mf2x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_i8mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x2_t
test_vlseg2e8_v_i8mf2x2_tu (vint8mf2x2_t dest, int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_i8mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x2_t
test_vlseg2e8_v_i8mf2x2_tu_vl31 (vint8mf2x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_i8mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x3_t
test_vlseg3e8_v_i8mf2x3_ta (int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8mf2x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_i8mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x3_t
test_vlseg3e8_v_i8mf2x3_ta_vl31 (int8_t *base)
{
  return vlseg3e8_v_i8mf2x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_i8mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x3_t
test_vlseg3e8_v_i8mf2x3_tu (vint8mf2x3_t dest, int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_i8mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x3_t
test_vlseg3e8_v_i8mf2x3_tu_vl31 (vint8mf2x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_i8mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x4_t
test_vlseg4e8_v_i8mf2x4_ta (int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8mf2x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_i8mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x4_t
test_vlseg4e8_v_i8mf2x4_ta_vl31 (int8_t *base)
{
  return vlseg4e8_v_i8mf2x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_i8mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x4_t
test_vlseg4e8_v_i8mf2x4_tu (vint8mf2x4_t dest, int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_i8mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x4_t
test_vlseg4e8_v_i8mf2x4_tu_vl31 (vint8mf2x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8mf2x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_i8mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x5_t
test_vlseg5e8_v_i8mf2x5_ta (int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8mf2x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_i8mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x5_t
test_vlseg5e8_v_i8mf2x5_ta_vl31 (int8_t *base)
{
  return vlseg5e8_v_i8mf2x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_i8mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x5_t
test_vlseg5e8_v_i8mf2x5_tu (vint8mf2x5_t dest, int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8mf2x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_i8mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x5_t
test_vlseg5e8_v_i8mf2x5_tu_vl31 (vint8mf2x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8mf2x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_i8mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x6_t
test_vlseg6e8_v_i8mf2x6_ta (int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8mf2x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_i8mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x6_t
test_vlseg6e8_v_i8mf2x6_ta_vl31 (int8_t *base)
{
  return vlseg6e8_v_i8mf2x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_i8mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x6_t
test_vlseg6e8_v_i8mf2x6_tu (vint8mf2x6_t dest, int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8mf2x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_i8mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x6_t
test_vlseg6e8_v_i8mf2x6_tu_vl31 (vint8mf2x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8mf2x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_i8mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x7_t
test_vlseg7e8_v_i8mf2x7_ta (int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8mf2x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_i8mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x7_t
test_vlseg7e8_v_i8mf2x7_ta_vl31 (int8_t *base)
{
  return vlseg7e8_v_i8mf2x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_i8mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x7_t
test_vlseg7e8_v_i8mf2x7_tu (vint8mf2x7_t dest, int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8mf2x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_i8mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x7_t
test_vlseg7e8_v_i8mf2x7_tu_vl31 (vint8mf2x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8mf2x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_i8mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x8_t
test_vlseg8e8_v_i8mf2x8_ta (int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8mf2x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_i8mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x8_t
test_vlseg8e8_v_i8mf2x8_ta_vl31 (int8_t *base)
{
  return vlseg8e8_v_i8mf2x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_i8mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x8_t
test_vlseg8e8_v_i8mf2x8_tu (vint8mf2x8_t dest, int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8mf2x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_i8mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8mf2x8_t
test_vlseg8e8_v_i8mf2x8_tu_vl31 (vint8mf2x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8mf2x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_i8m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_ta (int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8m1x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_i8m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_ta_vl31 (int8_t *base)
{
  return vlseg2e8_v_i8m1x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_i8m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_tu (vint8m1x2_t dest, int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_i8m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x2_t
test_vlseg2e8_v_i8m1x2_tu_vl31 (vint8m1x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_i8m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_ta (int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8m1x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_i8m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_ta_vl31 (int8_t *base)
{
  return vlseg3e8_v_i8m1x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_i8m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_tu (vint8m1x3_t dest, int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_i8m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x3_t
test_vlseg3e8_v_i8m1x3_tu_vl31 (vint8m1x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_i8m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_ta (int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8m1x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_i8m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_ta_vl31 (int8_t *base)
{
  return vlseg4e8_v_i8m1x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_i8m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_tu (vint8m1x4_t dest, int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_i8m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x4_t
test_vlseg4e8_v_i8m1x4_tu_vl31 (vint8m1x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_i8m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_ta (int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8m1x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_i8m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_ta_vl31 (int8_t *base)
{
  return vlseg5e8_v_i8m1x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_i8m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_tu (vint8m1x5_t dest, int8_t *base, size_t vl)
{
  return vlseg5e8_v_i8m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_i8m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x5_t
test_vlseg5e8_v_i8m1x5_tu_vl31 (vint8m1x5_t dest, int8_t *base)
{
  return vlseg5e8_v_i8m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_i8m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_ta (int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8m1x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_i8m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_ta_vl31 (int8_t *base)
{
  return vlseg6e8_v_i8m1x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_i8m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_tu (vint8m1x6_t dest, int8_t *base, size_t vl)
{
  return vlseg6e8_v_i8m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_i8m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x6_t
test_vlseg6e8_v_i8m1x6_tu_vl31 (vint8m1x6_t dest, int8_t *base)
{
  return vlseg6e8_v_i8m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_i8m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_ta (int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8m1x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_i8m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_ta_vl31 (int8_t *base)
{
  return vlseg7e8_v_i8m1x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_i8m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_tu (vint8m1x7_t dest, int8_t *base, size_t vl)
{
  return vlseg7e8_v_i8m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_i8m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x7_t
test_vlseg7e8_v_i8m1x7_tu_vl31 (vint8m1x7_t dest, int8_t *base)
{
  return vlseg7e8_v_i8m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_i8m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_ta (int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8m1x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_i8m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_ta_vl31 (int8_t *base)
{
  return vlseg8e8_v_i8m1x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_i8m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_tu (vint8m1x8_t dest, int8_t *base, size_t vl)
{
  return vlseg8e8_v_i8m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_i8m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1x8_t
test_vlseg8e8_v_i8m1x8_tu_vl31 (vint8m1x8_t dest, int8_t *base)
{
  return vlseg8e8_v_i8m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_i8m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_ta (int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8m2x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_i8m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_ta_vl31 (int8_t *base)
{
  return vlseg2e8_v_i8m2x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_i8m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_tu (vint8m2x2_t dest, int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_i8m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x2_t
test_vlseg2e8_v_i8m2x2_tu_vl31 (vint8m2x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_i8m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_ta (int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8m2x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_i8m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_ta_vl31 (int8_t *base)
{
  return vlseg3e8_v_i8m2x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_i8m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_tu (vint8m2x3_t dest, int8_t *base, size_t vl)
{
  return vlseg3e8_v_i8m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_i8m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x3_t
test_vlseg3e8_v_i8m2x3_tu_vl31 (vint8m2x3_t dest, int8_t *base)
{
  return vlseg3e8_v_i8m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_i8m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_ta (int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8m2x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_i8m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_ta_vl31 (int8_t *base)
{
  return vlseg4e8_v_i8m2x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_i8m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_tu (vint8m2x4_t dest, int8_t *base, size_t vl)
{
  return vlseg4e8_v_i8m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_i8m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2x4_t
test_vlseg4e8_v_i8m2x4_tu_vl31 (vint8m2x4_t dest, int8_t *base)
{
  return vlseg4e8_v_i8m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_i8m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_ta (int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8m4x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_i8m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_ta_vl31 (int8_t *base)
{
  return vlseg2e8_v_i8m4x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_i8m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_tu (vint8m4x2_t dest, int8_t *base, size_t vl)
{
  return vlseg2e8_v_i8m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_i8m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m4x2_t
test_vlseg2e8_v_i8m4x2_tu_vl31 (vint8m4x2_t dest, int8_t *base)
{
  return vlseg2e8_v_i8m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_i16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_ta (int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16mf4x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_i16mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_ta_vl31 (int16_t *base)
{
  return vlseg2e16_v_i16mf4x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_i16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_tu (vint16mf4x2_t dest, int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16mf4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_i16mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x2_t
test_vlseg2e16_v_i16mf4x2_tu_vl31 (vint16mf4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf4x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_i16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_ta (int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16mf4x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_i16mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_ta_vl31 (int16_t *base)
{
  return vlseg3e16_v_i16mf4x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_i16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_tu (vint16mf4x3_t dest, int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16mf4x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_i16mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x3_t
test_vlseg3e16_v_i16mf4x3_tu_vl31 (vint16mf4x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf4x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_i16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_ta (int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16mf4x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_i16mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_ta_vl31 (int16_t *base)
{
  return vlseg4e16_v_i16mf4x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_i16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_tu (vint16mf4x4_t dest, int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16mf4x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_i16mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x4_t
test_vlseg4e16_v_i16mf4x4_tu_vl31 (vint16mf4x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf4x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_i16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_ta (int16_t *base, size_t vl)
{
  return vlseg5e16_v_i16mf4x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_i16mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_ta_vl31 (int16_t *base)
{
  return vlseg5e16_v_i16mf4x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_i16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_tu (vint16mf4x5_t dest, int16_t *base, size_t vl)
{
  return vlseg5e16_v_i16mf4x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_i16mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x5_t
test_vlseg5e16_v_i16mf4x5_tu_vl31 (vint16mf4x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf4x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_i16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_ta (int16_t *base, size_t vl)
{
  return vlseg6e16_v_i16mf4x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_i16mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_ta_vl31 (int16_t *base)
{
  return vlseg6e16_v_i16mf4x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_i16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_tu (vint16mf4x6_t dest, int16_t *base, size_t vl)
{
  return vlseg6e16_v_i16mf4x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_i16mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x6_t
test_vlseg6e16_v_i16mf4x6_tu_vl31 (vint16mf4x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf4x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_i16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_ta (int16_t *base, size_t vl)
{
  return vlseg7e16_v_i16mf4x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_i16mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_ta_vl31 (int16_t *base)
{
  return vlseg7e16_v_i16mf4x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_i16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_tu (vint16mf4x7_t dest, int16_t *base, size_t vl)
{
  return vlseg7e16_v_i16mf4x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_i16mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x7_t
test_vlseg7e16_v_i16mf4x7_tu_vl31 (vint16mf4x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf4x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_i16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_ta (int16_t *base, size_t vl)
{
  return vlseg8e16_v_i16mf4x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_i16mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_ta_vl31 (int16_t *base)
{
  return vlseg8e16_v_i16mf4x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_i16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_tu (vint16mf4x8_t dest, int16_t *base, size_t vl)
{
  return vlseg8e16_v_i16mf4x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_i16mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4x8_t
test_vlseg8e16_v_i16mf4x8_tu_vl31 (vint16mf4x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf4x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_i16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_ta (int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16mf2x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_i16mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_ta_vl31 (int16_t *base)
{
  return vlseg2e16_v_i16mf2x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_i16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_tu (vint16mf2x2_t dest, int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_i16mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x2_t
test_vlseg2e16_v_i16mf2x2_tu_vl31 (vint16mf2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_i16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_ta (int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16mf2x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_i16mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_ta_vl31 (int16_t *base)
{
  return vlseg3e16_v_i16mf2x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_i16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_tu (vint16mf2x3_t dest, int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_i16mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x3_t
test_vlseg3e16_v_i16mf2x3_tu_vl31 (vint16mf2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_i16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_ta (int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16mf2x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_i16mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_ta_vl31 (int16_t *base)
{
  return vlseg4e16_v_i16mf2x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_i16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_tu (vint16mf2x4_t dest, int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_i16mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x4_t
test_vlseg4e16_v_i16mf2x4_tu_vl31 (vint16mf2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16mf2x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_i16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_ta (int16_t *base, size_t vl)
{
  return vlseg5e16_v_i16mf2x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_i16mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_ta_vl31 (int16_t *base)
{
  return vlseg5e16_v_i16mf2x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_i16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_tu (vint16mf2x5_t dest, int16_t *base, size_t vl)
{
  return vlseg5e16_v_i16mf2x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_i16mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x5_t
test_vlseg5e16_v_i16mf2x5_tu_vl31 (vint16mf2x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16mf2x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_i16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_ta (int16_t *base, size_t vl)
{
  return vlseg6e16_v_i16mf2x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_i16mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_ta_vl31 (int16_t *base)
{
  return vlseg6e16_v_i16mf2x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_i16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_tu (vint16mf2x6_t dest, int16_t *base, size_t vl)
{
  return vlseg6e16_v_i16mf2x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_i16mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x6_t
test_vlseg6e16_v_i16mf2x6_tu_vl31 (vint16mf2x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16mf2x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_i16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_ta (int16_t *base, size_t vl)
{
  return vlseg7e16_v_i16mf2x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_i16mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_ta_vl31 (int16_t *base)
{
  return vlseg7e16_v_i16mf2x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_i16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_tu (vint16mf2x7_t dest, int16_t *base, size_t vl)
{
  return vlseg7e16_v_i16mf2x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_i16mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x7_t
test_vlseg7e16_v_i16mf2x7_tu_vl31 (vint16mf2x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16mf2x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_i16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_ta (int16_t *base, size_t vl)
{
  return vlseg8e16_v_i16mf2x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_i16mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_ta_vl31 (int16_t *base)
{
  return vlseg8e16_v_i16mf2x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_i16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_tu (vint16mf2x8_t dest, int16_t *base, size_t vl)
{
  return vlseg8e16_v_i16mf2x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_i16mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2x8_t
test_vlseg8e16_v_i16mf2x8_tu_vl31 (vint16mf2x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16mf2x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_i16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_ta (int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16m1x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_i16m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_ta_vl31 (int16_t *base)
{
  return vlseg2e16_v_i16m1x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_i16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_tu (vint16m1x2_t dest, int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_i16m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg2e16_v_i16m1x2_tu_vl31 (vint16m1x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_i16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_ta (int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16m1x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_i16m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_ta_vl31 (int16_t *base)
{
  return vlseg3e16_v_i16m1x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_i16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_tu (vint16m1x3_t dest, int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_i16m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x3_t
test_vlseg3e16_v_i16m1x3_tu_vl31 (vint16m1x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_i16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_ta (int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16m1x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_i16m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_ta_vl31 (int16_t *base)
{
  return vlseg4e16_v_i16m1x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_i16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_tu (vint16m1x4_t dest, int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_i16m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x4_t
test_vlseg4e16_v_i16m1x4_tu_vl31 (vint16m1x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_i16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_ta (int16_t *base, size_t vl)
{
  return vlseg5e16_v_i16m1x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_i16m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_ta_vl31 (int16_t *base)
{
  return vlseg5e16_v_i16m1x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_i16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_tu (vint16m1x5_t dest, int16_t *base, size_t vl)
{
  return vlseg5e16_v_i16m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_i16m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x5_t
test_vlseg5e16_v_i16m1x5_tu_vl31 (vint16m1x5_t dest, int16_t *base)
{
  return vlseg5e16_v_i16m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_i16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_ta (int16_t *base, size_t vl)
{
  return vlseg6e16_v_i16m1x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_i16m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_ta_vl31 (int16_t *base)
{
  return vlseg6e16_v_i16m1x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_i16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_tu (vint16m1x6_t dest, int16_t *base, size_t vl)
{
  return vlseg6e16_v_i16m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_i16m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x6_t
test_vlseg6e16_v_i16m1x6_tu_vl31 (vint16m1x6_t dest, int16_t *base)
{
  return vlseg6e16_v_i16m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_i16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_ta (int16_t *base, size_t vl)
{
  return vlseg7e16_v_i16m1x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_i16m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_ta_vl31 (int16_t *base)
{
  return vlseg7e16_v_i16m1x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_i16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_tu (vint16m1x7_t dest, int16_t *base, size_t vl)
{
  return vlseg7e16_v_i16m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_i16m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x7_t
test_vlseg7e16_v_i16m1x7_tu_vl31 (vint16m1x7_t dest, int16_t *base)
{
  return vlseg7e16_v_i16m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_i16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_ta (int16_t *base, size_t vl)
{
  return vlseg8e16_v_i16m1x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_i16m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_ta_vl31 (int16_t *base)
{
  return vlseg8e16_v_i16m1x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_i16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_tu (vint16m1x8_t dest, int16_t *base, size_t vl)
{
  return vlseg8e16_v_i16m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_i16m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1x8_t
test_vlseg8e16_v_i16m1x8_tu_vl31 (vint16m1x8_t dest, int16_t *base)
{
  return vlseg8e16_v_i16m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_i16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_ta (int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16m2x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_i16m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_ta_vl31 (int16_t *base)
{
  return vlseg2e16_v_i16m2x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_i16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_tu (vint16m2x2_t dest, int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_i16m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x2_t
test_vlseg2e16_v_i16m2x2_tu_vl31 (vint16m2x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_i16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_ta (int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16m2x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_i16m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_ta_vl31 (int16_t *base)
{
  return vlseg3e16_v_i16m2x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_i16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_tu (vint16m2x3_t dest, int16_t *base, size_t vl)
{
  return vlseg3e16_v_i16m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_i16m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x3_t
test_vlseg3e16_v_i16m2x3_tu_vl31 (vint16m2x3_t dest, int16_t *base)
{
  return vlseg3e16_v_i16m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_i16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_ta (int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16m2x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_i16m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_ta_vl31 (int16_t *base)
{
  return vlseg4e16_v_i16m2x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_i16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_tu (vint16m2x4_t dest, int16_t *base, size_t vl)
{
  return vlseg4e16_v_i16m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_i16m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2x4_t
test_vlseg4e16_v_i16m2x4_tu_vl31 (vint16m2x4_t dest, int16_t *base)
{
  return vlseg4e16_v_i16m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_i16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_ta (int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16m4x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_i16m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_ta_vl31 (int16_t *base)
{
  return vlseg2e16_v_i16m4x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_i16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_tu (vint16m4x2_t dest, int16_t *base, size_t vl)
{
  return vlseg2e16_v_i16m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_i16m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m4x2_t
test_vlseg2e16_v_i16m4x2_tu_vl31 (vint16m4x2_t dest, int16_t *base)
{
  return vlseg2e16_v_i16m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_i32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_ta (int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32mf2x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_i32mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_ta_vl31 (int32_t *base)
{
  return vlseg2e32_v_i32mf2x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_i32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_tu (vint32mf2x2_t dest, int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_i32mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x2_t
test_vlseg2e32_v_i32mf2x2_tu_vl31 (vint32mf2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e32_v_i32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_ta (int32_t *base, size_t vl)
{
  return vlseg3e32_v_i32mf2x3_ta (base, vl);
}

/*
** test_vlseg3e32_v_i32mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_ta_vl31 (int32_t *base)
{
  return vlseg3e32_v_i32mf2x3_ta (base, 31);
}

/*
** test_vlseg3e32_v_i32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_tu (vint32mf2x3_t dest, int32_t *base, size_t vl)
{
  return vlseg3e32_v_i32mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e32_v_i32mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x3_t
test_vlseg3e32_v_i32mf2x3_tu_vl31 (vint32mf2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e32_v_i32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_ta (int32_t *base, size_t vl)
{
  return vlseg4e32_v_i32mf2x4_ta (base, vl);
}

/*
** test_vlseg4e32_v_i32mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_ta_vl31 (int32_t *base)
{
  return vlseg4e32_v_i32mf2x4_ta (base, 31);
}

/*
** test_vlseg4e32_v_i32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_tu (vint32mf2x4_t dest, int32_t *base, size_t vl)
{
  return vlseg4e32_v_i32mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e32_v_i32mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x4_t
test_vlseg4e32_v_i32mf2x4_tu_vl31 (vint32mf2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32mf2x4_tu (dest, base, 31);
}

/*
** test_vlseg5e32_v_i32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_ta (int32_t *base, size_t vl)
{
  return vlseg5e32_v_i32mf2x5_ta (base, vl);
}

/*
** test_vlseg5e32_v_i32mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_ta_vl31 (int32_t *base)
{
  return vlseg5e32_v_i32mf2x5_ta (base, 31);
}

/*
** test_vlseg5e32_v_i32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_tu (vint32mf2x5_t dest, int32_t *base, size_t vl)
{
  return vlseg5e32_v_i32mf2x5_tu (dest, base, vl);
}

/*
** test_vlseg5e32_v_i32mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x5_t
test_vlseg5e32_v_i32mf2x5_tu_vl31 (vint32mf2x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32mf2x5_tu (dest, base, 31);
}

/*
** test_vlseg6e32_v_i32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_ta (int32_t *base, size_t vl)
{
  return vlseg6e32_v_i32mf2x6_ta (base, vl);
}

/*
** test_vlseg6e32_v_i32mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_ta_vl31 (int32_t *base)
{
  return vlseg6e32_v_i32mf2x6_ta (base, 31);
}

/*
** test_vlseg6e32_v_i32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_tu (vint32mf2x6_t dest, int32_t *base, size_t vl)
{
  return vlseg6e32_v_i32mf2x6_tu (dest, base, vl);
}

/*
** test_vlseg6e32_v_i32mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x6_t
test_vlseg6e32_v_i32mf2x6_tu_vl31 (vint32mf2x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32mf2x6_tu (dest, base, 31);
}

/*
** test_vlseg7e32_v_i32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_ta (int32_t *base, size_t vl)
{
  return vlseg7e32_v_i32mf2x7_ta (base, vl);
}

/*
** test_vlseg7e32_v_i32mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_ta_vl31 (int32_t *base)
{
  return vlseg7e32_v_i32mf2x7_ta (base, 31);
}

/*
** test_vlseg7e32_v_i32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_tu (vint32mf2x7_t dest, int32_t *base, size_t vl)
{
  return vlseg7e32_v_i32mf2x7_tu (dest, base, vl);
}

/*
** test_vlseg7e32_v_i32mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x7_t
test_vlseg7e32_v_i32mf2x7_tu_vl31 (vint32mf2x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32mf2x7_tu (dest, base, 31);
}

/*
** test_vlseg8e32_v_i32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_ta (int32_t *base, size_t vl)
{
  return vlseg8e32_v_i32mf2x8_ta (base, vl);
}

/*
** test_vlseg8e32_v_i32mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_ta_vl31 (int32_t *base)
{
  return vlseg8e32_v_i32mf2x8_ta (base, 31);
}

/*
** test_vlseg8e32_v_i32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_tu (vint32mf2x8_t dest, int32_t *base, size_t vl)
{
  return vlseg8e32_v_i32mf2x8_tu (dest, base, vl);
}

/*
** test_vlseg8e32_v_i32mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2x8_t
test_vlseg8e32_v_i32mf2x8_tu_vl31 (vint32mf2x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32mf2x8_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_i32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_ta (int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32m1x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_i32m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_ta_vl31 (int32_t *base)
{
  return vlseg2e32_v_i32m1x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_i32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_tu (vint32m1x2_t dest, int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_i32m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x2_t
test_vlseg2e32_v_i32m1x2_tu_vl31 (vint32m1x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e32_v_i32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_ta (int32_t *base, size_t vl)
{
  return vlseg3e32_v_i32m1x3_ta (base, vl);
}

/*
** test_vlseg3e32_v_i32m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_ta_vl31 (int32_t *base)
{
  return vlseg3e32_v_i32m1x3_ta (base, 31);
}

/*
** test_vlseg3e32_v_i32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_tu (vint32m1x3_t dest, int32_t *base, size_t vl)
{
  return vlseg3e32_v_i32m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e32_v_i32m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x3_t
test_vlseg3e32_v_i32m1x3_tu_vl31 (vint32m1x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e32_v_i32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_ta (int32_t *base, size_t vl)
{
  return vlseg4e32_v_i32m1x4_ta (base, vl);
}

/*
** test_vlseg4e32_v_i32m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_ta_vl31 (int32_t *base)
{
  return vlseg4e32_v_i32m1x4_ta (base, 31);
}

/*
** test_vlseg4e32_v_i32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_tu (vint32m1x4_t dest, int32_t *base, size_t vl)
{
  return vlseg4e32_v_i32m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e32_v_i32m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x4_t
test_vlseg4e32_v_i32m1x4_tu_vl31 (vint32m1x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e32_v_i32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_ta (int32_t *base, size_t vl)
{
  return vlseg5e32_v_i32m1x5_ta (base, vl);
}

/*
** test_vlseg5e32_v_i32m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_ta_vl31 (int32_t *base)
{
  return vlseg5e32_v_i32m1x5_ta (base, 31);
}

/*
** test_vlseg5e32_v_i32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_tu (vint32m1x5_t dest, int32_t *base, size_t vl)
{
  return vlseg5e32_v_i32m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e32_v_i32m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x5_t
test_vlseg5e32_v_i32m1x5_tu_vl31 (vint32m1x5_t dest, int32_t *base)
{
  return vlseg5e32_v_i32m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e32_v_i32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_ta (int32_t *base, size_t vl)
{
  return vlseg6e32_v_i32m1x6_ta (base, vl);
}

/*
** test_vlseg6e32_v_i32m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_ta_vl31 (int32_t *base)
{
  return vlseg6e32_v_i32m1x6_ta (base, 31);
}

/*
** test_vlseg6e32_v_i32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_tu (vint32m1x6_t dest, int32_t *base, size_t vl)
{
  return vlseg6e32_v_i32m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e32_v_i32m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x6_t
test_vlseg6e32_v_i32m1x6_tu_vl31 (vint32m1x6_t dest, int32_t *base)
{
  return vlseg6e32_v_i32m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e32_v_i32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_ta (int32_t *base, size_t vl)
{
  return vlseg7e32_v_i32m1x7_ta (base, vl);
}

/*
** test_vlseg7e32_v_i32m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_ta_vl31 (int32_t *base)
{
  return vlseg7e32_v_i32m1x7_ta (base, 31);
}

/*
** test_vlseg7e32_v_i32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_tu (vint32m1x7_t dest, int32_t *base, size_t vl)
{
  return vlseg7e32_v_i32m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e32_v_i32m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x7_t
test_vlseg7e32_v_i32m1x7_tu_vl31 (vint32m1x7_t dest, int32_t *base)
{
  return vlseg7e32_v_i32m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e32_v_i32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_ta (int32_t *base, size_t vl)
{
  return vlseg8e32_v_i32m1x8_ta (base, vl);
}

/*
** test_vlseg8e32_v_i32m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_ta_vl31 (int32_t *base)
{
  return vlseg8e32_v_i32m1x8_ta (base, 31);
}

/*
** test_vlseg8e32_v_i32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_tu (vint32m1x8_t dest, int32_t *base, size_t vl)
{
  return vlseg8e32_v_i32m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e32_v_i32m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1x8_t
test_vlseg8e32_v_i32m1x8_tu_vl31 (vint32m1x8_t dest, int32_t *base)
{
  return vlseg8e32_v_i32m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_i32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_ta (int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32m2x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_i32m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_ta_vl31 (int32_t *base)
{
  return vlseg2e32_v_i32m2x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_i32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_tu (vint32m2x2_t dest, int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_i32m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x2_t
test_vlseg2e32_v_i32m2x2_tu_vl31 (vint32m2x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e32_v_i32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_ta (int32_t *base, size_t vl)
{
  return vlseg3e32_v_i32m2x3_ta (base, vl);
}

/*
** test_vlseg3e32_v_i32m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_ta_vl31 (int32_t *base)
{
  return vlseg3e32_v_i32m2x3_ta (base, 31);
}

/*
** test_vlseg3e32_v_i32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_tu (vint32m2x3_t dest, int32_t *base, size_t vl)
{
  return vlseg3e32_v_i32m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e32_v_i32m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x3_t
test_vlseg3e32_v_i32m2x3_tu_vl31 (vint32m2x3_t dest, int32_t *base)
{
  return vlseg3e32_v_i32m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e32_v_i32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_ta (int32_t *base, size_t vl)
{
  return vlseg4e32_v_i32m2x4_ta (base, vl);
}

/*
** test_vlseg4e32_v_i32m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_ta_vl31 (int32_t *base)
{
  return vlseg4e32_v_i32m2x4_ta (base, 31);
}

/*
** test_vlseg4e32_v_i32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_tu (vint32m2x4_t dest, int32_t *base, size_t vl)
{
  return vlseg4e32_v_i32m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e32_v_i32m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2x4_t
test_vlseg4e32_v_i32m2x4_tu_vl31 (vint32m2x4_t dest, int32_t *base)
{
  return vlseg4e32_v_i32m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e32_v_i32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_ta (int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32m4x2_ta (base, vl);
}

/*
** test_vlseg2e32_v_i32m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_ta_vl31 (int32_t *base)
{
  return vlseg2e32_v_i32m4x2_ta (base, 31);
}

/*
** test_vlseg2e32_v_i32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_tu (vint32m4x2_t dest, int32_t *base, size_t vl)
{
  return vlseg2e32_v_i32m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e32_v_i32m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m4x2_t
test_vlseg2e32_v_i32m4x2_tu_vl31 (vint32m4x2_t dest, int32_t *base)
{
  return vlseg2e32_v_i32m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e64_v_i64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_ta (int64_t *base, size_t vl)
{
  return vlseg2e64_v_i64m1x2_ta (base, vl);
}

/*
** test_vlseg2e64_v_i64m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_ta_vl31 (int64_t *base)
{
  return vlseg2e64_v_i64m1x2_ta (base, 31);
}

/*
** test_vlseg2e64_v_i64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_tu (vint64m1x2_t dest, int64_t *base, size_t vl)
{
  return vlseg2e64_v_i64m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e64_v_i64m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x2_t
test_vlseg2e64_v_i64m1x2_tu_vl31 (vint64m1x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e64_v_i64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_ta (int64_t *base, size_t vl)
{
  return vlseg3e64_v_i64m1x3_ta (base, vl);
}

/*
** test_vlseg3e64_v_i64m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_ta_vl31 (int64_t *base)
{
  return vlseg3e64_v_i64m1x3_ta (base, 31);
}

/*
** test_vlseg3e64_v_i64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_tu (vint64m1x3_t dest, int64_t *base, size_t vl)
{
  return vlseg3e64_v_i64m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e64_v_i64m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x3_t
test_vlseg3e64_v_i64m1x3_tu_vl31 (vint64m1x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e64_v_i64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_ta (int64_t *base, size_t vl)
{
  return vlseg4e64_v_i64m1x4_ta (base, vl);
}

/*
** test_vlseg4e64_v_i64m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_ta_vl31 (int64_t *base)
{
  return vlseg4e64_v_i64m1x4_ta (base, 31);
}

/*
** test_vlseg4e64_v_i64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_tu (vint64m1x4_t dest, int64_t *base, size_t vl)
{
  return vlseg4e64_v_i64m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e64_v_i64m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x4_t
test_vlseg4e64_v_i64m1x4_tu_vl31 (vint64m1x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e64_v_i64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_ta (int64_t *base, size_t vl)
{
  return vlseg5e64_v_i64m1x5_ta (base, vl);
}

/*
** test_vlseg5e64_v_i64m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_ta_vl31 (int64_t *base)
{
  return vlseg5e64_v_i64m1x5_ta (base, 31);
}

/*
** test_vlseg5e64_v_i64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_tu (vint64m1x5_t dest, int64_t *base, size_t vl)
{
  return vlseg5e64_v_i64m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e64_v_i64m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x5_t
test_vlseg5e64_v_i64m1x5_tu_vl31 (vint64m1x5_t dest, int64_t *base)
{
  return vlseg5e64_v_i64m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e64_v_i64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_ta (int64_t *base, size_t vl)
{
  return vlseg6e64_v_i64m1x6_ta (base, vl);
}

/*
** test_vlseg6e64_v_i64m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_ta_vl31 (int64_t *base)
{
  return vlseg6e64_v_i64m1x6_ta (base, 31);
}

/*
** test_vlseg6e64_v_i64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_tu (vint64m1x6_t dest, int64_t *base, size_t vl)
{
  return vlseg6e64_v_i64m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e64_v_i64m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x6_t
test_vlseg6e64_v_i64m1x6_tu_vl31 (vint64m1x6_t dest, int64_t *base)
{
  return vlseg6e64_v_i64m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e64_v_i64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_ta (int64_t *base, size_t vl)
{
  return vlseg7e64_v_i64m1x7_ta (base, vl);
}

/*
** test_vlseg7e64_v_i64m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_ta_vl31 (int64_t *base)
{
  return vlseg7e64_v_i64m1x7_ta (base, 31);
}

/*
** test_vlseg7e64_v_i64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_tu (vint64m1x7_t dest, int64_t *base, size_t vl)
{
  return vlseg7e64_v_i64m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e64_v_i64m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x7_t
test_vlseg7e64_v_i64m1x7_tu_vl31 (vint64m1x7_t dest, int64_t *base)
{
  return vlseg7e64_v_i64m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e64_v_i64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_ta (int64_t *base, size_t vl)
{
  return vlseg8e64_v_i64m1x8_ta (base, vl);
}

/*
** test_vlseg8e64_v_i64m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_ta_vl31 (int64_t *base)
{
  return vlseg8e64_v_i64m1x8_ta (base, 31);
}

/*
** test_vlseg8e64_v_i64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_tu (vint64m1x8_t dest, int64_t *base, size_t vl)
{
  return vlseg8e64_v_i64m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e64_v_i64m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1x8_t
test_vlseg8e64_v_i64m1x8_tu_vl31 (vint64m1x8_t dest, int64_t *base)
{
  return vlseg8e64_v_i64m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e64_v_i64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_ta (int64_t *base, size_t vl)
{
  return vlseg2e64_v_i64m2x2_ta (base, vl);
}

/*
** test_vlseg2e64_v_i64m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_ta_vl31 (int64_t *base)
{
  return vlseg2e64_v_i64m2x2_ta (base, 31);
}

/*
** test_vlseg2e64_v_i64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_tu (vint64m2x2_t dest, int64_t *base, size_t vl)
{
  return vlseg2e64_v_i64m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e64_v_i64m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x2_t
test_vlseg2e64_v_i64m2x2_tu_vl31 (vint64m2x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e64_v_i64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_ta (int64_t *base, size_t vl)
{
  return vlseg3e64_v_i64m2x3_ta (base, vl);
}

/*
** test_vlseg3e64_v_i64m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_ta_vl31 (int64_t *base)
{
  return vlseg3e64_v_i64m2x3_ta (base, 31);
}

/*
** test_vlseg3e64_v_i64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_tu (vint64m2x3_t dest, int64_t *base, size_t vl)
{
  return vlseg3e64_v_i64m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e64_v_i64m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x3_t
test_vlseg3e64_v_i64m2x3_tu_vl31 (vint64m2x3_t dest, int64_t *base)
{
  return vlseg3e64_v_i64m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e64_v_i64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_ta (int64_t *base, size_t vl)
{
  return vlseg4e64_v_i64m2x4_ta (base, vl);
}

/*
** test_vlseg4e64_v_i64m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_ta_vl31 (int64_t *base)
{
  return vlseg4e64_v_i64m2x4_ta (base, 31);
}

/*
** test_vlseg4e64_v_i64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_tu (vint64m2x4_t dest, int64_t *base, size_t vl)
{
  return vlseg4e64_v_i64m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e64_v_i64m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2x4_t
test_vlseg4e64_v_i64m2x4_tu_vl31 (vint64m2x4_t dest, int64_t *base)
{
  return vlseg4e64_v_i64m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e64_v_i64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_ta (int64_t *base, size_t vl)
{
  return vlseg2e64_v_i64m4x2_ta (base, vl);
}

/*
** test_vlseg2e64_v_i64m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_ta_vl31 (int64_t *base)
{
  return vlseg2e64_v_i64m4x2_ta (base, 31);
}

/*
** test_vlseg2e64_v_i64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_tu (vint64m4x2_t dest, int64_t *base, size_t vl)
{
  return vlseg2e64_v_i64m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e64_v_i64m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m4x2_t
test_vlseg2e64_v_i64m4x2_tu_vl31 (vint64m4x2_t dest, int64_t *base)
{
  return vlseg2e64_v_i64m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_u8mf8x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_ta (uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8mf8x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_u8mf8x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_ta_vl31 (uint8_t *base)
{
  return vlseg2e8_v_u8mf8x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_u8mf8x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_tu (vuint8mf8x2_t dest, uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8mf8x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_u8mf8x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x2_t
test_vlseg2e8_v_u8mf8x2_tu_vl31 (vuint8mf8x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf8x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_u8mf8x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_ta (uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8mf8x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_u8mf8x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_ta_vl31 (uint8_t *base)
{
  return vlseg3e8_v_u8mf8x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_u8mf8x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_tu (vuint8mf8x3_t dest, uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8mf8x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_u8mf8x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x3_t
test_vlseg3e8_v_u8mf8x3_tu_vl31 (vuint8mf8x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf8x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_u8mf8x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_ta (uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8mf8x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_u8mf8x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_ta_vl31 (uint8_t *base)
{
  return vlseg4e8_v_u8mf8x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_u8mf8x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_tu (vuint8mf8x4_t dest, uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8mf8x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_u8mf8x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x4_t
test_vlseg4e8_v_u8mf8x4_tu_vl31 (vuint8mf8x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf8x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_u8mf8x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_ta (uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8mf8x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_u8mf8x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_ta_vl31 (uint8_t *base)
{
  return vlseg5e8_v_u8mf8x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_u8mf8x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_tu (vuint8mf8x5_t dest, uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8mf8x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_u8mf8x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x5_t
test_vlseg5e8_v_u8mf8x5_tu_vl31 (vuint8mf8x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf8x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_u8mf8x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_ta (uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8mf8x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_u8mf8x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_ta_vl31 (uint8_t *base)
{
  return vlseg6e8_v_u8mf8x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_u8mf8x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_tu (vuint8mf8x6_t dest, uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8mf8x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_u8mf8x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x6_t
test_vlseg6e8_v_u8mf8x6_tu_vl31 (vuint8mf8x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf8x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_u8mf8x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_ta (uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8mf8x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_u8mf8x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_ta_vl31 (uint8_t *base)
{
  return vlseg7e8_v_u8mf8x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_u8mf8x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_tu (vuint8mf8x7_t dest, uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8mf8x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_u8mf8x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x7_t
test_vlseg7e8_v_u8mf8x7_tu_vl31 (vuint8mf8x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf8x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_u8mf8x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_ta (uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8mf8x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_u8mf8x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_ta_vl31 (uint8_t *base)
{
  return vlseg8e8_v_u8mf8x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_u8mf8x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_tu (vuint8mf8x8_t dest, uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8mf8x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_u8mf8x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8x8_t
test_vlseg8e8_v_u8mf8x8_tu_vl31 (vuint8mf8x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf8x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_u8mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_ta (uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8mf4x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_u8mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_ta_vl31 (uint8_t *base)
{
  return vlseg2e8_v_u8mf4x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_u8mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_tu (vuint8mf4x2_t dest, uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8mf4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_u8mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vlseg2e8_v_u8mf4x2_tu_vl31 (vuint8mf4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf4x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_u8mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_ta (uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8mf4x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_u8mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_ta_vl31 (uint8_t *base)
{
  return vlseg3e8_v_u8mf4x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_u8mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_tu (vuint8mf4x3_t dest, uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8mf4x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_u8mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vlseg3e8_v_u8mf4x3_tu_vl31 (vuint8mf4x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf4x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_u8mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_ta (uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8mf4x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_u8mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_ta_vl31 (uint8_t *base)
{
  return vlseg4e8_v_u8mf4x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_u8mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_tu (vuint8mf4x4_t dest, uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8mf4x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_u8mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vlseg4e8_v_u8mf4x4_tu_vl31 (vuint8mf4x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf4x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_u8mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_ta (uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8mf4x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_u8mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_ta_vl31 (uint8_t *base)
{
  return vlseg5e8_v_u8mf4x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_u8mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_tu (vuint8mf4x5_t dest, uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8mf4x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_u8mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vlseg5e8_v_u8mf4x5_tu_vl31 (vuint8mf4x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf4x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_u8mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_ta (uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8mf4x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_u8mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_ta_vl31 (uint8_t *base)
{
  return vlseg6e8_v_u8mf4x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_u8mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_tu (vuint8mf4x6_t dest, uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8mf4x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_u8mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vlseg6e8_v_u8mf4x6_tu_vl31 (vuint8mf4x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf4x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_u8mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_ta (uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8mf4x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_u8mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_ta_vl31 (uint8_t *base)
{
  return vlseg7e8_v_u8mf4x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_u8mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_tu (vuint8mf4x7_t dest, uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8mf4x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_u8mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vlseg7e8_v_u8mf4x7_tu_vl31 (vuint8mf4x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf4x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_u8mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_ta (uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8mf4x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_u8mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_ta_vl31 (uint8_t *base)
{
  return vlseg8e8_v_u8mf4x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_u8mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_tu (vuint8mf4x8_t dest, uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8mf4x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_u8mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vlseg8e8_v_u8mf4x8_tu_vl31 (vuint8mf4x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf4x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_u8mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_ta (uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8mf2x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_u8mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_ta_vl31 (uint8_t *base)
{
  return vlseg2e8_v_u8mf2x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_u8mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_tu (vuint8mf2x2_t dest, uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_u8mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vlseg2e8_v_u8mf2x2_tu_vl31 (vuint8mf2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_u8mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_ta (uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8mf2x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_u8mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_ta_vl31 (uint8_t *base)
{
  return vlseg3e8_v_u8mf2x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_u8mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_tu (vuint8mf2x3_t dest, uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_u8mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vlseg3e8_v_u8mf2x3_tu_vl31 (vuint8mf2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_u8mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_ta (uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8mf2x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_u8mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_ta_vl31 (uint8_t *base)
{
  return vlseg4e8_v_u8mf2x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_u8mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_tu (vuint8mf2x4_t dest, uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_u8mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vlseg4e8_v_u8mf2x4_tu_vl31 (vuint8mf2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8mf2x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_u8mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_ta (uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8mf2x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_u8mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_ta_vl31 (uint8_t *base)
{
  return vlseg5e8_v_u8mf2x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_u8mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_tu (vuint8mf2x5_t dest, uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8mf2x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_u8mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vlseg5e8_v_u8mf2x5_tu_vl31 (vuint8mf2x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8mf2x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_u8mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_ta (uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8mf2x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_u8mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_ta_vl31 (uint8_t *base)
{
  return vlseg6e8_v_u8mf2x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_u8mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_tu (vuint8mf2x6_t dest, uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8mf2x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_u8mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vlseg6e8_v_u8mf2x6_tu_vl31 (vuint8mf2x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8mf2x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_u8mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_ta (uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8mf2x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_u8mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_ta_vl31 (uint8_t *base)
{
  return vlseg7e8_v_u8mf2x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_u8mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_tu (vuint8mf2x7_t dest, uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8mf2x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_u8mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vlseg7e8_v_u8mf2x7_tu_vl31 (vuint8mf2x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8mf2x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_u8mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_ta (uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8mf2x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_u8mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_ta_vl31 (uint8_t *base)
{
  return vlseg8e8_v_u8mf2x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_u8mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_tu (vuint8mf2x8_t dest, uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8mf2x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_u8mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vlseg8e8_v_u8mf2x8_tu_vl31 (vuint8mf2x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8mf2x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_u8m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_ta (uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8m1x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_u8m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_ta_vl31 (uint8_t *base)
{
  return vlseg2e8_v_u8m1x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_u8m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_tu (vuint8m1x2_t dest, uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8m1x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_u8m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x2_t
test_vlseg2e8_v_u8m1x2_tu_vl31 (vuint8m1x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m1x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_u8m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_ta (uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8m1x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_u8m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_ta_vl31 (uint8_t *base)
{
  return vlseg3e8_v_u8m1x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_u8m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_tu (vuint8m1x3_t dest, uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8m1x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_u8m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x3_t
test_vlseg3e8_v_u8m1x3_tu_vl31 (vuint8m1x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m1x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_u8m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_ta (uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8m1x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_u8m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_ta_vl31 (uint8_t *base)
{
  return vlseg4e8_v_u8m1x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_u8m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_tu (vuint8m1x4_t dest, uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8m1x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_u8m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x4_t
test_vlseg4e8_v_u8m1x4_tu_vl31 (vuint8m1x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m1x4_tu (dest, base, 31);
}

/*
** test_vlseg5e8_v_u8m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_ta (uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8m1x5_ta (base, vl);
}

/*
** test_vlseg5e8_v_u8m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_ta_vl31 (uint8_t *base)
{
  return vlseg5e8_v_u8m1x5_ta (base, 31);
}

/*
** test_vlseg5e8_v_u8m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_tu (vuint8m1x5_t dest, uint8_t *base, size_t vl)
{
  return vlseg5e8_v_u8m1x5_tu (dest, base, vl);
}

/*
** test_vlseg5e8_v_u8m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x5_t
test_vlseg5e8_v_u8m1x5_tu_vl31 (vuint8m1x5_t dest, uint8_t *base)
{
  return vlseg5e8_v_u8m1x5_tu (dest, base, 31);
}

/*
** test_vlseg6e8_v_u8m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_ta (uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8m1x6_ta (base, vl);
}

/*
** test_vlseg6e8_v_u8m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_ta_vl31 (uint8_t *base)
{
  return vlseg6e8_v_u8m1x6_ta (base, 31);
}

/*
** test_vlseg6e8_v_u8m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_tu (vuint8m1x6_t dest, uint8_t *base, size_t vl)
{
  return vlseg6e8_v_u8m1x6_tu (dest, base, vl);
}

/*
** test_vlseg6e8_v_u8m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x6_t
test_vlseg6e8_v_u8m1x6_tu_vl31 (vuint8m1x6_t dest, uint8_t *base)
{
  return vlseg6e8_v_u8m1x6_tu (dest, base, 31);
}

/*
** test_vlseg7e8_v_u8m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_ta (uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8m1x7_ta (base, vl);
}

/*
** test_vlseg7e8_v_u8m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_ta_vl31 (uint8_t *base)
{
  return vlseg7e8_v_u8m1x7_ta (base, 31);
}

/*
** test_vlseg7e8_v_u8m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_tu (vuint8m1x7_t dest, uint8_t *base, size_t vl)
{
  return vlseg7e8_v_u8m1x7_tu (dest, base, vl);
}

/*
** test_vlseg7e8_v_u8m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x7_t
test_vlseg7e8_v_u8m1x7_tu_vl31 (vuint8m1x7_t dest, uint8_t *base)
{
  return vlseg7e8_v_u8m1x7_tu (dest, base, 31);
}

/*
** test_vlseg8e8_v_u8m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_ta (uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8m1x8_ta (base, vl);
}

/*
** test_vlseg8e8_v_u8m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_ta_vl31 (uint8_t *base)
{
  return vlseg8e8_v_u8m1x8_ta (base, 31);
}

/*
** test_vlseg8e8_v_u8m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_tu (vuint8m1x8_t dest, uint8_t *base, size_t vl)
{
  return vlseg8e8_v_u8m1x8_tu (dest, base, vl);
}

/*
** test_vlseg8e8_v_u8m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1x8_t
test_vlseg8e8_v_u8m1x8_tu_vl31 (vuint8m1x8_t dest, uint8_t *base)
{
  return vlseg8e8_v_u8m1x8_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_u8m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_ta (uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8m2x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_u8m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_ta_vl31 (uint8_t *base)
{
  return vlseg2e8_v_u8m2x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_u8m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_tu (vuint8m2x2_t dest, uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8m2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_u8m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x2_t
test_vlseg2e8_v_u8m2x2_tu_vl31 (vuint8m2x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e8_v_u8m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_ta (uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8m2x3_ta (base, vl);
}

/*
** test_vlseg3e8_v_u8m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_ta_vl31 (uint8_t *base)
{
  return vlseg3e8_v_u8m2x3_ta (base, 31);
}

/*
** test_vlseg3e8_v_u8m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_tu (vuint8m2x3_t dest, uint8_t *base, size_t vl)
{
  return vlseg3e8_v_u8m2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e8_v_u8m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x3_t
test_vlseg3e8_v_u8m2x3_tu_vl31 (vuint8m2x3_t dest, uint8_t *base)
{
  return vlseg3e8_v_u8m2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e8_v_u8m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_ta (uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8m2x4_ta (base, vl);
}

/*
** test_vlseg4e8_v_u8m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_ta_vl31 (uint8_t *base)
{
  return vlseg4e8_v_u8m2x4_ta (base, 31);
}

/*
** test_vlseg4e8_v_u8m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_tu (vuint8m2x4_t dest, uint8_t *base, size_t vl)
{
  return vlseg4e8_v_u8m2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e8_v_u8m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2x4_t
test_vlseg4e8_v_u8m2x4_tu_vl31 (vuint8m2x4_t dest, uint8_t *base)
{
  return vlseg4e8_v_u8m2x4_tu (dest, base, 31);
}

/*
** test_vlseg2e8_v_u8m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_ta (uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8m4x2_ta (base, vl);
}

/*
** test_vlseg2e8_v_u8m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_ta_vl31 (uint8_t *base)
{
  return vlseg2e8_v_u8m4x2_ta (base, 31);
}

/*
** test_vlseg2e8_v_u8m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_tu (vuint8m4x2_t dest, uint8_t *base, size_t vl)
{
  return vlseg2e8_v_u8m4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e8_v_u8m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m4x2_t
test_vlseg2e8_v_u8m4x2_tu_vl31 (vuint8m4x2_t dest, uint8_t *base)
{
  return vlseg2e8_v_u8m4x2_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_u16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_ta (uint16_t *base, size_t vl)
{
  return vlseg2e16_v_u16mf4x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_u16mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_ta_vl31 (uint16_t *base)
{
  return vlseg2e16_v_u16mf4x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_u16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_tu (vuint16mf4x2_t dest, uint16_t *base, size_t vl)
{
  return vlseg2e16_v_u16mf4x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_u16mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x2_t
test_vlseg2e16_v_u16mf4x2_tu_vl31 (vuint16mf4x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf4x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_u16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_ta (uint16_t *base, size_t vl)
{
  return vlseg3e16_v_u16mf4x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_u16mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_ta_vl31 (uint16_t *base)
{
  return vlseg3e16_v_u16mf4x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_u16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_tu (vuint16mf4x3_t dest, uint16_t *base, size_t vl)
{
  return vlseg3e16_v_u16mf4x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_u16mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x3_t
test_vlseg3e16_v_u16mf4x3_tu_vl31 (vuint16mf4x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf4x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_u16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_ta (uint16_t *base, size_t vl)
{
  return vlseg4e16_v_u16mf4x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_u16mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_ta_vl31 (uint16_t *base)
{
  return vlseg4e16_v_u16mf4x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_u16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_tu (vuint16mf4x4_t dest, uint16_t *base, size_t vl)
{
  return vlseg4e16_v_u16mf4x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_u16mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x4_t
test_vlseg4e16_v_u16mf4x4_tu_vl31 (vuint16mf4x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf4x4_tu (dest, base, 31);
}

/*
** test_vlseg5e16_v_u16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_ta (uint16_t *base, size_t vl)
{
  return vlseg5e16_v_u16mf4x5_ta (base, vl);
}

/*
** test_vlseg5e16_v_u16mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_ta_vl31 (uint16_t *base)
{
  return vlseg5e16_v_u16mf4x5_ta (base, 31);
}

/*
** test_vlseg5e16_v_u16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_tu (vuint16mf4x5_t dest, uint16_t *base, size_t vl)
{
  return vlseg5e16_v_u16mf4x5_tu (dest, base, vl);
}

/*
** test_vlseg5e16_v_u16mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x5_t
test_vlseg5e16_v_u16mf4x5_tu_vl31 (vuint16mf4x5_t dest, uint16_t *base)
{
  return vlseg5e16_v_u16mf4x5_tu (dest, base, 31);
}

/*
** test_vlseg6e16_v_u16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_ta (uint16_t *base, size_t vl)
{
  return vlseg6e16_v_u16mf4x6_ta (base, vl);
}

/*
** test_vlseg6e16_v_u16mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_ta_vl31 (uint16_t *base)
{
  return vlseg6e16_v_u16mf4x6_ta (base, 31);
}

/*
** test_vlseg6e16_v_u16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_tu (vuint16mf4x6_t dest, uint16_t *base, size_t vl)
{
  return vlseg6e16_v_u16mf4x6_tu (dest, base, vl);
}

/*
** test_vlseg6e16_v_u16mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x6_t
test_vlseg6e16_v_u16mf4x6_tu_vl31 (vuint16mf4x6_t dest, uint16_t *base)
{
  return vlseg6e16_v_u16mf4x6_tu (dest, base, 31);
}

/*
** test_vlseg7e16_v_u16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_ta (uint16_t *base, size_t vl)
{
  return vlseg7e16_v_u16mf4x7_ta (base, vl);
}

/*
** test_vlseg7e16_v_u16mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_ta_vl31 (uint16_t *base)
{
  return vlseg7e16_v_u16mf4x7_ta (base, 31);
}

/*
** test_vlseg7e16_v_u16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_tu (vuint16mf4x7_t dest, uint16_t *base, size_t vl)
{
  return vlseg7e16_v_u16mf4x7_tu (dest, base, vl);
}

/*
** test_vlseg7e16_v_u16mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x7_t
test_vlseg7e16_v_u16mf4x7_tu_vl31 (vuint16mf4x7_t dest, uint16_t *base)
{
  return vlseg7e16_v_u16mf4x7_tu (dest, base, 31);
}

/*
** test_vlseg8e16_v_u16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_ta (uint16_t *base, size_t vl)
{
  return vlseg8e16_v_u16mf4x8_ta (base, vl);
}

/*
** test_vlseg8e16_v_u16mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_ta_vl31 (uint16_t *base)
{
  return vlseg8e16_v_u16mf4x8_ta (base, 31);
}

/*
** test_vlseg8e16_v_u16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_tu (vuint16mf4x8_t dest, uint16_t *base, size_t vl)
{
  return vlseg8e16_v_u16mf4x8_tu (dest, base, vl);
}

/*
** test_vlseg8e16_v_u16mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4x8_t
test_vlseg8e16_v_u16mf4x8_tu_vl31 (vuint16mf4x8_t dest, uint16_t *base)
{
  return vlseg8e16_v_u16mf4x8_tu (dest, base, 31);
}

/*
** test_vlseg2e16_v_u16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_ta (uint16_t *base, size_t vl)
{
  return vlseg2e16_v_u16mf2x2_ta (base, vl);
}

/*
** test_vlseg2e16_v_u16mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_ta_vl31 (uint16_t *base)
{
  return vlseg2e16_v_u16mf2x2_ta (base, 31);
}

/*
** test_vlseg2e16_v_u16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_tu (vuint16mf2x2_t dest, uint16_t *base, size_t vl)
{
  return vlseg2e16_v_u16mf2x2_tu (dest, base, vl);
}

/*
** test_vlseg2e16_v_u16mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vlseg2e16_v_u16mf2x2_tu_vl31 (vuint16mf2x2_t dest, uint16_t *base)
{
  return vlseg2e16_v_u16mf2x2_tu (dest, base, 31);
}

/*
** test_vlseg3e16_v_u16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_ta (uint16_t *base, size_t vl)
{
  return vlseg3e16_v_u16mf2x3_ta (base, vl);
}

/*
** test_vlseg3e16_v_u16mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_ta_vl31 (uint16_t *base)
{
  return vlseg3e16_v_u16mf2x3_ta (base, 31);
}

/*
** test_vlseg3e16_v_u16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_tu (vuint16mf2x3_t dest, uint16_t *base, size_t vl)
{
  return vlseg3e16_v_u16mf2x3_tu (dest, base, vl);
}

/*
** test_vlseg3e16_v_u16mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vlseg3e16_v_u16mf2x3_tu_vl31 (vuint16mf2x3_t dest, uint16_t *base)
{
  return vlseg3e16_v_u16mf2x3_tu (dest, base, 31);
}

/*
** test_vlseg4e16_v_u16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_ta (uint16_t *base, size_t vl)
{
  return vlseg4e16_v_u16mf2x4_ta (base, vl);
}

/*
** test_vlseg4e16_v_u16mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_ta_vl31 (uint16_t *base)
{
  return vlseg4e16_v_u16mf2x4_ta (base, 31);
}

/*
** test_vlseg4e16_v_u16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_tu (vuint16mf2x4_t dest, uint16_t *base, size_t vl)
{
  return vlseg4e16_v_u16mf2x4_tu (dest, base, vl);
}

/*
** test_vlseg4e16_v_u16mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vlseg4e16_v_u16mf2x4_tu_vl31 (vuint16mf2x4_t dest, uint16_t *base)
{
  return vlseg4e16_v_u16mf2x4_tu (dest, base, 31);
}
