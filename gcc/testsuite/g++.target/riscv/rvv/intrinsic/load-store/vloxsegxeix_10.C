/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vloxseg2ei8_v_f16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei8_v_f16mf4x2_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei8_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei8_v_f16mf4x3_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei8_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei8_v_f16mf4x4_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei8_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei8_v_f16mf4x5_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei8_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei8_v_f16mf4x6_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei8_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei8_v_f16mf4x7_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei8_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei8_v_f16mf4x8_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei8_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei8_v_f32mf2x2_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei8_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei8_v_f32mf2x3_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei8_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei8_v_f32mf2x4_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei8_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei8_v_f32mf2x5_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei8_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei8_v_f32mf2x6_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei8_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei8_v_f32mf2x7_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei8_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei8_v_f32mf2x8_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei8_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei8_v_f64m1x2_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei8_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei8_v_f64m1x3_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei8_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei8_v_f64m1x4_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei8_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei8_v_f64m1x5_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei8_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei8_v_f64m1x6_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei8_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei8_v_f64m1x7_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei8_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei8_v_f64m1x8_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei8_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei8_v_f16mf2x2_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei8_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei8_v_f16mf2x3_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei8_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei8_v_f16mf2x4_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei8_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei8_v_f16mf2x5_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei8_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei8_v_f16mf2x6_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei8_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei8_v_f16mf2x7_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei8_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei8_v_f16mf2x8_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei8_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei8_v_f32m1x2_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei8_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei8_v_f32m1x3_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei8_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei8_v_f32m1x4_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei8_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei8_v_f32m1x5_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei8_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei8_v_f32m1x6_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei8_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei8_v_f32m1x7_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei8_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei8_v_f32m1x8_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei8_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei8_v_f64m2x2_ta (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei8_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei8_v_f64m2x3_ta (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei8_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei8_v_f64m2x4_ta (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei8_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei8_v_f16m1x2_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei8_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei8_v_f16m1x3_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei8_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei8_v_f16m1x4_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei8_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei8_v_f16m1x5_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8 (base, bindex, vl);
}


/*
** test_vloxseg5ei8_v_f16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei8_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei8_v_f16m1x6_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8 (base, bindex, vl);
}


/*
** test_vloxseg6ei8_v_f16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei8_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei8_v_f16m1x7_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8 (base, bindex, vl);
}


/*
** test_vloxseg7ei8_v_f16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei8_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei8_v_f16m1x8_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8 (base, bindex, vl);
}


/*
** test_vloxseg8ei8_v_f16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei8_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei8_v_f32m2x2_ta (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei8_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei8_v_f32m2x3_ta (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei8_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei8_v_f32m2x4_ta (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei8_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei8_v_f64m4x2_ta (float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei8_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei8_v_f16m2x2_ta (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei8_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei8_v_f16m2x3_ta (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8 (base, bindex, vl);
}


/*
** test_vloxseg3ei8_v_f16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei8_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei8_v_f16m2x4_ta (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8 (base, bindex, vl);
}


/*
** test_vloxseg4ei8_v_f16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei8_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei8_v_f32m4x2_ta (float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei8_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei8_v_f16m4x2_ta (float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8 (base, bindex, vl);
}


/*
** test_vloxseg2ei8_v_f16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei8_v_f16m4x2_tu (vfloat16m4x2_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei16_v_f16mf4x2_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vloxseg2ei16_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei16_v_f16mf4x3_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vloxseg3ei16_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei16_v_f16mf4x4_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vloxseg4ei16_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei16_v_f16mf4x5_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vloxseg5ei16_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei16_v_f16mf4x6_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vloxseg6ei16_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei16_v_f16mf4x7_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vloxseg7ei16_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei16_v_f16mf4x8_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vloxseg8ei16_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei16_v_f32mf2x2_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vloxseg2ei16_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei16_v_f32mf2x3_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vloxseg3ei16_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei16_v_f32mf2x4_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vloxseg4ei16_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei16_v_f32mf2x5_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vloxseg5ei16_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei16_v_f32mf2x6_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vloxseg6ei16_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei16_v_f32mf2x7_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vloxseg7ei16_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei16_v_f32mf2x8_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vloxseg8ei16_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei16_v_f64m1x2_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vloxseg2ei16_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei16_v_f64m1x3_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vloxseg3ei16_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei16_v_f64m1x4_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vloxseg4ei16_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei16_v_f64m1x5_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vloxseg5ei16_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei16_v_f64m1x6_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vloxseg6ei16_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei16_v_f64m1x7_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vloxseg7ei16_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei16_v_f64m1x8_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vloxseg8ei16_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei16_v_f16mf2x2_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vloxseg2ei16_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei16_v_f16mf2x3_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vloxseg3ei16_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei16_v_f16mf2x4_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vloxseg4ei16_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei16_v_f16mf2x5_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vloxseg5ei16_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei16_v_f16mf2x6_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vloxseg6ei16_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei16_v_f16mf2x7_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vloxseg7ei16_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei16_v_f16mf2x8_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vloxseg8ei16_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei16_v_f32m1x2_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vloxseg2ei16_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei16_v_f32m1x3_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vloxseg3ei16_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei16_v_f32m1x4_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vloxseg4ei16_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei16_v_f32m1x5_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vloxseg5ei16_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg5ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei16_v_f32m1x6_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vloxseg6ei16_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg6ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei16_v_f32m1x7_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vloxseg7ei16_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg7ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei16_v_f32m1x8_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vloxseg8ei16_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg8ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei16_v_f64m2x2_ta (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vloxseg2ei16_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei16_v_f64m2x3_ta (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vloxseg3ei16_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei16_v_f64m2x4_ta (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vloxseg4ei16_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei16_v_f16m1x2_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vloxseg2ei16_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei16_v_f16m1x3_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vloxseg3ei16_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei16_v_f16m1x4_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vloxseg4ei16_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei16_v_f16m1x5_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16 (base, bindex, vl);
}


/*
** test_vloxseg5ei16_v_f16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vloxseg5ei16_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg5ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei16_v_f16m1x6_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16 (base, bindex, vl);
}


/*
** test_vloxseg6ei16_v_f16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vloxseg6ei16_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg6ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei16_v_f16m1x7_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16 (base, bindex, vl);
}


/*
** test_vloxseg7ei16_v_f16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vloxseg7ei16_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg7ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei16_v_f16m1x8_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16 (base, bindex, vl);
}


/*
** test_vloxseg8ei16_v_f16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vloxseg8ei16_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg8ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei16_v_f32m2x2_ta (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vloxseg2ei16_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei16_v_f32m2x3_ta (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vloxseg3ei16_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei16_v_f32m2x4_ta (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vloxseg4ei16_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei16_v_f64m4x2_ta (float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vloxseg2ei16_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei16_v_f16m2x2_ta (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vloxseg2ei16_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei16_v_f16m2x3_ta (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16 (base, bindex, vl);
}


/*
** test_vloxseg3ei16_v_f16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vloxseg3ei16_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg3ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei16_v_f16m2x4_ta (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16 (base, bindex, vl);
}


/*
** test_vloxseg4ei16_v_f16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vloxseg4ei16_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg4ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei16_v_f32m4x2_ta (float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vloxseg2ei16_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxseg2ei16_tu (dest, base, bindex, vl);
}


/*
** test_vloxseg2ei16_v_f16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vloxseg2ei16_v_f16m4x2_ta (float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxseg2ei16 (base, bindex, vl);
}


