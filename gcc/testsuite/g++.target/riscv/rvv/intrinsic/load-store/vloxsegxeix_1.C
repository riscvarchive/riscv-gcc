/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vloxseg2ei8_v_f16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei8_v_f16mf4x2 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei8_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei8_v_f16mf4x3 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei8_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei8_v_f16mf4x4 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei8_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei8_v_f16mf4x5 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei8_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei8_v_f16mf4x6 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei8_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei8_v_f16mf4x7 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei8_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei8_v_f16mf4x8 (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei8_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei8_v_f32mf2x2 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei8_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei8_v_f32mf2x3 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei8_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei8_v_f32mf2x4 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei8_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei8_v_f32mf2x5 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei8_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei8_v_f32mf2x6 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei8_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei8_v_f32mf2x7 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei8_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei8_v_f32mf2x8 (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei8_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei8_v_f64m1x2 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei8_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei8_v_f64m1x3 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei8_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei8_v_f64m1x4 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei8_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei8_v_f64m1x5 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei8_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei8_v_f64m1x6 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei8_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei8_v_f64m1x7 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei8_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei8_v_f64m1x8 (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei8_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei8_v_f16mf2x2 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei8_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei8_v_f16mf2x3 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei8_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei8_v_f16mf2x4 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei8_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei8_v_f16mf2x5 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei8_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei8_v_f16mf2x6 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei8_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei8_v_f16mf2x7 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei8_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei8_v_f16mf2x8 (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei8_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei8_v_f32m1x2 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei8_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei8_v_f32m1x3 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei8_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei8_v_f32m1x4 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei8_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei8_v_f32m1x5 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei8_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei8_v_f32m1x6 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei8_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei8_v_f32m1x7 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei8_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei8_v_f32m1x8 (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei8_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei8_v_f64m2x2 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei8_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei8_v_f64m2x3 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei8_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei8_v_f64m2x4 (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei8_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei8_v_f16m1x2 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei8_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei8_v_f16m1x3 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei8_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei8_v_f16m1x4 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei8_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei8_v_f16m1x5 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei8_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei8_v_f16m1x6 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei8_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei8_v_f16m1x7 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei8_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei8_v_f16m1x8 (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei8_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei8_v_f32m2x2 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei8_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei8_v_f32m2x3 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei8_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei8_v_f32m2x4 (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei8_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei8_v_f64m4x2 (float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei8_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei8_v_f16m2x2 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei8_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei8_v_f16m2x3 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei8_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei8_v_f16m2x4 (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei8_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei8_v_f32m4x2 (float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei8_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei8_v_f16m4x2 (float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei8_v_f16m4x2_m (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei16_v_f16mf4x2 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei16_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei16_v_f16mf4x3 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei16_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei16_v_f16mf4x4 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei16_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei16_v_f16mf4x5 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei16_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei16_v_f16mf4x6 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei16_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei16_v_f16mf4x7 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei16_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei16_v_f16mf4x8 (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei16_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei16_v_f32mf2x2 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei16_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei16_v_f32mf2x3 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei16_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei16_v_f32mf2x4 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei16_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei16_v_f32mf2x5 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei16_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei16_v_f32mf2x6 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei16_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei16_v_f32mf2x7 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei16_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei16_v_f32mf2x8 (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei16_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei16_v_f64m1x2 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei16_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei16_v_f64m1x3 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei16_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei16_v_f64m1x4 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei16_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei16_v_f64m1x5 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei16_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei16_v_f64m1x6 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei16_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei16_v_f64m1x7 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei16_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei16_v_f64m1x8 (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei16_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei16_v_f16mf2x2 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei16_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei16_v_f16mf2x3 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei16_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei16_v_f16mf2x4 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei16_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei16_v_f16mf2x5 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei16_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei16_v_f16mf2x6 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei16_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei16_v_f16mf2x7 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei16_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei16_v_f16mf2x8 (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei16_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei16_v_f32m1x2 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei16_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei16_v_f32m1x3 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei16_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei16_v_f32m1x4 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei16_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei16_v_f32m1x5 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei16_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei16_v_f32m1x6 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei16_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei16_v_f32m1x7 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei16_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei16_v_f32m1x8 (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei16_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei16_v_f64m2x2 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei16_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei16_v_f64m2x3 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei16_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei16_v_f64m2x4 (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei16_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei16_v_f16m1x2 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei16_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei16_v_f16m1x3 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei16_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei16_v_f16m1x4 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei16_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei16_v_f16m1x5 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei16_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei16_v_f16m1x6 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei16_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei16_v_f16m1x7 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei16_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei16_v_f16m1x8 (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei16_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei16_v_f32m2x2 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei16_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei16_v_f32m2x3 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei16_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei16_v_f32m2x4 (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei16_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei16_v_f64m4x2 (float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei16_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei16_v_f16m2x2 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei16_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei16_v_f16m2x3 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei16_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei16_v_f16m2x4 (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei16_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei16_v_f32m4x2 (float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei16_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei16_v_f16m4x2 (float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei16_v_f16m4x2_m (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei32_v_f16mf4x2 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei32_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei32_v_f16mf4x3 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei32_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei32_v_f16mf4x4 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei32_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei32_v_f16mf4x5 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei32_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei32_v_f16mf4x6 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei32_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei32_v_f16mf4x7 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei32_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei32_v_f16mf4x8 (float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei32_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei32_v_f32mf2x2 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei32_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei32_v_f32mf2x3 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei32_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei32_v_f32mf2x4 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei32_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei32_v_f32mf2x5 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei32_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei32_v_f32mf2x6 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei32_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei32_v_f32mf2x7 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei32_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei32_v_f32mf2x8 (float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei32_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei32_v_f64m1x2 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei32_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei32_v_f64m1x3 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei32_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei32_v_f64m1x4 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei32_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei32_v_f64m1x5 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei32_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg5ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei32_v_f64m1x6 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei32_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg6ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei32_v_f64m1x7 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei32_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg7ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei32_v_f64m1x8 (float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei32_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxseg8ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei32_v_f16mf2x2 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei32_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei32_v_f16mf2x3 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei32_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei32_v_f16mf2x4 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei32_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei32_v_f16mf2x5 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei32_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei32_v_f16mf2x6 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei32_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei32_v_f16mf2x7 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei32_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei32_v_f16mf2x8 (float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei32_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei32_v_f32m1x2 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei32_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei32_v_f32m1x3 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei32_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei32_v_f32m1x4 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei32_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei32_v_f32m1x5 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei32_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg5ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei32_v_f32m1x6 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei32_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg6ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei32_v_f32m1x7 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei32_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg7ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei32_v_f32m1x8 (float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei32_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg8ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei32_v_f64m2x2 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei32_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei32_v_f64m2x3 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei32_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei32_v_f64m2x4 (float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei32_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei32_v_f16m1x2 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei32_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei32_v_f16m1x3 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei32_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei32_v_f16m1x4 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei32_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei32_v_f16m1x5 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32 (base, bindex, vl);
}


/*
** test_vloxseg5ei32_v_f16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei32_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg5ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei32_v_f16m1x6 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32 (base, bindex, vl);
}


/*
** test_vloxseg6ei32_v_f16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei32_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg6ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei32_v_f16m1x7 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32 (base, bindex, vl);
}


/*
** test_vloxseg7ei32_v_f16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei32_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg7ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei32_v_f16m1x8 (float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32 (base, bindex, vl);
}


/*
** test_vloxseg8ei32_v_f16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei32_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg8ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei32_v_f32m2x2 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei32_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei32_v_f32m2x3 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei32_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei32_v_f32m2x4 (float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei32_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei32_v_f64m4x2 (float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei32_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei32_v_f16m2x2 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei32_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei32_v_f16m2x3 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32 (base, bindex, vl);
}


/*
** test_vloxseg3ei32_v_f16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei32_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg3ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei32_v_f16m2x4 (float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32 (base, bindex, vl);
}


/*
** test_vloxseg4ei32_v_f16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei32_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg4ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei32_v_f32m4x2 (float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei32_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei32_v_f16m4x2 (float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32 (base, bindex, vl);
}


/*
** test_vloxseg2ei32_v_f16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei32_v_f16m4x2_m (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxseg2ei32 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei64_v_f16mf4x2 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei64_v_f16mf4x2_m (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei64_v_f16mf4x3 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei64_v_f16mf4x3_m (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei64_v_f16mf4x4 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei64_v_f16mf4x4_m (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei64_v_f16mf4x5 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei64_v_f16mf4x5_m (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei64_v_f16mf4x6 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei64_v_f16mf4x6_m (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei64_v_f16mf4x7 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei64_v_f16mf4x7_m (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei64_v_f16mf4x8 (float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei64_v_f16mf4x8_m (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei64_v_f32mf2x2 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei64_v_f32mf2x2_m (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei64_v_f32mf2x3 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei64_v_f32mf2x3_m (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei64_v_f32mf2x4 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei64_v_f32mf2x4_m (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei64_v_f32mf2x5 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei64_v_f32mf2x5_m (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei64_v_f32mf2x6 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei64_v_f32mf2x6_m (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei64_v_f32mf2x7 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei64_v_f32mf2x7_m (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei64_v_f32mf2x8 (float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei64_v_f32mf2x8_m (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei64_v_f64m1x2 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei64_v_f64m1x2_m (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei64_v_f64m1x3 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei64_v_f64m1x3_m (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei64_v_f64m1x4 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei64_v_f64m1x4_m (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei64_v_f64m1x5 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei64_v_f64m1x5_m (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg5ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei64_v_f64m1x6 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei64_v_f64m1x6_m (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg6ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei64_v_f64m1x7 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei64_v_f64m1x7_m (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg7ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei64_v_f64m1x8 (float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei64_v_f64m1x8_m (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxseg8ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei64_v_f16mf2x2 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei64_v_f16mf2x2_m (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei64_v_f16mf2x3 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei64_v_f16mf2x3_m (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei64_v_f16mf2x4 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei64_v_f16mf2x4_m (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei64_v_f16mf2x5 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei64_v_f16mf2x5_m (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei64_v_f16mf2x6 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei64_v_f16mf2x6_m (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei64_v_f16mf2x7 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei64_v_f16mf2x7_m (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei64_v_f16mf2x8 (float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei64_v_f16mf2x8_m (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei64_v_f32m1x2 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei64_v_f32m1x2_m (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei64_v_f32m1x3 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei64_v_f32m1x3_m (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei64_v_f32m1x4 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei64_v_f32m1x4_m (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei64_v_f32m1x5 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei64_v_f32m1x5_m (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg5ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei64_v_f32m1x6 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei64_v_f32m1x6_m (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg6ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei64_v_f32m1x7 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei64_v_f32m1x7_m (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg7ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei64_v_f32m1x8 (float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei64_v_f32m1x8_m (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg8ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei64_v_f64m2x2 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei64_v_f64m2x2_m (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei64_v_f64m2x3 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei64_v_f64m2x3_m (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei64_v_f64m2x4 (float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei64_v_f64m2x4_m (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei64_v_f16m1x2 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei64_v_f16m1x2_m (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei64_v_f16m1x3 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei64_v_f16m1x3_m (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei64_v_f16m1x4 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei64_v_f16m1x4_m (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei64_v_f16m1x5 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64 (base, bindex, vl);
}


/*
** test_vloxseg5ei64_v_f16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei64_v_f16m1x5_m (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg5ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei64_v_f16m1x6 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64 (base, bindex, vl);
}


/*
** test_vloxseg6ei64_v_f16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei64_v_f16m1x6_m (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg6ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei64_v_f16m1x7 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64 (base, bindex, vl);
}


/*
** test_vloxseg7ei64_v_f16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei64_v_f16m1x7_m (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg7ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei64_v_f16m1x8 (float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64 (base, bindex, vl);
}


/*
** test_vloxseg8ei64_v_f16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei64_v_f16m1x8_m (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg8ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei64_v_f32m2x2 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei64_v_f32m2x2_m (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei64_v_f32m2x3 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei64_v_f32m2x3_m (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei64_v_f32m2x4 (float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei64_v_f32m2x4_m (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei64_v_f64m4x2 (float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei64_v_f64m4x2_m (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei64_v_f16m2x2 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei64_v_f16m2x2_m (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei64_v_f16m2x3 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64 (base, bindex, vl);
}


/*
** test_vloxseg3ei64_v_f16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei64_v_f16m2x3_m (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg3ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei64_v_f16m2x4 (float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64 (base, bindex, vl);
}


/*
** test_vloxseg4ei64_v_f16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei64_v_f16m2x4_m (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg4ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei64_v_f32m4x2 (float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (base, bindex, vl);
}


/*
** test_vloxseg2ei64_v_f32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei64_v_f32m4x2_m (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxseg2ei64 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x2_t
test_vloxseg2ei8_v_i8mf8x2 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x2_t
test_vloxseg2ei8_v_i8mf8x2_m (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x3_t
test_vloxseg3ei8_v_i8mf8x3 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x3_t
test_vloxseg3ei8_v_i8mf8x3_m (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x4_t
test_vloxseg4ei8_v_i8mf8x4 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x4_t
test_vloxseg4ei8_v_i8mf8x4_m (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x5_t
test_vloxseg5ei8_v_i8mf8x5 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x5_t
test_vloxseg5ei8_v_i8mf8x5_m (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x6_t
test_vloxseg6ei8_v_i8mf8x6 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x6_t
test_vloxseg6ei8_v_i8mf8x6_m (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x7_t
test_vloxseg7ei8_v_i8mf8x7 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x7_t
test_vloxseg7ei8_v_i8mf8x7_m (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x8_t
test_vloxseg8ei8_v_i8mf8x8 (int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x8_t
test_vloxseg8ei8_v_i8mf8x8_m (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x2_t
test_vloxseg2ei8_v_i16mf4x2 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x2_t
test_vloxseg2ei8_v_i16mf4x2_m (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x3_t
test_vloxseg3ei8_v_i16mf4x3 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x3_t
test_vloxseg3ei8_v_i16mf4x3_m (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x4_t
test_vloxseg4ei8_v_i16mf4x4 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x4_t
test_vloxseg4ei8_v_i16mf4x4_m (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x5_t
test_vloxseg5ei8_v_i16mf4x5 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x5_t
test_vloxseg5ei8_v_i16mf4x5_m (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x6_t
test_vloxseg6ei8_v_i16mf4x6 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x6_t
test_vloxseg6ei8_v_i16mf4x6_m (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x7_t
test_vloxseg7ei8_v_i16mf4x7 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x7_t
test_vloxseg7ei8_v_i16mf4x7_m (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x8_t
test_vloxseg8ei8_v_i16mf4x8 (int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x8_t
test_vloxseg8ei8_v_i16mf4x8_m (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vloxseg2ei8_v_i32mf2x2 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vloxseg2ei8_v_i32mf2x2_m (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vloxseg3ei8_v_i32mf2x3 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vloxseg3ei8_v_i32mf2x3_m (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vloxseg4ei8_v_i32mf2x4 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vloxseg4ei8_v_i32mf2x4_m (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vloxseg5ei8_v_i32mf2x5 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vloxseg5ei8_v_i32mf2x5_m (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vloxseg6ei8_v_i32mf2x6 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vloxseg6ei8_v_i32mf2x6_m (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vloxseg7ei8_v_i32mf2x7 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vloxseg7ei8_v_i32mf2x7_m (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vloxseg8ei8_v_i32mf2x8 (int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vloxseg8ei8_v_i32mf2x8_m (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vloxseg2ei8_v_i64m1x2 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vloxseg2ei8_v_i64m1x2_m (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vloxseg3ei8_v_i64m1x3 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vloxseg3ei8_v_i64m1x3_m (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vloxseg4ei8_v_i64m1x4 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vloxseg4ei8_v_i64m1x4_m (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vloxseg5ei8_v_i64m1x5 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vloxseg5ei8_v_i64m1x5_m (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vloxseg6ei8_v_i64m1x6 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vloxseg6ei8_v_i64m1x6_m (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vloxseg7ei8_v_i64m1x7 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vloxseg7ei8_v_i64m1x7_m (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vloxseg8ei8_v_i64m1x8 (int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vloxseg8ei8_v_i64m1x8_m (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x2_t
test_vloxseg2ei8_v_i8mf4x2 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x2_t
test_vloxseg2ei8_v_i8mf4x2_m (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x3_t
test_vloxseg3ei8_v_i8mf4x3 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x3_t
test_vloxseg3ei8_v_i8mf4x3_m (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x4_t
test_vloxseg4ei8_v_i8mf4x4 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x4_t
test_vloxseg4ei8_v_i8mf4x4_m (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x5_t
test_vloxseg5ei8_v_i8mf4x5 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x5_t
test_vloxseg5ei8_v_i8mf4x5_m (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x6_t
test_vloxseg6ei8_v_i8mf4x6 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x6_t
test_vloxseg6ei8_v_i8mf4x6_m (vbool32_t mask, vint8mf4x6_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x7_t
test_vloxseg7ei8_v_i8mf4x7 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x7_t
test_vloxseg7ei8_v_i8mf4x7_m (vbool32_t mask, vint8mf4x7_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x8_t
test_vloxseg8ei8_v_i8mf4x8 (int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x8_t
test_vloxseg8ei8_v_i8mf4x8_m (vbool32_t mask, vint8mf4x8_t dest, int8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x2_t
test_vloxseg2ei8_v_i16mf2x2 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x2_t
test_vloxseg2ei8_v_i16mf2x2_m (vbool32_t mask, vint16mf2x2_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x3_t
test_vloxseg3ei8_v_i16mf2x3 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x3_t
test_vloxseg3ei8_v_i16mf2x3_m (vbool32_t mask, vint16mf2x3_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x4_t
test_vloxseg4ei8_v_i16mf2x4 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x4_t
test_vloxseg4ei8_v_i16mf2x4_m (vbool32_t mask, vint16mf2x4_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x5_t
test_vloxseg5ei8_v_i16mf2x5 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x5_t
test_vloxseg5ei8_v_i16mf2x5_m (vbool32_t mask, vint16mf2x5_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x6_t
test_vloxseg6ei8_v_i16mf2x6 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x6_t
test_vloxseg6ei8_v_i16mf2x6_m (vbool32_t mask, vint16mf2x6_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x7_t
test_vloxseg7ei8_v_i16mf2x7 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x7_t
test_vloxseg7ei8_v_i16mf2x7_m (vbool32_t mask, vint16mf2x7_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf2x8_t
test_vloxseg8ei8_v_i16mf2x8 (int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2x8_t
test_vloxseg8ei8_v_i16mf2x8_m (vbool32_t mask, vint16mf2x8_t dest, int16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x2_t
test_vloxseg2ei8_v_i32m1x2 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x2_t
test_vloxseg2ei8_v_i32m1x2_m (vbool32_t mask, vint32m1x2_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x3_t
test_vloxseg3ei8_v_i32m1x3 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x3_t
test_vloxseg3ei8_v_i32m1x3_m (vbool32_t mask, vint32m1x3_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x4_t
test_vloxseg4ei8_v_i32m1x4 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x4_t
test_vloxseg4ei8_v_i32m1x4_m (vbool32_t mask, vint32m1x4_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x5_t
test_vloxseg5ei8_v_i32m1x5 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x5_t
test_vloxseg5ei8_v_i32m1x5_m (vbool32_t mask, vint32m1x5_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x6_t
test_vloxseg6ei8_v_i32m1x6 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x6_t
test_vloxseg6ei8_v_i32m1x6_m (vbool32_t mask, vint32m1x6_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x7_t
test_vloxseg7ei8_v_i32m1x7 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x7_t
test_vloxseg7ei8_v_i32m1x7_m (vbool32_t mask, vint32m1x7_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1x8_t
test_vloxseg8ei8_v_i32m1x8 (int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1x8_t
test_vloxseg8ei8_v_i32m1x8_m (vbool32_t mask, vint32m1x8_t dest, int32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m2x2_t
test_vloxseg2ei8_v_i64m2x2 (int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x2_t
test_vloxseg2ei8_v_i64m2x2_m (vbool32_t mask, vint64m2x2_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m2x3_t
test_vloxseg3ei8_v_i64m2x3 (int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x3_t
test_vloxseg3ei8_v_i64m2x3_m (vbool32_t mask, vint64m2x3_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m2x4_t
test_vloxseg4ei8_v_i64m2x4 (int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2x4_t
test_vloxseg4ei8_v_i64m2x4_m (vbool32_t mask, vint64m2x4_t dest, int64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x2_t
test_vloxseg2ei8_v_i8mf2x2 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x2_t
test_vloxseg2ei8_v_i8mf2x2_m (vbool16_t mask, vint8mf2x2_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x3_t
test_vloxseg3ei8_v_i8mf2x3 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x3_t
test_vloxseg3ei8_v_i8mf2x3_m (vbool16_t mask, vint8mf2x3_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x4_t
test_vloxseg4ei8_v_i8mf2x4 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x4_t
test_vloxseg4ei8_v_i8mf2x4_m (vbool16_t mask, vint8mf2x4_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x5_t
test_vloxseg5ei8_v_i8mf2x5 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x5_t
test_vloxseg5ei8_v_i8mf2x5_m (vbool16_t mask, vint8mf2x5_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x6_t
test_vloxseg6ei8_v_i8mf2x6 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x6_t
test_vloxseg6ei8_v_i8mf2x6_m (vbool16_t mask, vint8mf2x6_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x7_t
test_vloxseg7ei8_v_i8mf2x7 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x7_t
test_vloxseg7ei8_v_i8mf2x7_m (vbool16_t mask, vint8mf2x7_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf2x8_t
test_vloxseg8ei8_v_i8mf2x8 (int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2x8_t
test_vloxseg8ei8_v_i8mf2x8_m (vbool16_t mask, vint8mf2x8_t dest, int8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x2_t
test_vloxseg2ei8_v_i16m1x2 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x2_t
test_vloxseg2ei8_v_i16m1x2_m (vbool16_t mask, vint16m1x2_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x3_t
test_vloxseg3ei8_v_i16m1x3 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x3_t
test_vloxseg3ei8_v_i16m1x3_m (vbool16_t mask, vint16m1x3_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x4_t
test_vloxseg4ei8_v_i16m1x4 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x4_t
test_vloxseg4ei8_v_i16m1x4_m (vbool16_t mask, vint16m1x4_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x5_t
test_vloxseg5ei8_v_i16m1x5 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x5_t
test_vloxseg5ei8_v_i16m1x5_m (vbool16_t mask, vint16m1x5_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x6_t
test_vloxseg6ei8_v_i16m1x6 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x6_t
test_vloxseg6ei8_v_i16m1x6_m (vbool16_t mask, vint16m1x6_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x7_t
test_vloxseg7ei8_v_i16m1x7 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x7_t
test_vloxseg7ei8_v_i16m1x7_m (vbool16_t mask, vint16m1x7_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1x8_t
test_vloxseg8ei8_v_i16m1x8 (int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1x8_t
test_vloxseg8ei8_v_i16m1x8_m (vbool16_t mask, vint16m1x8_t dest, int16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m2x2_t
test_vloxseg2ei8_v_i32m2x2 (int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x2_t
test_vloxseg2ei8_v_i32m2x2_m (vbool16_t mask, vint32m2x2_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m2x3_t
test_vloxseg3ei8_v_i32m2x3 (int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x3_t
test_vloxseg3ei8_v_i32m2x3_m (vbool16_t mask, vint32m2x3_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m2x4_t
test_vloxseg4ei8_v_i32m2x4 (int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2x4_t
test_vloxseg4ei8_v_i32m2x4_m (vbool16_t mask, vint32m2x4_t dest, int32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m4x2_t
test_vloxseg2ei8_v_i64m4x2 (int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4x2_t
test_vloxseg2ei8_v_i64m4x2_m (vbool16_t mask, vint64m4x2_t dest, int64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x2_t
test_vloxseg2ei8_v_i8m1x2 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x2_t
test_vloxseg2ei8_v_i8m1x2_m (vbool8_t mask, vint8m1x2_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x3_t
test_vloxseg3ei8_v_i8m1x3 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x3_t
test_vloxseg3ei8_v_i8m1x3_m (vbool8_t mask, vint8m1x3_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x4_t
test_vloxseg4ei8_v_i8m1x4 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x4_t
test_vloxseg4ei8_v_i8m1x4_m (vbool8_t mask, vint8m1x4_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x5_t
test_vloxseg5ei8_v_i8m1x5 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_i8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x5_t
test_vloxseg5ei8_v_i8m1x5_m (vbool8_t mask, vint8m1x5_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg5ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x6_t
test_vloxseg6ei8_v_i8m1x6 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_i8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x6_t
test_vloxseg6ei8_v_i8m1x6_m (vbool8_t mask, vint8m1x6_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg6ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x7_t
test_vloxseg7ei8_v_i8m1x7 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_i8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x7_t
test_vloxseg7ei8_v_i8m1x7_m (vbool8_t mask, vint8m1x7_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg7ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1x8_t
test_vloxseg8ei8_v_i8m1x8 (int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_i8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1x8_t
test_vloxseg8ei8_v_i8m1x8_m (vbool8_t mask, vint8m1x8_t dest, int8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg8ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m2x2_t
test_vloxseg2ei8_v_i16m2x2 (int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x2_t
test_vloxseg2ei8_v_i16m2x2_m (vbool8_t mask, vint16m2x2_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m2x3_t
test_vloxseg3ei8_v_i16m2x3 (int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x3_t
test_vloxseg3ei8_v_i16m2x3_m (vbool8_t mask, vint16m2x3_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m2x4_t
test_vloxseg4ei8_v_i16m2x4 (int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2x4_t
test_vloxseg4ei8_v_i16m2x4_m (vbool8_t mask, vint16m2x4_t dest, int16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m4x2_t
test_vloxseg2ei8_v_i32m4x2 (int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4x2_t
test_vloxseg2ei8_v_i32m4x2_m (vbool8_t mask, vint32m4x2_t dest, int32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vint8m2x2_t
test_vloxseg2ei8_v_i8m2x2 (int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2x2_t
test_vloxseg2ei8_v_i8m2x2_m (vbool4_t mask, vint8m2x2_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vint8m2x3_t
test_vloxseg3ei8_v_i8m2x3 (int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_i8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2x3_t
test_vloxseg3ei8_v_i8m2x3_m (vbool4_t mask, vint8m2x3_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg3ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vint8m2x4_t
test_vloxseg4ei8_v_i8m2x4 (int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_i8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2x4_t
test_vloxseg4ei8_v_i8m2x4_m (vbool4_t mask, vint8m2x4_t dest, int8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg4ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vint16m4x2_t
test_vloxseg2ei8_v_i16m4x2 (int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4x2_t
test_vloxseg2ei8_v_i16m4x2_m (vbool4_t mask, vint16m4x2_t dest, int16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vint8m4x2_t
test_vloxseg2ei8_v_i8m4x2 (int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_i8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m4x2_t
test_vloxseg2ei8_v_i8m4x2_m (vbool2_t mask, vint8m4x2_t dest, int8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxseg2ei8 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x2_t
test_vloxseg2ei16_v_i8mf8x2 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x2_t
test_vloxseg2ei16_v_i8mf8x2_m (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x3_t
test_vloxseg3ei16_v_i8mf8x3 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x3_t
test_vloxseg3ei16_v_i8mf8x3_m (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x4_t
test_vloxseg4ei16_v_i8mf8x4 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x4_t
test_vloxseg4ei16_v_i8mf8x4_m (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x5_t
test_vloxseg5ei16_v_i8mf8x5 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x5_t
test_vloxseg5ei16_v_i8mf8x5_m (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x6_t
test_vloxseg6ei16_v_i8mf8x6 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x6_t
test_vloxseg6ei16_v_i8mf8x6_m (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x7_t
test_vloxseg7ei16_v_i8mf8x7 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x7_t
test_vloxseg7ei16_v_i8mf8x7_m (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf8x8_t
test_vloxseg8ei16_v_i8mf8x8 (int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8x8_t
test_vloxseg8ei16_v_i8mf8x8_m (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x2_t
test_vloxseg2ei16_v_i16mf4x2 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x2_t
test_vloxseg2ei16_v_i16mf4x2_m (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x3_t
test_vloxseg3ei16_v_i16mf4x3 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x3_t
test_vloxseg3ei16_v_i16mf4x3_m (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x4_t
test_vloxseg4ei16_v_i16mf4x4 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x4_t
test_vloxseg4ei16_v_i16mf4x4_m (vbool64_t mask, vint16mf4x4_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x5_t
test_vloxseg5ei16_v_i16mf4x5 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x5_t
test_vloxseg5ei16_v_i16mf4x5_m (vbool64_t mask, vint16mf4x5_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x6_t
test_vloxseg6ei16_v_i16mf4x6 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x6_t
test_vloxseg6ei16_v_i16mf4x6_m (vbool64_t mask, vint16mf4x6_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x7_t
test_vloxseg7ei16_v_i16mf4x7 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x7_t
test_vloxseg7ei16_v_i16mf4x7_m (vbool64_t mask, vint16mf4x7_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16mf4x8_t
test_vloxseg8ei16_v_i16mf4x8 (int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4x8_t
test_vloxseg8ei16_v_i16mf4x8_m (vbool64_t mask, vint16mf4x8_t dest, int16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vloxseg2ei16_v_i32mf2x2 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vloxseg2ei16_v_i32mf2x2_m (vbool64_t mask, vint32mf2x2_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vloxseg3ei16_v_i32mf2x3 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vloxseg3ei16_v_i32mf2x3_m (vbool64_t mask, vint32mf2x3_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vloxseg4ei16_v_i32mf2x4 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vloxseg4ei16_v_i32mf2x4_m (vbool64_t mask, vint32mf2x4_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vloxseg5ei16_v_i32mf2x5 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vloxseg5ei16_v_i32mf2x5_m (vbool64_t mask, vint32mf2x5_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vloxseg6ei16_v_i32mf2x6 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vloxseg6ei16_v_i32mf2x6_m (vbool64_t mask, vint32mf2x6_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vloxseg7ei16_v_i32mf2x7 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vloxseg7ei16_v_i32mf2x7_m (vbool64_t mask, vint32mf2x7_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vloxseg8ei16_v_i32mf2x8 (int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vloxseg8ei16_v_i32mf2x8_m (vbool64_t mask, vint32mf2x8_t dest, int32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vloxseg2ei16_v_i64m1x2 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vloxseg2ei16_v_i64m1x2_m (vbool64_t mask, vint64m1x2_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vloxseg3ei16_v_i64m1x3 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vloxseg3ei16_v_i64m1x3_m (vbool64_t mask, vint64m1x3_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vloxseg4ei16_v_i64m1x4 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vloxseg4ei16_v_i64m1x4_m (vbool64_t mask, vint64m1x4_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vloxseg5ei16_v_i64m1x5 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vloxseg5ei16_v_i64m1x5_m (vbool64_t mask, vint64m1x5_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vloxseg6ei16_v_i64m1x6 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vloxseg6ei16_v_i64m1x6_m (vbool64_t mask, vint64m1x6_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vloxseg7ei16_v_i64m1x7 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_i64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vloxseg7ei16_v_i64m1x7_m (vbool64_t mask, vint64m1x7_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vloxseg8ei16_v_i64m1x8 (int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_i64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vloxseg8ei16_v_i64m1x8_m (vbool64_t mask, vint64m1x8_t dest, int64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x2_t
test_vloxseg2ei16_v_i8mf4x2 (int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_i8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x2_t
test_vloxseg2ei16_v_i8mf4x2_m (vbool32_t mask, vint8mf4x2_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x3_t
test_vloxseg3ei16_v_i8mf4x3 (int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_i8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x3_t
test_vloxseg3ei16_v_i8mf4x3_m (vbool32_t mask, vint8mf4x3_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x4_t
test_vloxseg4ei16_v_i8mf4x4 (int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_i8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x4_t
test_vloxseg4ei16_v_i8mf4x4_m (vbool32_t mask, vint8mf4x4_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x5_t
test_vloxseg5ei16_v_i8mf4x5 (int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_i8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4x5_t
test_vloxseg5ei16_v_i8mf4x5_m (vbool32_t mask, vint8mf4x5_t dest, int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (mask, dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_i8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8mf4x6_t
test_vloxseg6ei16_v_i8mf4x6 (int8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


