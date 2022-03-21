/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vluxseg4ei64_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_vl32 (float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_m_vl32 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_m_vl32 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_m_vl32 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_m_vl32 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_m_vl32 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_m_vl32 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_m_vl32 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_vl32 (float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_m_vl32 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_m_vl32 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_m_vl32 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_vl32 (float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_m_vl32 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_vl32 (float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_m_vl32 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_m_vl32 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_m_vl32 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_vl32 (float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_m_vl32 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_vl32 (float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_m_vl32 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_m_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_m_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_m_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_m_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_m_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_m_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_m_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_m_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_m_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei8_v_i16mf4x4_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei8_v_i16mf4x4_m_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei8_v_i16mf4x5_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei8_v_i16mf4x5_m_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei8_v_i16mf4x6_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei8_v_i16mf4x6_m_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei8_v_i16mf4x7_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei8_v_i16mf4x7_m_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei8_v_i16mf4x8_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei8_v_i16mf4x8_m_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei8_v_i32mf2x2_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei8_v_i32mf2x2_m_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei8_v_i32mf2x3_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei8_v_i32mf2x3_m_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei8_v_i32mf2x4_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei8_v_i32mf2x4_m_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei8_v_i32mf2x5_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei8_v_i32mf2x5_m_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei8_v_i32mf2x6_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei8_v_i32mf2x6_m_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei8_v_i32mf2x7_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei8_v_i32mf2x7_m_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei8_v_i32mf2x8_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei8_v_i32mf2x8_m_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei8_v_i64m1x2_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei8_v_i64m1x2_m_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei8_v_i64m1x3_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei8_v_i64m1x3_m_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei8_v_i64m1x4_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei8_v_i64m1x4_m_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei8_v_i64m1x5_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei8_v_i64m1x5_m_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei8_v_i64m1x6_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei8_v_i64m1x6_m_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei8_v_i64m1x7_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei8_v_i64m1x7_m_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei8_v_i64m1x8_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei8_v_i64m1x8_m_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei8_v_i8mf4x2_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei8_v_i8mf4x2_m_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei8_v_i8mf4x3_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei8_v_i8mf4x3_m_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei8_v_i8mf4x4_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei8_v_i8mf4x4_m_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei8_v_i8mf4x5_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei8_v_i8mf4x5_m_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei8_v_i8mf4x6_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei8_v_i8mf4x6_m_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei8_v_i8mf4x7_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei8_v_i8mf4x7_m_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei8_v_i8mf4x8_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei8_v_i8mf4x8_m_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei8_v_i16mf2x2_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei8_v_i16mf2x2_m_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei8_v_i16mf2x3_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei8_v_i16mf2x3_m_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei8_v_i16mf2x4_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei8_v_i16mf2x4_m_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei8_v_i16mf2x5_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei8_v_i16mf2x5_m_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei8_v_i16mf2x6_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei8_v_i16mf2x6_m_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei8_v_i16mf2x7_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei8_v_i16mf2x7_m_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei8_v_i16mf2x8_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei8_v_i16mf2x8_m_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei8_v_i32m1x2_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei8_v_i32m1x2_m_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei8_v_i32m1x3_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei8_v_i32m1x3_m_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei8_v_i32m1x4_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei8_v_i32m1x4_m_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei8_v_i32m1x5_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei8_v_i32m1x5_m_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_i32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei8_v_i32m1x6_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei8_v_i32m1x6_m_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_i32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei8_v_i32m1x7_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei8_v_i32m1x7_m_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_i32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei8_v_i32m1x8_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei8_v_i32m1x8_m_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_i32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei8_v_i64m2x2_vl32 (int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei8_v_i64m2x2_m_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_i64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei8_v_i64m2x3_vl32 (int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei8_v_i64m2x3_m_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_i64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei8_v_i64m2x4_vl32 (int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei8_v_i64m2x4_m_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_i64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei8_v_i8mf2x2_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei8_v_i8mf2x2_m_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei8_v_i8mf2x3_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei8_v_i8mf2x3_m_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei8_v_i8mf2x4_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei8_v_i8mf2x4_m_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei8_v_i8mf2x5_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei8_v_i8mf2x5_m_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei8_v_i8mf2x6_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei8_v_i8mf2x6_m_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei8_v_i8mf2x7_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei8_v_i8mf2x7_m_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei8_v_i8mf2x8_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei8_v_i8mf2x8_m_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei8_v_i16m1x2_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei8_v_i16m1x2_m_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei8_v_i16m1x3_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei8_v_i16m1x3_m_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei8_v_i16m1x4_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei8_v_i16m1x4_m_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei8_v_i16m1x5_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei8_v_i16m1x5_m_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_i16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei8_v_i16m1x6_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei8_v_i16m1x6_m_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_i16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei8_v_i16m1x7_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei8_v_i16m1x7_m_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_i16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei8_v_i16m1x8_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei8_v_i16m1x8_m_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_i16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei8_v_i32m2x2_vl32 (int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei8_v_i32m2x2_m_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei8_v_i32m2x3_vl32 (int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei8_v_i32m2x3_m_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_i32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei8_v_i32m2x4_vl32 (int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei8_v_i32m2x4_m_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_i32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei8_v_i64m4x2_vl32 (int64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei8_v_i64m4x2_m_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_i64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei8_v_i8m1x2_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei8_v_i8m1x2_m_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei8_v_i8m1x3_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei8_v_i8m1x3_m_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei8_v_i8m1x4_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei8_v_i8m1x4_m_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei8_v_i8m1x5_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_i8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_i8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei8_v_i8m1x5_m_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_i8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei8_v_i8m1x6_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_i8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_i8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei8_v_i8m1x6_m_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_i8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei8_v_i8m1x7_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_i8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_i8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei8_v_i8m1x7_m_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_i8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei8_v_i8m1x8_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_i8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_i8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei8_v_i8m1x8_m_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_i8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei8_v_i16m2x2_vl32 (int16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei8_v_i16m2x2_m_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei8_v_i16m2x3_vl32 (int16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei8_v_i16m2x3_m_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_i16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei8_v_i16m2x4_vl32 (int16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei8_v_i16m2x4_m_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_i16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei8_v_i32m4x2_vl32 (int32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei8_v_i32m4x2_m_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_i32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2x2_t
test_vluxseg2ei8_v_i8m2x2_vl32 (int8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i8m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vluxseg2ei8_v_i8m2x2_m_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i8m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2x3_t
test_vluxseg3ei8_v_i8m2x3_vl32 (int8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_i8m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_i8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vluxseg3ei8_v_i8m2x3_m_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_i8m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2x4_t
test_vluxseg4ei8_v_i8m2x4_vl32 (int8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_i8m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_i8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vluxseg4ei8_v_i8m2x4_m_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_i8m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m4x2_t
test_vluxseg2ei8_v_i16m4x2_vl32 (int16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i16m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vluxseg2ei8_v_i16m4x2_m_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_i16m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m4x2_t
test_vluxseg2ei8_v_i8m4x2_vl32 (int8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_i8m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_i8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vluxseg2ei8_v_i8m4x2_m_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_i8m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei16_v_i8mf8x2_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei16_v_i8mf8x2_m_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei16_v_i8mf8x3_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei16_v_i8mf8x3_m_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei16_v_i8mf8x4_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei16_v_i8mf8x4_m_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei16_v_i8mf8x5_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei16_v_i8mf8x5_m_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei16_v_i8mf8x6_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei16_v_i8mf8x6_m_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei16_v_i8mf8x7_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei16_v_i8mf8x7_m_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei16_v_i8mf8x8_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei16_v_i8mf8x8_m_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei16_v_i16mf4x2_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei16_v_i16mf4x2_m_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei16_v_i16mf4x3_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei16_v_i16mf4x3_m_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei16_v_i16mf4x4_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei16_v_i16mf4x4_m_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei16_v_i16mf4x5_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei16_v_i16mf4x5_m_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei16_v_i16mf4x6_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei16_v_i16mf4x6_m_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei16_v_i16mf4x7_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei16_v_i16mf4x7_m_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei16_v_i16mf4x8_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei16_v_i16mf4x8_m_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei16_v_i32mf2x2_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei16_v_i32mf2x2_m_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei16_v_i32mf2x3_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei16_v_i32mf2x3_m_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei16_v_i32mf2x4_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei16_v_i32mf2x4_m_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei16_v_i32mf2x5_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei16_v_i32mf2x5_m_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei16_v_i32mf2x6_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei16_v_i32mf2x6_m_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei16_v_i32mf2x7_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei16_v_i32mf2x7_m_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei16_v_i32mf2x8_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei16_v_i32mf2x8_m_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei16_v_i64m1x2_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei16_v_i64m1x2_m_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_i64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei16_v_i64m1x3_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei16_v_i64m1x3_m_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_i64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei16_v_i64m1x4_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei16_v_i64m1x4_m_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_i64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei16_v_i64m1x5_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei16_v_i64m1x5_m_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_i64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei16_v_i64m1x6_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei16_v_i64m1x6_m_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_i64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei16_v_i64m1x7_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei16_v_i64m1x7_m_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_i64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei16_v_i64m1x8_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei16_v_i64m1x8_m_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_i64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei16_v_i8mf4x2_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei16_v_i8mf4x2_m_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei16_v_i8mf4x3_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei16_v_i8mf4x3_m_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei16_v_i8mf4x4_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei16_v_i8mf4x4_m_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei16_v_i8mf4x5_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei16_v_i8mf4x5_m_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei16_v_i8mf4x6_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei16_v_i8mf4x6_m_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei16_v_i8mf4x7_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei16_v_i8mf4x7_m_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei16_v_i8mf4x8_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei16_v_i8mf4x8_m_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei16_v_i16mf2x2_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei16_v_i16mf2x2_m_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei16_v_i16mf2x3_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei16_v_i16mf2x3_m_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei16_v_i16mf2x4_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei16_v_i16mf2x4_m_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei16_v_i16mf2x5_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei16_v_i16mf2x5_m_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei16_v_i16mf2x6_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei16_v_i16mf2x6_m_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei16_v_i16mf2x7_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei16_v_i16mf2x7_m_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei16_v_i16mf2x8_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei16_v_i16mf2x8_m_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei16_v_i32m1x2_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei16_v_i32m1x2_m_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei16_v_i32m1x3_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei16_v_i32m1x3_m_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei16_v_i32m1x4_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei16_v_i32m1x4_m_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei16_v_i32m1x5_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei16_v_i32m1x5_m_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_i32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei16_v_i32m1x6_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei16_v_i32m1x6_m_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_i32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei16_v_i32m1x7_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei16_v_i32m1x7_m_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_i32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei16_v_i32m1x8_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei16_v_i32m1x8_m_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_i32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei16_v_i64m2x2_vl32 (int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei16_v_i64m2x2_m_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_i64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei16_v_i64m2x3_vl32 (int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei16_v_i64m2x3_m_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_i64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei16_v_i64m2x4_vl32 (int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei16_v_i64m2x4_m_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_i64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei16_v_i8mf2x2_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei16_v_i8mf2x2_m_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei16_v_i8mf2x3_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei16_v_i8mf2x3_m_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei16_v_i8mf2x4_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei16_v_i8mf2x4_m_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei16_v_i8mf2x5_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei16_v_i8mf2x5_m_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei16_v_i8mf2x6_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei16_v_i8mf2x6_m_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei16_v_i8mf2x7_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei16_v_i8mf2x7_m_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei16_v_i8mf2x8_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei16_v_i8mf2x8_m_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei16_v_i16m1x2_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei16_v_i16m1x2_m_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei16_v_i16m1x3_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei16_v_i16m1x3_m_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei16_v_i16m1x4_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei16_v_i16m1x4_m_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei16_v_i16m1x5_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei16_v_i16m1x5_m_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_i16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei16_v_i16m1x6_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei16_v_i16m1x6_m_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_i16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei16_v_i16m1x7_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei16_v_i16m1x7_m_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_i16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei16_v_i16m1x8_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei16_v_i16m1x8_m_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_i16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei16_v_i32m2x2_vl32 (int32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei16_v_i32m2x2_m_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei16_v_i32m2x3_vl32 (int32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei16_v_i32m2x3_m_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_i32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei16_v_i32m2x4_vl32 (int32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei16_v_i32m2x4_m_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_i32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei16_v_i64m4x2_vl32 (int64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei16_v_i64m4x2_m_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_i64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei16_v_i8m1x2_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei16_v_i8m1x2_m_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei16_v_i8m1x3_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei16_v_i8m1x3_m_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei16_v_i8m1x4_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei16_v_i8m1x4_m_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei16_v_i8m1x5_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_i8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_i8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei16_v_i8m1x5_m_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_i8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei16_v_i8m1x6_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_i8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_i8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei16_v_i8m1x6_m_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_i8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei16_v_i8m1x7_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_i8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_i8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei16_v_i8m1x7_m_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_i8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei16_v_i8m1x8_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_i8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_i8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei16_v_i8m1x8_m_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_i8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei16_v_i16m2x2_vl32 (int16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei16_v_i16m2x2_m_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei16_v_i16m2x3_vl32 (int16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei16_v_i16m2x3_m_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_i16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei16_v_i16m2x4_vl32 (int16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei16_v_i16m2x4_m_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_i16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei16_v_i32m4x2_vl32 (int32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei16_v_i32m4x2_m_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_i32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2x2_t
test_vluxseg2ei16_v_i8m2x2_vl32 (int8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i8m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vluxseg2ei16_v_i8m2x2_m_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i8m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2x3_t
test_vluxseg3ei16_v_i8m2x3_vl32 (int8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_i8m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_i8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vluxseg3ei16_v_i8m2x3_m_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_i8m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m2x4_t
test_vluxseg4ei16_v_i8m2x4_vl32 (int8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_i8m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_i8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vluxseg4ei16_v_i8m2x4_m_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_i8m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m4x2_t
test_vluxseg2ei16_v_i16m4x2_vl32 (int16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i16m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vluxseg2ei16_v_i16m4x2_m_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_i16m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m4x2_t
test_vluxseg2ei16_v_i8m4x2_vl32 (int8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_i8m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_i8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m4x2_t
test_vluxseg2ei16_v_i8m4x2_m_vl32 (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_i8m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei32_v_i8mf8x2_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei32_v_i8mf8x2_m_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei32_v_i8mf8x3_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei32_v_i8mf8x3_m_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei32_v_i8mf8x4_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei32_v_i8mf8x4_m_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei32_v_i8mf8x5_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei32_v_i8mf8x5_m_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei32_v_i8mf8x6_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei32_v_i8mf8x6_m_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei32_v_i8mf8x7_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei32_v_i8mf8x7_m_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei32_v_i8mf8x8_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei32_v_i8mf8x8_m_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei32_v_i16mf4x2_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei32_v_i16mf4x2_m_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei32_v_i16mf4x3_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei32_v_i16mf4x3_m_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei32_v_i16mf4x4_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei32_v_i16mf4x4_m_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei32_v_i16mf4x5_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei32_v_i16mf4x5_m_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei32_v_i16mf4x6_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei32_v_i16mf4x6_m_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei32_v_i16mf4x7_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei32_v_i16mf4x7_m_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei32_v_i16mf4x8_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei32_v_i16mf4x8_m_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei32_v_i32mf2x2_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei32_v_i32mf2x2_m_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei32_v_i32mf2x3_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei32_v_i32mf2x3_m_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei32_v_i32mf2x4_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei32_v_i32mf2x4_m_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei32_v_i32mf2x5_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei32_v_i32mf2x5_m_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei32_v_i32mf2x6_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei32_v_i32mf2x6_m_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei32_v_i32mf2x7_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei32_v_i32mf2x7_m_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei32_v_i32mf2x8_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei32_v_i32mf2x8_m_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei32_v_i64m1x2_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei32_v_i64m1x2_m_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_i64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei32_v_i64m1x3_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei32_v_i64m1x3_m_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_i64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei32_v_i64m1x4_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei32_v_i64m1x4_m_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_i64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei32_v_i64m1x5_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei32_v_i64m1x5_m_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_i64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei32_v_i64m1x6_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei32_v_i64m1x6_m_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_i64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei32_v_i64m1x7_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei32_v_i64m1x7_m_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_i64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei32_v_i64m1x8_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei32_v_i64m1x8_m_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_i64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei32_v_i8mf4x2_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei32_v_i8mf4x2_m_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei32_v_i8mf4x3_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei32_v_i8mf4x3_m_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei32_v_i8mf4x4_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei32_v_i8mf4x4_m_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei32_v_i8mf4x5_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei32_v_i8mf4x5_m_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei32_v_i8mf4x6_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei32_v_i8mf4x6_m_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei32_v_i8mf4x7_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei32_v_i8mf4x7_m_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei32_v_i8mf4x8_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei32_v_i8mf4x8_m_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei32_v_i16mf2x2_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei32_v_i16mf2x2_m_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei32_v_i16mf2x3_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei32_v_i16mf2x3_m_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei32_v_i16mf2x4_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei32_v_i16mf2x4_m_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei32_v_i16mf2x5_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei32_v_i16mf2x5_m_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei32_v_i16mf2x6_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei32_v_i16mf2x6_m_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei32_v_i16mf2x7_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei32_v_i16mf2x7_m_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei32_v_i16mf2x8_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei32_v_i16mf2x8_m_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei32_v_i32m1x2_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei32_v_i32m1x2_m_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei32_v_i32m1x3_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei32_v_i32m1x3_m_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei32_v_i32m1x4_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei32_v_i32m1x4_m_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei32_v_i32m1x5_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei32_v_i32m1x5_m_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_i32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei32_v_i32m1x6_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei32_v_i32m1x6_m_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_i32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei32_v_i32m1x7_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei32_v_i32m1x7_m_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_i32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei32_v_i32m1x8_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei32_v_i32m1x8_m_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_i32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei32_v_i64m2x2_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei32_v_i64m2x2_m_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_i64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei32_v_i64m2x3_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei32_v_i64m2x3_m_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_i64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei32_v_i64m2x4_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei32_v_i64m2x4_m_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_i64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei32_v_i8mf2x2_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei32_v_i8mf2x2_m_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei32_v_i8mf2x3_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei32_v_i8mf2x3_m_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei32_v_i8mf2x4_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei32_v_i8mf2x4_m_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei32_v_i8mf2x5_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei32_v_i8mf2x5_m_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei32_v_i8mf2x6_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei32_v_i8mf2x6_m_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei32_v_i8mf2x7_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei32_v_i8mf2x7_m_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei32_v_i8mf2x8_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei32_v_i8mf2x8_m_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei32_v_i16m1x2_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei32_v_i16m1x2_m_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei32_v_i16m1x3_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei32_v_i16m1x3_m_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei32_v_i16m1x4_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei32_v_i16m1x4_m_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei32_v_i16m1x5_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei32_v_i16m1x5_m_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_i16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei32_v_i16m1x6_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei32_v_i16m1x6_m_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_i16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei32_v_i16m1x7_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei32_v_i16m1x7_m_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_i16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei32_v_i16m1x8_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei32_v_i16m1x8_m_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_i16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei32_v_i32m2x2_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei32_v_i32m2x2_m_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei32_v_i32m2x3_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei32_v_i32m2x3_m_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_i32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei32_v_i32m2x4_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei32_v_i32m2x4_m_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_i32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei32_v_i64m4x2_vl32 (int64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei32_v_i64m4x2_m_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_i64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei32_v_i8m1x2_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei32_v_i8m1x2_m_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei32_v_i8m1x3_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei32_v_i8m1x3_m_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei32_v_i8m1x4_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei32_v_i8m1x4_m_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei32_v_i8m1x5_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_i8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_i8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei32_v_i8m1x5_m_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_i8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei32_v_i8m1x6_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_i8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_i8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei32_v_i8m1x6_m_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_i8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei32_v_i8m1x7_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_i8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_i8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei32_v_i8m1x7_m_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_i8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei32_v_i8m1x8_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_i8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_i8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei32_v_i8m1x8_m_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_i8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei32_v_i16m2x2_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei32_v_i16m2x2_m_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei32_v_i16m2x3_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei32_v_i16m2x3_m_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_i16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei32_v_i16m2x4_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei32_v_i16m2x4_m_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_i16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei32_v_i32m4x2_vl32 (int32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei32_v_i32m4x2_m_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_i32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x2_t
test_vluxseg2ei32_v_i8m2x2_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i8m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m2x2_t
test_vluxseg2ei32_v_i8m2x2_m_vl32 (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i8m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x3_t
test_vluxseg3ei32_v_i8m2x3_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_i8m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_i8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m2x3_t
test_vluxseg3ei32_v_i8m2x3_m_vl32 (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_i8m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x4_t
test_vluxseg4ei32_v_i8m2x4_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_i8m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_i8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m2x4_t
test_vluxseg4ei32_v_i8m2x4_m_vl32 (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_i8m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4x2_t
test_vluxseg2ei32_v_i16m4x2_vl32 (int16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i16m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_i16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m4x2_t
test_vluxseg2ei32_v_i16m4x2_m_vl32 (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_i16m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei64_v_i8mf8x2_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei64_v_i8mf8x2_m_vl32 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei64_v_i8mf8x3_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei64_v_i8mf8x3_m_vl32 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei64_v_i8mf8x4_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei64_v_i8mf8x4_m_vl32 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei64_v_i8mf8x5_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei64_v_i8mf8x5_m_vl32 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei64_v_i8mf8x6_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei64_v_i8mf8x6_m_vl32 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei64_v_i8mf8x7_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei64_v_i8mf8x7_m_vl32 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei64_v_i8mf8x8_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei64_v_i8mf8x8_m_vl32 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei64_v_i16mf4x2_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei64_v_i16mf4x2_m_vl32 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei64_v_i16mf4x3_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei64_v_i16mf4x3_m_vl32 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei64_v_i16mf4x4_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x4_t
test_vluxseg4ei64_v_i16mf4x4_m_vl32 (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei64_v_i16mf4x5_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x5_t
test_vluxseg5ei64_v_i16mf4x5_m_vl32 (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei64_v_i16mf4x6_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x6_t
test_vluxseg6ei64_v_i16mf4x6_m_vl32 (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei64_v_i16mf4x7_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x7_t
test_vluxseg7ei64_v_i16mf4x7_m_vl32 (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei64_v_i16mf4x8_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x8_t
test_vluxseg8ei64_v_i16mf4x8_m_vl32 (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei64_v_i32mf2x2_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x2_t
test_vluxseg2ei64_v_i32mf2x2_m_vl32 (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei64_v_i32mf2x3_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x3_t
test_vluxseg3ei64_v_i32mf2x3_m_vl32 (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei64_v_i32mf2x4_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x4_t
test_vluxseg4ei64_v_i32mf2x4_m_vl32 (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei64_v_i32mf2x5_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x5_t
test_vluxseg5ei64_v_i32mf2x5_m_vl32 (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei64_v_i32mf2x6_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x6_t
test_vluxseg6ei64_v_i32mf2x6_m_vl32 (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei64_v_i32mf2x7_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x7_t
test_vluxseg7ei64_v_i32mf2x7_m_vl32 (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei64_v_i32mf2x8_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint32mf2x8_t
test_vluxseg8ei64_v_i32mf2x8_m_vl32 (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei64_v_i64m1x2_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x2_t
test_vluxseg2ei64_v_i64m1x2_m_vl32 (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_i64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei64_v_i64m1x3_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x3_t
test_vluxseg3ei64_v_i64m1x3_m_vl32 (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_i64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei64_v_i64m1x4_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x4_t
test_vluxseg4ei64_v_i64m1x4_m_vl32 (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_i64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei64_v_i64m1x5_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x5_t
test_vluxseg5ei64_v_i64m1x5_m_vl32 (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_i64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei64_v_i64m1x6_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x6_t
test_vluxseg6ei64_v_i64m1x6_m_vl32 (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_i64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei64_v_i64m1x7_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x7_t
test_vluxseg7ei64_v_i64m1x7_m_vl32 (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_i64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei64_v_i64m1x8_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint64m1x8_t
test_vluxseg8ei64_v_i64m1x8_m_vl32 (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_i64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei64_v_i8mf4x2_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x2_t
test_vluxseg2ei64_v_i8mf4x2_m_vl32 (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei64_v_i8mf4x3_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x3_t
test_vluxseg3ei64_v_i8mf4x3_m_vl32 (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei64_v_i8mf4x4_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x4_t
test_vluxseg4ei64_v_i8mf4x4_m_vl32 (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei64_v_i8mf4x5_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x5_t
test_vluxseg5ei64_v_i8mf4x5_m_vl32 (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei64_v_i8mf4x6_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x6_t
test_vluxseg6ei64_v_i8mf4x6_m_vl32 (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei64_v_i8mf4x7_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x7_t
test_vluxseg7ei64_v_i8mf4x7_m_vl32 (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei64_v_i8mf4x8_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint8mf4x8_t
test_vluxseg8ei64_v_i8mf4x8_m_vl32 (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei64_v_i16mf2x2_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x2_t
test_vluxseg2ei64_v_i16mf2x2_m_vl32 (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei64_v_i16mf2x3_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x3_t
test_vluxseg3ei64_v_i16mf2x3_m_vl32 (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei64_v_i16mf2x4_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x4_t
test_vluxseg4ei64_v_i16mf2x4_m_vl32 (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei64_v_i16mf2x5_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x5_t
test_vluxseg5ei64_v_i16mf2x5_m_vl32 (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei64_v_i16mf2x6_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x6_t
test_vluxseg6ei64_v_i16mf2x6_m_vl32 (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei64_v_i16mf2x7_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x7_t
test_vluxseg7ei64_v_i16mf2x7_m_vl32 (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei64_v_i16mf2x8_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint16mf2x8_t
test_vluxseg8ei64_v_i16mf2x8_m_vl32 (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei64_v_i32m1x2_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x2_t
test_vluxseg2ei64_v_i32m1x2_m_vl32 (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei64_v_i32m1x3_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x3_t
test_vluxseg3ei64_v_i32m1x3_m_vl32 (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei64_v_i32m1x4_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x4_t
test_vluxseg4ei64_v_i32m1x4_m_vl32 (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei64_v_i32m1x5_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x5_t
test_vluxseg5ei64_v_i32m1x5_m_vl32 (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_i32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei64_v_i32m1x6_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x6_t
test_vluxseg6ei64_v_i32m1x6_m_vl32 (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_i32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei64_v_i32m1x7_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x7_t
test_vluxseg7ei64_v_i32m1x7_m_vl32 (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_i32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei64_v_i32m1x8_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint32m1x8_t
test_vluxseg8ei64_v_i32m1x8_m_vl32 (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_i32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei64_v_i64m2x2_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m2x2_t
test_vluxseg2ei64_v_i64m2x2_m_vl32 (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_i64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei64_v_i64m2x3_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m2x3_t
test_vluxseg3ei64_v_i64m2x3_m_vl32 (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_i64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei64_v_i64m2x4_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vint64m2x4_t
test_vluxseg4ei64_v_i64m2x4_m_vl32 (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_i64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei64_v_i8mf2x2_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x2_t
test_vluxseg2ei64_v_i8mf2x2_m_vl32 (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei64_v_i8mf2x3_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x3_t
test_vluxseg3ei64_v_i8mf2x3_m_vl32 (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei64_v_i8mf2x4_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x4_t
test_vluxseg4ei64_v_i8mf2x4_m_vl32 (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei64_v_i8mf2x5_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x5_t
test_vluxseg5ei64_v_i8mf2x5_m_vl32 (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei64_v_i8mf2x6_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x6_t
test_vluxseg6ei64_v_i8mf2x6_m_vl32 (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei64_v_i8mf2x7_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x7_t
test_vluxseg7ei64_v_i8mf2x7_m_vl32 (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei64_v_i8mf2x8_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint8mf2x8_t
test_vluxseg8ei64_v_i8mf2x8_m_vl32 (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei64_v_i16m1x2_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x2_t
test_vluxseg2ei64_v_i16m1x2_m_vl32 (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei64_v_i16m1x3_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x3_t
test_vluxseg3ei64_v_i16m1x3_m_vl32 (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei64_v_i16m1x4_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x4_t
test_vluxseg4ei64_v_i16m1x4_m_vl32 (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei64_v_i16m1x5_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x5_t
test_vluxseg5ei64_v_i16m1x5_m_vl32 (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_i16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei64_v_i16m1x6_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x6_t
test_vluxseg6ei64_v_i16m1x6_m_vl32 (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_i16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei64_v_i16m1x7_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x7_t
test_vluxseg7ei64_v_i16m1x7_m_vl32 (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_i16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei64_v_i16m1x8_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint16m1x8_t
test_vluxseg8ei64_v_i16m1x8_m_vl32 (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_i16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei64_v_i32m2x2_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x2_t
test_vluxseg2ei64_v_i32m2x2_m_vl32 (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei64_v_i32m2x3_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x3_t
test_vluxseg3ei64_v_i32m2x3_m_vl32 (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_i32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei64_v_i32m2x4_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint32m2x4_t
test_vluxseg4ei64_v_i32m2x4_m_vl32 (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_i32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei64_v_i64m4x2_vl32 (int64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vint64m4x2_t
test_vluxseg2ei64_v_i64m4x2_m_vl32 (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_i64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei64_v_i8m1x2_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x2_t
test_vluxseg2ei64_v_i8m1x2_m_vl32 (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei64_v_i8m1x3_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x3_t
test_vluxseg3ei64_v_i8m1x3_m_vl32 (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei64_v_i8m1x4_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x4_t
test_vluxseg4ei64_v_i8m1x4_m_vl32 (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei64_v_i8m1x5_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_i8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_i8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x5_t
test_vluxseg5ei64_v_i8m1x5_m_vl32 (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_i8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei64_v_i8m1x6_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_i8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_i8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x6_t
test_vluxseg6ei64_v_i8m1x6_m_vl32 (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_i8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei64_v_i8m1x7_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_i8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_i8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x7_t
test_vluxseg7ei64_v_i8m1x7_m_vl32 (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_i8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei64_v_i8m1x8_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_i8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_i8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint8m1x8_t
test_vluxseg8ei64_v_i8m1x8_m_vl32 (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_i8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei64_v_i16m2x2_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m2x2_t
test_vluxseg2ei64_v_i16m2x2_m_vl32 (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei64_v_i16m2x3_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_i16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m2x3_t
test_vluxseg3ei64_v_i16m2x3_m_vl32 (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_i16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei64_v_i16m2x4_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_i16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint16m2x4_t
test_vluxseg4ei64_v_i16m2x4_m_vl32 (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_i16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei64_v_i32m4x2_vl32 (int32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_i32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vint32m4x2_t
test_vluxseg2ei64_v_i32m4x2_m_vl32 (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_i32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei8_v_u8mf8x2_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei8_v_u8mf8x2_m_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei8_v_u8mf8x3_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei8_v_u8mf8x3_m_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei8_v_u8mf8x4_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei8_v_u8mf8x4_m_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei8_v_u8mf8x5_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei8_v_u8mf8x5_m_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei8_v_u8mf8x6_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei8_v_u8mf8x6_m_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei8_v_u8mf8x7_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei8_v_u8mf8x7_m_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei8_v_u8mf8x8_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei8_v_u8mf8x8_m_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei8_v_u16mf4x2_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei8_v_u16mf4x2_m_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei8_v_u16mf4x3_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei8_v_u16mf4x3_m_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei8_v_u16mf4x4_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei8_v_u16mf4x4_m_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei8_v_u16mf4x5_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei8_v_u16mf4x5_m_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei8_v_u16mf4x6_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei8_v_u16mf4x6_m_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei8_v_u16mf4x7_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei8_v_u16mf4x7_m_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei8_v_u16mf4x8_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei8_v_u16mf4x8_m_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei8_v_u32mf2x2_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei8_v_u32mf2x2_m_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei8_v_u32mf2x3_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei8_v_u32mf2x3_m_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei8_v_u32mf2x4_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei8_v_u32mf2x4_m_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei8_v_u32mf2x5_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei8_v_u32mf2x5_m_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei8_v_u32mf2x6_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei8_v_u32mf2x6_m_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei8_v_u32mf2x7_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei8_v_u32mf2x7_m_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei8_v_u32mf2x8_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei8_v_u32mf2x8_m_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei8_v_u64m1x2_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei8_v_u64m1x2_m_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_u64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei8_v_u64m1x3_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei8_v_u64m1x3_m_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_u64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei8_v_u64m1x4_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei8_v_u64m1x4_m_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_u64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei8_v_u64m1x5_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei8_v_u64m1x5_m_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_u64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei8_v_u64m1x6_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei8_v_u64m1x6_m_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_u64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei8_v_u64m1x7_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei8_v_u64m1x7_m_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_u64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei8_v_u64m1x8_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei8_v_u64m1x8_m_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_u64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei8_v_u8mf4x2_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei8_v_u8mf4x2_m_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei8_v_u8mf4x3_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei8_v_u8mf4x3_m_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei8_v_u8mf4x4_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei8_v_u8mf4x4_m_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei8_v_u8mf4x5_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei8_v_u8mf4x5_m_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei8_v_u8mf4x6_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei8_v_u8mf4x6_m_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei8_v_u8mf4x7_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei8_v_u8mf4x7_m_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei8_v_u8mf4x8_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei8_v_u8mf4x8_m_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei8_v_u16mf2x2_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei8_v_u16mf2x2_m_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei8_v_u16mf2x3_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei8_v_u16mf2x3_m_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei8_v_u16mf2x4_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei8_v_u16mf2x4_m_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei8_v_u16mf2x5_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei8_v_u16mf2x5_m_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei8_v_u16mf2x6_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei8_v_u16mf2x6_m_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei8_v_u16mf2x7_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei8_v_u16mf2x7_m_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei8_v_u16mf2x8_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei8_v_u16mf2x8_m_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei8_v_u32m1x2_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei8_v_u32m1x2_m_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei8_v_u32m1x3_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei8_v_u32m1x3_m_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei8_v_u32m1x4_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei8_v_u32m1x4_m_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei8_v_u32m1x5_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei8_v_u32m1x5_m_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_u32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei8_v_u32m1x6_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei8_v_u32m1x6_m_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_u32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei8_v_u32m1x7_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei8_v_u32m1x7_m_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_u32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei8_v_u32m1x8_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei8_v_u32m1x8_m_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_u32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei8_v_u64m2x2_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei8_v_u64m2x2_m_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_u64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei8_v_u64m2x3_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei8_v_u64m2x3_m_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_u64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei8_v_u64m2x4_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei8_v_u64m2x4_m_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_u64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei8_v_u8mf2x2_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei8_v_u8mf2x2_m_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei8_v_u8mf2x3_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei8_v_u8mf2x3_m_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei8_v_u8mf2x4_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei8_v_u8mf2x4_m_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei8_v_u8mf2x5_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei8_v_u8mf2x5_m_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei8_v_u8mf2x6_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei8_v_u8mf2x6_m_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei8_v_u8mf2x7_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei8_v_u8mf2x7_m_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei8_v_u8mf2x8_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei8_v_u8mf2x8_m_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei8_v_u16m1x2_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei8_v_u16m1x2_m_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei8_v_u16m1x3_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei8_v_u16m1x3_m_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei8_v_u16m1x4_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei8_v_u16m1x4_m_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei8_v_u16m1x5_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei8_v_u16m1x5_m_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_u16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei8_v_u16m1x6_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei8_v_u16m1x6_m_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_u16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei8_v_u16m1x7_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei8_v_u16m1x7_m_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_u16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei8_v_u16m1x8_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei8_v_u16m1x8_m_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_u16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei8_v_u32m2x2_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei8_v_u32m2x2_m_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei8_v_u32m2x3_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei8_v_u32m2x3_m_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_u32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei8_v_u32m2x4_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei8_v_u32m2x4_m_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_u32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei8_v_u64m4x2_vl32 (uint64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei8_v_u64m4x2_m_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_u64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei8_v_u8m1x2_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei8_v_u8m1x2_m_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei8_v_u8m1x3_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei8_v_u8m1x3_m_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei8_v_u8m1x4_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei8_v_u8m1x4_m_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei8_v_u8m1x5_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_u8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei8_v_u8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei8_v_u8m1x5_m_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg5ei8_v_u8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei8_v_u8m1x6_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_u8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei8_v_u8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei8_v_u8m1x6_m_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg6ei8_v_u8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei8_v_u8m1x7_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_u8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei8_v_u8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei8_v_u8m1x7_m_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg7ei8_v_u8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei8_v_u8m1x8_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_u8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei8_v_u8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei8_v_u8m1x8_m_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vluxseg8ei8_v_u8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei8_v_u16m2x2_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei8_v_u16m2x2_m_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei8_v_u16m2x3_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei8_v_u16m2x3_m_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_u16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei8_v_u16m2x4_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei8_v_u16m2x4_m_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_u16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei8_v_u32m4x2_vl32 (uint32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei8_v_u32m4x2_m_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_u32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei8_v_u8m2x2_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u8m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei8_v_u8m2x2_m_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u8m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei8_v_u8m2x3_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_u8m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei8_v_u8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei8_v_u8m2x3_m_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg3ei8_v_u8m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei8_v_u8m2x4_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_u8m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei8_v_u8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei8_v_u8m2x4_m_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vluxseg4ei8_v_u8m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei8_v_u16m4x2_vl32 (uint16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u16m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei8_v_u16m4x2_m_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_u16m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei8_v_u8m4x2_vl32 (uint8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_u8m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_u8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei8_v_u8m4x2_m_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vluxseg2ei8_v_u8m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei16_v_u8mf8x2_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei16_v_u8mf8x2_m_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei16_v_u8mf8x3_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei16_v_u8mf8x3_m_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei16_v_u8mf8x4_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei16_v_u8mf8x4_m_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei16_v_u8mf8x5_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei16_v_u8mf8x5_m_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei16_v_u8mf8x6_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei16_v_u8mf8x6_m_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei16_v_u8mf8x7_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei16_v_u8mf8x7_m_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei16_v_u8mf8x8_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei16_v_u8mf8x8_m_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei16_v_u16mf4x2_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei16_v_u16mf4x2_m_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei16_v_u16mf4x3_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei16_v_u16mf4x3_m_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei16_v_u16mf4x4_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei16_v_u16mf4x4_m_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei16_v_u16mf4x5_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei16_v_u16mf4x5_m_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei16_v_u16mf4x6_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei16_v_u16mf4x6_m_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei16_v_u16mf4x7_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei16_v_u16mf4x7_m_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei16_v_u16mf4x8_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei16_v_u16mf4x8_m_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei16_v_u32mf2x2_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei16_v_u32mf2x2_m_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei16_v_u32mf2x3_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei16_v_u32mf2x3_m_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei16_v_u32mf2x4_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei16_v_u32mf2x4_m_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei16_v_u32mf2x5_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei16_v_u32mf2x5_m_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei16_v_u32mf2x6_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei16_v_u32mf2x6_m_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei16_v_u32mf2x7_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei16_v_u32mf2x7_m_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei16_v_u32mf2x8_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei16_v_u32mf2x8_m_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei16_v_u64m1x2_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei16_v_u64m1x2_m_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_u64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei16_v_u64m1x3_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei16_v_u64m1x3_m_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_u64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei16_v_u64m1x4_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei16_v_u64m1x4_m_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_u64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei16_v_u64m1x5_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei16_v_u64m1x5_m_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_u64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei16_v_u64m1x6_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei16_v_u64m1x6_m_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_u64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_m_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_m_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_m_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_m_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_m_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_m_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_m_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_m_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_m_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_m_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_m_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_m_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_m_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_m_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_m_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_m_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_m_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_m_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_m_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_m_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_m_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_m_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_m_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_m_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_m_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_m_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_m_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_m_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_m_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_m_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_m_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_m_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_m_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_m_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_m_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_m_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_m_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_m_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_m_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_m_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_m_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_m_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_m_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_vl32 (uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_m_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_m_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_m_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_m_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_m_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_m_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_m_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_m_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_m_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_m_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_m_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_vl32 (uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_m_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_m_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_m_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_m_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_vl32 (uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_m_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_vl32 (uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_m_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_m_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_m_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_m_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_m_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_m_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_m_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_m_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_m_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_m_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_m_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_m_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_m_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_m_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_m_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_m_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_m_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_m_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_m_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_m_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_m_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_m_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_m_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_m_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_m_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_m_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_m_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_m_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_m_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_m_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_m_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_m_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_m_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_m_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_m_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_m_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_m_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_m_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_m_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_m_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_m_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_m_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_m_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_m_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_m_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_m_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_m_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_m_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_m_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_m_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_m_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_m_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_m_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_m_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_m_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_m_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_m_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_m_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_m_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_m_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_m_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_m_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_m_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_m_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_m_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_m_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_m_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_m_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_m_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_m_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_vl32 (uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_m_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_m_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_m_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_m_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_m_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_m_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_m_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_m_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_m_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_m_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_m_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_vl32 (uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_m_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_m_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_m_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_m_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_vl32 (uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_m_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_m_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_m_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_m_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_m_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_m_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_m_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_m_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_m_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_m_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_m_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_m_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_m_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_m_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_m_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_m_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_m_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_m_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_m_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_m_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_m_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_m_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_m_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_m_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_m_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_m_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_m_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_m_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_m_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_m_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_m_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_m_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_m_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_m_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_m_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_m_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_m_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_m_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_m_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_m_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_m_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_m_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_m_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_m_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_m_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_m_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5 (base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_m_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6 (base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_m_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7 (base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_m_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8 (base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_m_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_m_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_m_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_m_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2 (base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_m_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3 (base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_m_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4 (base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_m_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_m (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5 (base, bindex, 32);
}
